/*
 * XREFs of ?InsertAtBottom@Api@CompositionProjectedShadowCasterCollection@Composition@UI@Windows@@UEAAJPEAUICompositionProjectedShadowCaster@345@@Z @ 0x180130220
 * Callers:
 *     <none>
 * Callees:
 *     ?InsertCaster@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJPEAVCompositionProjectedShadowCaster@234@_N0@Z @ 0x180007224 (-InsertCaster@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJPEAVCompositionProjectedSh.c)
 *     ?EnsureValidState@CompositionProjectedShadowCasterCollection@Composition@UI@Windows@@UEAAJXZ @ 0x1800075F0 (-EnsureValidState@CompositionProjectedShadowCasterCollection@Composition@UI@Windows@@UEAAJXZ.c)
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionProjectedShadowCasterCollection::Api::InsertAtBottom(
        Windows::UI::Composition::CompositionProjectedShadowCasterCollection::Api *this,
        struct IUnknown *a2)
{
  Windows::UI::Composition::CompositionProjectedShadow **v2; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  unsigned int v5; // ebx
  unsigned int v6; // edx
  int v7; // ecx
  int valid; // eax
  int inserted; // eax
  unsigned int v10; // edx
  struct Microsoft::WRL2::ContextRuntimeClass *v12; // [rsp+30h] [rbp+8h] BYREF

  v2 = (Windows::UI::Composition::CompositionProjectedShadow **)((char *)this - 136);
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( ((_BYTE)v2[4] & 2) != 0 )
  {
    if ( !a2 )
    {
      v5 = -2147024809;
      v6 = 121;
      v7 = -2147024809;
LABEL_14:
      DoStackCaptureDirect(v7, v6);
      goto LABEL_15;
    }
    valid = Windows::UI::Composition::CompositionProjectedShadowCasterCollection::EnsureValidState((Windows::UI::Composition::CompositionProjectedShadowCasterCollection *)v2);
    v5 = valid;
    if ( valid < 0 )
    {
      v6 = 123;
      v7 = valid;
      goto LABEL_14;
    }
    v12 = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v12);
    inserted = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
                 (struct Microsoft::WRL2::ContextSession *)v4,
                 a2,
                 (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionProjectedShadowCaster::s_InterfaceType,
                 &v12);
    v5 = inserted;
    if ( inserted < 0 )
    {
      v10 = 126;
    }
    else
    {
      inserted = Windows::UI::Composition::CompositionProjectedShadow::InsertCaster(
                   v2[19],
                   (struct IUnknown *)v12,
                   0,
                   0LL);
      v5 = inserted;
      if ( inserted >= 0 )
      {
        v5 = 0;
LABEL_12:
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v12);
        goto LABEL_15;
      }
      v10 = 128;
    }
    DoStackCaptureDirect(inserted, v10);
    goto LABEL_12;
  }
  v5 = -2147483629;
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
LABEL_15:
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v5;
}
