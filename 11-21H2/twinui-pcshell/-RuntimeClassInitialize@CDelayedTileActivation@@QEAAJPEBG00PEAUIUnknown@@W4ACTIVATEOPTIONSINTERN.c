/*
 * XREFs of ?RuntimeClassInitialize@CDelayedTileActivation@@QEAAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x1804E8764
 * Callers:
 *     ??$MakeAndInitialize@VCDelayedTileActivation@@V1@AEAPEBGAEAPEBGAEAPEBGAEAPEAUIUnknown@@AEAW4ACTIVATEOPTIONSINTERNAL@@@Details@WRL@Microsoft@@YAJPEAPEAVCDelayedTileActivation@@AEAPEBG11AEAPEAUIUnknown@@AEAW4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x1804E6AFC (--$MakeAndInitialize@VCDelayedTileActivation@@V1@AEAPEBGAEAPEBGAEAPEBGAEAPEAUIUnknown@@AEAW4ACTI.c)
 *     ?RuntimeClassInitialize@CDelayedTileActivation@@QEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x1804E867C (-RuntimeClassInitialize@CDelayedTileActivation@@QEAAJPEAUIImmersiveApplication@@PEAUIUnknown@@W4.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18008D220 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Attach@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAXPEAUIUnknown@@@Z @ 0x1802DB57C (-Attach@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAXPEAUIUnknown@@@Z.c)
 *     ?GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1804E7DA4 (-GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collect.c)
 *     ?IUnknown_ServiceExists@@YAJPEAUIUnknown@@AEBU_GUID@@@Z @ 0x1804E8300 (-IUnknown_ServiceExists@@YAJPEAUIUnknown@@AEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDelayedTileActivation::RuntimeClassInitialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        IUnknown *punk,
        int a6)
{
  int ViewValueSetFromSite; // ebx
  __int64 v10; // rdx
  IUnknown *v12; // rsi
  IUnknown *v13; // rax
  HRESULT Window; // ebx
  struct Windows::Foundation::Collections::IPropertySet **v15; // r8
  struct _GUID *v16; // rdx
  int v17; // eax
  int v18; // eax
  void *v19; // [rsp+20h] [rbp-20h] BYREF
  void *ppvOut; // [rsp+28h] [rbp-18h] BYREF
  __int64 v21; // [rsp+30h] [rbp-10h] BYREF
  HWND phwnd; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  IUnknown *v24; // [rsp+60h] [rbp+20h] BYREF

  ViewValueSetFromSite = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
                           a1 + 56,
                           a2,
                           0xFFFFFFFFFFFFFFFFuLL);
  if ( ViewValueSetFromSite < 0 )
  {
    v10 = 207LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\apppositioner\\lib\\delayedappactivation.cpp",
      (const char *)(unsigned int)ViewValueSetFromSite);
    return (unsigned int)ViewValueSetFromSite;
  }
  ViewValueSetFromSite = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
                           a1 + 80,
                           a3,
                           0xFFFFFFFFFFFFFFFFuLL);
  if ( ViewValueSetFromSite < 0 )
  {
    v10 = 208LL;
    goto LABEL_3;
  }
  ViewValueSetFromSite = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
                           a1 + 104,
                           a4,
                           0xFFFFFFFFFFFFFFFFuLL);
  if ( ViewValueSetFromSite < 0 )
  {
    v10 = 209LL;
    goto LABEL_3;
  }
  phwnd = 0LL;
  v12 = punk;
  v13 = punk;
  v24 = punk;
  v21 = 0LL;
  do
  {
    Window = IUnknown_GetWindow(v13, &phwnd);
    if ( Window < 0 && IUnknown_GetSite(v24, &GUID_00000000_0000_0000_c000_000000000046, (void **)&v24) >= 0 )
      Microsoft::WRL::ComPtr<IUnknown>::Attach(&v21, (__int64)v24);
    v13 = v24;
  }
  while ( v24 && Window < 0 );
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
  *(_QWORD *)(a1 + 136) = phwnd;
  *(_DWORD *)(a1 + 48) = a6;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(a1 + 128));
  ViewValueSetFromSite = ViewSizePreferenceHelpers::GetViewValueSetFromSite(v12, (struct IUnknown *)(a1 + 128), v15);
  if ( ViewValueSetFromSite < 0 )
  {
    v10 = 224LL;
    goto LABEL_3;
  }
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
  if ( IUnknown_QueryService(v12, &IID_IAppActivationUIInfo, &GUID_abad189d_9fa3_4278_b3ca_8ca448a88dcb, &ppvOut) >= 0 )
  {
    LODWORD(v24) = 5;
    if ( (*(int (__fastcall **)(void *, IUnknown **))(*(_QWORD *)ppvOut + 40LL))(ppvOut, &v24) >= 0 )
    {
      BYTE4(v24) = 1;
      *(_QWORD *)(a1 + 152) = v24;
    }
  }
  v19 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v19);
  if ( IUnknown_QueryService(
         v12,
         &GUID_23710692_92e0_4a33_a781_a81596a4cd7d,
         &GUID_23710692_92e0_4a33_a781_a81596a4cd7d,
         &v19) >= 0 )
  {
    v17 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v19 + 24LL))(v19);
    if ( v17 >= 0 )
    {
      LOBYTE(v24) = v17 == 0;
      BYTE1(v24) = 1;
      *(_WORD *)(a1 + 148) = (_WORD)v24;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xF6,
        (__int64)"pcshell\\twinui\\apppositioner\\lib\\delayedappactivation.cpp",
        (const char *)(unsigned int)v17);
    }
    v18 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v19 + 32LL))(v19, a1 + 144);
    if ( v18 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xFC,
        (__int64)"pcshell\\twinui\\apppositioner\\lib\\delayedappactivation.cpp",
        (const char *)(unsigned int)v18);
  }
  *(_BYTE *)(a1 + 160) = (int)IUnknown_ServiceExists(v12, v16) >= 0;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v19);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppvOut);
  return 0LL;
}
