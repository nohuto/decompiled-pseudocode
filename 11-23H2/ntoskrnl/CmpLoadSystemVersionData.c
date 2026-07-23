/*
 * XREFs of CmpLoadSystemVersionData @ 0x14080D380
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x14080B1E0 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B330 (ZwOpenKey.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlCompareUnicodeString @ 0x1406DA170 (RtlCompareUnicodeString.c)
 *     CmpLoadLayerVersions @ 0x14080D5A8 (CmpLoadLayerVersions.c)
 *     CmpMergeVersionDescriptors @ 0x14080EB6C (CmpMergeVersionDescriptors.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

NTSTATUS CmpLoadSystemVersionData()
{
  __int64 *v0; // rdi
  NTSTATUS result; // eax
  int LayerVersions; // esi
  int i; // r14d
  __int64 v4; // rdx
  HANDLE KeyHandle; // [rsp+40h] [rbp-51h] BYREF
  PVOID P[16]; // [rsp+48h] [rbp-49h] BYREF

  KeyHandle = 0LL;
  v0 = CmpLayerVersions;
  CmpEditionVersion = 0LL;
  memset(CmpLayerVersions, 0, sizeof(CmpLayerVersions));
  CmpLayerVersionCount = 0;
  memset(P, 0, sizeof(P));
  result = ZwOpenKey(&KeyHandle, 0x20019u, (POBJECT_ATTRIBUTES)&stru_140002060);
  if ( result >= 0 )
  {
    LayerVersions = CmpLoadLayerVersions(CmpLayerVersions, (__int64)&CmpBuildLayersString, 4088);
    if ( LayerVersions >= 0 )
    {
      CmpLoadLayerVersions(P, (__int64)&CmpServicingLayersString, 64);
      if ( CmpLayerVersions[0] && (*(_DWORD *)(CmpLayerVersions[0] + 800) & 1) != 0 )
        CmpEditionVersion = CmpLayerVersions[0];
      for ( i = 0; i < CmpLayerVersionCount; ++v0 )
        ++i;
      if ( CmpEditionVersion )
      {
        v4 = CmpEditionVersion;
        NtBuildNumber = *(_DWORD *)(CmpEditionVersion + 8) | 0xF0000000;
        *(_DWORD *)(MmWriteableSharedUserData + 608) = *(_DWORD *)(CmpEditionVersion + 8);
        NtBuildQfe = *(_DWORD *)(v4 + 12);
      }
      LayerVersions = 0;
    }
    ZwClose(KeyHandle);
    return LayerVersions;
  }
  return result;
}
