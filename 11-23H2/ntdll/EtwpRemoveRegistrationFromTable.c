/*
 * XREFs of EtwpRemoveRegistrationFromTable @ 0x18002FEE8
 * Callers:
 *     EtwNotificationUnregister @ 0x180030010 (EtwNotificationUnregister.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x180038910 (RtlRbRemoveNode.c)
 */

void __fastcall EtwpRemoveRegistrationFromTable(PRTL_BALANCED_NODE Node)
{
  __m128i si128; // xmm0

  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  RtlRbRemoveNode(&EtwpRegistrationTable, Node);
  si128 = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
  Node->0 = ($F5597E9A4B1490EB88A2996D43745AF0)si128;
  Node->ParentValue = si128.m128i_i64[0];
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
}
