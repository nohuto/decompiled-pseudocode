/*
 * XREFs of wil::details::functor_wrapper_void__lambda_803cb233ffa986a0ba52d53b803e1194__&_::Run @ 0x180065920
 * Callers:
 *     <none>
 * Callees:
 *     ?StartWatching@AssistantLightManager@Lighting@TwinUI@@AEAAJXZ @ 0x180065954 (-StartWatching@AssistantLightManager@Lighting@TwinUI@@AEAAJXZ.c)
 *     ?IsActiveSessionCountLimited@@YA_NXZ @ 0x180065D74 (-IsActiveSessionCountLimited@@YA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::details::functor_wrapper_void__lambda_803cb233ffa986a0ba52d53b803e1194____::Run(__int64 a1)
{
  TwinUI::Lighting::AssistantLightManager **v1; // rbx
  int started; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(TwinUI::Lighting::AssistantLightManager ***)(a1 + 8);
  if ( IsActiveSessionCountLimited() )
  {
    started = TwinUI::Lighting::AssistantLightManager::StartWatching(*v1);
    if ( started < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x28,
        (unsigned int)"pcshell\\twinui\\lighting\\lib\\assistantlightmanager.cpp",
        (const char *)(unsigned int)started,
        v4);
  }
  return 0LL;
}
