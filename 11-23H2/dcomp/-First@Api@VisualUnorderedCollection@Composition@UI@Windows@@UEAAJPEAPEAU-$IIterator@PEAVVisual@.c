/*
 * XREFs of ?First@Api@VisualUnorderedCollection@Composition@UI@Windows@@UEAAJPEAPEAU?$IIterator@PEAVVisual@Composition@UI@Windows@@@Collections@Foundation@5@@Z @ 0x1801A1D40
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??$MakeAndInitialize2@VVisualUnorderedCollectionIterator@Composition@UI@Windows@@V1234@AEAPEAVAccessor@VisualUnorderedCollectionImpl@234@AEAPEAV6234@@Details@WRL2@Microsoft@@YAJPEAPEAVVisualUnorderedCollectionIterator@Composition@UI@Windows@@AEAPEAVAccessor@VisualUnorderedCollectionImpl@456@AEAPEAV8456@@Z @ 0x1801A1B98 (--$MakeAndInitialize2@VVisualUnorderedCollectionIterator@Composition@UI@Windows@@V1234@AEAPEAVAc.c)
 *     ?EnsureValidState@VisualUnorderedCollection@Composition@UI@Windows@@UEAAJXZ @ 0x1801A1CC0 (-EnsureValidState@VisualUnorderedCollection@Composition@UI@Windows@@UEAAJXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::VisualUnorderedCollection::Api::First(__int64 a1, unsigned __int64 *a2)
{
  __int64 v2; // rsi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  unsigned int v5; // edi
  int valid; // eax
  int v7; // eax
  Microsoft::WRL2::NestableRuntimeClass *v9; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v2 = a1 - 128;
  v3 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 128 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*(_BYTE *)(v2 + 32) & 2) != 0 )
  {
    valid = Windows::UI::Composition::VisualUnorderedCollection::EnsureValidState((Windows::UI::Composition::VisualUnorderedCollection *)v2);
    v5 = valid;
    if ( valid < 0 )
    {
      DoStackCaptureDirect(valid, 0xBAu);
    }
    else
    {
      v9 = 0LL;
      v7 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::VisualUnorderedCollectionIterator,Windows::UI::Composition::VisualUnorderedCollectionIterator,Windows::UI::Composition::VisualUnorderedCollectionImpl::Accessor * &,Windows::UI::Composition::VisualUnorderedCollectionImpl * &>(
             &v9,
             (struct Windows::UI::Composition::VisualUnorderedCollectionImpl::Accessor **)(v2 + 160),
             (struct Windows::UI::Composition::VisualUnorderedCollectionImpl **)(v2 + 152));
      v5 = v7;
      if ( v7 < 0 )
      {
        DoStackCaptureDirect(v7, 0xC0u);
        if ( v9 )
          Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v9);
      }
      else
      {
        *a2 = ((unsigned __int64)v9 + 40) & -(__int64)(v9 != 0LL);
        v5 = 0;
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
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return v5;
}
