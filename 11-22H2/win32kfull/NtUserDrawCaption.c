/*
 * XREFs of NtUserDrawCaption @ 0x1C01CEC30
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     xxxDrawCaptionTemp @ 0x1C022C094 (xxxDrawCaptionTemp.c)
 */

__int64 __fastcall NtUserDrawCaption(__int64 a1, __int64 a2, __int128 *a3, int a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int128 v18; // [rsp+50h] [rbp-68h] BYREF
  __int64 v19; // [rsp+60h] [rbp-58h]
  __int128 v20; // [rsp+70h] [rbp-48h] BYREF

  v20 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  EnterCrit(0LL, 0LL);
  v10 = ValidateHwnd(a1);
  v13 = 0;
  if ( v10 )
  {
    *(_QWORD *)&v18 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v18;
    *((_QWORD *)&v18 + 1) = v10;
    HMLockObject(v10);
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (__int128 *)MmUserProbeAddress;
    v20 = *a3;
    v13 = xxxDrawCaptionTemp(v10, a2, &v20, 0LL, 0LL, 0LL, a4);
    ThreadUnlock1(v15, v14, v16);
  }
  UserSessionSwitchLeaveCrit(v9, v8, v11, v12);
  return v13;
}
