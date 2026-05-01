/*
 * XREFs of ?FlushStashedWindowingEnvironmentSettings@WindowWrapperBase@@UEAAJPEAPEAUIWindowingEnvironmentSettings@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180040190
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowWrapperBase::FlushStashedWindowingEnvironmentSettings(
        WindowWrapperBase *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings **a2)
{
  char *v2; // rbx
  struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings *v3; // rcx
  __int64 v4; // rcx

  v2 = (char *)this - 16;
  v3 = (struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings *)*((_QWORD *)this + 16);
  if ( v3 )
  {
    *a2 = v3;
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings *))(*(_QWORD *)v3 + 8LL))(v3);
  }
  else
  {
    *a2 = 0LL;
  }
  v4 = *((_QWORD *)v2 + 18);
  *((_QWORD *)v2 + 18) = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return 0LL;
}
