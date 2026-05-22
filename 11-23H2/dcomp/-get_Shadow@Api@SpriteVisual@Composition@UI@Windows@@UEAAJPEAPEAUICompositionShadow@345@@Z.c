/*
 * XREFs of ?get_Shadow@Api@SpriteVisual@Composition@UI@Windows@@UEAAJPEAPEAUICompositionShadow@345@@Z @ 0x18017BFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?GetReference@CSparseStorage@@QEBAPEAXI@Z @ 0x18007CDA8 (-GetReference@CSparseStorage@@QEBAPEAXI@Z.c)
 *     ??$ToApi@UICompositionShadow@Composition@UI@Windows@@@CompositionShadow@Composition@UI@Windows@@SAXPEAV0123@V?$ComPtrRef@V?$ComPtr@UICompositionShadow@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180179F9C (--$ToApi@UICompositionShadow@Composition@UI@Windows@@@CompositionShadow@Composition@UI@Windows@@.c)
 */

__int64 __fastcall Windows::UI::Composition::SpriteVisual::Api::get_Shadow(
        Windows::UI::Composition::SpriteVisual::Api *this,
        struct Windows::UI::Composition::ICompositionShadow **a2)
{
  unsigned int v3; // edi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  Microsoft::WRL2::NestableRuntimeClass *Reference; // rax
  struct Windows::UI::Composition::ICompositionShadow *v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  *a2 = 0LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 37);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)this - 288) & 2) != 0 )
  {
    v8 = 0LL;
    Reference = (Microsoft::WRL2::NestableRuntimeClass *)CSparseStorage::GetReference(
                                                           (Windows::UI::Composition::SpriteVisual::Api *)((char *)this - 208),
                                                           16);
    Windows::UI::Composition::CompositionShadow::ToApi<Windows::UI::Composition::ICompositionShadow>(
      Reference,
      (__int64 *)&v8);
    *a2 = v8;
    v8 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v8);
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
