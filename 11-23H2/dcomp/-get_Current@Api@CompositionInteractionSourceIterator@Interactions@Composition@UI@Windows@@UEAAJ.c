/*
 * XREFs of ?get_Current@Api@CompositionInteractionSourceIterator@Interactions@Composition@UI@Windows@@UEAAJPEAPEAUICompositionInteractionSource@3456@@Z @ 0x1801A2260
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$ToApi@UICompositionInteractionSource@Interactions@Composition@UI@Windows@@@VisualInteractionSource@Interactions@Composition@UI@Windows@@SAXPEAV01234@V?$ComPtrRef@V?$ComPtr@UICompositionInteractionSource@Interactions@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1801A1FD0 (--$ToApi@UICompositionInteractionSource@Interactions@Composition@UI@Windows@@@VisualInteractionS.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::CompositionInteractionSourceIterator::Api::get_Current(
        Windows::UI::Composition::Interactions::CompositionInteractionSourceIterator::Api *this,
        struct Windows::UI::Composition::Interactions::ICompositionInteractionSource **a2)
{
  unsigned int v3; // edi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  __int64 v6; // rax
  Microsoft::WRL2::NestableRuntimeClass *v7; // r8
  __int64 v8; // rcx
  struct Windows::UI::Composition::Interactions::ICompositionInteractionSource *v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  *a2 = 0LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 2);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)this - 8) & 2) != 0 )
  {
    v6 = *((_QWORD *)this + 3);
    v7 = 0LL;
    v8 = *((unsigned int *)this + 4);
    if ( (unsigned int)v8 < *(_DWORD *)(v6 + 184) )
      v7 = *(Microsoft::WRL2::NestableRuntimeClass **)(*(_QWORD *)(v6 + 160) + 8 * v8);
    v10 = 0LL;
    Windows::UI::Composition::Interactions::VisualInteractionSource::ToApi<Windows::UI::Composition::Interactions::ICompositionInteractionSource>(
      v7,
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
