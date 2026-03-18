/*
 * XREFs of NtUserGetWindowRgnEx @ 0x1C01D47C0
 * Callers:
 *     <none>
 * Callees:
 *     MirrorRegion @ 0x1C002561C (MirrorRegion.c)
 *     CalcVisRgn @ 0x1C0033320 (CalcVisRgn.c)
 *     ?GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ @ 0x1C0077D38 (-GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     GreScaleRgnToDestLogPixel @ 0x1C02A8100 (GreScaleRgnToDestLogPixel.c)
 */

__int64 __fastcall NtUserGetWindowRgnEx(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  int v3; // esi
  __int64 v5; // rdx
  __int64 v6; // rcx
  const struct tagWND *v7; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // ebx
  int v11; // ebx
  int v12; // edx
  unsigned int v13; // ecx
  __int64 v14; // r9
  unsigned int RgnBox; // eax
  HRGN ExplicitClipRgn; // rax
  __int64 v17; // r10
  unsigned __int64 v19; // [rsp+20h] [rbp-28h] BYREF
  __int128 v20; // [rsp+28h] [rbp-20h] BYREF

  v3 = a3;
  v19 = a2;
  EnterSharedCrit(a1, a2, a3);
  v7 = (const struct tagWND *)ValidateHwnd(a1);
  if ( !v7 )
    goto LABEL_2;
  v11 = 63;
  if ( (unsigned int)UserUnsafeIsCurrentProcessDwm() )
    v11 = 127;
  if ( (~v11 & v3) != 0 )
  {
    UserSetLastError(1004);
LABEL_2:
    v10 = 0;
    goto LABEL_30;
  }
  if ( !v19 )
  {
    v10 = 0;
    UserSetLastError(87);
    goto LABEL_30;
  }
  if ( (v3 & 2) != 0 )
  {
    v12 = (2 * (v3 & 4 | 0x4000200)) | 0x10;
    v20 = 0LL;
    if ( (v3 & 8) == 0 )
      v12 = 2 * (v3 & 4 | 0x4000200);
    v13 = v12 | 1;
    if ( (v3 & 0x10) != 0 )
      v13 = v12;
    v14 = v13;
    LODWORD(v14) = v13 | 0x1000000;
    if ( (v3 & 0x40) == 0 )
      v14 = v13;
    CalcVisRgn((HRGN *)&v19, v7, v7, v14);
    RgnBox = GreGetRgnBox(v19, &v20);
  }
  else
  {
    ExplicitClipRgn = tagWND::GetExplicitClipRgn(v7);
    if ( !ExplicitClipRgn )
      goto LABEL_2;
    RgnBox = GreCombineRgn(v17, ExplicitClipRgn, 0LL, 5LL);
  }
  v10 = RgnBox;
  if ( !RgnBox )
    goto LABEL_2;
  v6 = *((_QWORD *)v7 + 5);
  if ( (*(_WORD *)(v6 + 42) & 0x2FFF) != 0x29D )
    v10 = GreOffsetRgn(v19, (unsigned int)-*(_DWORD *)(v6 + 88), (unsigned int)-*(_DWORD *)(v6 + 92));
  LOBYTE(v6) = ((v3 & 1) == 0) & (*(_BYTE *)(*((_QWORD *)v7 + 5) + 26LL) >> 6);
  if ( (_BYTE)v6 )
    MirrorRegion((__int64)v7, v19, 0);
  if ( (v3 & 0x20) != 0 )
  {
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    {
      if ( *((_QWORD *)PtiCurrentShared(v6, v5, v8, v9) + 57) )
      {
        v6 = **(_QWORD **)(*((_QWORD *)PtiCurrentShared(v6, v5, v8, v9) + 57) + 8LL);
        if ( (*(_DWORD *)(v6 + 64) & 1) != 0 )
        {
          v6 = *((_QWORD *)v7 + 5);
          if ( (*(_DWORD *)(v6 + 288) & 0x4000000F) == 0x40000000 )
            GreScaleRgnToDestLogPixel(*(unsigned __int16 *)(v6 + 284), v19);
        }
      }
    }
  }
LABEL_30:
  UserSessionSwitchLeaveCrit(v6, v5, v8, v9);
  return v10;
}
