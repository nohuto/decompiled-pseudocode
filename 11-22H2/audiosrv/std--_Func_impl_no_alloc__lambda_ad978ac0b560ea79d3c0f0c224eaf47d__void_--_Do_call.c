/*
 * XREFs of std::_Func_impl_no_alloc__lambda_ad978ac0b560ea79d3c0f0c224eaf47d__void_::_Do_call @ 0x18010E710
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveEffectPackConfigurationFromEndpoints@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z @ 0x18010E2AC (-RemoveEffectPackConfigurationFromEndpoints@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_ad978ac0b560ea79d3c0f0c224eaf47d__void_::_Do_call(struct _GUID *a1)
{
  int v1; // eax
  struct _GUID v2; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = a1[1];
  v1 = EffectPackConfigurationManager::RemoveEffectPackConfigurationFromEndpoints(
         (EffectPackConfigurationManager *)a1,
         &v2);
  if ( v1 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3E,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\effectpackconfigurationmanager.cpp",
      (const char *)(unsigned int)v1);
}
