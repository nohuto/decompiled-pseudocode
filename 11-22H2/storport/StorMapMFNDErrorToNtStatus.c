/*
 * XREFs of StorMapMFNDErrorToNtStatus @ 0x1C003E6B8
 * Callers:
 *     RaidAdapterMFNDChildPFControl @ 0x1C0036324 (RaidAdapterMFNDChildPFControl.c)
 *     RaidAdapterMFNDNameSpacePageMapControl @ 0x1C0036438 (RaidAdapterMFNDNameSpacePageMapControl.c)
 *     RaidAdapterReconfigureMFND @ 0x1C0037294 (RaidAdapterReconfigureMFND.c)
 *     StorGetMFNDCapabilities @ 0x1C00ABD64 (StorGetMFNDCapabilities.c)
 *     StorMFNDNameSpaceReadWrite @ 0x1C00AC15C (StorMFNDNameSpaceReadWrite.c)
 *     StorQueryMFNDChildPFCommandPermission @ 0x1C00AC5DC (StorQueryMFNDChildPFCommandPermission.c)
 *     StorQueryMFNDChildPFGlobalProperty @ 0x1C00AC84C (StorQueryMFNDChildPFGlobalProperty.c)
 *     StorQueryMFNDChildPFList @ 0x1C00ACA10 (StorQueryMFNDChildPFList.c)
 *     StorQueryMFNDChildPFQueuesState @ 0x1C00ACE44 (StorQueryMFNDChildPFQueuesState.c)
 *     StorQueryMFNDChildPFSettings @ 0x1C00AD1F0 (StorQueryMFNDChildPFSettings.c)
 *     StorQueryMFNDMigrationQoS @ 0x1C00AD4EC (StorQueryMFNDMigrationQoS.c)
 *     StorQueryMFNDNamespacePageMap @ 0x1C00AD6CC (StorQueryMFNDNamespacePageMap.c)
 *     StorQueryMFNDOperationInfo @ 0x1C00AD9FC (StorQueryMFNDOperationInfo.c)
 *     StorRetrieveMFNDChildPFGlobalProperty @ 0x1C00ADC78 (StorRetrieveMFNDChildPFGlobalProperty.c)
 *     StorSetMFNDChildPFCommandPermission @ 0x1C00AE250 (StorSetMFNDChildPFCommandPermission.c)
 *     StorSetMFNDChildPFGlobalProperty @ 0x1C00AE45C (StorSetMFNDChildPFGlobalProperty.c)
 *     StorSetMFNDChildPFQoS @ 0x1C00AE654 (StorSetMFNDChildPFQoS.c)
 *     StorSetMFNDChildPFQueuesState @ 0x1C00AE8C4 (StorSetMFNDChildPFQueuesState.c)
 *     StorSetMFNDChildPFSettings @ 0x1C00AEBEC (StorSetMFNDChildPFSettings.c)
 *     StorSetMFNDMigrationQoS @ 0x1C00AEEC0 (StorSetMFNDMigrationQoS.c)
 *     StorSetMFNDOperationInfo @ 0x1C00AF0EC (StorSetMFNDOperationInfo.c)
 * Callees:
 *     <none>
 */

char __fastcall StorMapMFNDErrorToNtStatus(unsigned __int16 a1, _DWORD *a2)
{
  char v2; // r8
  int v3; // eax

  v2 = 1;
  v3 = a1 >> 1;
  switch ( (unsigned __int8)v3 )
  {
    case 0xC5u:
      goto LABEL_9;
    case 0xC6u:
    case 0xC7u:
      *a2 = -2147483210;
      return v2;
    case 0xC8u:
LABEL_9:
      *a2 = -2147483599;
      return v2;
  }
  if ( (unsigned __int8)v3 != 201 )
    return 0;
  *a2 = -1073741790;
  return v2;
}
