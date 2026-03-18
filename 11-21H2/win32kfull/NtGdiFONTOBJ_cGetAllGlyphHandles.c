/*
 * XREFs of NtGdiFONTOBJ_cGetAllGlyphHandles @ 0x1C02B2D50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0009B28 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C012AD40 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1C0143064 (-bSafeCopyBits@@YAHPEAX0K@Z.c)
 *     FONTOBJ_cGetAllGlyphHandles @ 0x1C0291110 (FONTOBJ_cGetAllGlyphHandles.c)
 */

__int64 __fastcall NtGdiFONTOBJ_cGetAllGlyphHandles(__int64 a1, char *a2)
{
  ULONG v4; // ebp
  HGLYPH *v5; // rbx
  ULONG AllGlyphHandles; // esi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v9; // rdi
  FONTOBJ *v10; // rax
  FONTOBJ *v11; // r15
  ULONG v12; // eax
  unsigned int v13; // eax

  v4 = 0;
  v5 = 0LL;
  AllGlyphHandles = 0;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v9 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 105);
    v10 = (FONTOBJ *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)ThreadCurrentObj, a1);
    v11 = v10;
    if ( !v10 )
      goto LABEL_16;
    if ( !a2 || (v12 = FONTOBJ_cGetAllGlyphHandles(v10, 0LL), (v4 = v12) == 0) )
    {
LABEL_8:
      AllGlyphHandles = FONTOBJ_cGetAllGlyphHandles(v11, v5);
      if ( AllGlyphHandles && a2 )
      {
        if ( v5 )
        {
          if ( !(unsigned int)bSafeCopyBits(a2, v5, 4 * v4) )
            AllGlyphHandles = 0;
          goto LABEL_14;
        }
      }
      else if ( v5 )
      {
LABEL_14:
        Win32FreePool(v5);
      }
LABEL_16:
      --*((_DWORD *)v9 + 105);
      return AllGlyphHandles;
    }
    if ( v12 <= 0x9C4000 )
    {
      v13 = 4 * v12;
      if ( v13 )
        v5 = (HGLYPH *)Win32AllocPool(v13, 1886221639LL);
      goto LABEL_8;
    }
  }
  if ( v9 )
    goto LABEL_16;
  return AllGlyphHandles;
}
