/*
 * XREFs of ViIsBTSSupported @ 0x140AD3AFC
 * Callers:
 *     VfInitializeBranchTracing @ 0x140AD3880 (VfInitializeBranchTracing.c)
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x140306090 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x140306EE0 (KeSetSystemGroupAffinityThread.c)
 *     DbgPrint @ 0x14032A980 (DbgPrint.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 */

__int64 ViIsBTSSupported()
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v1; // rdi
  char v2; // cl
  unsigned __int64 FeatureBits; // rcx
  char CpuType; // al
  __int64 result; // rax
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-30h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-20h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v1 = 0LL;
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    while ( 1 )
    {
      v2 = KiProcessorIndexToNumberMappingTable[v1] & 0x3F;
      Affinity.Group = (unsigned int)KiProcessorIndexToNumberMappingTable[v1] >> 6;
      *(_DWORD *)Affinity.Reserved = 0;
      Affinity.Reserved[2] = 0;
      Affinity.Mask = 1LL << v2;
      KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
      FeatureBits = KeGetCurrentPrcb()->FeatureBits;
      if ( KeGetCurrentPrcb()->CpuVendor != 2 )
        break;
      CpuType = CurrentPrcb->CpuType;
      if ( CpuType != 15 && CpuType != 6 )
        break;
      if ( (FeatureBits & 0x200) == 0 || (__readmsr(0x1A0u) & 0x800) != 0 )
        goto LABEL_10;
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
      v1 = (unsigned int)(v1 + 1);
      if ( (unsigned int)v1 >= (unsigned int)KeNumberProcessors_0 )
        goto LABEL_8;
    }
    DbgPrint("This is a non-BTS processor - no branch tracing will occur.\n");
LABEL_10:
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    return 0LL;
  }
  else
  {
LABEL_8:
    result = 1LL;
    VfBTSProcessorFamily = CurrentPrcb->CpuType;
    VfBTSSupported = 1;
  }
  return result;
}
