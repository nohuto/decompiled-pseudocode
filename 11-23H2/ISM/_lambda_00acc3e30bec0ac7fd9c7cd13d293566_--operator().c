/*
 * XREFs of _lambda_00acc3e30bec0ac7fd9c7cd13d293566_::operator() @ 0x1801DC758
 * Callers:
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801DF9F4 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800BD890 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 */

char __fastcall lambda_00acc3e30bec0ac7fd9c7cd13d293566_::operator()(_QWORD *a1, float a2, float a3, const char *a4)
{
  char v4; // bl
  float v6; // xmm7_4
  _QWORD *v7; // rsi
  __int64 v8; // rdx
  float v9; // xmm7_4
  __int64 v10; // rdx
  float v11; // xmm7_4
  __int64 v12; // rdx
  char v13; // r12
  float v14; // xmm7_4
  __int64 v15; // rdx
  float v16; // xmm7_4
  __int64 v17; // rdx
  float v18; // xmm7_4
  __int64 v19; // rdx
  char v20; // r15
  float v21; // xmm7_4
  __int64 v22; // rdx
  float v23; // xmm7_4
  __int64 v24; // rdx
  float v25; // xmm7_4
  __int64 v26; // rdx
  char v27; // r14
  float v28; // xmm7_4
  __int64 v29; // rdx
  const char *v30; // r9
  float v31; // xmm7_4
  __int64 v32; // rdx
  const char *v33; // r9
  float v34; // xmm7_4
  __int64 v35; // rdx
  char v36; // di
  __int64 v37; // rcx
  float v38; // xmm7_4
  __int64 v39; // rcx
  float v40; // xmm7_4
  __int64 v41; // rcx
  float v42; // xmm7_4
  char v43; // al
  __int128 v45[3]; // [rsp+20h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v4 = 0;
  if ( !*(_BYTE *)(*a1 + 101LL) )
  {
    v7 = a1 + 1;
LABEL_13:
    v13 = 0;
    goto LABEL_14;
  }
  LODWORD(v6) = *(_DWORD *)(*a1 + 76LL) & _xmm;
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      a4);
  *(_QWORD *)&v45[0] = L"HomeMaximumAngularVelocity_X";
  v7 = a1 + 1;
  v8 = a1[1];
  *((_QWORD *)&v45[0] + 1) = 28LL;
  MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, (v8 + 24) & -(__int64)(v8 != 0), v45);
  if ( v6 <= (float)(COERCE_FLOAT(L"HomeMaximumAngularVelocity_X") * a3) )
  {
    LODWORD(v9) = *(_DWORD *)(*a1 + 80LL) & _xmm;
    if ( !MPCConstantManager::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x29,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        a4);
    v10 = *v7;
    *(_QWORD *)&v45[0] = L"HomeMaximumAngularVelocity_Y";
    *((_QWORD *)&v45[0] + 1) = 28LL;
    MPCConstantManager::GetConstant<float>(
      (__int64)MPCConstantManager::s_instance,
      (v10 + 24) & -(__int64)(v10 != 0),
      v45);
    if ( v9 <= (float)(COERCE_FLOAT(L"HomeMaximumAngularVelocity_Y") * a3) )
    {
      LODWORD(v11) = *(_DWORD *)(*a1 + 84LL) & _xmm;
      if ( !MPCConstantManager::s_instance )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x29,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          a4);
      v12 = *v7;
      *(_QWORD *)&v45[0] = L"HomeMaximumAngularVelocity_Z";
      *((_QWORD *)&v45[0] + 1) = 28LL;
      MPCConstantManager::GetConstant<float>(
        (__int64)MPCConstantManager::s_instance,
        (v12 + 24) & -(__int64)(v12 != 0),
        v45);
      if ( v11 <= (float)(COERCE_FLOAT(L"HomeMaximumAngularVelocity_Z") * a3) )
        goto LABEL_13;
    }
  }
  v13 = 1;
LABEL_14:
  if ( !*(_BYTE *)(*a1 + 100LL) )
    goto LABEL_25;
  LODWORD(v14) = *(_DWORD *)(*a1 + 64LL) & _xmm;
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      a4);
  v15 = *v7;
  *(_QWORD *)&v45[0] = L"HomeMaximumLinearVelocity_X";
  *((_QWORD *)&v45[0] + 1) = 27LL;
  MPCConstantManager::GetConstant<float>(
    (__int64)MPCConstantManager::s_instance,
    (v15 + 24) & -(__int64)(v15 != 0),
    v45);
  if ( v14 > (float)(COERCE_FLOAT(L"HomeMaximumLinearVelocity_X") * a2) )
    goto LABEL_24;
  LODWORD(v16) = *(_DWORD *)(*a1 + 68LL) & _xmm;
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      a4);
  v17 = *v7;
  *(_QWORD *)&v45[0] = L"HomeMaximumLinearVelocity_Y";
  *((_QWORD *)&v45[0] + 1) = 27LL;
  MPCConstantManager::GetConstant<float>(
    (__int64)MPCConstantManager::s_instance,
    (v17 + 24) & -(__int64)(v17 != 0),
    v45);
  if ( v16 > (float)(COERCE_FLOAT(L"HomeMaximumLinearVelocity_Y") * a2) )
    goto LABEL_24;
  LODWORD(v18) = *(_DWORD *)(*a1 + 72LL) & _xmm;
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      a4);
  v19 = *v7;
  *(_QWORD *)&v45[0] = L"HomeMaximumLinearVelocity_Z";
  *((_QWORD *)&v45[0] + 1) = 27LL;
  MPCConstantManager::GetConstant<float>(
    (__int64)MPCConstantManager::s_instance,
    (v19 + 24) & -(__int64)(v19 != 0),
    v45);
  if ( v18 > (float)(COERCE_FLOAT(L"HomeMaximumLinearVelocity_Z") * a2) )
LABEL_24:
    v20 = 1;
  else
LABEL_25:
    v20 = 0;
  if ( !*(_BYTE *)(*a1 + 101LL) )
    goto LABEL_37;
  LODWORD(v21) = *(_DWORD *)a1[2] & _xmm;
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      a4);
  v22 = *v7;
  *(_QWORD *)&v45[0] = L"HomeMaximumAngularAcceleration_X";
  *((_QWORD *)&v45[0] + 1) = 32LL;
  MPCConstantManager::GetConstant<float>(
    (__int64)MPCConstantManager::s_instance,
    (v22 + 24) & -(__int64)(v22 != 0),
    v45);
  if ( v21 > (float)(COERCE_FLOAT(L"HomeMaximumAngularAcceleration_X") * a3) )
    goto LABEL_36;
  LODWORD(v23) = *(_DWORD *)(a1[2] + 4LL) & _xmm;
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      a4);
  v24 = *v7;
  *(_QWORD *)&v45[0] = L"HomeMaximumAngularAcceleration_Y";
  *((_QWORD *)&v45[0] + 1) = 32LL;
  MPCConstantManager::GetConstant<float>(
    (__int64)MPCConstantManager::s_instance,
    (v24 + 24) & -(__int64)(v24 != 0),
    v45);
  if ( v23 > (float)(COERCE_FLOAT(L"HomeMaximumAngularAcceleration_Y") * a3) )
    goto LABEL_36;
  LODWORD(v25) = *(_DWORD *)(a1[2] + 8LL) & _xmm;
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      a4);
  v26 = *v7;
  *(_QWORD *)&v45[0] = L"HomeMaximumAngularAcceleration_Z";
  *((_QWORD *)&v45[0] + 1) = 32LL;
  MPCConstantManager::GetConstant<float>(
    (__int64)MPCConstantManager::s_instance,
    (v26 + 24) & -(__int64)(v26 != 0),
    v45);
  if ( v25 > (float)(COERCE_FLOAT(L"HomeMaximumAngularAcceleration_Z") * a3) )
LABEL_36:
    v27 = 1;
  else
LABEL_37:
    v27 = 0;
  if ( !*(_BYTE *)(*a1 + 100LL) )
    goto LABEL_49;
  LODWORD(v28) = *(_DWORD *)a1[3] & _xmm;
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      a4);
  v29 = *v7;
  *(_QWORD *)&v45[0] = L"HomeMaximumLinearAcceleration_X";
  *((_QWORD *)&v45[0] + 1) = 31LL;
  MPCConstantManager::GetConstant<float>(
    (__int64)MPCConstantManager::s_instance,
    (v29 + 24) & -(__int64)(v29 != 0),
    v45);
  if ( v28 > (float)(COERCE_FLOAT(L"HomeMaximumLinearAcceleration_X") * a2) )
    goto LABEL_48;
  LODWORD(v31) = *(_DWORD *)(a1[3] + 4LL) & _xmm;
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v30);
  v32 = *v7;
  *(_QWORD *)&v45[0] = L"HomeMaximumLinearAcceleration_Y";
  *((_QWORD *)&v45[0] + 1) = 31LL;
  MPCConstantManager::GetConstant<float>(
    (__int64)MPCConstantManager::s_instance,
    (v32 + 24) & -(__int64)(v32 != 0),
    v45);
  if ( v31 > (float)(COERCE_FLOAT(L"HomeMaximumLinearAcceleration_Y") * a2) )
    goto LABEL_48;
  LODWORD(v34) = *(_DWORD *)(a1[3] + 8LL) & _xmm;
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v33);
  v35 = *v7;
  *(_QWORD *)&v45[0] = L"HomeMaximumLinearAcceleration_Z";
  *((_QWORD *)&v45[0] + 1) = 31LL;
  MPCConstantManager::GetConstant<float>(
    (__int64)MPCConstantManager::s_instance,
    (v35 + 24) & -(__int64)(v35 != 0),
    v45);
  if ( v34 > (float)(COERCE_FLOAT(L"HomeMaximumLinearAcceleration_Z") * a2) )
LABEL_48:
    v36 = 1;
  else
LABEL_49:
    v36 = 0;
  v37 = *v7;
  if ( !*(_BYTE *)(*v7 + 10801LL) )
    goto LABEL_61;
  LODWORD(v38) = *(_DWORD *)(v37 + 4356) & _xmm;
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      0LL);
  *(_QWORD *)&v45[0] = L"HomeMaximumWeightedDistance_X";
  *((_QWORD *)&v45[0] + 1) = 29LL;
  MPCConstantManager::GetConstant<float>(
    (__int64)MPCConstantManager::s_instance,
    (v37 + 24) & -(__int64)(v37 != 0),
    v45);
  if ( v38 > COERCE_FLOAT(L"HomeMaximumWeightedDistance_X") )
    goto LABEL_60;
  v39 = *v7;
  LODWORD(v40) = *(_DWORD *)(*v7 + 4360LL) & _xmm;
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      0LL);
  *((_QWORD *)&v45[0] + 1) = 29LL;
  *(_QWORD *)&v45[0] = L"HomeMaximumWeightedDistance_Y";
  MPCConstantManager::GetConstant<float>(
    (__int64)MPCConstantManager::s_instance,
    (v39 + 24) & -(__int64)(v39 != 0),
    v45);
  if ( v40 > COERCE_FLOAT(L"HomeMaximumWeightedDistance_Y") )
    goto LABEL_60;
  v41 = *v7;
  LODWORD(v42) = *(_DWORD *)(*v7 + 4364LL) & _xmm;
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      0LL);
  *((_QWORD *)&v45[0] + 1) = 29LL;
  *(_QWORD *)&v45[0] = L"HomeMaximumWeightedDistance_Z";
  MPCConstantManager::GetConstant<float>(
    (__int64)MPCConstantManager::s_instance,
    (v41 + 24) & -(__int64)(v41 != 0),
    v45);
  if ( v42 > COERCE_FLOAT(L"HomeMaximumWeightedDistance_Z") )
LABEL_60:
    v43 = 1;
  else
LABEL_61:
    v43 = 0;
  if ( v13 || v20 || v27 || v36 || v43 )
    return 1;
  return v4;
}
