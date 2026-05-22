/*
 * XREFs of ?Get@?$CMarshaledInterfaceResult@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Internal@Windows@@QEAAJPEAPEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@3@@Z @ 0x180187FC4
 * Callers:
 *     ?GetResults@?$AsyncOperation@U?$IAsyncOperation@PEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@23@V?$CMarshaledInterfaceResult@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@3@@Z @ 0x180188FD0 (-GetResults@-$AsyncOperation@U-$IAsyncOperation@PEAU-$IVector@PEAUHSTRING__@@@Collections@Founda.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ @ 0x180059150 (--1-$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UISIPCEndpoint@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800EB5D0 (--4-$ComPtr@UISIPCEndpoint@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180189C00 (-InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x18018D3B8 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVector<HSTRING__ *>>::Get(
        RTL_SRWLOCK *a1,
        void **a2)
{
  RTL_SRWLOCK *v4; // r14
  __int64 Ptr; // rbx
  __int64 v6; // rsi
  bool v7; // r9
  unsigned int v8; // ebx
  __int64 v10; // rbx
  unsigned int v11; // edi
  __int64 v12; // [rsp+50h] [rbp+30h] BYREF
  __int64 v13; // [rsp+58h] [rbp+38h] BYREF
  __int64 v14; // [rsp+60h] [rbp+40h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  v4 = a1 + 4;
  AcquireSRWLockShared(a1 + 4);
  Microsoft::WRL::ComPtr<ISIPCEndpoint>::operator=(&v12, &a1[3].Ptr);
  Ptr = (__int64)a1[2].Ptr;
  v6 = 0LL;
  if ( Ptr )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v6 = Ptr;
    v14 = 0LL;
    v13 = Ptr;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v14);
  }
  ReleaseSRWLockShared(v4);
  *a2 = 0LL;
  if ( v6 )
  {
    v8 = Microsoft::WRL::AgileRef::InternalResolve(
           (Microsoft::WRL::AgileRef *)&v13,
           &GUID_98b9acc1_4b56_532e_ac73_03d5291cca90,
           a2);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v13);
    Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>(&v12);
    return v8;
  }
  else
  {
    v10 = v12;
    if ( v12 )
    {
      v11 = CMarshaledInterface::_Unmarshal(
              (CMarshaledInterface *)&v12,
              &GUID_98b9acc1_4b56_532e_ac73_03d5291cca90,
              a2,
              v7);
      v10 = v12;
    }
    else
    {
      v11 = 0;
    }
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v13);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    return v11;
  }
}
