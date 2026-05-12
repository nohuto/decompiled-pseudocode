/*
 * XREFs of StorSetMFNDOperationPrivilege @ 0x1C00680FC
 * Callers:
 *     StorMFNDChildPFControl @ 0x1C0090BBC (StorMFNDChildPFControl.c)
 *     StorResetMFND @ 0x1C00919E0 (StorResetMFND.c)
 *     StorSetMFNDChildPFCommandPermission @ 0x1C0091F54 (StorSetMFNDChildPFCommandPermission.c)
 *     StorSetMFNDChildPFGlobalProperty @ 0x1C0092160 (StorSetMFNDChildPFGlobalProperty.c)
 *     StorSetMFNDChildPFQoS @ 0x1C0092344 (StorSetMFNDChildPFQoS.c)
 *     StorSetMFNDChildPFSettings @ 0x1C0092584 (StorSetMFNDChildPFSettings.c)
 *     StorSetMFNDOperationInfo @ 0x1C0092810 (StorSetMFNDOperationInfo.c)
 * Callees:
 *     memset @ 0x1C0024340 (memset.c)
 *     StorBuildMFNDGetSetFeatureCommand @ 0x1C003BCBC (StorBuildMFNDGetSetFeatureCommand.c)
 *     StorLogMFNDSetOperationInfo @ 0x1C0067FD0 (StorLogMFNDSetOperationInfo.c)
 *     StorSendMFNDCommand @ 0x1C0091ACC (StorSendMFNDCommand.c)
 */

__int64 __fastcall StorSetMFNDOperationPrivilege(__int64 a1, char a2)
{
  __int64 v4; // r9
  int v5; // edi
  _BYTE v7[64]; // [rsp+50h] [rbp-48h] BYREF

  memset(v7, 0, sizeof(v7));
  StorBuildMFNDGetSetFeatureCommand((__int64)v7, 0, 209, v4, 1, a2, 0);
  v5 = StorSendMFNDCommand(a1, 0, 0, (unsigned int)v7);
  if ( v5 < 0 )
  {
    StorLogMFNDSetOperationInfo(a1, 0, a2, 1, 0, v5);
  }
  else if ( a2 )
  {
    if ( *(_DWORD *)(a1 + 5896) != 1 )
      *(_DWORD *)(a1 + 5896) = 1;
  }
  else if ( *(_DWORD *)(a1 + 5896) )
  {
    *(_DWORD *)(a1 + 5896) = 0;
  }
  return (unsigned int)v5;
}
