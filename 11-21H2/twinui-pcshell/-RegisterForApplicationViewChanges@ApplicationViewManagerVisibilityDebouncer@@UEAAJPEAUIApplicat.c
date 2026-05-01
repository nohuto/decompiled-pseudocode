/*
 * XREFs of ?RegisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@UEAAJPEAUIApplicationViewChangeListener@@PEAK@Z @ 0x1801116A0
 * Callers:
 *     ?RegisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@WBA@EAAJPEAUIApplicationViewChangeListener@@PEAK@Z @ 0x1801EF080 (-RegisterForApplicationViewChanges@ApplicationViewManagerVisibilityDebouncer@@WBA@EAAJPEAUIAppli.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VAgileApplicationViewChangeListenerConverter@@UIApplicationViewChangeListener@@AEAPEAU2@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewChangeListener@@AEAPEAU3@@Z @ 0x180111718 (--$MakeAndInitialize@VAgileApplicationViewChangeListenerConverter@@UIApplicationViewChangeListen.c)
 *     ?Register@AgileRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z @ 0x180111C84 (-Register@AgileRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationViewManagerVisibilityDebouncer::RegisterForApplicationViewChanges(
        ApplicationViewManagerVisibilityDebouncer *this,
        struct IApplicationViewChangeListener *a2,
        unsigned int *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IApplicationViewChangeListener *v9; // [rsp+38h] [rbp+10h] BYREF
  struct IUnknown *v10; // [rsp+48h] [rbp+20h] BYREF

  v9 = a2;
  v10 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v10);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<AgileApplicationViewChangeListenerConverter,IApplicationViewChangeListener,IApplicationViewChangeListener * &>(
         &v10,
         &v9);
  v6 = v5;
  if ( v5 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6D,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanagervisibilitydebouncer.cpp",
      (const char *)(unsigned int)v5);
  else
    v6 = AgileRegistrationList::Register((ApplicationViewManagerVisibilityDebouncer *)((char *)this + 120), v10, a3);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v10);
  return v6;
}
