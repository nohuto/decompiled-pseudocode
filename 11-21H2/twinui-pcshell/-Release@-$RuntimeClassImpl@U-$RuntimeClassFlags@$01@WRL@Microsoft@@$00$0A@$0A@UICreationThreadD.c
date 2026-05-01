/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICreationThreadDispatcher@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800EEEC0
 * Callers:
 *     ??1XamlBaseViewController@@IE$AAA@XZ @ 0x1800101BC (--1XamlBaseViewController@@IE$AAA@XZ.c)
 *     ??0XamlBaseViewController@@IE$AAA@XZ @ 0x180018758 (--0XamlBaseViewController@@IE$AAA@XZ.c)
 *     _lambda_3e351382f4c08c633b195a0370cc279b_::operator() @ 0x180062800 (_lambda_3e351382f4c08c633b195a0370cc279b_--operator().c)
 *     ??$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreationThreadDispatcher@@@Z @ 0x1800EE798 (--$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreation.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EEE90 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@ImmersiveShellStressTool@@QEAAJXZ @ 0x18016141C (-RuntimeClassInitialize@ImmersiveShellStressTool@@QEAAJXZ.c)
 *     ??_EImmersiveShellStressTool@@UEAAPEAXI@Z @ 0x18017832C (--_EImmersiveShellStressTool@@UEAAPEAXI@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICreationThreadDispatcher@@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1801F13E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICr_ea_1801F13E0.c)
 *     ??1?$com_ptr_t@VCreationThreadDispatcher@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1803B1B70 (--1-$com_ptr_t@VCreationThreadDispatcher@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MakeBackgroundThumbnailFromWallpaperPathAsync@VirtualDesktopGestureWindow@@AEAAJPEAUIDCompThumbnail@@UtagRECT@@V?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@I0@Z @ 0x180554324 (-MakeBackgroundThumbnailFromWallpaperPathAsync@VirtualDesktopGestureWindow@@AEAAJPEAUIDCompThumb.c)
 *     ??1TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x1805799BC (--1TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??1ImmersiveShellThreadDispatcher@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180591C58 (--1ImmersiveShellThreadDispatcher@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UEA.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ICreationThreadDispatcher,Microsoft::WRL::FtmBase>::Release(
        volatile signed __int32 *a1)
{
  __int64 v1; // r9
  __int64 v2; // r8
  unsigned int v3; // ebx

  v1 = 0x7FFFFFFFLL;
  do
    v2 = *((unsigned int *)a1 + 11);
  while ( (_DWORD)v2 != 0x7FFFFFFF && (_DWORD)v2 != _InterlockedCompareExchange(a1 + 11, v2 - 1, v2) );
  v3 = v2 - 1;
  if ( (_DWORD)v2 == 1 )
  {
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64, __int64))(*(_QWORD *)a1 + 24LL))(
        a1,
        1LL,
        v2,
        0x7FFFFFFFLL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *, _QWORD, __int64, __int64))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL))(
        Microsoft::WRL::Details::ModuleBase::module_,
        *(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_,
        v2,
        v1);
  }
  return v3;
}
