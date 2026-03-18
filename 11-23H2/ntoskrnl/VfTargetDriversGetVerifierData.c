/*
 * XREFs of VfTargetDriversGetVerifierData @ 0x140ACB558
 * Callers:
 *     CarGetDriverInfoFromViolationStack @ 0x1405D3098 (CarGetDriverInfoFromViolationStack.c)
 *     DifGetPluginPerDriverData @ 0x1405D4A50 (DifGetPluginPerDriverData.c)
 *     VfUtilCheckRuleEnforcement @ 0x140AC2664 (VfUtilCheckRuleEnforcement.c)
 *     VfUtilGetDriverName @ 0x140AC26E0 (VfUtilGetDriverName.c)
 *     VfUtilGetSigningLevel @ 0x140AC2710 (VfUtilGetSigningLevel.c)
 *     VfUtilIsBootDriver @ 0x140AC2730 (VfUtilIsBootDriver.c)
 *     VfTargetDriversIsEnabled @ 0x140ACB644 (VfTargetDriversIsEnabled.c)
 *     VfHandlePoolAlloc @ 0x140AD0FE0 (VfHandlePoolAlloc.c)
 * Callees:
 *     VfTargetDriversGetNode @ 0x140209F84 (VfTargetDriversGetNode.c)
 *     VfDriverIsKernelImageAddress @ 0x140ACA744 (VfDriverIsKernelImageAddress.c)
 */

__int64 __fastcall VfTargetDriversGetVerifierData(unsigned __int64 a1)
{
  int v1; // eax
  __int64 v2; // rcx
  bool v3; // zf
  __int64 Node; // rax

  LOBYTE(v1) = VfDriverIsKernelImageAddress(a1);
  if ( v1 )
  {
    v3 = KernelVerifier == 0;
  }
  else
  {
    if ( KernelVerifier )
    {
      if ( dword_140C37328 >= 2 )
        goto LABEL_8;
      return 0LL;
    }
    v3 = dword_140C37328 == 0;
  }
  if ( v3 )
    return 0LL;
LABEL_8:
  Node = VfTargetDriversGetNode(v2);
  if ( !Node )
    return 0LL;
  return *(_QWORD *)(Node + 56);
}
