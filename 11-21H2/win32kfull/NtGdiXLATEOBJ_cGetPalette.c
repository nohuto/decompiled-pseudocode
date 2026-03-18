/*
 * XREFs of NtGdiXLATEOBJ_cGetPalette @ 0x1C02B41E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0009B28 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C012914C (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1C0143064 (-bSafeCopyBits@@YAHPEAX0K@Z.c)
 *     XLATEOBJ_cGetPalette @ 0x1C02BE240 (XLATEOBJ_cGetPalette.c)
 */

__int64 __fastcall NtGdiXLATEOBJ_cGetPalette(__int64 a1, ULONG a2, ULONG a3, char *a4)
{
  ULONG Palette; // esi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v11; // rbx
  XLATEOBJ *v12; // r12
  unsigned int v13; // ebp
  ULONG *v14; // rdi

  Palette = 0;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v11 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 105);
    v12 = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)ThreadCurrentObj, a1);
    if ( !v12 || !a4 )
      goto LABEL_13;
    if ( a3 <= 0x9C4000 )
    {
      v13 = 4 * a3;
      if ( 4 * a3 )
        v14 = (ULONG *)Win32AllocPool(v13, 1886221639LL);
      else
        v14 = 0LL;
      if ( v14 )
      {
        Palette = XLATEOBJ_cGetPalette(v12, a2, a3, v14);
        if ( Palette )
          Palette &= -((unsigned int)bSafeCopyBits(a4, v14, v13) != 0);
        Win32FreePool(v14);
      }
      goto LABEL_13;
    }
  }
  if ( v11 )
LABEL_13:
    --*((_DWORD *)v11 + 105);
  return Palette;
}
