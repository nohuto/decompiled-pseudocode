/*
 * XREFs of ??$try_as@UIWeakReferenceSource@impl@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?A_PXZ @ 0x1801B82EC
 * Callers:
 *     ??$?0AEBUIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@winrt@@X@?$weak_ref@UIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@winrt@@@winrt@@QEAA@AEBUIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@1@@Z @ 0x1801E0C48 (--$-0AEBUIDockedStartController2@Implementation@StartScreen@UI@WindowsUdk@winrt@@X@-$weak_ref@UI.c)
 *     ??$?0AEBUIProcessTracker@Shell@Internal@Windows@winrt@@X@?$weak_ref@UIProcessTracker@Shell@Internal@Windows@winrt@@@winrt@@QEAA@AEBUIProcessTracker@Shell@Internal@Windows@1@@Z @ 0x18027A120 (--$-0AEBUIProcessTracker@Shell@Internal@Windows@winrt@@X@-$weak_ref@UIProcessTracker@Shell@Inter.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::IUnknown::try_as<winrt::impl::IWeakReferenceSource>(
        void (__fastcall ****a1)(_QWORD, __int64 *, __int64 *),
        _QWORD *a2)
{
  void (__fastcall ***v2)(_QWORD, __int64 *, __int64 *); // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  if ( v2 )
  {
    v5 = 0LL;
    (**v2)(v2, &winrt::impl::guid_v<winrt::impl::IWeakReferenceSource>, &v5);
    *a2 = v5;
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
