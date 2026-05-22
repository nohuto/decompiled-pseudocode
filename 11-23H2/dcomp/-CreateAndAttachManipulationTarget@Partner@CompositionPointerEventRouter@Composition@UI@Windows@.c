/*
 * XREFs of ?CreateAndAttachManipulationTarget@Partner@CompositionPointerEventRouter@Composition@UI@Windows@@UEAAJW4SystemManipulationMode@@PEAPEAUICompositionManipulationPartner@345@@Z @ 0x180153520
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?CreateAndAttachManipulationTarget@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJW4SystemManipulationMode@@PEAPEAUICompositionManipulationPartner@234@@Z @ 0x18015344C (-CreateAndAttachManipulationTarget@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJW4.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPointerEventRouter::Partner::CreateAndAttachManipulationTarget(
        __int64 a1,
        unsigned int a2,
        void **a3)
{
  __int64 v3; // rdi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  unsigned int v7; // edi
  int v8; // eax

  v3 = a1 - 136;
  v5 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 136 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*(_BYTE *)(v3 + 32) & 2) != 0 )
  {
    v8 = Windows::UI::Composition::CompositionPointerEventRouter::CreateAndAttachManipulationTarget(v3, a2, a3);
    v7 = v8;
    if ( v8 < 0 )
      DoStackCaptureDirect(v8, 0x2ECu);
    else
      v7 = 0;
  }
  else
  {
    v7 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v7;
}
