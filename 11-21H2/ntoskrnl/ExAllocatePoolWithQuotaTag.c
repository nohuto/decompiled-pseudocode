/*
 * XREFs of ExAllocatePoolWithQuotaTag @ 0x140367B10
 * Callers:
 *     RtlIsUntrustedObject @ 0x140206A00 (RtlIsUntrustedObject.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_14030B860 @ 0x14030B860 (sub_14030B860.c)
 *     sub_140367AF0 @ 0x140367AF0 (sub_140367AF0.c)
 *     sub_14036858C @ 0x14036858C (sub_14036858C.c)
 *     FsRtlAllocatePoolWithQuota @ 0x1405420A0 (FsRtlAllocatePoolWithQuota.c)
 *     FsRtlAllocatePoolWithQuotaTag @ 0x1405420D0 (FsRtlAllocatePoolWithQuotaTag.c)
 *     sub_1405E00E4 @ 0x1405E00E4 (sub_1405E00E4.c)
 *     ExAllocatePoolWithQuota @ 0x14063A580 (ExAllocatePoolWithQuota.c)
 *     sub_14063DABC @ 0x14063DABC (sub_14063DABC.c)
 *     sub_140660F7C @ 0x140660F7C (sub_140660F7C.c)
 *     sub_14066FED4 @ 0x14066FED4 (sub_14066FED4.c)
 *     sub_140670488 @ 0x140670488 (sub_140670488.c)
 *     sub_14067DB18 @ 0x14067DB18 (sub_14067DB18.c)
 *     sub_140685A20 @ 0x140685A20 (sub_140685A20.c)
 *     sub_14069D480 @ 0x14069D480 (sub_14069D480.c)
 *     sub_1406A1F70 @ 0x1406A1F70 (sub_1406A1F70.c)
 *     sub_1406A904C @ 0x1406A904C (sub_1406A904C.c)
 *     sub_1406C2EE8 @ 0x1406C2EE8 (sub_1406C2EE8.c)
 *     RtlQueryModuleInformation @ 0x1406C6410 (RtlQueryModuleInformation.c)
 *     sub_1406C9754 @ 0x1406C9754 (sub_1406C9754.c)
 *     sub_1406CB6DC @ 0x1406CB6DC (sub_1406CB6DC.c)
 *     RtlQueryImageFileKeyOption @ 0x1406CC700 (RtlQueryImageFileKeyOption.c)
 *     sub_1406E19E0 @ 0x1406E19E0 (sub_1406E19E0.c)
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 *     sub_14079350C @ 0x14079350C (sub_14079350C.c)
 *     sub_14079A254 @ 0x14079A254 (sub_14079A254.c)
 *     sub_1407D5050 @ 0x1407D5050 (sub_1407D5050.c)
 *     sub_1407E5E68 @ 0x1407E5E68 (sub_1407E5E68.c)
 *     sub_1407E5F70 @ 0x1407E5F70 (sub_1407E5F70.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 *     sub_1407F6CE0 @ 0x1407F6CE0 (sub_1407F6CE0.c)
 *     sub_140835590 @ 0x140835590 (sub_140835590.c)
 *     sub_14090DF50 @ 0x14090DF50 (sub_14090DF50.c)
 *     sub_14092665C @ 0x14092665C (sub_14092665C.c)
 *     sub_1409283F4 @ 0x1409283F4 (sub_1409283F4.c)
 *     sub_140929940 @ 0x140929940 (sub_140929940.c)
 *     sub_140961F3C @ 0x140961F3C (sub_140961F3C.c)
 *     sub_1409B3D44 @ 0x1409B3D44 (sub_1409B3D44.c)
 *     sub_1409B4318 @ 0x1409B4318 (sub_1409B4318.c)
 *     sub_1409B47DC @ 0x1409B47DC (sub_1409B47DC.c)
 *     sub_1409B497C @ 0x1409B497C (sub_1409B497C.c)
 *     RtlAddResourceAttributeAce @ 0x1409B8170 (RtlAddResourceAttributeAce.c)
 *     sub_1409B8ECC @ 0x1409B8ECC (sub_1409B8ECC.c)
 *     RtlGetAppContainerParent @ 0x1409B8FF0 (RtlGetAppContainerParent.c)
 *     sub_1409F6464 @ 0x1409F6464 (sub_1409F6464.c)
 *     sub_1409F6C5C @ 0x1409F6C5C (sub_1409F6C5C.c)
 *     sub_1409F7390 @ 0x1409F7390 (sub_1409F7390.c)
 *     sub_1409F7A54 @ 0x1409F7A54 (sub_1409F7A54.c)
 *     sub_140A90450 @ 0x140A90450 (sub_140A90450.c)
 *     sub_140A9C4E0 @ 0x140A9C4E0 (sub_140A9C4E0.c)
 * Callees:
 *     sub_140A6E9A4 @ 0x140A6E9A4 (sub_140A6E9A4.c)
 */

PVOID __stdcall ExAllocatePoolWithQuotaTag(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  __int64 v3; // r9

  v3 = *(unsigned __int16 *)(*((_QWORD *)KeGetCurrentPrcb() + 24) + 138LL);
  LODWORD(v3) = v3 | 0x80000000;
  return (PVOID)sub_140A6E9A4(PoolType, NumberOfBytes, Tag, v3);
}
