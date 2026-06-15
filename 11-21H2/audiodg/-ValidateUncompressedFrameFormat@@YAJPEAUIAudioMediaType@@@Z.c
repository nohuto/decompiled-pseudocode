/*
 * XREFs of ?ValidateUncompressedFrameFormat@@YAJPEAUIAudioMediaType@@@Z @ 0x1400107E8
 * Callers:
 *     ?AllocateConnectionBuffer@CDeviceGraphObjectCache@@UEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEA_K@Z @ 0x14000C8A0 (-AllocateConnectionBuffer@CDeviceGraphObjectCache@@UEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEA_K@Z.c)
 *     ?CreateConnection@CDeviceGraphObjectCache@@UEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEA_K@Z @ 0x14000FA90 (-CreateConnection@CDeviceGraphObjectCache@@UEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEA_K@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ValidateUncompressedFrameFormat(struct IAudioMediaType *a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rcx
  unsigned int v3; // esi
  unsigned int v4; // ebp
  unsigned int v5; // edi
  float v6; // xmm6_4

  v1 = 0;
  if ( a1 )
  {
    v2 = ((__int64 (__fastcall *)(struct IAudioMediaType *))a1->lpVtbl->GetAudioFormat)(a1);
    v3 = *(unsigned __int16 *)(v2 + 14);
    v4 = *(unsigned __int16 *)(v2 + 2);
    v5 = v3 >> 3;
    v6 = (float)*(int *)(v2 + 4);
    if ( *(_WORD *)v2 == 0xFFFE )
      v3 = *(unsigned __int16 *)(v2 + 18);
    if ( _isnan(v6) || v6 <= 0.0 || !v4 || !v5 || !v3 || 8 * v5 < v3 || v4 > 0x1000 || v5 > 0x20 )
      return (unsigned int)-2147024809;
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v1;
}
