/*
 * XREFs of ?Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z @ 0x1800F1BCC
 * Callers:
 *     ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1800F0A1C (-Initialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1800F1CC8 (-UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z @ 0x1800F1FE8 (-UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014738 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180029D70 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x18004905C (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180084958 (--4-$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180090CA0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?OnTargetWithFocus3dChanged@MPCHolographicInputManager@@QEAAXPEAUIMPCFocusTarget@@0@Z @ 0x18009F488 (-OnTargetWithFocus3dChanged@MPCHolographicInputManager@@QEAAXPEAUIMPCFocusTarget@@0@Z.c)
 *     ?MPCInputRouter_Set3DFocusTarget_@ISMTracing@@QEAAXPEAUIMPCFocusTarget@@0@Z @ 0x1800F136C (-MPCInputRouter_Set3DFocusTarget_@ISMTracing@@QEAAXPEAUIMPCFocusTarget@@0@Z.c)
 *     ?Update3DFocusWNF@MPCInputRouter@@AEAAXXZ @ 0x1800F1DBC (-Update3DFocusWNF@MPCInputRouter@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCInputRouter::Set3DFocusTarget(MPCInputRouter *this, struct IMPCFocusTarget *a2)
{
  struct IMPCFocusTarget **v4; // rbx
  struct IMPCFocusTarget **v5; // r14
  MPCHolographicInputManager *Instance; // rax
  struct IMPCFocusTarget *v7; // rsi
  struct IMPCFocusTarget *v8; // rbp
  __int64 v9; // rcx
  __int64 v10; // rcx
  ISMTracing *v11; // rcx
  struct IMPCFocusTarget *v12; // [rsp+40h] [rbp+8h] BYREF

  v4 = (struct IMPCFocusTarget **)((char *)this + 792);
  if ( *((struct IMPCFocusTarget **)this + 99) != a2 )
  {
    v5 = (struct IMPCFocusTarget **)((char *)this + 800);
    Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=((__int64 *)this + 100, (__int64 *)this + 99);
    if ( *v4 != a2 )
    {
      v12 = a2;
      Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v12);
      v12 = *v4;
      *v4 = a2;
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v12);
    }
    Instance = MPCHolographicInputManager::GetInstance();
    MPCHolographicInputManager::OnTargetWithFocus3dChanged(Instance, *v5, *v4);
    MPCInputRouter::Update3DFocusWNF(this);
    v7 = *v4;
    v8 = *v5;
    if ( ISMTracing::IsEnabled(v9) )
    {
      wil::details::static_lazy<ISMTracing>::get(v10, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      ISMTracing::MPCInputRouter_Set3DFocusTarget_(v11, v8, v7);
    }
  }
  if ( *v4
    && *((_BYTE *)this + 888)
    && *((_QWORD *)this + 112) == (*(__int64 (__fastcall **)(struct IMPCFocusTarget *))(*(_QWORD *)*v4 + 56LL))(*v4) )
  {
    Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=((__int64 *)this + 98, (__int64 *)v4);
  }
}
