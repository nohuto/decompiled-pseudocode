/*
 * XREFs of ?get_WindowingEnvironmentSettings@ViewEventArgsForShowAsStandalone@@UEAAJPEAPEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800401F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewEventArgsForShowAsStandalone::get_WindowingEnvironmentSettings(
        ViewEventArgsForShowAsStandalone *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings **a2)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings *v2; // rcx

  *a2 = 0LL;
  v2 = (struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings *)*((_QWORD *)this + 9);
  if ( v2 )
  {
    *a2 = v2;
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings *))(*(_QWORD *)v2 + 8LL))(v2);
  }
  return 0LL;
}
