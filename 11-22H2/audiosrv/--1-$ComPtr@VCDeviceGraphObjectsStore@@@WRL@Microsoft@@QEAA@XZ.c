/*
 * XREFs of ??1?$ComPtr@VCDeviceGraphObjectsStore@@@WRL@Microsoft@@QEAA@XZ @ 0x18010EEE8
 * Callers:
 *     ??$MakeAndInitialize@VCDeviceGraphObjectsStore@@UIDeviceGraphObjectsStore@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIDeviceGraphObjectsStore@@AEAPEBG@Z @ 0x18002E680 (--$MakeAndInitialize@VCDeviceGraphObjectsStore@@UIDeviceGraphObjectsStore@@AEAPEBG@Details@WRL@M.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CDeviceGraphObjectsStore_IDeviceGraphObjectsStore_unsigned_short_const___&__::_1_::dtor$2 @ 0x18007ADF5 (_Microsoft--WRL--Details--MakeAndInitialize_CDeviceGraphObjectsStore_IDeviceGraphOb_ea_18007ADF5.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDeviceGraphObjectsStore@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180012ED0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIDeviceGraphObje.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CDeviceGraphObjectsStore>::~ComPtr<CDeviceGraphObjectsStore>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IDeviceGraphObjectsStore>::Release(
             result,
             a2);
  }
  return result;
}
