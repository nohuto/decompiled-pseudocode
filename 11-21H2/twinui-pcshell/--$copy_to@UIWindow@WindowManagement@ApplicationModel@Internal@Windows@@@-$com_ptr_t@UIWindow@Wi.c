/*
 * XREFs of ??$copy_to@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBAXPEAPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180408E20
 * Callers:
 *     ?GetWindow@WindowWrapperBase@@UEAAJPEAPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18040B370 (-GetWindow@WindowWrapperBase@@UEAAJPEAPEAUIWindow@WindowManagement@ApplicationModel@Internal@Win.c)
 *     ?GetWindow@UwpWindowWrapperBase@@UEAAJPEAPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180415130 (-GetWindow@UwpWindowWrapperBase@@UEAAJPEAPEAUIWindow@WindowManagement@ApplicationModel@Internal@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IWindow,wil::err_exception_policy>::copy_to<Windows::Internal::ApplicationModel::WindowManagement::IWindow>(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    *a2 = v2;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  else
  {
    *a2 = 0LL;
  }
  return result;
}
