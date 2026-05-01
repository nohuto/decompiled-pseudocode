/*
 * XREFs of ?get_RelativePositionAnchorView@UwpWindowingEnvironmentSettings@@UEAAJPEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1804CD7A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$copy_to@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBAXPEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1804BB200 (--$copy_to@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIViewWrapper@V.c)
 */

__int64 __fastcall UwpWindowingEnvironmentSettings::get_RelativePositionAnchorView(
        UwpWindowingEnvironmentSettings *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **a2)
{
  *a2 = 0LL;
  if ( !*((_BYTE *)this + 92) )
    return 2147943568LL;
  wil::com_ptr_t<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper,wil::err_exception_policy>::copy_to<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
    (__int64 *)this + 13,
    a2);
  return 0LL;
}
