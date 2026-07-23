/*
 * XREFs of EtwpRemoveRegistrationFromTable @ 0x180006748
 * Callers:
 *     EtwNotificationUnregister @ 0x1800065F0 (EtwNotificationUnregister.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x18001A490 (RtlRbRemoveNode.c)
 */

void __fastcall EtwpRemoveRegistrationFromTable(PRTL_BALANCED_NODE Node)
{
  __m128i si128; // xmm0

  RtlAcquireSRWLockExclusive(&EtwpProvLock);
  RtlRbRemoveNode(&EtwpRegistrationTable, Node);
  si128 = _mm_load_si128((const __m128i *)&_xmm_abababababababababababababababab);
  Node->0 = ($7A974D354045D066D5E12A438A7E0E45)si128;
  Node->ParentValue = si128.m128i_i64[0];
  RtlReleaseSRWLockExclusive(&EtwpProvLock);
}
