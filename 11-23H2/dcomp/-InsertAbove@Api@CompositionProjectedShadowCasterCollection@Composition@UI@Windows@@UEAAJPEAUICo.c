/*
 * XREFs of ?InsertAbove@Api@CompositionProjectedShadowCasterCollection@Composition@UI@Windows@@UEAAJPEAUICompositionProjectedShadowCaster@345@0@Z @ 0x1801300A0
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

__int64 __fastcall Windows::UI::Composition::CompositionProjectedShadowCasterCollection::Api::InsertAbove(
        Windows::UI::Composition::CompositionProjectedShadowCasterCollection::Api *this,
        struct IUnknown *a2,
        struct IUnknown *a3)
{
  Windows::UI::Composition::CompositionProjectedShadow **v3; // rdi
  struct _RTL_CRITICAL_SECTION *v5; // rsi
  unsigned int v7; // ebx
  int v8; // ecx
  unsigned int v9; // edx
  int valid; // eax
  int v11; // eax
  struct IUnknown *v12; // r14
  int inserted; // eax
  unsigned int v14; // edx
  struct Microsoft::WRL2::ContextRuntimeClass *v16; // [rsp+50h] [rbp+30h] BYREF
  struct Microsoft::WRL2::ContextRuntimeClass *v17; // [rsp+68h] [rbp+48h] BYREF

  v3 = (Windows::UI::Composition::CompositionProjectedShadow **)((char *)this - 136);
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( ((_BYTE)v3[4] & 2) != 0 )
  {
    if ( !a2 )
    {
      v8 = -2147024809;
      v9 = 90;
      v7 = -2147024809;
LABEL_19:
      DoStackCaptureDirect(v8, v9);
      goto LABEL_20;
    }
    if ( !a3 )
    {
      v8 = -2147024809;
      v9 = 91;
      v7 = -2147024809;
      goto LABEL_19;
    }
    valid = Windows::UI::Composition::CompositionProjectedShadowCasterCollection::EnsureValidState((Windows::UI::Composition::CompositionProjectedShadowCasterCollection *)v3);
    v7 = valid;
    if ( valid < 0 )
    {
      v9 = 93;
      v8 = valid;
      goto LABEL_19;
    }
    v16 = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v16);
    v11 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
            (struct Microsoft::WRL2::ContextSession *)v5,
            a2,
            (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionProjectedShadowCaster::s_InterfaceType,
            &v16);
    v12 = (struct IUnknown *)v16;
    v7 = v11;
    if ( v11 < 0 )
    {
      DoStackCaptureDirect(v11, 0x60u);
      goto LABEL_17;
    }
    v17 = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v17);
    inserted = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
                 (struct Microsoft::WRL2::ContextSession *)v5,
                 a3,
                 (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionProjectedShadowCaster::s_InterfaceType,
                 &v17);
    v7 = inserted;
    if ( inserted < 0 )
    {
      v14 = 99;
    }
    else
    {
      inserted = Windows::UI::Composition::CompositionProjectedShadow::InsertCaster(v3[19], v12, 1, v17);
      v7 = inserted;
      if ( inserted >= 0 )
      {
        v7 = 0;
LABEL_15:
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v17);
LABEL_17:
        Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v16);
        goto LABEL_20;
      }
      v14 = 101;
    }
    DoStackCaptureDirect(inserted, v14);
    goto LABEL_15;
  }
  v7 = -2147483629;
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
LABEL_20:
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v7;
}
