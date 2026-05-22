/*
 * XREFs of ?get_InteractionSources@Api@InteractionTracker@Interactions@Composition@UI@Windows@@UEAAJPEAPEAUICompositionInteractionSourceCollection@3456@@Z @ 0x18013C7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?GetInteractionSourceCollection@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAPEAVCompositionInteractionSourceCollection@2345@XZ @ 0x1801396F8 (-GetInteractionSourceCollection@InteractionTracker@Interactions@Composition@UI@Windows@@QEAAPEAV.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::InteractionTracker::Api::get_InteractionSources(
        Windows::UI::Composition::Interactions::InteractionTracker::Api *this,
        struct Windows::UI::Composition::Interactions::ICompositionInteractionSourceCollection **a2)
{
  Windows::UI::Composition::Interactions::InteractionTracker *v2; // rsi
  unsigned int v3; // edi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  Microsoft::WRL2::NestableRuntimeClass *InteractionSourceCollection; // rsi
  struct Windows::UI::Composition::Interactions::ICompositionInteractionSourceCollection *v7; // rax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = (Windows::UI::Composition::Interactions::InteractionTracker::Api *)((char *)this - 136);
  v3 = 0;
  *a2 = 0LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    v9 = 0LL;
    InteractionSourceCollection = Windows::UI::Composition::Interactions::InteractionTracker::GetInteractionSourceCollection(v2);
    v7 = 0LL;
    if ( InteractionSourceCollection )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v9);
      Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(InteractionSourceCollection);
      v7 = (struct Windows::UI::Composition::Interactions::ICompositionInteractionSourceCollection *)(((unsigned __int64)InteractionSourceCollection + 136) & -(__int64)((Microsoft::WRL2::NestableRuntimeClass *)((char *)InteractionSourceCollection + 128) != 0LL));
    }
    v9 = 0LL;
    *a2 = v7;
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v9);
  }
  else
  {
    v3 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v3;
}
