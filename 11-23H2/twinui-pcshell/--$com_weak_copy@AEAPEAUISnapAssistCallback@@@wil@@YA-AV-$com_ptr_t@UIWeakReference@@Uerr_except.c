/*
 * XREFs of ??$com_weak_copy@AEAPEAUISnapAssistCallback@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@AEAPEAUISnapAssistCallback@@@Z @ 0x1801378BC
 * Callers:
 *     ??0GuidedSnapAssistControl@@QEAA@AEBV?$com_ptr_t@UIMultitaskingViewTaskScheduler@@Uerr_exception_policy@wil@@@wil@@PEAUISnapAssistCallback@@@Z @ 0x1801377BC (--0GuidedSnapAssistControl@@QEAA@AEBV-$com_ptr_t@UIMultitaskingViewTaskScheduler@@Uerr_exception.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800D4E4C (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetWeakReference@UISnapAssistCallback@@@details@wil@@YAJPEAUISnapAssistCallback@@PEAPEAUIWeakReference@@@Z @ 0x18013746C (--$GetWeakReference@UISnapAssistCallback@@@details@wil@@YAJPEAUISnapAssistCallback@@PEAPEAUIWeak.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::com_weak_copy<ISnapAssistCallback * &>(
        __int64 *a1,
        __int64 (__fastcall ****a2)(_QWORD, GUID *, __int64 *))
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rdi
  int Weak; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *a2;
  *a1 = 0LL;
  if ( v3 )
  {
    wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset(a1);
    Weak = wil::details::GetWeakReference<ISnapAssistCallback>(v3, a1);
    if ( Weak < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x740,
        (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/com.h",
        (const char *)(unsigned int)Weak,
        1);
  }
  return a1;
}
