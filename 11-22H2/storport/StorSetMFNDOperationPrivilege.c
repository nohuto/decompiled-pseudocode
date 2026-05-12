/*
 * XREFs of StorSetMFNDOperationPrivilege @ 0x1C0077910
 * Callers:
 *     StorMFNDChildPFControl @ 0x1C00ABED0 (StorMFNDChildPFControl.c)
 *     StorMFNDNSPageMapControl @ 0x1C00AC01C (StorMFNDNSPageMapControl.c)
 *     StorMFNDNameSpaceReadWrite @ 0x1C00AC15C (StorMFNDNameSpaceReadWrite.c)
 *     StorQueryMFNDChildPFQueuesState @ 0x1C00ACE44 (StorQueryMFNDChildPFQueuesState.c)
 *     StorQueryMFNDNamespacePageMap @ 0x1C00AD6CC (StorQueryMFNDNamespacePageMap.c)
 *     StorResetMFND @ 0x1C00ADB84 (StorResetMFND.c)
 *     StorSetMFNDChildPFCommandPermission @ 0x1C00AE250 (StorSetMFNDChildPFCommandPermission.c)
 *     StorSetMFNDChildPFGlobalProperty @ 0x1C00AE45C (StorSetMFNDChildPFGlobalProperty.c)
 *     StorSetMFNDChildPFQoS @ 0x1C00AE654 (StorSetMFNDChildPFQoS.c)
 *     StorSetMFNDChildPFQueuesState @ 0x1C00AE8C4 (StorSetMFNDChildPFQueuesState.c)
 *     StorSetMFNDChildPFSettings @ 0x1C00AEBEC (StorSetMFNDChildPFSettings.c)
 *     StorSetMFNDMigrationQoS @ 0x1C00AEEC0 (StorSetMFNDMigrationQoS.c)
 *     StorSetMFNDOperationInfo @ 0x1C00AF0EC (StorSetMFNDOperationInfo.c)
 * Callees:
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     StorLogMFNDSetOperationInfo @ 0x1C00777E4 (StorLogMFNDSetOperationInfo.c)
 *     StorSendMFNDCommand @ 0x1C00ADDB0 (StorSendMFNDCommand.c)
 */

__int64 __fastcall StorSetMFNDOperationPrivilege(__int64 a1, char a2)
{
  int v4; // edi
  int v5; // ecx
  _DWORD v7[10]; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v8; // [rsp+88h] [rbp-20h]
  unsigned int v9; // [rsp+8Ch] [rbp-1Ch]

  memset_0(v7, 0, 0x40uLL);
  v7[0] = 9;
  v8 = v8 & 0xFFFFFF00 | 0xD1;
  v9 = v9 & 0xFFFFFFE1 | (16 * (a2 & 1)) | 1;
  BYTE1(v9) = 0;
  v4 = StorSendMFNDCommand(a1, 0, 0, 0, (__int64)v7);
  if ( v4 < 0 )
  {
    StorLogMFNDSetOperationInfo(a1, 0, a2, 1, 0, v4);
  }
  else
  {
    v5 = *(_DWORD *)(a1 + 5960);
    if ( a2 )
    {
      if ( v5 != 1 )
        *(_DWORD *)(a1 + 5960) = 1;
    }
    else if ( v5 )
    {
      *(_DWORD *)(a1 + 5960) = 0;
    }
  }
  return (unsigned int)v4;
}
