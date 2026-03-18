/*
 * XREFs of xxxRedrawWindow @ 0x1C004A1EC
 * Callers:
 *     xxxSetWindowPosAndBand @ 0x1C0048AFC (xxxSetWindowPosAndBand.c)
 *     NtUserInvalidateRect @ 0x1C0049F60 (NtUserInvalidateRect.c)
 *     xxxSetWindowStyle @ 0x1C0050020 (xxxSetWindowStyle.c)
 *     xxxDestroyWindow @ 0x1C0062330 (xxxDestroyWindow.c)
 *     xxxSetLayeredWindow @ 0x1C0082DD4 (xxxSetLayeredWindow.c)
 *     xxxDwmStopRedirection @ 0x1C0098410 (xxxDwmStopRedirection.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00A3BCC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxScrollWindowEx @ 0x1C00BFE8C (xxxScrollWindowEx.c)
 *     NtUserRedrawWindow @ 0x1C00EC280 (NtUserRedrawWindow.c)
 *     NtUserInvalidateRgn @ 0x1C00FEBD0 (NtUserInvalidateRgn.c)
 *     NtUserValidateRgn @ 0x1C0107750 (NtUserValidateRgn.c)
 *     xxxValidateRect @ 0x1C0115F9C (xxxValidateRect.c)
 *     NtUserDwmLockScreenUpdates @ 0x1C0120730 (NtUserDwmLockScreenUpdates.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C014501C (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxUserResetDisplayDevice @ 0x1C0154E50 (xxxUserResetDisplayDevice.c)
 *     RemoteRedrawRectangle @ 0x1C0211BD4 (RemoteRedrawRectangle.c)
 *     ?SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0211EA0 (-SoundSentryTimer@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     xxxInvalidateRect @ 0x1C022EAE0 (xxxInvalidateRect.c)
 *     xxxMinimizeHungWindow @ 0x1C023DBB8 (xxxMinimizeHungWindow.c)
 * Callees:
 *     xxxInternalInvalidate @ 0x1C004A420 (xxxInternalInvalidate.c)
 *     _GetDesktopWindow @ 0x1C006FF60 (_GetDesktopWindow.c)
 *     MirrorRegion @ 0x1C00F9228 (MirrorRegion.c)
 */

__int64 __fastcall xxxRedrawWindow(struct tagWND *a1, int *a2, __int64 a3, int a4)
{
  __int64 v5; // rdi
  struct tagWND *v7; // rbx
  struct tagWND *v8; // rcx
  __int64 v9; // rdx
  char v10; // al
  __int64 v11; // rcx
  __int64 v12; // rcx
  struct tagWND *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v21; // edx
  int v22; // eax
  int v23; // edx
  _QWORD v24[5]; // [rsp+30h] [rbp-28h] BYREF

  v5 = a3;
  v7 = a1;
  if ( !a1 )
    v7 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL) + 24LL);
  v8 = v7;
  if ( v7 )
  {
    while ( 1 )
    {
      v9 = *((_QWORD *)v8 + 5);
      v10 = *(_BYTE *)(v9 + 31);
      if ( (v10 & 0x10) == 0 || (v10 & 0x20) != 0 && v8 != v7 )
        break;
      if ( (*(_WORD *)(v9 + 42) & 0x2FFF) != 0x29D )
      {
        v8 = (struct tagWND *)*((_QWORD *)v8 + 13);
        if ( v8 )
          continue;
      }
      goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    v24[2] = 0LL;
    if ( (a4 & 9) != 0 )
    {
      if ( a3 )
      {
        if ( a3 != 1 )
        {
          GreCombineRgn(ghrgnInv0, a3, 0LL, 5LL);
          MirrorRegion(v7, ghrgnInv0, 1LL);
          v5 = ghrgnInv0;
        }
        if ( v7 != (struct tagWND *)GetDesktopWindow(v7) )
          GreOffsetRgn(
            v5,
            *(unsigned int *)(*((_QWORD *)v7 + 5) + 104LL),
            *(unsigned int *)(*((_QWORD *)v7 + 5) + 108LL));
      }
      else if ( a2 )
      {
        v11 = *((_QWORD *)v7 + 5);
        v5 = ghrgnInv0;
        if ( (*(_BYTE *)(v11 + 26) & 0x40) != 0 )
        {
          v21 = *(_DWORD *)(v11 + 112) - *(_DWORD *)(v11 + 104);
          v22 = v21 - a2[2];
          v23 = v21 - *a2;
          *a2 = v22;
          a2[2] = v23;
        }
        v12 = *((_QWORD *)v7 + 3);
        v13 = 0LL;
        if ( v12 )
        {
          v14 = *(_QWORD *)(v12 + 8);
          if ( v14 )
            v13 = *(struct tagWND **)(v14 + 24);
        }
        if ( v7 == v13 )
          SetRectRgnIndirect(ghrgnInv0, a2);
        else
          GreSetRectRgn(
            ghrgnInv0,
            (unsigned int)(*a2 + *(_DWORD *)(*((_QWORD *)v7 + 5) + 104LL)),
            (unsigned int)(*(_DWORD *)(*((_QWORD *)v7 + 5) + 108LL) + a2[1]),
            (unsigned int)(*(_DWORD *)(*((_QWORD *)v7 + 5) + 104LL) + a2[2]),
            *(_DWORD *)(*((_QWORD *)v7 + 5) + 108LL) + a2[3]);
      }
      else
      {
        v5 = 1LL;
      }
    }
    v15 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v15 = *ThreadWin32Thread;
    v24[0] = *(_QWORD *)(v15 + 416);
    *(_QWORD *)(v15 + 416) = v24;
    v24[1] = v7;
    if ( v7 )
      HMLockObject(v7);
    xxxInternalInvalidate(v7, (HRGN)v5, a4 | 0x1000);
    ThreadUnlock1(v18, v17, v19);
  }
  return 1LL;
}
