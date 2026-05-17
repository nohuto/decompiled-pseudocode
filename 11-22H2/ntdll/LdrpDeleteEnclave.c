/*
 * XREFs of LdrpDeleteEnclave @ 0x1800D8CEC
 * Callers:
 *     LdrDeleteEnclave @ 0x1800D8680 (LdrDeleteEnclave.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800271F0 (RtlLeaveCriticalSection.c)
 *     NtTerminateEnclave @ 0x1800A27A0 (NtTerminateEnclave.c)
 *     LdrpCleanupEnclaveLoadState @ 0x1800D8A48 (LdrpCleanupEnclaveLoadState.c)
 *     LdrpDereferenceEnclave @ 0x1800D8D70 (LdrpDereferenceEnclave.c)
 */

__int64 __fastcall LdrpDeleteEnclave(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rax

  result = NtTerminateEnclave();
  if ( (int)result >= 0 )
  {
    a1[14] = 0LL;
    LdrpCleanupEnclaveLoadState((__int64)a1, -1073741823);
    a1[9] = 0LL;
    RtlEnterCriticalSection((__int64)&LdrpEnclaveListLock);
    v3 = *a1;
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v4 = (_QWORD *)a1[1], (_QWORD *)*v4 != a1) )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    RtlLeaveCriticalSection((__int64)&LdrpEnclaveListLock);
    LdrpDereferenceEnclave(a1);
    return 0LL;
  }
  return result;
}
