/*
 * XREFs of ?GetHitTestResultForPathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA?AUHitTestResult3D@@Ufloat3@Numerics@Foundation@Windows@@@Z @ 0x1800D2AC0
 * Callers:
 *     ?OnSpatialManipulationStarted@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialManipulationStartedEventArgs@3456@@Z @ 0x1800D3010 (-OnSpatialManipulationStarted@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecogn.c)
 *     ?OnSpatialManipulationUpdated@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialManipulationUpdatedEventArgs@3456@@Z @ 0x1800D31B0 (-OnSpatialManipulationUpdated@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecogn.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FC64 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetPostProcessor@MPCHolographicInputManager@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x1800C6310 (-GetPostProcessor@MPCHolographicInputManager@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 *     ?TransformRayToHeadFromWorld@MPCHolographicInputManager@@QEAAXAEAUTargetingRay@@@Z @ 0x1800C9574 (-TransformRayToHeadFromWorld@MPCHolographicInputManager@@QEAAXAEAUTargetingRay@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void *__fastcall MPCSpatialGestureRecognizerHandler::GetHitTestResultForPathingDelta(__int64 a1, void *a2, float *a3)
{
  MPCHolographicInputManager *Instance; // rax
  MPCHolographicInputManager *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  const char *v10; // r9
  struct IMPCInputPostProcessor *PostProcessor; // rax
  struct IMPCInputPostProcessor *v12; // rbx
  int v13; // eax
  struct IMPCInputPostProcessor *v15; // [rsp+20h] [rbp-79h] BYREF
  _DWORD v16[10]; // [rsp+30h] [rbp-69h] BYREF
  __int128 v17; // [rsp+58h] [rbp-41h] BYREF
  int v18; // [rsp+68h] [rbp-31h]
  int v19; // [rsp+6Ch] [rbp-2Dh]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  memset_0(v16, 0, 0xA0uLL);
  memset_0(a2, 0, 0x1A0uLL);
  v16[0] = *(_DWORD *)(a1 + 8);
  v17 = *(_OWORD *)(a1 + 136);
  v18 = *(_DWORD *)(a1 + 152);
  v19 = *(_DWORD *)(a1 + 156);
  Instance = MPCHolographicInputManager::GetInstance();
  MPCHolographicInputManager::TransformRayToHeadFromWorld(Instance, (struct TargetingRay *)&v17);
  *(float *)&v17 = *(float *)&v17 + *a3;
  *((float *)&v17 + 1) = *((float *)&v17 + 1) + a3[1];
  *((float *)&v17 + 2) = *((float *)&v17 + 2) + a3[2];
  v7 = MPCHolographicInputManager::GetInstance();
  PostProcessor = MPCHolographicInputManager::GetPostProcessor(v7, v8, v9, v10);
  v12 = PostProcessor;
  v15 = PostProcessor;
  if ( PostProcessor )
    (*(void (__fastcall **)(struct IMPCInputPostProcessor *))(*(_QWORD *)PostProcessor + 8LL))(PostProcessor);
  v13 = (*(__int64 (__fastcall **)(struct IMPCInputPostProcessor *, _DWORD *, void *))(*(_QWORD *)v12 + 40LL))(
          v12,
          v16,
          a2);
  if ( v13 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x28B,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v13,
      (int)v15);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v15);
  return a2;
}
