/*
 * XREFs of ??R_lambda_1f6603b1e5c109f0f3ba4e8d321f694a_@@QEBA@AEBUIProtocolStatics@StateRepository@Internal@Windows@winrt@@@Z @ 0x180261400
 * Callers:
 *     ??$call@AEAV_lambda_1f6603b1e5c109f0f3ba4e8d321f694a_@@@?$factory_cache_entry@UProtocol@StateRepository@Internal@Windows@winrt@@UIProtocolStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_1f6603b1e5c109f0f3ba4e8d321f694a_@@@Z @ 0x18025DEA8 (--$call@AEAV_lambda_1f6603b1e5c109f0f3ba4e8d321f694a_@@@-$factory_cache_entry@UProtocol@StateRep.c)
 *     ?SchemaNameAreRegisteredProtocol@CopilotHotkeyManager@@AEAA_NAEBUTargetAppExtensionDetails@@@Z @ 0x180272C08 (-SchemaNameAreRegisteredProtocol@CopilotHotkeyManager@@AEAA_NAEBUTargetAppExtensionDetails@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall _lambda_1f6603b1e5c109f0f3ba4e8d321f694a_::operator()(_QWORD *a1, _QWORD *a2, __int64 *a3)
{
  _QWORD *v3; // r9
  _QWORD *v5; // rdx
  _QWORD *v6; // r11
  __int64 v7; // rcx
  int v8; // eax
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v3 = (_QWORD *)a1[2];
  v5 = (_QWORD *)*a1;
  v6 = (_QWORD *)a1[1];
  v7 = *a3;
  v10 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v7 + 240LL))(
         v7,
         *v5,
         *v6,
         *v3,
         &v10);
  if ( v8 < 0 )
    winrt::throw_hresult((unsigned int)v8);
  *a2 = v10;
  return a2;
}
