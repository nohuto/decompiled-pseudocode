/*
 * XREFs of ?RegisterForApplicationViewChanges@CApplicationViewManager@@UEAAJPEAUIApplicationViewChangeListener@@PEAK@Z @ 0x18013D740
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VAgileApplicationViewChangeListenerConverter@@UIApplicationViewChangeListener@@AEAPEAU2@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewChangeListener@@AEAPEAU3@@Z @ 0x18013D7C0 (--$MakeAndInitialize@VAgileApplicationViewChangeListenerConverter@@UIApplicationViewChangeListen.c)
 *     ?Register@AgileRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z @ 0x18013DA74 (-Register@AgileRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewManager::RegisterForApplicationViewChanges(
        CApplicationViewManager *this,
        struct IApplicationViewChangeListener *a2,
        unsigned int *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IApplicationViewChangeListener *v10; // [rsp+38h] [rbp+10h] BYREF
  struct IUnknown *v11; // [rsp+48h] [rbp+20h] BYREF

  v10 = a2;
  v11 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v11);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<AgileApplicationViewChangeListenerConverter,IApplicationViewChangeListener,IApplicationViewChangeListener * &>(
         &v11,
         &v10);
  v6 = v5;
  if ( v5 < 0 )
  {
    v8 = 511LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_3;
  }
  v5 = AgileRegistrationList::Register((CApplicationViewManager *)((char *)this + 96), v11, a3);
  v6 = v5;
  if ( v5 < 0 )
  {
    v8 = 513LL;
    goto LABEL_6;
  }
LABEL_3:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v11);
  return v6;
}
