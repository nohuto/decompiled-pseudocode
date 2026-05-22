/*
 * XREFs of ?CreateAndAttachManipulationTarget@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJW4SystemManipulationMode@@PEAPEAUICompositionManipulationPartner@234@@Z @ 0x18015344C
 * Callers:
 *     ?RuntimeClassInitialize@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAJPEAVVisual@345@_N@Z @ 0x18011DB7C (-RuntimeClassInitialize@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAJPEAVVi.c)
 *     ?CreateAndAttachManipulationTarget@Partner@CompositionPointerEventRouter@Composition@UI@Windows@@UEAAJW4SystemManipulationMode@@PEAPEAUICompositionManipulationPartner@345@@Z @ 0x180153520 (-CreateAndAttachManipulationTarget@Partner@CompositionPointerEventRouter@Composition@UI@Windows@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ?EnsureNotReadOnly@CompositionPointerEventRouter@Composition@UI@Windows@@AEAAJXZ @ 0x18006D8DC (-EnsureNotReadOnly@CompositionPointerEventRouter@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?InternalQueryInterface@NestableRuntimeClass@WRL2@Microsoft@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180074FB0 (-InternalQueryInterface@NestableRuntimeClass@WRL2@Microsoft@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$MakeAndInitialize2@VCompositionManipulation@Composition@UI@Windows@@V1234@PEAVCompositor@234@AEAW4SystemManipulationMode@@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionManipulation@Composition@UI@Windows@@$$QEAPEAVCompositor@456@AEAW4SystemManipulationMode@@@Z @ 0x1801530C4 (--$MakeAndInitialize2@VCompositionManipulation@Composition@UI@Windows@@V1234@PEAVCompositor@234@.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPointerEventRouter::CreateAndAttachManipulationTarget(
        __int64 a1,
        unsigned int a2,
        void **a3)
{
  int Only; // ebx
  __int64 v6; // rdx
  Microsoft::WRL2::NestableRuntimeClass **v8; // rsi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v10; // [rsp+48h] [rbp+10h] BYREF
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v10 = a2;
  Only = Windows::UI::Composition::CompositionPointerEventRouter::EnsureNotReadOnly((Windows::UI::Composition::CompositionPointerEventRouter *)a1);
  if ( Only < 0 )
  {
    v6 = 265LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtpointereventrouter.cpp",
      (const char *)(unsigned int)Only);
    return (unsigned int)Only;
  }
  v8 = (Microsoft::WRL2::NestableRuntimeClass **)(a1 + 152);
  v11 = *(_QWORD *)(a1 + 24);
  Only = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionManipulation,Windows::UI::Composition::CompositionManipulation,Windows::UI::Composition::Compositor *,enum SystemManipulationMode &>(
           (Microsoft::WRL2::NestableRuntimeClass **)(a1 + 152),
           &v11,
           &v10);
  if ( Only < 0 )
  {
    v6 = 270LL;
    goto LABEL_3;
  }
  DirectComposition::CDevice::ResourceSetReferenceProperty(
    *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
    *(_DWORD *)(a1 + 128),
    12,
    *((_DWORD *)*v8 + 32));
  Only = Microsoft::WRL2::NestableRuntimeClass::InternalQueryInterface(
           *v8,
           &GUID_815fb490_30ee_4037_8d01_b56d9b3436d7,
           a3);
  if ( Only < 0 )
  {
    v6 = 276LL;
    goto LABEL_3;
  }
  return 0LL;
}
