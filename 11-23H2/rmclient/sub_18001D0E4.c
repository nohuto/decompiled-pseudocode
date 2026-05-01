/*
 * XREFs of sub_18001D0E4 @ 0x18001D0E4
 * Callers:
 *     HamRegisterDesktopProcessWithAppContainerToken @ 0x180001AF0 (HamRegisterDesktopProcessWithAppContainerToken.c)
 * Callees:
 *     __security_check_cookie @ 0x18000AD40 (__security_check_cookie.c)
 *     HamPendDiagnosticsToWaitTimeout @ 0x18001DF80 (HamPendDiagnosticsToWaitTimeout.c)
 *     HamQueryActivityPendDiagnostics @ 0x18001DFC0 (HamQueryActivityPendDiagnostics.c)
 */

__int64 __fastcall sub_18001D0E4(__int64 a1, unsigned int a2)
{
  ULONGLONG v2; // rsi
  __int64 *v4; // r14
  ULONGLONG v5; // rbx
  ULONGLONG v6; // rcx
  unsigned int v7; // ebx
  __int64 v9; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v10[24]; // [rsp+28h] [rbp-50h] BYREF

  v2 = a2;
  if ( a2 == -1 )
  {
    v4 = 0LL;
    v5 = 0xFFFFFFFFLL;
  }
  else
  {
    v4 = &v9;
    v5 = a2 + GetTickCount64();
  }
  RtlAcquireSRWLockShared(a1 + 8);
  while ( *(_DWORD *)(a1 + 40) == 1 )
  {
    if ( (_DWORD)v2 != -1 )
    {
      v6 = v5 - GetTickCount64();
      if ( v6 > v2 )
        break;
      v9 = -10000LL * v6;
    }
    RtlSleepConditionVariableSRW(a1 + 16, a1 + 8, v4, 1LL);
  }
  switch ( *(_DWORD *)(a1 + 40) )
  {
    case 1:
      if ( (int)HamQueryActivityPendDiagnostics(*(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 32), v10) < 0 )
        v7 = -1058275319;
      else
        v7 = HamPendDiagnosticsToWaitTimeout(v10);
      break;
    case 2:
      v7 = 0;
      break;
    case 3:
      v7 = -1073741248;
      if ( *(int *)(a1 + 72) < 0 )
        v7 = *(_DWORD *)(a1 + 72);
      break;
    default:
      __int2c();
      v7 = -1073741596;
      break;
  }
  ReleaseSRWLockShared((PSRWLOCK)(a1 + 8));
  return v7;
}
