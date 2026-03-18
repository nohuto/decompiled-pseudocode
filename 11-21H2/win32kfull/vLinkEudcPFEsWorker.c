/*
 * XREFs of vLinkEudcPFEsWorker @ 0x1C000FE74
 * Callers:
 *     vLinkEudcPFEs @ 0x1C010E458 (vLinkEudcPFEs.c)
 * Callees:
 *     ?bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z @ 0x1C0011894 (-bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z.c)
 *     ?FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z @ 0x1C00150C4 (-FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z.c)
 */

void __fastcall vLinkEudcPFEsWorker(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v4; // esi
  __int64 v5; // rax
  wchar_t *v6; // r14
  int v7; // r15d
  struct _FLENTRY *BaseFontEntry; // rbp
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 )
  {
    v2 = a2;
    while ( 1 )
    {
      if ( (*(_DWORD *)(v2 + 52) & 8) == 0 )
      {
        v4 = 0;
        if ( *(_DWORD *)(v2 + 208) )
          break;
      }
LABEL_11:
      v2 = *(_QWORD *)(v2 + 8);
      if ( !v2 )
        return;
    }
    while ( 1 )
    {
      v10 = *(_QWORD *)(v2 + 8LL * v4 + 216);
      v11 = v10;
      if ( !v10 )
        goto LABEL_10;
      if ( a1 )
      {
        BaseFontEntry = (struct _FLENTRY *)a1;
        if ( PFEOBJ::bCheckFamilyName((PFEOBJ *)&v11, (const unsigned __int16 *)(a1 + 32), 0, 0LL) )
          goto LABEL_13;
      }
      else
      {
        v5 = *(_QWORD *)(v10 + 32);
        v6 = (wchar_t *)(v5 + *(int *)(v5 + 8));
        v7 = *(_DWORD *)(v5 + 48) & 0x8000000;
        BaseFontEntry = FindBaseFontEntry(v6);
        if ( BaseFontEntry )
          goto LABEL_13;
        if ( v7 )
        {
          v9 = -1LL;
          do
            ++v9;
          while ( v6[v9] );
          BaseFontEntry = FindBaseFontEntry(&v6[v9 + 1]);
          if ( BaseFontEntry )
          {
LABEL_13:
            *(_QWORD *)(v10 + 120) = BaseFontEntry;
            goto LABEL_10;
          }
        }
      }
      *(_QWORD *)(v10 + 120) = 0LL;
LABEL_10:
      if ( ++v4 >= *(_DWORD *)(v2 + 208) )
        goto LABEL_11;
    }
  }
}
