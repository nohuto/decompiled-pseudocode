/*
 * XREFs of ?ValidateAPOConnectionDescriptor@@YAJPEAUAPO_CONNECTION_DESCRIPTOR@@@Z @ 0x140010AA0
 * Callers:
 *     ?CreateConnection@CDeviceGraphObjectCache@@UEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEA_K@Z @ 0x140010C00 (-CreateConnection@CDeviceGraphObjectCache@@UEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEA_K@Z.c)
 *     ?AllocateConnectionBuffer@CDeviceGraphObjectCache@@UEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEA_K@Z @ 0x1400170B0 (-AllocateConnectionBuffer@CDeviceGraphObjectCache@@UEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEA_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateAPOConnectionDescriptor(struct APO_CONNECTION_DESCRIPTOR *a1)
{
  if ( a1 && a1->u32Signature == 1094927443 && a1->u32MaxFrameCount )
    return ValidateUncompressedFrameFormat(a1->pFormat);
  else
    return 2147942487LL;
}
