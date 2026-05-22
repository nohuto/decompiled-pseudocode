/*
 * XREFs of ?Remove@Api@CompositionProjectedShadowCasterCollection@Composition@UI@Windows@@UEAAJPEAUICompositionProjectedShadowCaster@345@@Z @ 0x180007150
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureValidState@CompositionProjectedShadowCasterCollection@Composition@UI@Windows@@UEAAJXZ @ 0x1800075F0 (-EnsureValidState@CompositionProjectedShadowCasterCollection@Composition@UI@Windows@@UEAAJXZ.c)
 *     ?RemoveCaster@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJPEAVCompositionProjectedShadowCaster@234@@Z @ 0x18000764C (-RemoveCaster@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJPEAVCompositionProjectedSh.c)
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionProjectedShadowCasterCollection::Api::Remove(
        Windows::UI::Composition::CompositionProjectedShadowCasterCollection::Api *this,
        struct IUnknown *a2)
{
  Windows::UI::Composition::CompositionProjectedShadow **v2; // rdi
  Microsoft::WRL2::ContextSession *v4; // rsi
  int valid; // eax
  unsigned int v6; // ebx
  int v7; // eax
  unsigned int v9; // edx
  int v10; // ecx
  unsigned int v11; // edx
  struct Microsoft::WRL2::ContextRuntimeClass *v12; // [rsp+30h] [rbp+8h] BYREF

  v2 = (Windows::UI::Composition::CompositionProjectedShadow **)((char *)this - 136);
  v4 = (Microsoft::WRL2::ContextSession *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( ((_BYTE)v2[4] & 2) == 0 )
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    goto LABEL_8;
  }
  if ( !a2 )
  {
    v6 = -2147024809;
    v9 = 207;
    v10 = -2147024809;
LABEL_15:
    DoStackCaptureDirect(v10, v9);
    goto LABEL_8;
  }
  valid = Windows::UI::Composition::CompositionProjectedShadowCasterCollection::EnsureValidState((Windows::UI::Composition::CompositionProjectedShadowCasterCollection *)v2);
  v6 = valid;
  if ( valid < 0 )
  {
    v9 = 209;
    v10 = valid;
    goto LABEL_15;
  }
  v12 = 0LL;
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v12);
  v7 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
         v4,
         a2,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionProjectedShadowCaster::s_InterfaceType,
         &v12);
  v6 = v7;
  if ( v7 < 0 )
  {
    v11 = 212;
    goto LABEL_13;
  }
  v7 = Windows::UI::Composition::CompositionProjectedShadow::RemoveCaster(v2[19], v12);
  v6 = v7;
  if ( v7 < 0 )
  {
    v11 = 214;
LABEL_13:
    DoStackCaptureDirect(v7, v11);
    goto LABEL_7;
  }
  v6 = 0;
LABEL_7:
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v12);
LABEL_8:
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v6;
}
