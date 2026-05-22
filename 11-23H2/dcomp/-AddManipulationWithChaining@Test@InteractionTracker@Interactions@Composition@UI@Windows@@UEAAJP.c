/*
 * XREFs of ?AddManipulationWithChaining@Test@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAUICompositionManipulationPartner@456@PEAUICompositionInteractionPartner@456@_N@Z @ 0x180136CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?SetChainingModeForAxis@CompositionManipulation@Composition@UI@Windows@@QEAAXW4ScrollAxis@@W4InteractionChainingMode@Interactions@234@@Z @ 0x1800B7E42 (-SetChainingModeForAxis@CompositionManipulation@Composition@UI@Windows@@QEAAXW4ScrollAxis@@W4Int.c)
 *     ?AddManipulation@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJPEAVCompositionManipulation@345@PEAVCompositionPointerEventRouter@345@@Z @ 0x180136AB8 (-AddManipulation@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJPEAVCompositionMan.c)
 *     ?SetInertiaEnabledForAxis@CompositionManipulation@Composition@UI@Windows@@QEAAXW4ScrollAxis@@_N@Z @ 0x1801615D0 (-SetInertiaEnabledForAxis@CompositionManipulation@Composition@UI@Windows@@QEAAXW4ScrollAxis@@_N@.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTracker::Test::AddManipulationWithChaining(
        Windows::UI::Composition::Interactions::InteractionTracker::Test *this,
        struct IUnknown *a2,
        struct IUnknown *a3,
        unsigned __int8 a4)
{
  Windows::UI::Composition::Interactions::InteractionTracker *v4; // r14
  int v5; // r12d
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  unsigned int v9; // ebx
  int v10; // eax
  struct Windows::UI::Composition::CompositionManipulation *v11; // rsi
  int v12; // ebx
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // r8
  unsigned int v16; // edx
  struct Microsoft::WRL2::ContextRuntimeClass *v18[2]; // [rsp+20h] [rbp-10h] BYREF
  struct Microsoft::WRL2::ContextRuntimeClass *v19; // [rsp+60h] [rbp+30h] BYREF

  v4 = (Windows::UI::Composition::Interactions::InteractionTracker::Test *)((char *)this - 184);
  v5 = a4;
  v6 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 20);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v6);
  if ( (*((_BYTE *)v4 + 32) & 2) != 0 )
  {
    v18[0] = 0LL;
    v19 = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(v18);
    v10 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
            (struct Microsoft::WRL2::ContextSession *)v6,
            a2,
            (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionManipulation::s_InterfaceType,
            v18);
    v11 = v18[0];
    v9 = v10;
    if ( v10 < 0 )
    {
      v16 = 3388;
    }
    else
    {
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v19);
      v10 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
              (struct Microsoft::WRL2::ContextSession *)v6,
              a3,
              (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionPointerEventRouter::s_InterfaceType,
              &v19);
      v9 = v10;
      if ( v10 < 0 )
      {
        v16 = 3390;
      }
      else
      {
        v10 = Windows::UI::Composition::Interactions::InteractionTracker::AddManipulation(v4, v11, v19);
        v9 = v10;
        if ( v10 >= 0 )
        {
          v12 = (v5 ^ 1) + 1;
          Windows::UI::Composition::CompositionManipulation::SetChainingModeForAxis((__int64)v11, 0, v12);
          Windows::UI::Composition::CompositionManipulation::SetChainingModeForAxis((__int64)v11, 1, v12);
          Windows::UI::Composition::CompositionManipulation::SetChainingModeForAxis((__int64)v11, 2, v12);
          LOBYTE(v13) = 1;
          Windows::UI::Composition::CompositionManipulation::SetInertiaEnabledForAxis(v11, 0LL, v13);
          LOBYTE(v14) = 1;
          Windows::UI::Composition::CompositionManipulation::SetInertiaEnabledForAxis(v11, 1LL, v14);
          LOBYTE(v15) = 1;
          Windows::UI::Composition::CompositionManipulation::SetInertiaEnabledForAxis(v11, 2LL, v15);
          v9 = 0;
LABEL_11:
          Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v19);
          Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(v18);
          goto LABEL_12;
        }
        v16 = 3392;
      }
    }
    DoStackCaptureDirect(v10, v16);
    goto LABEL_11;
  }
  v9 = -2147483629;
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
LABEL_12:
  Microsoft::WRL2::ContextSession::EndApiEntry(v6);
  return v9;
}
