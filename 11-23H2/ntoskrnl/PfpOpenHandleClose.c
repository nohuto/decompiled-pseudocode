/*
 * XREFs of PfpOpenHandleClose @ 0x14075D414
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x1406846E8 (PfpPrefetchRequestPerform.c)
 *     PfpPrefetchVolumesCleanup @ 0x140684A68 (PfpPrefetchVolumesCleanup.c)
 *     PfpVolumeOpenAndVerify @ 0x1406853AC (PfpVolumeOpenAndVerify.c)
 *     PfSnOpenVolumesForPrefetch @ 0x140686328 (PfSnOpenVolumesForPrefetch.c)
 *     PfSnQueryVolumeInfo @ 0x1406869B4 (PfSnQueryVolumeInfo.c)
 *     PfSnGetSectionObject @ 0x14075CB90 (PfSnGetSectionObject.c)
 *     PfSnCleanupPrefetchHeader @ 0x14075D0A0 (PfSnCleanupPrefetchHeader.c)
 *     PfSnCleanupPrefetchSectionInfo @ 0x14075D1A8 (PfSnCleanupPrefetchSectionInfo.c)
 *     PfpReadSupportCleanup @ 0x14075E340 (PfpReadSupportCleanup.c)
 *     PfpFileBuildReadSupport @ 0x14075E394 (PfpFileBuildReadSupport.c)
 *     PfpPrefetchEntireDirectory @ 0x14075EABC (PfpPrefetchEntireDirectory.c)
 *     PfpPrefetchDirectoryStream @ 0x1407D7DDC (PfpPrefetchDirectoryStream.c)
 *     PfpQueryFileExtentsRequest @ 0x14097E6F0 (PfpQueryFileExtentsRequest.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PfpOpenHandleClose(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !_bittest64((const signed __int64 *)(a1 + 24), 0x24u) )
  {
    v4[1] = *(_QWORD *)a1;
    v4[2] = *(_QWORD *)(a1 + 8);
    v4[3] = *(_QWORD *)(a1 + 16);
    v4[0] = a2 + 40;
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 84));
    (*(void (__fastcall **)(_QWORD *))(qword_140C650C8 + 8))(v4);
  }
  result = 0x800000000LL;
  *(_QWORD *)(a1 + 24) |= 0x800000000uLL;
  return result;
}
