/*
 * XREFs of ?WaitForStarted@HamActivityWrapper@@QEAAJK@Z @ 0x18001C714
 * Callers:
 *     HamRegisterDesktopProcessWithAppContainerToken @ 0x180002160 (HamRegisterDesktopProcessWithAppContainerToken.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B040 (__security_check_cookie.c)
 *     HamPendDiagnosticsToWaitTimeout @ 0x18001D510 (HamPendDiagnosticsToWaitTimeout.c)
 *     HamQueryActivityPendDiagnostics @ 0x18001D550 (HamQueryActivityPendDiagnostics.c)
 */

__int64 __fastcall HamActivityWrapper::WaitForStarted(HamActivityWrapper *this, unsigned int a2)
{
  ULONGLONG v2; // rbx
  __int64 *v4; // r14
  ULONGLONG v5; // rsi
  ULONGLONG v6; // rcx
  unsigned int v7; // ebx
  __int64 v9; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v10[24]; // [rsp+28h] [rbp-40h] BYREF

  v2 = a2;
  if ( a2 == -1 )
  {
    v4 = 0LL;
    v5 = 0xFFFFFFFFLL;
  }
  else
  {
    v4 = &v9;
    v5 = GetTickCount64() + a2;
  }
  RtlAcquireSRWLockShared((char *)this + 8);
  while ( *((_DWORD *)this + 10) == 1 )
  {
    if ( (_DWORD)v2 != -1 )
    {
      v6 = v5 - GetTickCount64();
      if ( v6 > v2 )
        break;
      v9 = -10000LL * v6;
    }
    RtlSleepConditionVariableSRW((char *)this + 16, (char *)this + 8, v4, 1LL);
  }
  switch ( *((_DWORD *)this + 10) )
  {
    case 1:
      if ( (int)HamQueryActivityPendDiagnostics(*((_QWORD *)this + 3), *((_QWORD *)this + 4), v10) < 0 )
        v7 = -1058275319;
      else
        v7 = HamPendDiagnosticsToWaitTimeout(v10);
      break;
    case 2:
      v7 = 0;
      break;
    case 3:
      v7 = -1073741248;
      if ( *((int *)this + 18) < 0 )
        v7 = *((_DWORD *)this + 18);
      break;
    default:
      __int2c();
      v7 = -1073741596;
      break;
  }
  ReleaseSRWLockShared((PSRWLOCK)this + 1);
  return v7;
}
