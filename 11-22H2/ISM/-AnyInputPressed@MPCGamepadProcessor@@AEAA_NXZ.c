/*
 * XREFs of ?AnyInputPressed@MPCGamepadProcessor@@AEAA_NXZ @ 0x1801F0594
 * Callers:
 *     ?IsEndOfCapture@MPCGamepadProcessor@@UEAA_NPEAULegacyInputInfo@@@Z @ 0x1801F0DD0 (-IsEndOfCapture@MPCGamepadProcessor@@UEAA_NPEAULegacyInputInfo@@@Z.c)
 *     ?IsStartOfCapture@MPCGamepadProcessor@@UEAA_NPEAULegacyInputInfo@@@Z @ 0x1801F0DF0 (-IsStartOfCapture@MPCGamepadProcessor@@UEAA_NPEAULegacyInputInfo@@@Z.c)
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801F20A0 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800CE10C (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 */

char __fastcall MPCGamepadProcessor::AnyInputPressed(MPCGamepadProcessor *this, __int64 a2, __int64 a3, const char *a4)
{
  char v4; // bl
  float v6; // xmm7_4
  const char *v7; // r9
  float v8; // xmm7_4
  const char *v9; // r9
  float v10; // xmm7_4
  const char *v11; // r9
  float v12; // xmm7_4
  const char *v13; // r9
  float v14; // xmm6_4
  const char *v15; // r9
  float v16; // xmm6_4
  __int128 v18; // [rsp+20h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v4 = 0;
  if ( *((int *)this + 927) > 0 )
    return 1;
  LODWORD(v6) = *((_DWORD *)this + 933) & _xmm;
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      a4);
  *(_QWORD *)&v18 = L"ThumbstickDeadzone";
  *((_QWORD *)&v18 + 1) = 18LL;
  MPCConstantManager::GetConstant<float>(
    (__int64)MPCConstantManager::s_instance,
    ((unsigned __int64)this + 32) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64),
    &v18);
  if ( v6 > COERCE_FLOAT(L"ThumbstickDeadzone") )
    return 1;
  LODWORD(v8) = *((_DWORD *)this + 932) & _xmm;
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v7);
  *(_QWORD *)&v18 = L"ThumbstickDeadzone";
  *((_QWORD *)&v18 + 1) = 18LL;
  MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, (__int64)this + 32, &v18);
  if ( v8 > COERCE_FLOAT(L"ThumbstickDeadzone") )
    return 1;
  LODWORD(v10) = *((_DWORD *)this + 930) & _xmm;
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v9);
  *(_QWORD *)&v18 = L"ThumbstickDeadzone";
  *((_QWORD *)&v18 + 1) = 18LL;
  MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, (__int64)this + 32, &v18);
  if ( v10 > COERCE_FLOAT(L"ThumbstickDeadzone") )
    return 1;
  LODWORD(v12) = *((_DWORD *)this + 931) & _xmm;
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v11);
  *(_QWORD *)&v18 = L"ThumbstickDeadzone";
  *((_QWORD *)&v18 + 1) = 18LL;
  MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, (__int64)this + 32, &v18);
  if ( v12 > COERCE_FLOAT(L"ThumbstickDeadzone") )
    return 1;
  v14 = *((float *)this + 928);
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v13);
  *(_QWORD *)&v18 = L"TriggerDeadzone";
  *((_QWORD *)&v18 + 1) = 15LL;
  MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, (__int64)this + 32, &v18);
  if ( v14 > COERCE_FLOAT(L"TriggerDeadzone") )
    return 1;
  v16 = *((float *)this + 929);
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v15);
  *(_QWORD *)&v18 = L"TriggerDeadzone";
  *((_QWORD *)&v18 + 1) = 15LL;
  MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, (__int64)this + 32, &v18);
  if ( v16 > COERCE_FLOAT(L"TriggerDeadzone") )
    return 1;
  return v4;
}
