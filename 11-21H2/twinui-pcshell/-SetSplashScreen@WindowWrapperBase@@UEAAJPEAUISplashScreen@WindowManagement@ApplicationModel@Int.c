/*
 * XREFs of ?SetSplashScreen@WindowWrapperBase@@UEAAJPEAUISplashScreen@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18015A200
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowWrapperBase::SetSplashScreen(
        WindowWrapperBase *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::ISplashScreen *a2)
{
  __int64 v4; // rdi

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 33) + 216LL))(*((_QWORD *)this + 33));
  v4 = *((_QWORD *)this + 34);
  *((_QWORD *)this + 34) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::ISplashScreen *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return 0LL;
}
