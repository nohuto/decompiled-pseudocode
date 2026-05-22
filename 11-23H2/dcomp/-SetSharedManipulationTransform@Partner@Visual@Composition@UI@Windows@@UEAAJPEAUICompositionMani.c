/*
 * XREFs of ?SetSharedManipulationTransform@Partner@Visual@Composition@UI@Windows@@UEAAJPEAUICompositionManipulationTransformPartner@345@@Z @ 0x180081EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z @ 0x18002BDA8 (-ResourceSetReferenceProperty@CDevice@DirectComposition@@QEAAXIII@Z.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?GetManipulationTransformHandle@ManipulationTransform@Composition@UI@Windows@@QEAAIXZ @ 0x18008244C (-GetManipulationTransformHandle@ManipulationTransform@Composition@UI@Windows@@QEAAIXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::Partner::SetSharedManipulationTransform(
        Windows::UI::Composition::Visual::Partner *this,
        struct IUnknown *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  int v5; // eax
  unsigned int v6; // ebx
  int ManipulationTransformHandle; // eax
  Windows::UI::Composition::ManipulationTransform *v9; // rcx
  Windows::UI::Composition::ManipulationTransform *v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*((_BYTE *)this - 184) & 2) == 0 )
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    goto LABEL_4;
  }
  v5 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
         (struct Microsoft::WRL2::ContextSession *)v2,
         a2,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::ManipulationTransform::s_InterfaceType,
         &v10);
  v6 = v5;
  if ( v5 < 0 )
  {
    DoStackCaptureDirect(v5, 0xC99u);
    v9 = v10;
    if ( !v10 )
      goto LABEL_4;
    goto LABEL_6;
  }
  ManipulationTransformHandle = Windows::UI::Composition::ManipulationTransform::GetManipulationTransformHandle(v10);
  DirectComposition::CDevice::ResourceSetReferenceProperty(
    *(DirectComposition::CDevice **)(*((_QWORD *)this - 24) + 456LL),
    *((_DWORD *)this - 22),
    3,
    ManipulationTransformHandle);
  v6 = 0;
  if ( v10 )
  {
    v9 = v10;
LABEL_6:
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v9);
  }
LABEL_4:
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v6;
}
