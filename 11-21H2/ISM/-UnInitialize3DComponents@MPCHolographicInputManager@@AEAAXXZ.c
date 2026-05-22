/*
 * XREFs of ?UnInitialize3DComponents@MPCHolographicInputManager@@AEAAXXZ @ 0x1800A0FF4
 * Callers:
 *     ?OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z @ 0x18009F2C0 (-OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x18004905C (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1?RtlUnsubscribeWnfNotificationWaitForCompletion@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_WNF_USER_SUBSCRIPTION@@@Z @ 0x1800A1ED8 (-reset@-$unique_storage@U-$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1-RtlUnsubsc.c)
 *     ??1MPCCursorManager@@QEAA@XZ @ 0x1800A4F5C (--1MPCCursorManager@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCHolographicInputManager::UnInitialize3DComponents(MPCHolographicInputManager *this)
{
  __int64 *v2; // rsi
  __int64 *v3; // rbp
  __int64 v4; // rbx
  MPCCursorManager *v5; // rbx
  int v6; // eax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 3364) )
  {
    v2 = (__int64 *)*((_QWORD *)this + 413);
    v3 = (__int64 *)*((_QWORD *)this + 414);
    while ( v2 != v3 )
    {
      v9 = *v2;
      v4 = v9;
      Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(&v9);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 304LL))(v4);
      Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease(&v9);
      ++v2;
    }
    wil::details::unique_storage<wil::details::resource_policy<_WNF_USER_SUBSCRIPTION *,long (*)(_WNF_USER_SUBSCRIPTION *),&long RtlUnsubscribeWnfNotificationWaitForCompletion(_WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,_WNF_USER_SUBSCRIPTION *,_WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>::reset(
      (char *)this + 3632,
      0LL);
    wil::details::unique_storage<wil::details::resource_policy<_WNF_USER_SUBSCRIPTION *,long (*)(_WNF_USER_SUBSCRIPTION *),&long RtlUnsubscribeWnfNotificationWaitForCompletion(_WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,_WNF_USER_SUBSCRIPTION *,_WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>::reset(
      (char *)this + 3640,
      0LL);
    v5 = (MPCCursorManager *)*((_QWORD *)this + 423);
    *((_QWORD *)this + 423) = 0LL;
    if ( v5 )
    {
      MPCCursorManager::~MPCCursorManager(v5);
      operator delete(v5);
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 422) + 112LL))(*((_QWORD *)this + 422));
    if ( v6 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xA8,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        (const char *)(unsigned int)v6,
        v7);
    Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 418);
    *((_BYTE *)this + 3364) = 0;
  }
}
