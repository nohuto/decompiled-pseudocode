/*
 * XREFs of ?PostTargetedMessage@CControlCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x1801BC674
 * Callers:
 *     _lambda_7fa9b7e674d0285f4ce406a80fa931b4_::_lambda_invoker_cdecl_ @ 0x1801DD460 (_lambda_7fa9b7e674d0285f4ce406a80fa931b4_--_lambda_invoker_cdecl_.c)
 *     wistd::__function::__func__lambda_bc4582fc0e1ebbe91b3d0812ed51ffb5__void___cdecl(void)_::operator() @ 0x1801DDF90 (wistd--__function--__func__lambda_bc4582fc0e1ebbe91b3d0812ed51ffb5__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z @ 0x1800E8E48 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAX_J@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CControlCenterExperienceManager::PostTargetedMessage(struct IUnknown *a1, unsigned __int16 a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = ExperienceManagerUtils::PostToUIThread(0LL, a1, (void *)a2);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C6,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  return v3;
}
