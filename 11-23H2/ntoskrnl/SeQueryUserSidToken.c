/*
 * XREFs of SeQueryUserSidToken @ 0x140714E00
 * Callers:
 *     CmpLogHiveFileInaccessible @ 0x14068F4C0 (CmpLogHiveFileInaccessible.c)
 *     ExpWnfQueryCurrentUserSID @ 0x140714A30 (ExpWnfQueryCurrentUserSID.c)
 *     AlpcpQuerySidToken @ 0x140714CA8 (AlpcpQuerySidToken.c)
 *     AlpcpCheckConnectionSecurity @ 0x140715A00 (AlpcpCheckConnectionSecurity.c)
 *     ExpGetProcessInformation @ 0x140742DC0 (ExpGetProcessInformation.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140754850 (EtwQueryProcessTelemetryInfo.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1407AB04C (AlpcpPortQueryConnectedSidInfo.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1407B30BC (PopEtGetProcessSidAndPackageIdentity.c)
 *     PspAssignProcessQuotaBlock @ 0x1407F8468 (PspAssignProcessQuotaBlock.c)
 *     PiDqOpenUserObjectRegKey @ 0x1407FA4D8 (PiDqOpenUserObjectRegKey.c)
 *     PiDqSameUserHive @ 0x14095C570 (PiDqSameUserHive.c)
 *     CmpGetVirtualizationID @ 0x140A19D3C (CmpGetVirtualizationID.c)
 *     MiFindProcessImageHotPatchRecord @ 0x140A36D0C (MiFindProcessImageHotPatchRecord.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14023D410 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D680 (ExAcquireResourceSharedLite.c)
 *     RtlCopySid @ 0x140714F70 (RtlCopySid.c)
 */

__int64 __fastcall SeQueryUserSidToken(__int64 a1, void *a2, ULONG a3, ULONG *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v9; // ebp
  unsigned __int8 *v10; // r8
  ULONG v11; // edi

  CurrentThread = KeGetCurrentThread();
  v9 = -1073741789;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  v10 = **(unsigned __int8 ***)(a1 + 152);
  v11 = 4 * v10[1] + 8;
  if ( a3 >= v11 )
  {
    RtlCopySid(v11, a2, v10);
    v9 = 0;
  }
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  if ( a4 )
    *a4 = v11;
  return v9;
}
