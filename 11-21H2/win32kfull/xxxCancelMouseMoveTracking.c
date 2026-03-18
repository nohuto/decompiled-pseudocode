/*
 * XREFs of xxxCancelMouseMoveTracking @ 0x1C00A184C
 * Callers:
 *     xxxProcessEventMessage @ 0x1C005C220 (xxxProcessEventMessage.c)
 *     xxxTrackMouseMove @ 0x1C007E59C (xxxTrackMouseMove.c)
 *     xxxCapture @ 0x1C00AA7F8 (xxxCapture.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     _PostMessage @ 0x1C00A5270 (_PostMessage.c)
 *     FindTimer @ 0x1C01041A4 (FindTimer.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C010D388 (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     xxxResetTooltip @ 0x1C0118B6C (xxxResetTooltip.c)
 *     xxxHotTrack @ 0x1C011F23C (xxxHotTrack.c)
 */

void __fastcall xxxCancelMouseMoveTracking(__int16 a1, __int64 a2, unsigned int a3, __int16 a4)
{
  char v8; // bl
  __int64 v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // r14
  __int64 v13; // r15
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  _QWORD v18[4]; // [rsp+30h] [rbp-38h] BYREF

  if ( (a1 & 0x400) != 0 && (a4 & 0x400) != 0 )
    xxxHotTrack(a2, a3, 0LL);
  if ( (a1 & 0x200) != 0 && (a4 & 0x300) != 0 )
  {
    v9 = *(_QWORD *)(a2 + 24);
    v10 = 0LL;
    if ( v9 )
      v10 = *(_QWORD *)(v9 + 112);
    v11 = (_QWORD *)safe_cast_fnid_to_PTOOLTIPWND(v10);
    v12 = v11;
    if ( v11 )
    {
      v13 = *v11;
      if ( *v11 )
      {
        v18[2] = 0LL;
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        v18[0] = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = v18;
        v18[1] = v13;
        HMLockObject(v13);
        xxxResetTooltip(v12);
        ThreadUnlock1(v16, v15, v17);
      }
    }
  }
  v8 = a4 & a1;
  if ( v8 < 0 )
    PostMessage(a2, 675 - (unsigned int)(a3 != 1), 0LL);
  if ( (v8 & 0x40) != 0 )
    FindTimer(a2, 65530, 2, 1, 0LL);
}
