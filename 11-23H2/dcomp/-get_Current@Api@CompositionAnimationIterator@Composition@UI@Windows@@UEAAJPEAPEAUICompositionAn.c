/*
 * XREFs of ?get_Current@Api@CompositionAnimationIterator@Composition@UI@Windows@@UEAAJPEAPEAUICompositionAnimation@345@@Z @ 0x180195680
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800577F0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureVersionMatches@CompositionAnimationIterator@Composition@UI@Windows@@QEAAJXZ @ 0x1801954CC (-EnsureVersionMatches@CompositionAnimationIterator@Composition@UI@Windows@@QEAAJXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionAnimationIterator::Api::get_Current(
        Windows::UI::Composition::CompositionAnimationIterator::Api *this,
        struct Windows::UI::Composition::ICompositionAnimation **a2)
{
  Windows::UI::Composition::CompositionAnimationIterator *v2; // rsi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  unsigned int v5; // edi
  signed int v6; // eax
  __int64 v7; // rdi
  struct Windows::UI::Composition::ICompositionAnimation *v8; // rax
  Microsoft::WRL2::NestableRuntimeClass *v9; // rdi
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  v2 = (Windows::UI::Composition::CompositionAnimationIterator::Api *)((char *)this - 40);
  v3 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 2);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    v6 = Windows::UI::Composition::CompositionAnimationIterator::EnsureVersionMatches(v2);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(4u, &dword_1801FE5F0, 2u, v6, 0x6Du, 0LL);
    }
    else
    {
      v7 = *((_QWORD *)v2 + 8);
      if ( v7 )
      {
        v11 = 0LL;
        v8 = 0LL;
        v9 = *(Microsoft::WRL2::NestableRuntimeClass **)(v7 + 16);
        if ( v9 )
        {
          Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v11);
          Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(v9);
          v8 = (Microsoft::WRL2::NestableRuntimeClass *)((char *)v9 + 128);
        }
        v11 = 0LL;
        *a2 = v8;
        Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v11);
      }
      v5 = 0;
    }
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return v5;
}
