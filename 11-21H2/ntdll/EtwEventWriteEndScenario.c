/*
 * XREFs of EtwEventWriteEndScenario @ 0x180004A00
 * Callers:
 *     <none>
 * Callees:
 *     EtwpGetKmRegHandle @ 0x18000498C (EtwpGetKmRegHandle.c)
 *     EtwEventEnabled @ 0x180004AF0 (EtwEventEnabled.c)
 *     EtwEventWrite @ 0x1800061F0 (EtwEventWrite.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtTraceControl @ 0x1800A7A40 (NtTraceControl.c)
 */

__int64 __fastcall EtwEventWriteEndScenario(unsigned __int64 a1, _OWORD *a2, unsigned int a3, __int64 a4)
{
  __int64 result; // rax
  _GUID ActivityId; // xmm1
  _OWORD v10[3]; // [rsp+38h] [rbp-50h] BYREF

  if ( !a2 )
    return 87LL;
  if ( !(unsigned __int8)EtwEventEnabled() )
    return 6LL;
  memset(v10, 0, sizeof(v10));
  result = EtwpGetKmRegHandle(a1, v10);
  if ( !(_DWORD)result )
  {
    *(_OWORD *)((char *)v10 + 8) = *a2;
    ActivityId = NtCurrentTeb()->ActivityId;
    DWORD2(v10[2]) = 11;
    *(_GUID *)((char *)&v10[1] + 8) = ActivityId;
    NtTraceControl(13LL, v10, 48LL);
    return EtwEventWrite(a1, a2, a3, a4);
  }
  return result;
}
