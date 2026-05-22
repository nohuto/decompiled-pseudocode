/*
 * XREFs of ?GetTouchInjectionContactAreaRadius@MPCHandProcessor@@UEAAIXZ @ 0x1800BEC20
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800BD83C (--$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 */

__int64 __fastcall MPCHandProcessor::GetTouchInjectionContactAreaRadius(
        unsigned __int64 this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      a4);
  *((_QWORD *)&v5 + 1) = 31LL;
  *(_QWORD *)&v5 = L"TouchInjectionContactAreaRadius";
  return MPCConstantManager::GetConstant<unsigned long>(
           (__int64)MPCConstantManager::s_instance,
           this & ((unsigned __int128)-(__int128)(this - 24) >> 64),
           &v5);
}
