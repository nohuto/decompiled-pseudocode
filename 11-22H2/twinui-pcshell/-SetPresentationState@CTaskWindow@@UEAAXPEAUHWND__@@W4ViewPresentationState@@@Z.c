/*
 * XREFs of ?SetPresentationState@CTaskWindow@@UEAAXPEAUHWND__@@W4ViewPresentationState@@@Z @ 0x180022280
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VCAppManagerTelemetry@@@details@wil@@QEAAPEAVCAppManagerTelemetry@@P6AXXZ@Z @ 0x1800223E0 (-get@-$static_lazy@VCAppManagerTelemetry@@@details@wil@@QEAAPEAVCAppManagerTelemetry@@P6AXXZ@Z.c)
 *     ??$SetPresentationState@III@CAppManagerTelemetry@@SAX$$QEAI00@Z @ 0x180022474 (--$SetPresentationState@III@CAppManagerTelemetry@@SAX$$QEAI00@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x1800C3614 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_LL @ 0x1803C5F00 (WPP_SF_LL.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CTaskWindow::SetPresentationState(__int64 a1, __int64 a2, int a3)
{
  void *v6; // rcx
  wil::TraceLoggingProvider *v7; // rax
  unsigned __int64 v8; // r8
  int (__fastcall ***v9)(_QWORD, GUID *, _QWORD *); // rsi
  int (__fastcall *v10)(_QWORD, GUID *, _QWORD *); // rbx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r8
  int v19; // ecx
  _QWORD v20[2]; // [rsp+30h] [rbp-10h] BYREF
  int v21; // [rsp+70h] [rbp+30h] BYREF
  int v22; // [rsp+80h] [rbp+40h] BYREF
  int v23; // [rsp+88h] [rbp+48h] BYREF

  v6 = WPP_GLOBAL_Control;
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_LL(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      14LL,
      &WPP_b9ee9f95e0a33febf9f86956a7a64e04_Traceguids,
      *(unsigned int *)(a1 + 136),
      a3);
  v7 = (wil::TraceLoggingProvider *)wil::details::static_lazy<CAppManagerTelemetry>::get(
                                      v6,
                                      _lambda_8127ed7c5a5c4820bb697a3afc89f3a5_::_lambda_invoker_cdecl_);
  if ( wil::TraceLoggingProvider::IsEnabled_(v7, 0, v8) )
  {
    v22 = a2;
    v21 = a3;
    v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
    CAppManagerTelemetry::SetPresentationState<unsigned int,unsigned int,unsigned int>(&v23, &v21, &v22);
  }
  *(_DWORD *)(a1 + 136) = a3;
  v20[0] = 0LL;
  v9 = *(int (__fastcall ****)(_QWORD, GUID *, _QWORD *))(a1 + 48);
  if ( v9 )
  {
    v10 = **v9;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v20);
    if ( v10(v9, &GUID_3b422c7e_2c2b_4e2c_81e3_49920376ed20, v20) >= 0 )
    {
      v11 = *(_DWORD *)(a1 + 136);
      if ( !v11 || (v12 = v11 - 1) == 0 || (v13 = v12 - 1) == 0 )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)v20[0] + 24LL))(v20[0], 0LL, 0LL);
        return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v20);
      }
      v14 = v13 - 1;
      if ( v14 )
      {
        v19 = v14 - 1;
        if ( !v19 )
        {
          v15 = v20[0];
          v16 = *(_QWORD *)v20[0];
          v17 = 1LL;
          goto LABEL_11;
        }
        if ( v19 != 1 )
          return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v20);
      }
      v15 = v20[0];
      v16 = *(_QWORD *)v20[0];
      v17 = 0LL;
LABEL_11:
      (*(void (__fastcall **)(__int64, __int64, __int64))(v16 + 24))(v15, a2, v17);
    }
  }
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v20);
}
