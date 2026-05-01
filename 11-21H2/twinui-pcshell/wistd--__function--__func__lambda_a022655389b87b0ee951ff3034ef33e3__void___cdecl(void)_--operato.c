/*
 * XREFs of wistd::__function::__func__lambda_a022655389b87b0ee951ff3034ef33e3__void___cdecl(void)_::operator() @ 0x1801923B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostTargetedMessage@CActionCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z @ 0x1800FCBCC (-PostTargetedMessage@CActionCenterExperienceManager@@CAJPEAXW4TargetedMessageKind@1@G@Z.c)
 *     ??$As@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180177960 (--$As@UIActionCenterExperienceManager@Experience@Shell@Internal@Windows@@@WeakRef@WRL@Microsoft@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wistd::__function::__func__lambda_a022655389b87b0ee951ff3034ef33e3__void___cdecl_void__::operator()(
        __int64 a1)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IInspectable *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  Microsoft::WRL::WeakRef::As<Windows::Internal::Shell::Experience::IActionCenterExperienceManager>(
    (Microsoft::WRL::WeakRef *)(a1 + 16),
    &v5);
  v2 = CActionCenterExperienceManager::PostTargetedMessage(*(struct IUnknown **)(a1 + 8), 0);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3C2,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v5);
}
