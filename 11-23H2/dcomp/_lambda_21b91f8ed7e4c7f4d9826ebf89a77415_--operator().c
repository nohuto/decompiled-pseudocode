/*
 * XREFs of _lambda_21b91f8ed7e4c7f4d9826ebf89a77415_::operator() @ 0x1800A2088
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_21b91f8ed7e4c7f4d9826ebf89a77415___::Run @ 0x1800A2670 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_21b91f8ed7e4c7f4d9826ebf_ea_1800A2670.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIVisualIDMapCom@@@?$ComPtr@UIVisualIDBroker@WindowManagement@ApplicationModel@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVisualIDMapCom@@@WRL@Microsoft@@@Details@12@@Z @ 0x18010DD30 (--$As@UIVisualIDMapCom@@@-$ComPtr@UIVisualIDBroker@WindowManagement@ApplicationModel@Internal@Wi.c)
 *     ?EnsureBroker@Compositor@Composition@UI@Windows@@AEAAJXZ @ 0x18010FAF8 (-EnsureBroker@Compositor@Composition@UI@Windows@@AEAAJXZ.c)
 */

__int64 __fastcall lambda_21b91f8ed7e4c7f4d9826ebf89a77415_::operator()(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  Windows::UI::Composition::Compositor *v5; // rcx
  int v6; // eax
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, _QWORD, __int64, __int64); // rbp
  DWORD CurrentProcessId; // eax
  int v12; // eax
  int v13; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v2 = Windows::UI::Composition::Compositor::EnsureBroker(*(Windows::UI::Composition::Compositor **)a1);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x112,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositorg.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
  v5 = *(Windows::UI::Composition::Compositor **)a1;
  v15 = 0LL;
  v6 = Microsoft::WRL::ComPtr<Windows::Internal::ApplicationModel::WindowManagement::IVisualIDBroker>::As<IVisualIDMapCom>(
         (char *)v5 + 496,
         &v15);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x115,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositorg.cpp",
      (const char *)(unsigned int)v6,
      v13);
  v7 = v15;
  v8 = **(_QWORD **)(a1 + 16);
  v9 = **(_QWORD **)(a1 + 8);
  v10 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v15 + 32LL);
  CurrentProcessId = GetCurrentProcessId();
  v12 = v10(v7, CurrentProcessId, v9, v8);
  v3 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11A,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\global\\wrtcompositorg.cpp",
      (const char *)(unsigned int)v12);
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v15);
    return v3;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v15);
  return 0LL;
}
