/*
 * XREFs of ?InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KMM@Z @ 0x1800C6AE8
 * Callers:
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801EC850 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputI.c)
 *     ?SendMPCInput@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801F2728 (-SendMPCInput@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800B26E0 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$?4U?$default_delete@ULegacyDeviceInfo@@@std@@$0A@@?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800C4D2C (--$-4U-$default_delete@ULegacyDeviceInfo@@@std@@$0A@@-$unique_ptr@ULegacyDeviceInfo@@U-$default_.c)
 *     ??$make_unique@ULegacyDeviceInfo@@$$V$0A@@std@@YA?AV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@0@XZ @ 0x1800C5874 (--$make_unique@ULegacyDeviceInfo@@$$V$0A@@std@@YA-AV-$unique_ptr@ULegacyDeviceInfo@@U-$default_d.c)
 *     ?SynthesizeMouseInput@MouseProcessor@@SAJPEAUInputInfo@@@Z @ 0x1801C0360 (-SynthesizeMouseInput@MouseProcessor@@SAJPEAUInputInfo@@@Z.c)
 */

__int64 __fastcall MPCHolographicInputManager::InjectRightClick(__int64 a1, int a2, int a3, const char *a4, float a5)
{
  float v5; // xmm3_4
  __int64 *v9; // rbx
  __int64 *v10; // rax
  const char *v11; // r9
  int v12; // eax
  _DWORD *v13; // rax
  int v14; // ebx
  __int64 v15; // rdx
  __int16 v17; // ax
  void *v18; // [rsp+28h] [rbp-E0h] BYREF
  _DWORD v19[22]; // [rsp+38h] [rbp-D0h] BYREF
  int v20; // [rsp+92h] [rbp-76h]
  int v21; // [rsp+9Ch] [rbp-6Ch]
  int v22; // [rsp+A0h] [rbp-68h]
  char v23; // [rsp+B0h] [rbp-58h]
  char v24; // [rsp+B2h] [rbp-56h]
  wil::details::in1diag3 *retaddr; // [rsp+2A0h] [rbp+198h]

  if ( !*(_BYTE *)(a1 + 3364) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x341,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      a4);
  v9 = (__int64 *)(a1 + 3392);
  if ( !*(_QWORD *)(a1 + 3392) )
  {
    v10 = std::make_unique<LegacyDeviceInfo,,0>(&v18);
    std::unique_ptr<LegacyDeviceInfo>::operator=<std::default_delete<LegacyDeviceInfo>,0>(v9, v10);
    if ( v18 )
      operator delete(v18);
    if ( !*v9 )
      wil::details::in1diag3::_FailFast_NullAlloc(
        retaddr,
        839LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        v11);
    *(_DWORD *)*v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 3296) + 32LL))(*(_QWORD *)(a1 + 3296));
    *(_DWORD *)(*v9 + 4) = 2;
    v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 3296) + 40LL))(
            *(_QWORD *)(a1 + 3296),
            *v9,
            0LL);
    if ( v12 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x34C,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        (const char *)(unsigned int)v12,
        (int)v18);
  }
  memset_0(v19, 0, 0x218uLL);
  v13 = (_DWORD *)*v9;
  v19[6] = 536;
  v19[0] = 4096;
  v19[10] = a3;
  v19[1] = *v13;
  v20 = 1;
  v23 = 1;
  v24 = 1;
  v21 = (int)v5;
  v22 = (int)a5;
  if ( a2 == 1 )
  {
    v14 = MouseProcessor::SynthesizeMouseInput((struct InputInfo *)v19);
    if ( v14 < 0 )
    {
      v15 = 863LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        (const char *)(unsigned int)v14);
      return (unsigned int)v14;
    }
    v17 = 4;
  }
  else
  {
    v14 = MouseProcessor::SynthesizeMouseInput((struct InputInfo *)v19);
    if ( v14 < 0 )
    {
      v15 = 871LL;
      goto LABEL_13;
    }
    v17 = 8;
  }
  HIWORD(v20) = v17;
  return MouseProcessor::SynthesizeMouseInput((struct InputInfo *)v19);
}
