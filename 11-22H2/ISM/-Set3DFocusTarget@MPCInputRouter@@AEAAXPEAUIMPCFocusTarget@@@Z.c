/*
 * XREFs of ?Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z @ 0x18011940C
 * Callers:
 *     ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1801182AC (-Initialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x180119508 (-UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z @ 0x180119828 (-UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180003198 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180026950 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FC64 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180040ACC (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800ADF54 (--4-$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?OnTargetWithFocus3dChanged@MPCHolographicInputManager@@QEAAXPEAUIMPCFocusTarget@@0@Z @ 0x1800C7DC8 (-OnTargetWithFocus3dChanged@MPCHolographicInputManager@@QEAAXPEAUIMPCFocusTarget@@0@Z.c)
 *     ?MPCInputRouter_Set3DFocusTarget_@ISMTracing@@QEAAXPEAUIMPCFocusTarget@@0@Z @ 0x180118BA0 (-MPCInputRouter_Set3DFocusTarget_@ISMTracing@@QEAAXPEAUIMPCFocusTarget@@0@Z.c)
 *     ?Update3DFocusWNF@MPCInputRouter@@AEAAXXZ @ 0x1801195FC (-Update3DFocusWNF@MPCInputRouter@@AEAAXXZ.c)
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

  v4 = (struct IMPCFocusTarget **)((char *)this + 800);
  if ( *((struct IMPCFocusTarget **)this + 100) != a2 )
  {
    v5 = (struct IMPCFocusTarget **)((char *)this + 808);
    Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=((__int64 *)this + 101, (__int64 *)this + 100);
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
    && *((_BYTE *)this + 896)
    && *((_QWORD *)this + 113) == (*(__int64 (__fastcall **)(struct IMPCFocusTarget *))(*(_QWORD *)*v4 + 56LL))(*v4) )
  {
    Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=((__int64 *)this + 99, (__int64 *)v4);
  }
}
