/*
 * XREFs of ??1?$ComPtr@VCMultitaskingViewServiceProvider@@@WRL@Microsoft@@QEAA@XZ @ 0x180549300
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CMultitaskingViewServiceProvider_IUnknown__::_1_::dtor$2 @ 0x1802BC242 (_Microsoft--WRL--Details--MakeAndInitialize_CMultitaskingViewServiceProvider_IUnknown__--_1_--dt.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIMultitaskingViewServiceProvider@@UIMultitaskingViewTaskScheduler@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18016F170 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_18016F170.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CMultitaskingViewServiceProvider>::~ComPtr<CMultitaskingViewServiceProvider>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,IMultitaskingViewServiceProvider,IMultitaskingViewTaskScheduler>::Release(result);
  }
  return result;
}
