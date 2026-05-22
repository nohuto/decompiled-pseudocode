/*
 * XREFs of ?Initialize3DComponents@MPCHolographicInputManager@@AEAAXXZ @ 0x1800B4D20
 * Callers:
 *     ?OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z @ 0x1800B6B60 (-OnHitTestingStateChanged@MPCHolographicInputManager@@AEAAX_N@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180002D48 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x180017AC0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180037964 (-IsEdition@@YA_N_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180056A1C (--2@YAPEAX_K@Z.c)
 *     ?_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059214 (-_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A0190 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0MPCCursorManager@@QEAA@XZ @ 0x1800BCC44 (--0MPCCursorManager@@QEAA@XZ.c)
 *     ??1MPCCursorManager@@QEAA@XZ @ 0x1800BCDAC (--1MPCCursorManager@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCHolographicInputManager::Initialize3DComponents(MPCHolographicInputManager *this)
{
  MPCCursorManager *v2; // rax
  const char *v3; // r9
  MPCCursorManager *v4; // rbx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  MPCCursorManager **v9; // rsi
  MPCCursorManager **v10; // rbp
  MPCCursorManager *v11; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  MPCCursorManager *v13; // [rsp+50h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 3364) )
  {
    v13 = (MPCCursorManager *)operator new(0x48uLL);
    v2 = MPCCursorManager::MPCCursorManager(v13);
    v4 = (MPCCursorManager *)*((_QWORD *)this + 423);
    *((_QWORD *)this + 423) = v2;
    if ( v4 )
    {
      MPCCursorManager::~MPCCursorManager(v4);
      operator delete(v4);
    }
    if ( !*((_QWORD *)this + 423) )
      wil::details::in1diag3::_FailFast_NullAlloc(
        retaddr,
        91LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        v3);
    if ( IsEdition(10LL) )
    {
      LODWORD(v13) = 0;
      v5 = RtlQueryWnfStateData(
             &v13,
             WNF_HOLO_USER_DISPLAY_CONTEXT,
             MPCHolographicInputManager::DisplayContextChangeCallback,
             this);
      if ( v5 < 0 )
        wil::details::in1diag3::_FailFast_NtStatus(
          retaddr,
          (void *)0x67,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          (const char *)(unsigned int)v5,
          0);
      v6 = RtlSubscribeWnfStateChangeNotification(
             (char *)this + 3632,
             WNF_HOLO_USER_DISPLAY_CONTEXT,
             (unsigned int)v13,
             MPCHolographicInputManager::DisplayContextChangeCallback);
      if ( v6 < 0 )
        wil::details::in1diag3::_FailFast_NtStatus(
          retaddr,
          (void *)0x72,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          (const char *)(unsigned int)v6,
          (int)this);
      LODWORD(v13) = 0;
      v7 = RtlQueryWnfStateData(
             &v13,
             WNF_HOLO_SHELL_INPUT_3DSWITCH_DISABLE,
             MPCHolographicInputManager::Input3DSwitchDisableCallback,
             this);
      if ( v7 < 0 )
        wil::details::in1diag3::_FailFast_NtStatus(
          retaddr,
          (void *)0x7B,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          (const char *)(unsigned int)v7,
          0);
      v8 = RtlSubscribeWnfStateChangeNotification(
             (char *)this + 3640,
             WNF_HOLO_SHELL_INPUT_3DSWITCH_DISABLE,
             (unsigned int)v13,
             MPCHolographicInputManager::Input3DSwitchDisableCallback);
      if ( v8 < 0 )
        wil::details::in1diag3::_FailFast_NtStatus(
          retaddr,
          (void *)0x86,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          (const char *)(unsigned int)v8,
          (int)this);
    }
    v9 = (MPCCursorManager **)*((_QWORD *)this + 413);
    v10 = (MPCCursorManager **)*((_QWORD *)this + 414);
    while ( v9 != v10 )
    {
      v13 = *v9;
      v11 = v13;
      Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v13);
      (*(void (__fastcall **)(MPCCursorManager *))(*(_QWORD *)v11 + 296LL))(v11);
      Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)&v13);
      ++v9;
    }
    *((_BYTE *)this + 3364) = 1;
  }
}
