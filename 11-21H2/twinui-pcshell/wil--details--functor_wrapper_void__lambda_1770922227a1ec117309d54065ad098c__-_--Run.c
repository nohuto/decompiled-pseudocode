/*
 * XREFs of wil::details::functor_wrapper_void__lambda_1770922227a1ec117309d54065ad098c__&_::Run @ 0x180065D10
 * Callers:
 *     <none>
 * Callees:
 *     ?IsActiveSessionCountLimited@@YA_NXZ @ 0x180065D74 (-IsActiveSessionCountLimited@@YA_NXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall wil::details::functor_wrapper_void__lambda_1770922227a1ec117309d54065ad098c____::Run(__int64 a1)
{
  _QWORD *v1; // rbx
  int v2; // eax
  int v4; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v1 = *(_QWORD **)(a1 + 8);
  if ( IsActiveSessionCountLimited() )
  {
    v2 = RtlSubscribeWnfStateChangeNotification(
           *v1,
           WNF_SHEL_ASSISTANT_STATE_CHANGE,
           0LL,
           TwinUI::Lighting::AssistantLightWNFListener::ShellAssistantStateChangeWNFCallback,
           *v1,
           0LL,
           0,
           1);
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x19,
        (unsigned int)"pcshell\\twinui\\lighting\\lib\\assistantlightwnflistener.cpp",
        (const char *)(unsigned int)v2,
        v4);
  }
  return 0LL;
}
