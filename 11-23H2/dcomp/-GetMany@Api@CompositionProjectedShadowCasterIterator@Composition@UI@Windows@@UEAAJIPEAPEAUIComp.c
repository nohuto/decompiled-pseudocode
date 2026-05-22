/*
 * XREFs of ?GetMany@Api@CompositionProjectedShadowCasterIterator@Composition@UI@Windows@@UEAAJIPEAPEAUICompositionProjectedShadowCaster@345@PEAI@Z @ 0x18018B2B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?GetCasterAtIndex@CompositionProjectedShadow@Composition@UI@Windows@@QEAAPEAVCompositionProjectedShadowCaster@234@I@Z @ 0x1801837B4 (-GetCasterAtIndex@CompositionProjectedShadow@Composition@UI@Windows@@QEAAPEAVCompositionProjecte.c)
 *     ??$ToApi@UICompositionProjectedShadowCaster@Composition@UI@Windows@@@CompositionProjectedShadowCaster@Composition@UI@Windows@@SAXPEAV0123@V?$ComPtrRef@V?$ComPtr@UICompositionProjectedShadowCaster@Composition@UI@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18018B268 (--$ToApi@UICompositionProjectedShadowCaster@Composition@UI@Windows@@@CompositionProjectedShadowC.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionProjectedShadowCasterIterator::Api::GetMany(
        Windows::UI::Composition::CompositionProjectedShadowCasterIterator::Api *this,
        unsigned int a2,
        struct Windows::UI::Composition::ICompositionProjectedShadowCaster **a3,
        unsigned int *a4)
{
  unsigned int v5; // edi
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  Microsoft::WRL2::NestableRuntimeClass *CasterAtIndex; // r13
  unsigned int v11; // ebp
  Windows::UI::Composition::CompositionProjectedShadow *v12; // rcx
  unsigned int v13; // edx
  struct Windows::UI::Composition::ICompositionProjectedShadowCaster *v15; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  *a4 = 0;
  v7 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 2);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v7);
  if ( (*((_BYTE *)this - 8) & 2) != 0 )
  {
    CasterAtIndex = Windows::UI::Composition::CompositionProjectedShadow::GetCasterAtIndex(
                      *((Windows::UI::Composition::CompositionProjectedShadow **)this + 3),
                      *((_DWORD *)this + 4));
    if ( CasterAtIndex )
    {
      *a4 = a2;
      v11 = 0;
      if ( a2 )
      {
        while ( 1 )
        {
          v15 = 0LL;
          Windows::UI::Composition::CompositionProjectedShadowCaster::ToApi<Windows::UI::Composition::ICompositionProjectedShadowCaster>(
            CasterAtIndex,
            (__int64 *)&v15);
          *a3 = v15;
          ++*((_DWORD *)this + 4);
          v12 = (Windows::UI::Composition::CompositionProjectedShadow *)*((_QWORD *)this + 3);
          v13 = *((_DWORD *)this + 4);
          v15 = 0LL;
          ++v11;
          CasterAtIndex = Windows::UI::Composition::CompositionProjectedShadow::GetCasterAtIndex(v12, v13);
          if ( !CasterAtIndex )
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
