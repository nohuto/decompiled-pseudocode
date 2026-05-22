/*
 * XREFs of ?get_Targets@Api@CompositionLight@Composition@UI@Windows@@UEAAJPEAPEAUIVisualUnorderedCollection@345@@Z @ 0x180008740
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize2@VVisualUnorderedCollection@Composition@UI@Windows@@V1234@AEAPEAVCompositionLight@234@PEAVVisualUnorderedCollectionImpl@234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVVisualUnorderedCollection@Composition@UI@Windows@@AEAPEAVCompositionLight@456@$$QEAPEAVVisualUnorderedCollectionImpl@456@$$QEAPEAVCompositor@456@@Z @ 0x1800087F4 (--$MakeAndInitialize2@VVisualUnorderedCollection@Composition@UI@Windows@@V1234@AEAPEAVCompositio.c)
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionLight::Api::get_Targets(
        Windows::UI::Composition::CompositionLight::Api *this,
        struct Windows::UI::Composition::IVisualUnorderedCollection **a2)
{
  char *v2; // rbp
  Microsoft::WRL2::ContextSession *v3; // rbx
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rdx
  Microsoft::WRL2::NestableRuntimeClass *v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF
  char *v13; // [rsp+60h] [rbp+18h] BYREF
  char *v14; // [rsp+68h] [rbp+20h] BYREF

  *a2 = 0LL;
  v2 = (char *)this - 144;
  v3 = (Microsoft::WRL2::ContextSession *)*((_QWORD *)this - 15);
  v14 = (char *)this - 144;
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*((_BYTE *)this - 112) & 2) != 0 )
  {
    v6 = *((_QWORD *)this - 15);
    v11 = 0LL;
    v12 = v6;
    v13 = v2 + 216;
    v7 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::VisualUnorderedCollection,Windows::UI::Composition::VisualUnorderedCollection,Windows::UI::Composition::CompositionLight * &,Windows::UI::Composition::VisualUnorderedCollectionImpl *,Windows::UI::Composition::Compositor *>(
           &v11,
           &v14,
           &v13,
           &v12);
    v8 = v7;
    if ( v7 < 0 )
    {
      DoStackCaptureDirect(v7, 0x19Fu);
      if ( v11 )
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v11);
    }
    else
    {
      v9 = ((unsigned __int64)v11 + 128) & ((unsigned __int128)-(__int128)(unsigned __int64)v11 >> 64);
      *a2 = (struct Windows::UI::Composition::IVisualUnorderedCollection *)((v9 + 8) & -(__int64)(v9 != 0));
      v8 = 0;
    }
  }
  else
  {
    v8 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return v8;
}
