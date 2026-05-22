/*
 * XREFs of ?get_SuperWetInkSource@Api@SuperWetInkVisual@Internal@Composition@UI@Windows@@UEAAJPEAPEAUICompositionSuperWetInkSource@3456@@Z @ 0x180184C00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Internal::SuperWetInkVisual::Api::get_SuperWetInkSource(
        Windows::UI::Composition::Internal::SuperWetInkVisual::Api *this,
        struct Windows::UI::Composition::Internal::ICompositionSuperWetInkSource **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v5; // edi
  Microsoft::WRL2::NestableRuntimeClass *v6; // rsi
  struct Windows::UI::Composition::Internal::ICompositionSuperWetInkSource *v7; // rax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 36);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*((_BYTE *)this - 280) & 2) != 0 )
  {
    v6 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 2);
    v5 = 0;
    v9 = 0LL;
    v7 = 0LL;
    if ( v6 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v9);
      Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(v6);
      v7 = (Microsoft::WRL2::NestableRuntimeClass *)((char *)v6 + 136);
    }
    v9 = 0LL;
    *a2 = v7;
    Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(&v9);
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v5;
}
