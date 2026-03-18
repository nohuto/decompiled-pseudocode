/*
 * XREFs of NVMeGetHealthInfoLog @ 0x1C001E690
 * Callers:
 *     NVMeControllerInitPart3 @ 0x1C000DE44 (NVMeControllerInitPart3.c)
 * Callees:
 *     ProcessCommand @ 0x1C00024B0 (ProcessCommand.c)
 *     Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage @ 0x1C0004648 (Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage.c)
 *     memcmp @ 0x1C0004820 (memcmp.c)
 *     memset @ 0x1C0004D40 (memset.c)
 *     LocalCommandReuse @ 0x1C000C29C (LocalCommandReuse.c)
 *     NVMeAllocateDmaBuffer @ 0x1C000C2EC (NVMeAllocateDmaBuffer.c)
 *     NVMeFreeDmaBuffer @ 0x1C000EFC4 (NVMeFreeDmaBuffer.c)
 *     BuildGetLogPageCommand @ 0x1C0010FA4 (BuildGetLogPageCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025E80 (WaitForCommandCompleteWithCustomTimeout.c)
 */

int __fastcall NVMeGetHealthInfoLog(__int64 a1)
{
  _UNKNOWN **v1; // rax
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF

  v1 = &retaddr;
  if ( !*(_BYTE *)(a1 + 20) )
    LODWORD(v1) = NVMeAllocateDmaBuffer(a1, 0x200u);
  return (int)v1;
}
