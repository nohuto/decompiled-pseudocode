/*
 * XREFs of ??$com_weak_copy_failfast@AEAV?$com_ptr_t@UIMPCManagerClient@MPCManager@Input@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@0@AEAV?$com_ptr_t@UIMPCManagerClient@MPCManager@Input@Internal@Windows@@Uerr_exception_policy@wil@@@0@@Z @ 0x1801775D8
 * Callers:
 *     ?GetForCurrentThread@MPCManagerClientFactory@@UEAAJPEAPEAUIMPCManagerClient@MPCManager@Input@Internal@Windows@@@Z @ 0x180179810 (-GetForCurrentThread@MPCManagerClientFactory@@UEAAJPEAPEAUIMPCManagerClient@MPCManager@Input@Int.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetWeakReference@UIMPCManagerClient@MPCManager@Input@Internal@Windows@@@details@wil@@YAJPEAUIMPCManagerClient@MPCManager@Input@Internal@Windows@@PEAPEAUIWeakReference@@@Z @ 0x180176B50 (--$GetWeakReference@UIMPCManagerClient@MPCManager@Input@Internal@Windows@@@details@wil@@YAJPEAUI.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall wil::com_weak_copy_failfast<wil::com_ptr_t<Windows::Internal::Input::MPCManager::IMPCManagerClient,wil::err_exception_policy> &>(
        _QWORD *a1,
        __int64 (__fastcall ****a2)(_QWORD, GUID *, __int64 *))
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rcx
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *a2;
  *a1 = 0LL;
  if ( v3 )
  {
    *a1 = 0LL;
    v4 = wil::details::GetWeakReference<Windows::Internal::Input::MPCManager::IMPCManagerClient>(v3, a1);
    if ( v4 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x74E,
        (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/com.h",
        (const char *)(unsigned int)v4,
        1);
  }
  return a1;
}
