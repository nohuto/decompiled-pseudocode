/*
 * XREFs of ?get_Receivers@Api@CompositionProjectedShadow@Composition@UI@Windows@@UEAAJPEAPEAUICompositionProjectedShadowReceiverUnorderedCollection@345@@Z @ 0x180008420
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize2@VCompositionProjectedShadowReceiverUnorderedCollection@Composition@UI@Windows@@V1234@AEAPEAVCompositionProjectedShadow@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionProjectedShadowReceiverUnorderedCollection@Composition@UI@Windows@@AEAPEAVCompositionProjectedShadow@456@@Z @ 0x1800084C4 (--$MakeAndInitialize2@VCompositionProjectedShadowReceiverUnorderedCollection@Composition@UI@Wind.c)
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionProjectedShadow::Api::get_Receivers(
        Windows::UI::Composition::CompositionProjectedShadow::Api *this,
        struct Windows::UI::Composition::ICompositionProjectedShadowReceiverUnorderedCollection **a2)
{
  Microsoft::WRL2::ContextSession *v2; // rbx
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rdx
  Microsoft::WRL2::NestableRuntimeClass *v9; // [rsp+30h] [rbp+8h] BYREF
  char *v10; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v2 = (Microsoft::WRL2::ContextSession *)*((_QWORD *)this - 14);
  v10 = (char *)this - 136;
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*((_BYTE *)this - 104) & 2) != 0 )
  {
    v9 = 0LL;
    v5 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionProjectedShadowReceiverUnorderedCollection,Windows::UI::Composition::CompositionProjectedShadowReceiverUnorderedCollection,Windows::UI::Composition::CompositionProjectedShadow * &>(
           &v9,
           &v10);
    v6 = v5;
    if ( v5 < 0 )
    {
      DoStackCaptureDirect(v5, 0x282u);
      if ( v9 )
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v9);
    }
    else
    {
      v7 = ((unsigned __int64)v9 + 128) & ((unsigned __int128)-(__int128)(unsigned __int64)v9 >> 64);
      *a2 = (struct Windows::UI::Composition::ICompositionProjectedShadowReceiverUnorderedCollection *)((v7 + 8) & -(__int64)(v7 != 0));
      v6 = 0;
    }
  }
  else
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v6;
}
