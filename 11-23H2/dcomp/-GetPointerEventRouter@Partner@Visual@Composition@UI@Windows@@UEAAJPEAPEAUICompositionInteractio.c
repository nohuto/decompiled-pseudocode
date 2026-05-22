/*
 * XREFs of ?GetPointerEventRouter@Partner@Visual@Composition@UI@Windows@@UEAAJPEAPEAUICompositionInteractionPartner@345@@Z @ 0x18001EBA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ??$ToPartner@UICompositionInteractionPartner@Composition@UI@Windows@@@CompositionPointerEventRouter@Composition@UI@Windows@@SAXPEAV0123@V?$ComPtrRef@V?$ComPtr@UICompositionInteractionPartner@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18001EC48 (--$ToPartner@UICompositionInteractionPartner@Composition@UI@Windows@@@CompositionPointerEventRou.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?GetReference@CSparseStorage@@QEBAPEAXI@Z @ 0x18007CDA8 (-GetReference@CSparseStorage@@QEBAPEAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::Partner::GetPointerEventRouter(
        Windows::UI::Composition::Visual::Partner *this,
        struct Windows::UI::Composition::ICompositionInteractionPartner **a2)
{
  Microsoft::WRL2::ContextSession *v2; // rdi
  Microsoft::WRL2::NestableRuntimeClass *Reference; // rax
  unsigned int v6; // esi
  Microsoft::WRL2::NestableRuntimeClass *v7; // rbx
  struct Windows::UI::Composition::ICompositionInteractionPartner *v9; // [rsp+40h] [rbp+8h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v10; // [rsp+50h] [rbp+18h] BYREF

  v2 = (Microsoft::WRL2::ContextSession *)*((_QWORD *)this - 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*((_BYTE *)this - 184) & 2) != 0 )
  {
    Reference = (Microsoft::WRL2::NestableRuntimeClass *)CSparseStorage::GetReference(
                                                           (Windows::UI::Composition::Visual::Partner *)((char *)this - 104),
                                                           7u);
    v6 = 0;
    v10 = Reference;
    v7 = Reference;
    if ( Reference )
      Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(Reference);
    v9 = 0LL;
    Windows::UI::Composition::CompositionPointerEventRouter::ToPartner<Windows::UI::Composition::ICompositionInteractionPartner>(v7);
    *a2 = v9;
    v9 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v9);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v10);
  }
  else
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v6;
}
