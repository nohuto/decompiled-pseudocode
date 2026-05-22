/*
 * XREFs of ?GetMany@Api@CompositionProjectedShadowReceiverIterator@Composition@UI@Windows@@UEAAJIPEAPEAUICompositionProjectedShadowReceiver@345@PEAI@Z @ 0x1801A34E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?GetReceiverAtIndex@CompositionProjectedShadow@Composition@UI@Windows@@QEAAPEAVCompositionProjectedShadowReceiver@234@I@Z @ 0x1801837E4 (-GetReceiverAtIndex@CompositionProjectedShadow@Composition@UI@Windows@@QEAAPEAVCompositionProjec.c)
 *     ??$ToApi@UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@CompositionProjectedShadowReceiver@Composition@UI@Windows@@SAXPEAV0123@V?$ComPtrRef@V?$ComPtr@UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1801A349C (--$ToApi@UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@CompositionProjectedShado.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionProjectedShadowReceiverIterator::Api::GetMany(
        Windows::UI::Composition::CompositionProjectedShadowReceiverIterator::Api *this,
        unsigned int a2,
        struct Windows::UI::Composition::ICompositionProjectedShadowReceiver **a3,
        unsigned int *a4)
{
  unsigned int v5; // edi
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  Microsoft::WRL2::NestableRuntimeClass *ReceiverAtIndex; // r13
  unsigned int v11; // ebp
  Windows::UI::Composition::CompositionProjectedShadow *v12; // rcx
  unsigned int v13; // edx
  struct Windows::UI::Composition::ICompositionProjectedShadowReceiver *v15; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  *a4 = 0;
  v7 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 2);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v7);
  if ( (*((_BYTE *)this - 8) & 2) != 0 )
  {
    ReceiverAtIndex = Windows::UI::Composition::CompositionProjectedShadow::GetReceiverAtIndex(
                        *((Windows::UI::Composition::CompositionProjectedShadow **)this + 3),
                        *((_DWORD *)this + 4));
    if ( ReceiverAtIndex )
    {
      *a4 = a2;
      v11 = 0;
      if ( a2 )
      {
        while ( 1 )
        {
          v15 = 0LL;
          Windows::UI::Composition::CompositionProjectedShadowReceiver::ToApi<Windows::UI::Composition::ICompositionProjectedShadowReceiver>(
            ReceiverAtIndex,
            (__int64 *)&v15);
          *a3 = v15;
          ++*((_DWORD *)this + 4);
          v12 = (Windows::UI::Composition::CompositionProjectedShadow *)*((_QWORD *)this + 3);
          v13 = *((_DWORD *)this + 4);
          v15 = 0LL;
          ++v11;
          ReceiverAtIndex = Windows::UI::Composition::CompositionProjectedShadow::GetReceiverAtIndex(v12, v13);
          if ( !ReceiverAtIndex )
            break;
          Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v15);
          ++a3;
          if ( v11 >= a2 )
            goto LABEL_9;
        }
        *a4 = v11;
        Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)&v15);
      }
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
LABEL_9:
  Microsoft::WRL2::ContextSession::EndApiEntry(v7);
  return v5;
}
