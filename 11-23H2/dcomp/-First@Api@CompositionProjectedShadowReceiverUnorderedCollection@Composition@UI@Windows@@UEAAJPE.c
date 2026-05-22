/*
 * XREFs of ?First@Api@CompositionProjectedShadowReceiverUnorderedCollection@Composition@UI@Windows@@UEAAJPEAPEAU?$IIterator@PEAVCompositionProjectedShadowReceiver@Composition@UI@Windows@@@Collections@Foundation@5@@Z @ 0x1801A1740
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureValidState@CompositionProjectedShadowReceiverUnorderedCollection@Composition@UI@Windows@@UEAAJXZ @ 0x180006F60 (-EnsureValidState@CompositionProjectedShadowReceiverUnorderedCollection@Composition@UI@Windows@@.c)
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??$MakeAndInitialize2@VCompositionProjectedShadowReceiverIterator@Composition@UI@Windows@@V1234@PEAVCompositionProjectedShadow@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositionProjectedShadowReceiverIterator@Composition@UI@Windows@@$$QEAPEAVCompositionProjectedShadow@456@@Z @ 0x1801A166C (--$MakeAndInitialize2@VCompositionProjectedShadowReceiverIterator@Composition@UI@Windows@@V1234@.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionProjectedShadowReceiverUnorderedCollection::Api::First(
        __int64 a1,
        unsigned __int64 *a2)
{
  __int64 v2; // rsi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  unsigned int v5; // edi
  int valid; // eax
  struct Windows::UI::Composition::CompositionProjectedShadow *v7; // rax
  int v8; // eax
  Microsoft::WRL2::NestableRuntimeClass *v10; // [rsp+40h] [rbp+8h] BYREF
  struct Windows::UI::Composition::CompositionProjectedShadow *v11; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  v2 = a1 - 128;
  v3 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 128 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*(_BYTE *)(v2 + 32) & 2) != 0 )
  {
    valid = Windows::UI::Composition::CompositionProjectedShadowReceiverUnorderedCollection::EnsureValidState((Windows::UI::Composition::CompositionProjectedShadowReceiverUnorderedCollection *)v2);
    v5 = valid;
    if ( valid < 0 )
    {
      DoStackCaptureDirect(valid, 0xA8u);
    }
    else
    {
      v7 = *(struct Windows::UI::Composition::CompositionProjectedShadow **)(v2 + 152);
      v10 = 0LL;
      v11 = v7;
      v8 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::CompositionProjectedShadowReceiverIterator,Windows::UI::Composition::CompositionProjectedShadowReceiverIterator,Windows::UI::Composition::CompositionProjectedShadow *>(
             &v10,
             &v11);
      v5 = v8;
      if ( v8 < 0 )
      {
        DoStackCaptureDirect(v8, 0xADu);
        if ( v10 )
          Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v10);
      }
      else
      {
        *a2 = ((unsigned __int64)v10 + 40) & -(__int64)(v10 != 0LL);
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
