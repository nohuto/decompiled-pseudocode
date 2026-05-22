/*
 * XREFs of ?get_ExclusionsFromTargets@Api@CompositionLight@Composition@UI@Windows@@UEAAJPEAPEAUIVisualUnorderedCollection@345@@Z @ 0x18018AA50
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize2@VVisualUnorderedCollection@Composition@UI@Windows@@V1234@AEAPEAVCompositionLight@234@PEAVVisualUnorderedCollectionImpl@234@PEAVCompositor@234@@Details@WRL2@Microsoft@@YAJPEAPEAVVisualUnorderedCollection@Composition@UI@Windows@@AEAPEAVCompositionLight@456@$$QEAPEAVVisualUnorderedCollectionImpl@456@$$QEAPEAVCompositor@456@@Z @ 0x1800087F4 (--$MakeAndInitialize2@VVisualUnorderedCollection@Composition@UI@Windows@@V1234@AEAPEAVCompositio.c)
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionLight::Api::get_ExclusionsFromTargets(
        Windows::UI::Composition::CompositionLight::Api *this,
        struct Windows::UI::Composition::IVisualUnorderedCollection **a2)
{
  char *v2; // rbp
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  unsigned int v6; // edi
  struct Windows::UI::Composition::Compositor *v7; // rax
  int v8; // eax
  __int64 v9; // rdx
  Microsoft::WRL2::NestableRuntimeClass *v11; // [rsp+50h] [rbp+8h] BYREF
  struct Windows::UI::Composition::Compositor *v12; // [rsp+58h] [rbp+10h] BYREF
  struct Windows::UI::Composition::VisualUnorderedCollectionImpl *v13; // [rsp+60h] [rbp+18h] BYREF
  unsigned __int64 v14; // [rsp+68h] [rbp+20h] BYREF

  *a2 = 0LL;
  v2 = (char *)this - 152;
  v3 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 16);
  v14 = (unsigned __int64)this - 152;
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*((_BYTE *)this - 120) & 2) != 0 )
  {
    v7 = (struct Windows::UI::Composition::Compositor *)*((_QWORD *)this - 16);
    v11 = 0LL;
    v12 = v7;
    v13 = (struct Windows::UI::Composition::VisualUnorderedCollectionImpl *)(v2 + 176);
    v8 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::VisualUnorderedCollection,Windows::UI::Composition::VisualUnorderedCollection,Windows::UI::Composition::CompositionLight * &,Windows::UI::Composition::VisualUnorderedCollectionImpl *,Windows::UI::Composition::Compositor *>(
           &v11,
           &v14,
           &v13,
           &v12);
    v6 = v8;
    if ( v8 < 0 )
    {
      DoStackCaptureDirect(v8, 0x1BFu);
      if ( v11 )
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v11);
    }
    else
    {
      v9 = ((unsigned __int64)v11 + 128) & ((unsigned __int128)-(__int128)(unsigned __int64)v11 >> 64);
      *a2 = (struct Windows::UI::Composition::IVisualUnorderedCollection *)((v9 + 8) & -(__int64)(v9 != 0));
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
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return v6;
}
