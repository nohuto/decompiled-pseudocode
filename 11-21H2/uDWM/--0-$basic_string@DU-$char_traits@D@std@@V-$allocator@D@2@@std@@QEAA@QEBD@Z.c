/*
 * XREFs of ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1800F3238
 * Callers:
 *     ??$save@VJSONOutputArchive@cereal@@@wil@@YAXAEAVJSONOutputArchive@cereal@@AEBVStoredFailureInfo@0@@Z @ 0x1800F2D88 (--$save@VJSONOutputArchive@cereal@@@wil@@YAXAEAVJSONOutputArchive@cereal@@AEBVStoredFailureInfo@.c)
 *     ?search@Iterator@JSONInputArchive@cereal@@QEAAXPEBD@Z @ 0x1800F66D4 (-search@Iterator@JSONInputArchive@cereal@@QEAAXPEBD@Z.c)
 * Callees:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x180042A60 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::string::string(__int64 a1, _BYTE *a2)
{
  size_t v3; // r8

  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 15LL;
  *(_BYTE *)a1 = 0;
  v3 = -1LL;
  do
    ++v3;
  while ( a2[v3] );
  std::string::assign((void **)a1, a2, v3);
  return a1;
}
