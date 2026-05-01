/*
 * XREFs of ??1?$ComPtr@VCWin32ApplicationView@@@WRL@Microsoft@@QEAA@XZ @ 0x18030F82C
 * Callers:
 *     _CApplicationViewManager::AddWin32ApplicationView_::_1_::dtor$0 @ 0x18021D8BC (_CApplicationViewManager--AddWin32ApplicationView_--_1_--dtor$0.c)
 *     _CApplicationViewManager::GetOwnerAppView_::_1_::dtor$0 @ 0x180310439 (_CApplicationViewManager--GetOwnerAppView_--_1_--dtor$0.c)
 *     _CApplicationViewManager::GetSwitchWindow_::_1_::dtor$0 @ 0x1803104E5 (_CApplicationViewManager--GetSwitchWindow_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWin32ApplicationView@@UIAppSizeConstraintsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180113290 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewB.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CWin32ApplicationView>::~ComPtr<CWin32ApplicationView>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWin32ApplicationView,IAppSizeConstraintsCallback,Microsoft::WRL::FtmBase>::Release(
             result,
             a2);
  }
  return result;
}
