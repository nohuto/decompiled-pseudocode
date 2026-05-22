/*
 * XREFs of ?AreButtonsOrAxesActive@MPCSixDofProcessor@@AEAA_NPEAULegacyInputInfo@@I@Z @ 0x1801DDA28
 * Callers:
 *     ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801DF9F4 (-ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?ShouldRequestPrimary@MPCSixDofProcessor@@AEAA_NPEAULegacyInputInfo@@@Z @ 0x1801E0930 (-ShouldRequestPrimary@MPCSixDofProcessor@@AEAA_NPEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800BD890 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 */

bool __fastcall MPCSixDofProcessor::AreButtonsOrAxesActive(
        MPCSixDofProcessor *this,
        struct LegacyInputInfo *a2,
        char a3,
        const char *a4)
{
  float v6; // xmm6_4
  unsigned __int64 v7; // rsi
  float v9; // xmm6_4
  const char *v10; // r9
  float v11; // xmm6_4
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( ((unsigned __int8)~a3 & *((_BYTE *)a2 + 2280) & 0x3F) != 0 )
    return 1;
  if ( *((_BYTE *)a2 + 2323) )
  {
    v6 = *((float *)a2 + 578);
    if ( !MPCConstantManager::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x29,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        a4);
    *((_QWORD *)&v12 + 1) = 15LL;
    *(_QWORD *)&v12 = L"TriggerDeadzone";
    v7 = (unsigned __int64)this + 24;
    MPCConstantManager::GetConstant<float>(
      (__int64)MPCConstantManager::s_instance,
      ((unsigned __int64)this + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64),
      &v12);
    if ( v6 > COERCE_FLOAT(L"TriggerDeadzone") )
      return 1;
  }
  else
  {
    v7 = (unsigned __int64)this + 24;
  }
  if ( !*((_BYTE *)a2 + 2324) )
    return 0;
  LODWORD(v9) = *((_DWORD *)a2 + 576) & _xmm;
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      a4);
  *((_QWORD *)&v12 + 1) = 18LL;
  *(_QWORD *)&v12 = L"ThumbstickDeadzone";
  MPCConstantManager::GetConstant<float>(
    (__int64)MPCConstantManager::s_instance,
    v7 & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64),
    &v12);
  if ( v9 > COERCE_FLOAT(L"ThumbstickDeadzone") )
    return 1;
  LODWORD(v11) = *((_DWORD *)a2 + 577) & _xmm;
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v10);
  *(_QWORD *)&v12 = L"ThumbstickDeadzone";
  *((_QWORD *)&v12 + 1) = 18LL;
  MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v7 & -(__int64)(this != 0LL), &v12);
  return v11 > COERCE_FLOAT(L"ThumbstickDeadzone");
}
