/*
 * XREFs of ??4?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCEndpointCharacteristics@@@Z @ 0x1800257A0
 * Callers:
 *     ?GetEndpointCharacteristicsDescriptor@CEndpointCharacteristicsCache@@UEAAJPEBGHHPEAUEndpointCharacteristicsDescriptor@@@Z @ 0x180025690 (-GetEndpointCharacteristicsDescriptor@CEndpointCharacteristicsCache@@UEAAJPEBGHHPEAUEndpointChar.c)
 *     ?GetEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHHPEAPEAVCEndpointCharacteristics@@@Z @ 0x180038280 (-GetEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHHPEAPEAVCEndpointCharacteri.c)
 *     ?RefreshStreamsOnDevice@CBtLeAudioResourceManager@@IEAAJW4ReconnectSaDeviceOptions@1@@Z @ 0x1800FC028 (-RefreshStreamsOnDevice@CBtLeAudioResourceManager@@IEAAJW4ReconnectSaDeviceOptions@1@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>::operator=(
        __int64 *a1,
        __int64 a2)
{
  __int64 v3; // rdi

  v3 = *a1;
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return a1;
}
