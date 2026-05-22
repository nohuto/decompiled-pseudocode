/*
 * XREFs of ?TryUpdateScaleWithAnimation@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAUICompositionAnimation@456@UVector3@Numerics@Foundation@6@PEAH@Z @ 0x18013C1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?TryUpdateScaleWithAnimation@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJPEAVCompositionAnimation@345@AEAUVector3@Numerics@Foundation@5@PEAH@Z @ 0x18013C2B4 (-TryUpdateScaleWithAnimation@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJPEAVCo.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTracker::Api::TryUpdateScaleWithAnimation(
        __int64 a1,
        struct IUnknown *a2,
        struct Windows::Foundation::Numerics::Vector3 *a3,
        int *a4)
{
  Windows::UI::Composition::Interactions::InteractionTracker *v4; // rsi
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  unsigned int v9; // ebx
  int updated; // eax
  unsigned int v11; // edx
  struct Microsoft::WRL2::ContextRuntimeClass *v13[7]; // [rsp+20h] [rbp-38h] BYREF

  v4 = (Windows::UI::Composition::Interactions::InteractionTracker *)(a1 - 136);
  v6 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 136 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v6);
  if ( (*((_BYTE *)v4 + 32) & 2) != 0 )
  {
    v13[0] = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(v13);
    updated = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
                (struct Microsoft::WRL2::ContextSession *)v6,
                a2,
                (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionAnimation::s_InterfaceType,
                v13);
    v9 = updated;
    if ( updated < 0 )
    {
      v11 = 3035;
    }
    else
    {
      updated = Windows::UI::Composition::Interactions::InteractionTracker::TryUpdateScaleWithAnimation(
                  v4,
                  v13[0],
                  a3,
                  a4);
      v9 = updated;
      if ( updated >= 0 )
      {
        v9 = 0;
LABEL_9:
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(v13);
        goto LABEL_10;
      }
      v11 = 3037;
    }
    DoStackCaptureDirect(updated, v11);
    goto LABEL_9;
  }
  v9 = -2147483629;
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
LABEL_10:
  Microsoft::WRL2::ContextSession::EndApiEntry(v6);
  return v9;
}
