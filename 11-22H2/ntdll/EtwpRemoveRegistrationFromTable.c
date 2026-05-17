/*
 * XREFs of EtwpRemoveRegistrationFromTable @ 0x1800300B8
 * Callers:
 *     EtwNotificationUnregister @ 0x1800301E0 (EtwNotificationUnregister.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180037EE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x180038A70 (RtlRbRemoveNode.c)
 */

__int64 __fastcall EtwpRemoveRegistrationFromTable(__m128i *a1)
{
  __m128i si128; // xmm0

  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  RtlRbRemoveNode(&EtwpRegistrationTable, a1);
  si128 = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
  *a1 = si128;
  a1[1].m128i_i64[0] = si128.m128i_i64[0];
  return RtlReleaseSRWLockExclusive(&EtwpProvLock);
}
