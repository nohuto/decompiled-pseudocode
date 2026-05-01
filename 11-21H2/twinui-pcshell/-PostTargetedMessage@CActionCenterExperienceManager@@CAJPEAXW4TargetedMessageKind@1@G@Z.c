/*
 * XREFs of ?PostTargetedMessage@CActionCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x1800FCBCC
 * Callers:
 *     _lambda_93f3fda036ffdd6460325e0ad9be81ff_::_lambda_invoker_cdecl_ @ 0x180191440 (_lambda_93f3fda036ffdd6460325e0ad9be81ff_--_lambda_invoker_cdecl_.c)
 *     wistd::__function::__func__lambda_a022655389b87b0ee951ff3034ef33e3__void___cdecl(void)_::operator() @ 0x1801923B0 (wistd--__function--__func__lambda_a022655389b87b0ee951ff3034ef33e3__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x1800FACC8 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z.c)
 */

__int64 __fastcall CActionCenterExperienceManager::PostTargetedMessage(struct IUnknown *a1, unsigned __int16 a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = ExperienceManagerUtils::PostToUIThread(0LL, a1, (void *)a2);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x21F,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
