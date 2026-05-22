/*
 * XREFs of ?GetMany@Api@CompositionInteractionSourceIterator@Interactions@Composition@UI@Windows@@UEAAJIPEAPEAUICompositionInteractionSource@3456@PEAI@Z @ 0x1801A2060
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$ToApi@UICompositionInteractionSource@Interactions@Composition@UI@Windows@@@VisualInteractionSource@Interactions@Composition@UI@Windows@@SAXPEAV01234@V?$ComPtrRef@V?$ComPtr@UICompositionInteractionSource@Interactions@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1801A1FD0 (--$ToApi@UICompositionInteractionSource@Interactions@Composition@UI@Windows@@@VisualInteractionS.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::CompositionInteractionSourceIterator::Api::GetMany(
        Windows::UI::Composition::Interactions::CompositionInteractionSourceIterator::Api *this,
        unsigned int a2,
        struct Windows::UI::Composition::Interactions::ICompositionInteractionSource **a3,
        unsigned int *a4)
{
  unsigned int v5; // edi
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  unsigned int i; // ebp
  __int64 v11; // rcx
  __int64 v12; // rax
  struct Windows::UI::Composition::Interactions::ICompositionInteractionSource *v14; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  *a4 = 0;
  v7 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 2);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v7);
  if ( (*((_BYTE *)this - 8) & 2) != 0 )
  {
    for ( i = 0; i < a2; ++a3 )
    {
      v11 = *((_QWORD *)this + 3);
      v12 = *((unsigned int *)this + 4);
      if ( (unsigned int)v12 >= *(_DWORD *)(v11 + 184) )
        break;
      v14 = 0LL;
      Windows::UI::Composition::Interactions::VisualInteractionSource::ToApi<Windows::UI::Composition::Interactions::ICompositionInteractionSource>(
        *(Microsoft::WRL2::NestableRuntimeClass **)(*(_QWORD *)(v11 + 160) + 8 * v12),
        (__int64 *)&v14);
      *a3 = v14;
      ++*((_DWORD *)this + 4);
      v14 = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v14);
      ++i;
    }
    *a4 = i;
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v7);
  return v5;
}
