/*
 * XREFs of NtUserBeginPaint @ 0x1C005E0C0
 * Callers:
 *     <none>
 * Callees:
 *     xxxBeginPaint @ 0x1C005E22C (xxxBeginPaint.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     xxxEndPaint @ 0x1C00C4E2C (xxxEndPaint.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall NtUserBeginPaint(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rcx
  struct tagWND *v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // r8
  __int128 v9; // [rsp+38h] [rbp-90h] BYREF
  __int64 v10; // [rsp+48h] [rbp-80h]
  _OWORD v11[5]; // [rsp+60h] [rbp-68h] BYREF

  memset(v11, 0, 0x48uLL);
  v9 = 0LL;
  v10 = 0LL;
  EnterCrit(0LL, 0LL);
  v5 = (struct tagWND *)ValidateHwnd(a1);
  v6 = 0LL;
  if ( v5 )
  {
    *(_QWORD *)&v9 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v9;
    *((_QWORD *)&v9 + 1) = v5;
    HMLockObject(v5);
    v6 = xxxBeginPaint(v5);
    DWORD1(v11[4]) = 0;
    if ( a2 >= MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    *(_OWORD *)a2 = v11[0];
    *(_OWORD *)(a2 + 16) = v11[1];
    *(_OWORD *)(a2 + 32) = v11[2];
    *(_OWORD *)(a2 + 48) = v11[3];
    *(_QWORD *)(a2 + 64) = *(_QWORD *)&v11[4];
    ThreadUnlock1(MmUserProbeAddress, MmUserProbeAddress, v7);
  }
  UserSessionSwitchLeaveCrit(v4);
  return v6;
}
