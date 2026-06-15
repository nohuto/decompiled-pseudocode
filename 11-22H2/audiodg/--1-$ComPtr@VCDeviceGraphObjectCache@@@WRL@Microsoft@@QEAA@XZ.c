/*
 * XREFs of ??1?$ComPtr@VCDeviceGraphObjectCache@@@WRL@Microsoft@@QEAA@XZ @ 0x1400709A8
 * Callers:
 *     ??$MakeAndInitialize@VCDeviceGraphObjectCache@@V1@AEA_JAEAMAEAIAEAPEBU_tlgProvider_t@@@Details@WRL@Microsoft@@YAJPEAPEAVCDeviceGraphObjectCache@@AEA_JAEAMAEAIAEAPEBU_tlgProvider_t@@@Z @ 0x140003840 (--$MakeAndInitialize@VCDeviceGraphObjectCache@@V1@AEA_JAEAMAEAIAEAPEBU_tlgProvider_t@@@Details@W.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CDeviceGraphObjectCache_CDeviceGraphObjectCache___int64_&_float_&_unsigned_int_&__tlgProvider_t_const___&__::_1_::dtor$2 @ 0x140034367 (_Microsoft--WRL--Details--MakeAndInitialize_CDeviceGraphObjectCache_CDeviceGraphObj_ea_140034367.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphObjectCache@@UIDeviceGraphObjectCacheInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14001F310 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphObjec.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CDeviceGraphObjectCache>::~ComPtr<CDeviceGraphObjectCache>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IDeviceGraphObjectCache,IDeviceGraphObjectCacheInternal>::Release(result);
  }
  return result;
}
