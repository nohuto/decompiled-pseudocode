/*
 * XREFs of KeQueryNodeActiveAffinity @ 0x140263730
 * Callers:
 *     sub_140263558 @ 0x140263558 (sub_140263558.c)
 *     sub_14026367C @ 0x14026367C (sub_14026367C.c)
 *     sub_1402D301C @ 0x1402D301C (sub_1402D301C.c)
 *     sub_140378C44 @ 0x140378C44 (sub_140378C44.c)
 *     ExAllocateCacheAwarePushLock @ 0x140389430 (ExAllocateCacheAwarePushLock.c)
 *     sub_1403A61E8 @ 0x1403A61E8 (sub_1403A61E8.c)
 *     sub_1403CE6F8 @ 0x1403CE6F8 (sub_1403CE6F8.c)
 *     sub_1405BFFD0 @ 0x1405BFFD0 (sub_1405BFFD0.c)
 *     sub_1406F2278 @ 0x1406F2278 (sub_1406F2278.c)
 *     sub_1406F2350 @ 0x1406F2350 (sub_1406F2350.c)
 *     sub_140851C58 @ 0x140851C58 (sub_140851C58.c)
 *     sub_1408521A4 @ 0x1408521A4 (sub_1408521A4.c)
 *     sub_140852250 @ 0x140852250 (sub_140852250.c)
 *     sub_1409EB100 @ 0x1409EB100 (sub_1409EB100.c)
 *     sub_140B2A220 @ 0x140B2A220 (sub_140B2A220.c)
 * Callees:
 *     sub_140264270 @ 0x140264270 (sub_140264270.c)
 *     sub_14026428C @ 0x14026428C (sub_14026428C.c)
 */

void __stdcall KeQueryNodeActiveAffinity(USHORT NodeNumber, PGROUP_AFFINITY Affinity, PUSHORT Count)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8

  if ( Affinity )
    *Affinity = 0LL;
  if ( Count )
    *Count = 0;
  if ( NodeNumber < (unsigned __int16)word_140D05000 )
  {
    v3 = sub_140264270(qword_140D31700[NodeNumber], Affinity, Count, 0LL);
    if ( v3 )
      sub_14026428C(v3, v4, v5);
  }
}
