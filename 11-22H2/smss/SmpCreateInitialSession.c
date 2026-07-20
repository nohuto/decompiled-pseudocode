/*
 * XREFs of SmpCreateInitialSession @ 0x140010CC0
 * Callers:
 *     <none>
 * Callees:
 *     SmpStartCsr @ 0x140003C50 (SmpStartCsr.c)
 *     __security_check_cookie @ 0x140010ED0 (__security_check_cookie.c)
 *     SmpTerminate @ 0x14001AB9C (SmpTerminate.c)
 *     SmpUnhandledExceptionFilter @ 0x14001AC44 (SmpUnhandledExceptionFilter.c)
 */

__int64 __fastcall SmpCreateInitialSession(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rax
  int v4; // [rsp+20h] [rbp-198h]
  unsigned __int64 Parameters[3]; // [rsp+28h] [rbp-190h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-178h] BYREF
  _BYTE v7[8]; // [rsp+50h] [rbp-168h] BYREF
  __int64 v8; // [rsp+58h] [rbp-160h]
  int v9; // [rsp+78h] [rbp-140h]
  int v10; // [rsp+80h] [rbp-138h]
  int v11; // [rsp+84h] [rbp-134h]

  v10 = -1;
  v11 = 0;
  v9 = 5;
  v8 = SmpUniqueProcessId;
  result = SmpStartCsr((__int64)v7);
  v4 = result;
  if ( (int)result < 0 )
  {
    v3 = 2LL * (_InterlockedIncrement(SmpGlobalLog) % 64);
    SmpGlobalLog[2 * v3 + 2] = 860;
    SmpGlobalLog[2 * v3 + 3] = v4;
    *(_QWORD *)&SmpGlobalLog[2 * v3 + 4] = a1;
    RtlInitUnicodeString(&DestinationString, L"Session Manager Core Session failure");
    Parameters[0] = (unsigned __int64)&DestinationString;
    Parameters[1] = v4;
    SmpTerminate(Parameters, 1u, 2u);
    JUMPOUT(0x140010DCCLL);
  }
  return result;
}
