/*
 * XREFs of ?get_Current@Api@CompositionProjectedShadowCasterIterator@Composition@UI@Windows@@UEAAJPEAPEAUICompositionProjectedShadowCaster@345@@Z @ 0x18018B4D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?GetCasterAtIndex@CompositionProjectedShadow@Composition@UI@Windows@@QEAAPEAVCompositionProjectedShadowCaster@234@I@Z @ 0x1801837B4 (-GetCasterAtIndex@CompositionProjectedShadow@Composition@UI@Windows@@QEAAPEAVCompositionProjecte.c)
 *     ??$ToApi@UICompositionProjectedShadowCaster@Composition@UI@Windows@@@CompositionProjectedShadowCaster@Composition@UI@Windows@@SAXPEAV0123@V?$ComPtrRef@V?$ComPtr@UICompositionProjectedShadowCaster@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18018B268 (--$ToApi@UICompositionProjectedShadowCaster@Composition@UI@Windows@@@CompositionProjectedShadowC.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionProjectedShadowCasterIterator::Api::get_Current(
        Windows::UI::Composition::CompositionProjectedShadowCasterIterator::Api *this,
        struct Windows::UI::Composition::ICompositionProjectedShadowCaster **a2)
{
  unsigned int v3; // edi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  Windows::UI::Composition::CompositionProjectedShadow *v6; // rcx
  unsigned int v7; // edx
  Microsoft::WRL2::NestableRuntimeClass *CasterAtIndex; // rax
  struct Windows::UI::Composition::ICompositionProjectedShadowCaster *v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  *a2 = 0LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 2);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)this - 8) & 2) != 0 )
  {
    v6 = (Windows::UI::Composition::CompositionProjectedShadow *)*((_QWORD *)this + 3);
    v7 = *((_DWORD *)this + 4);
    v10 = 0LL;
    CasterAtIndex = Windows::UI::Composition::CompositionProjectedShadow::GetCasterAtIndex(v6, v7);
    Windows::UI::Composition::CompositionProjectedShadowCaster::ToApi<Windows::UI::Composition::ICompositionProjectedShadowCaster>(
      CasterAtIndex,
      (__int64 *)&v10);
    *a2 = v10;
    v10 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v10);
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
