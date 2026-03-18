/*
 * XREFs of ?MakeITable@@YAHPEAEPEAURGBX@@H@Z @ 0x1C00DABB8
 * Callers:
 *     ?vInit256Rainbow@XEPALOBJ@@QEAAXXZ @ 0x1C00DA8E0 (-vInit256Rainbow@XEPALOBJ@@QEAAXXZ.c)
 *     ?bGenColorXlate555@XEPALOBJ@@QEAAHXZ @ 0x1C0141B40 (-bGenColorXlate555@XEPALOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?inv_cmap@@YAXHPEAURGBX@@HPEAKPEAE@Z @ 0x1C00DACDC (-inv_cmap@@YAXHPEAURGBX@@HPEAKPEAE@Z.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     ?MakeITable256@@YAHPEAE@Z @ 0x1C0299E24 (-MakeITable256@@YAHPEAE@Z.c)
 *     ?MakeITableMono@@YAHPEAE@Z @ 0x1C0299E7C (-MakeITableMono@@YAHPEAE@Z.c)
 *     ?MakeITableVGA@@YAHPEAE@Z @ 0x1C0299ED0 (-MakeITableVGA@@YAHPEAE@Z.c)
 */

__int64 __fastcall MakeITable(unsigned __int8 *a1, struct RGBX *a2, int a3)
{
  int v3; // r15d
  int v4; // edi
  unsigned __int8 *v6; // rbx
  unsigned __int8 *v7; // rbp
  unsigned int v8; // esi
  int v9; // r8d
  struct RGBX *v10; // r9
  unsigned int *v11; // rax
  int v12; // r8d
  unsigned int *v13; // r12
  __int64 v15; // r14
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0;
  v4 = a3;
  v6 = a1;
  v7 = a1;
  if ( a2 )
  {
    v16 = ghsemPalette;
    GreAcquireSemaphore(ghsemPalette);
    v8 = 1;
    if ( v4 >= 20 )
    {
      v9 = 0;
      v10 = a2;
      while ( *(_DWORD *)v10 == logDefaultPal[v9 % 0x14u + 1] )
      {
        ++v9;
        v10 = (struct RGBX *)((char *)v10 + 4);
        if ( v9 >= v4 )
        {
          if ( v9 != v4 )
            break;
          if ( gpDefITable )
          {
            memmove(v6, gpDefITable, 0x8000uLL);
            goto LABEL_11;
          }
          v7 = (unsigned __int8 *)Win32AllocPool(0x8000LL, 1886221383LL);
          v4 = 20;
          if ( !v7 )
            v7 = v6;
          break;
        }
      }
    }
    v11 = (unsigned int *)Win32AllocPool(0x20000LL, 1886221383LL);
    v13 = v11;
    if ( v11 )
    {
      inv_cmap(v4, a2, v12, v11, v7);
      Win32FreePool(v13);
      v3 = 1;
      if ( v7 != v6 )
      {
        memmove(v6, v7, 0x8000uLL);
        gpDefITable = v7;
      }
    }
    else if ( v7 != v6 )
    {
      Win32FreePool(v7);
    }
    v8 = v3;
LABEL_11:
    SEMOBJ::vUnlock((SEMOBJ *)&v16);
    return v8;
  }
  switch ( a3 )
  {
    case 2:
      return MakeITableMono(a1);
    case 16:
      return MakeITableVGA(a1);
    case 20:
      MakeITableVGA(a1);
      v8 = 1;
      v15 = 0x8000LL;
      do
      {
        if ( *v6 >= 8u )
          *v6 -= 16;
        ++v6;
        --v15;
      }
      while ( v15 );
      return v8;
    case 256:
      return MakeITable256(a1);
    default:
      return 0LL;
  }
}
