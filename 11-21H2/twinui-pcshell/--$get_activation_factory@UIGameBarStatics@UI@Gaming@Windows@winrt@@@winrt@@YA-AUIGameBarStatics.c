/*
 * XREFs of ??$get_activation_factory@UIGameBarStatics@UI@Gaming@Windows@winrt@@@winrt@@YA?AUIGameBarStatics@UI@Gaming@Windows@0@AEBUhstring@param@0@@Z @ 0x1805DF9FC
 * Callers:
 *     ??$call@P6A_NAEBUIGameBarStatics@UI@Gaming@Windows@winrt@@@Z@?$factory_cache_entry@UGameBar@UI@Gaming@Windows@winrt@@UIGameBarStatics@2345@@impl@winrt@@QEAA_N$$QEAP6A_NAEBUIGameBarStatics@UI@Gaming@Windows@2@@Z@Z @ 0x1805DF818 (--$call@P6A_NAEBUIGameBarStatics@UI@Gaming@Windows@winrt@@@Z@-$factory_cache_entry@UGameBar@UI@G.c)
 * Callees:
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$get_runtime_activation_factory@UIGameBarStatics@UI@Gaming@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x1805DFA40 (--$get_runtime_activation_factory@UIGameBarStatics@UI@Gaming@Windows@winrt@@@impl@winrt@@YA-AUhr.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::Gaming::UI::IGameBarStatics>(_QWORD *a1, __int64 a2)
{
  signed int v3; // ecx
  char v5; // [rsp+40h] [rbp+18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  v3 = *(_DWORD *)winrt::impl::get_runtime_activation_factory<winrt::Windows::Gaming::UI::IGameBarStatics>(&v5, a2, &v6);
  if ( v3 < 0 )
    winrt::throw_hresult(v3);
  *a1 = v6;
  return a1;
}
