/*
 * XREFs of sub_14066B3D8 @ 0x14066B3D8
 * Callers:
 *     sub_140558960 @ 0x140558960 (sub_140558960.c)
 *     ObFindHandleForObject @ 0x14066A830 (ObFindHandleForObject.c)
 *     sub_14066B04C @ 0x14066B04C (sub_14066B04C.c)
 *     sub_14066B204 @ 0x14066B204 (sub_14066B204.c)
 *     sub_14066C174 @ 0x14066C174 (sub_14066C174.c)
 *     sub_140683990 @ 0x140683990 (sub_140683990.c)
 *     sub_1406A6448 @ 0x1406A6448 (sub_1406A6448.c)
 *     sub_14070E104 @ 0x14070E104 (sub_14070E104.c)
 *     sub_140731DA0 @ 0x140731DA0 (sub_140731DA0.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 *     sub_140734160 @ 0x140734160 (sub_140734160.c)
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 *     ObWaitForMultipleObjects @ 0x1407A1400 (ObWaitForMultipleObjects.c)
 *     ObSetHandleAttributes @ 0x1407A1B10 (ObSetHandleAttributes.c)
 *     ObQueryObjectAuditingByHandle @ 0x1407A2A70 (ObQueryObjectAuditingByHandle.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 *     sub_140939830 @ 0x140939830 (sub_140939830.c)
 *     sub_140946508 @ 0x140946508 (sub_140946508.c)
 *     sub_1409AD704 @ 0x1409AD704 (sub_1409AD704.c)
 *     sub_1409EA9A0 @ 0x1409EA9A0 (sub_1409EA9A0.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 */

ULONG_PTR __fastcall sub_14066B3D8(struct _EX_RUNDOWN_REF *a1)
{
  struct _EX_RUNDOWN_REF *v1; // rdi
  ULONG_PTR Count; // rbx

  v1 = a1 + 139;
  Count = 0LL;
  if ( sub_140347810(a1 + 139) )
  {
    Count = a1[174].Count;
    if ( !Count )
      sub_1402AD030(v1);
  }
  return Count;
}
