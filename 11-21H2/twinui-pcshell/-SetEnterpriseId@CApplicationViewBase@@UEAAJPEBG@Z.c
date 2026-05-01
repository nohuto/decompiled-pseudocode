/*
 * XREFs of ?SetEnterpriseId@CApplicationViewBase@@UEAAJPEBG@Z @ 0x18008E660
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_375889774bd0955ecdd63be67b1c3b02___::Run @ 0x180091BE0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_375889774bd0955ecdd63be67b1c3b02___--Run.c)
 *     _lambda_45515fc8494d7051ed1d2c04434d8f2b_::operator() @ 0x180311CC0 (_lambda_45515fc8494d7051ed1d2c04434d8f2b_--operator().c)
 * Callees:
 *     ?RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18007B5B0 (-RaiseApplicationViewChanged@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_V.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18008D220 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_6fdf3937fe5b77ad66258336b78d36c4___ @ 0x1800ED29C (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_6fdf3937fe5b77ad66258.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@UIApplicationViewStateControl@@UIWindowOccludedChangeListener@@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800ED490 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImm.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationViewBase::SetEnterpriseId(RTL_SRWLOCK *this, const unsigned __int16 *a2)
{
  RTL_SRWLOCK *v4; // rsi
  RTL_SRWLOCK *v5; // rbx
  const WCHAR *v6; // r10
  const WCHAR *v7; // r8
  __int64 Ptr; // rax
  const WCHAR *v9; // rcx
  unsigned int v10; // ebx
  int v12; // eax
  BOOL bIgnoreCase; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v16; // [rsp+60h] [rbp+18h]

  v4 = this + 3;
  AcquireSRWLockExclusive(this + 3);
  v16 = v4;
  if ( !LOBYTE(this[4].Ptr) )
    goto LABEL_9;
  v5 = this + 5;
  v6 = &LocaleName;
  v7 = a2;
  if ( !a2 )
    v7 = &LocaleName;
  Ptr = (__int64)this[6].Ptr;
  v9 = (const WCHAR *)v5->Ptr;
  if ( Ptr == -1 )
  {
    if ( v9 )
    {
      Ptr = -1LL;
      do
        ++Ptr;
      while ( v9[Ptr] );
    }
    else
    {
      LODWORD(Ptr) = 0;
    }
  }
  if ( v9 )
    v6 = (const WCHAR *)v5->Ptr;
  if ( CompareStringOrdinal(v6, Ptr, v7, -(a2 != 0LL), 0) == 2 )
  {
LABEL_8:
    LOBYTE(this[4].Ptr) = 0;
LABEL_9:
    v10 = 0;
    goto LABEL_10;
  }
  v12 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
          (__int64)&this[5],
          (__int64)a2,
          0xFFFFFFFFFFFFFFFFuLL);
  v10 = v12;
  if ( v12 >= 0 )
  {
    v15 = 0LL;
    GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_6fdf3937fe5b77ad66258336b78d36c4___(&v15);
    CApplicationViewManager::RaiseApplicationViewChanged(v15 + 136, &this[-3], 0x12u, 0LL);
    if ( v15 )
    {
      v15 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,IApplicationViewStateControl,IWindowOccludedChangeListener>>::Release();
    }
    goto LABEL_8;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x121,
    (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
    (const char *)(unsigned int)v12,
    bIgnoreCase);
LABEL_10:
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return v10;
}
