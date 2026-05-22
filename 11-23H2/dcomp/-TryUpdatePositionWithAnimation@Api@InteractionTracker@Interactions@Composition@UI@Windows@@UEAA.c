/*
 * XREFs of ?TryUpdatePositionWithAnimation@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAUICompositionAnimation@456@PEAH@Z @ 0x18013BB00
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?TryUpdatePositionWithAnimation@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJPEAVCompositionAnimation@345@PEAH@Z @ 0x18013BBE0 (-TryUpdatePositionWithAnimation@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAJPEA.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTracker::Api::TryUpdatePositionWithAnimation(
        Windows::UI::Composition::Interactions::InteractionTracker::Api *this,
        struct IUnknown *a2,
        int *a3)
{
  Windows::UI::Composition::Interactions::InteractionTracker *v3; // rsi
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  unsigned int v7; // ebx
  int updated; // eax
  unsigned int v9; // edx
  struct Microsoft::WRL2::ContextRuntimeClass *v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = (Windows::UI::Composition::Interactions::InteractionTracker::Api *)((char *)this - 136);
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)v3 + 32) & 2) != 0 )
  {
    v11 = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v11);
    updated = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
                (struct Microsoft::WRL2::ContextSession *)v5,
                a2,
                (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionAnimation::s_InterfaceType,
                &v11);
    v7 = updated;
    if ( updated < 0 )
    {
      v9 = 2971;
    }
    else
    {
      updated = Windows::UI::Composition::Interactions::InteractionTracker::TryUpdatePositionWithAnimation(v3, v11, a3);
      v7 = updated;
      if ( updated >= 0 )
      {
        v7 = 0;
LABEL_9:
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v11);
        goto LABEL_10;
      }
      v9 = 2973;
    }
    DoStackCaptureDirect(updated, v9);
    goto LABEL_9;
  }
  v7 = -2147483629;
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
LABEL_10:
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v7;
}
