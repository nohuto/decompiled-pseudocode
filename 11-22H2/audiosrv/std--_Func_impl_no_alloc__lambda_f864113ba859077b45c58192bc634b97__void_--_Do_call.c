/*
 * XREFs of std::_Func_impl_no_alloc__lambda_f864113ba859077b45c58192bc634b97__void_::_Do_call @ 0x18010E760
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddEffectPackConfigurationToEndpoints@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z @ 0x18010DAB4 (-AddEffectPackConfigurationToEndpoints@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_f864113ba859077b45c58192bc634b97__void_::_Do_call(__int64 a1)
{
  struct _GUID v1; // xmm0
  EffectPackConfigurationManager *v2; // rcx
  int v3; // eax
  struct _GUID v4; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = *(struct _GUID *)(a1 + 16);
  v2 = *(EffectPackConfigurationManager **)(a1 + 8);
  v4 = v1;
  v3 = EffectPackConfigurationManager::AddEffectPackConfigurationToEndpoints(v2, &v4);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x32,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\effectpackconfigurationmanager.cpp",
      (const char *)(unsigned int)v3);
}
