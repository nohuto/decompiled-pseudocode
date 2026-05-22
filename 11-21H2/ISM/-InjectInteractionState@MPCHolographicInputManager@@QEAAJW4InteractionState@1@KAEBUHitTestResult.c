/*
 * XREFs of ?InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult3D@@PEAUIMPCTarget@@@Z @ 0x18009DF08
 * Callers:
 *     ?SendMPCInput@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801C69E8 (-SendMPCInput@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1801C7F88 (-ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18001AF74 (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     _alloca_probe @ 0x18004E930 (_alloca_probe.c)
 *     memcpy_0 @ 0x18004E993 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z @ 0x18008B160 (-GetWindowIdFromViewId@ViewHelper@@SA_KAEAVViewHierarchyWithWindowManager@@I@Z.c)
 *     _lambda_42e824cddaa2134af1fa1eb6a42b3c93_::operator() @ 0x18009CE58 (_lambda_42e824cddaa2134af1fa1eb6a42b3c93_--operator().c)
 *     _lambda_7fb96ce4c5ba59690cf30f6f70f37a1c_::operator() @ 0x18009CF54 (_lambda_7fb96ce4c5ba59690cf30f6f70f37a1c_--operator().c)
 *     ?RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@UtagPOINT@@_N@Z @ 0x1800A0968 (-RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@UtagPOINT@@_N@Z.c)
 */

__int64 __fastcall MPCHolographicInputManager::InjectInteractionState(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5)
{
  const char *v9; // r9
  bool v11; // zf
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  unsigned int v14; // edi
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  __int64 WindowIdFromViewId; // rax
  unsigned int v17; // r8d
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int64 v20[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v21; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v22; // [rsp+60h] [rbp-A0h]
  __int128 v23; // [rsp+70h] [rbp-90h]
  _BYTE Src[64]; // [rsp+80h] [rbp-80h] BYREF
  int v25; // [rsp+C0h] [rbp-40h]
  _BYTE v26[3008]; // [rsp+C40h] [rbp+B40h] BYREF
  _BYTE v27[3008]; // [rsp+1800h] [rbp+1700h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+23E8h] [rbp+22E8h]
  __int64 v29; // [rsp+23F0h] [rbp+22F0h] BYREF

  if ( !*(_BYTE *)(a1 + 3364) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      709LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)a4);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a5 + 32LL))(a5) )
  {
    v11 = *(_BYTE *)(a1 + 3368) == 0;
    v20[1] = (__int64)&a5;
    v29 = a1;
    v20[0] = a1;
    if ( v11 )
    {
      if ( a2 == 1 )
      {
LABEL_9:
        *(_BYTE *)(a1 + 3368) = 1;
        _InterlockedExchange(
          &MPCInputInfoHelper::m_nextArtificialSpectrumId,
          (MPCInputInfoHelper::m_nextArtificialSpectrumId + 1294967296) % 0x3B9AC9FFu - 1294967295);
        *(_DWORD *)(a1 + 3372) = MPCInputInfoHelper::m_nextArtificialSpectrumId;
        if ( !*(_BYTE *)(a4 + 1) && *(_BYTE *)(a4 + 72) )
        {
          v14 = *(_DWORD *)(a4 + 376);
          ViewHierarchy = ISMStatics::GetViewHierarchy();
          WindowIdFromViewId = ViewHelper::GetWindowIdFromViewId(ViewHierarchy, v14);
          MPCHolographicInputManager::RequestForegroundChange(a1, WindowIdFromViewId, v14, a3);
        }
        v17 = 2;
LABEL_17:
        v18 = *(_OWORD *)(a4 + 88);
        v21 = *(_OWORD *)(a4 + 72);
        v19 = *(_OWORD *)(a4 + 104);
        v22 = v18;
        v23 = v19;
        lambda_42e824cddaa2134af1fa1eb6a42b3c93_::operator()(&v29, (__int64)Src, v17, a2, a3, &v21);
        if ( v25 == 3 )
        {
          v25 = 6;
          memcpy_0(v26, Src, sizeof(v26));
          lambda_7fb96ce4c5ba59690cf30f6f70f37a1c_::operator()(v20, (__int64)v26);
          v25 = 3;
        }
        memcpy_0(v27, Src, sizeof(v27));
        lambda_7fb96ce4c5ba59690cf30f6f70f37a1c_::operator()(v20, (__int64)v27);
        return 0LL;
      }
    }
    else if ( a2 == 1 )
    {
      v12 = *(_OWORD *)(a4 + 88);
      v21 = *(_OWORD *)(a4 + 72);
      v13 = *(_OWORD *)(a4 + 104);
      v22 = v12;
      v23 = v13;
      lambda_42e824cddaa2134af1fa1eb6a42b3c93_::operator()(&v29, (__int64)Src, 4u, 1, a3, &v21);
      memcpy_0(v26, Src, sizeof(v26));
      lambda_7fb96ce4c5ba59690cf30f6f70f37a1c_::operator()(v20, (__int64)v26);
      goto LABEL_9;
    }
    *(_BYTE *)(a1 + 3368) = 0;
    if ( a2 )
    {
      if ( a2 != 2 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          816LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          v9);
      v17 = 4;
    }
    else
    {
      v17 = 3;
    }
    goto LABEL_17;
  }
  return 0LL;
}
