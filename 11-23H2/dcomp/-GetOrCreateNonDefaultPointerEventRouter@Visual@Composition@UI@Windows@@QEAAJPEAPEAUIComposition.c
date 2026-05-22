/*
 * XREFs of ?GetOrCreateNonDefaultPointerEventRouter@Visual@Composition@UI@Windows@@QEAAJPEAPEAUICompositionInteractionPartner@234@@Z @ 0x18001CA44
 * Callers:
 *     ?GetOrCreateNonDefaultPointerEventRouter@Partner@Visual@Composition@UI@Windows@@UEAAJPEAPEAUICompositionInteractionPartner@345@@Z @ 0x18001C110 (-GetOrCreateNonDefaultPointerEventRouter@Partner@Visual@Composition@UI@Windows@@UEAAJPEAPEAUICom.c)
 *     ?RuntimeClassInitialize@CompositionHoverPointerSource@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVVisual@234@@Z @ 0x18008923C (-RuntimeClassInitialize@CompositionHoverPointerSource@Composition@UI@Windows@@QEAAJPEAVComposito.c)
 *     ?RuntimeClassInitialize@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAJPEAVVisual@345@_N@Z @ 0x18011DB7C (-RuntimeClassInitialize@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAJPEAVVi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ??$MakeAndInitialize2@VCompositionPointerEventRouter@Composition@UI@Windows@@V1234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionPointerEventRouter@Composition@UI@Windows@@$$QEAPEAVCompositor@456@@Z @ 0x18001CB34 (--$MakeAndInitialize2@VCompositionPointerEventRouter@Composition@UI@Windows@@V1234@PEAVComposito.c)
 *     ??$ToPartner@UICompositionInteractionPartner@Composition@UI@Windows@@@CompositionPointerEventRouter@Composition@UI@Windows@@SAXPEAV0123@V?$ComPtrRef@V?$ComPtr@UICompositionInteractionPartner@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18001EC48 (--$ToPartner@UICompositionInteractionPartner@Composition@UI@Windows@@@CompositionPointerEventRou.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ?SetReference@CSparseStorage@@QEAAXIPEAXPEBVReferenceAdapter@1@@Z @ 0x180078828 (-SetReference@CSparseStorage@@QEAAXIPEAXPEBVReferenceAdapter@1@@Z.c)
 *     ?GetReference@CSparseStorage@@QEBAPEAXI@Z @ 0x18007CDA8 (-GetReference@CSparseStorage@@QEBAPEAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     McTemplateU0qqqxx_EventWriteTransfer @ 0x1800F7044 (McTemplateU0qqqxx_EventWriteTransfer.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::GetOrCreateNonDefaultPointerEventRouter(
        Windows::UI::Composition::Visual *this,
        struct Windows::UI::Composition::ICompositionInteractionPartner **a2)
{
  Microsoft::WRL2::NestableRuntimeClass *Reference; // rax
  Microsoft::WRL2::NestableRuntimeClass *v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  struct Windows::UI::Composition::ICompositionInteractionPartner *v8; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct Windows::UI::Composition::ICompositionInteractionPartner *v11; // [rsp+60h] [rbp+8h] BYREF
  Microsoft::WRL2::NestableRuntimeClass *v12; // [rsp+70h] [rbp+18h] BYREF
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  Reference = (Microsoft::WRL2::NestableRuntimeClass *)CSparseStorage::GetReference(
                                                         (Windows::UI::Composition::Visual *)((char *)this + 112),
                                                         7u);
  v12 = Reference;
  v5 = Reference;
  if ( !Reference || (Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(Reference), (*((_BYTE *)v5 + 176) & 1) != 0) )
  {
    v13 = *((_QWORD *)this + 3);
    v6 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionPointerEventRouter,Windows::UI::Composition::CompositionPointerEventRouter,Windows::UI::Composition::Compositor *>(
           &v12,
           &v13);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4BF,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisual.cpp",
        (const char *)(unsigned int)v6);
      goto LABEL_7;
    }
    v5 = v12;
    if ( (Microsoft_Windows_DirectCompositionEnableBits & 0x80u) != 0 )
      McTemplateU0qqqxx_EventWriteTransfer(
        *((_DWORD *)v12 + 32),
        0,
        *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 456LL) + 160LL),
        *((_DWORD *)this + 32),
        *((_DWORD *)v12 + 32),
        *((_DWORD *)this + 32),
        *((_DWORD *)v12 + 32));
    DirectComposition::CDevice::ResourceSetReferenceProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      0x16u,
      *((_DWORD *)v5 + 32));
    CSparseStorage::SetReference(
      (Windows::UI::Composition::Visual *)((char *)this + 112),
      7u,
      v5,
      (const struct CSparseStorage::ReferenceAdapter *)&Windows::UI::Composition::SparsePropertyStore::g_adapter_NestableRuntimeClass);
  }
  v11 = 0LL;
  Windows::UI::Composition::CompositionPointerEventRouter::ToPartner<Windows::UI::Composition::ICompositionInteractionPartner>(v5);
  v8 = v11;
  v11 = 0LL;
  *a2 = v8;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v11);
  v7 = 0;
LABEL_7:
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v12);
  return v7;
}
