/*
 * XREFs of LdrpDeleteEnclave @ 0x1800D89DC
 * Callers:
 *     LdrDeleteEnclave @ 0x1800D8380 (LdrDeleteEnclave.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003B5D0 (RtlLeaveCriticalSection.c)
 *     NtTerminateEnclave @ 0x1800A79A0 (NtTerminateEnclave.c)
 *     LdrpCleanupEnclaveLoadState @ 0x1800D8738 (LdrpCleanupEnclaveLoadState.c)
 *     LdrpDereferenceEnclave @ 0x1800D8A60 (LdrpDereferenceEnclave.c)
 */

__int64 __fastcall LdrpDeleteEnclave(_QWORD *a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9
  __int64 v5; // rdx
  _QWORD *v6; // rax

  result = NtTerminateEnclave();
  if ( (int)result >= 0 )
  {
    a1[14] = 0LL;
    LdrpCleanupEnclaveLoadState((__int64)a1, -1073741823, v3, v4);
    a1[9] = 0LL;
    RtlEnterCriticalSection((__int64)&LdrpEnclaveListLock);
    v5 = *a1;
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v6 = (_QWORD *)a1[1], (_QWORD *)*v6 != a1) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    RtlLeaveCriticalSection((__int64)&LdrpEnclaveListLock);
    LdrpDereferenceEnclave(a1);
    return 0LL;
  }
  return result;
}
