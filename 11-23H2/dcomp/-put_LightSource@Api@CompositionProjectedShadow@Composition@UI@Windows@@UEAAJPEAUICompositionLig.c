/*
 * XREFs of ?put_LightSource@Api@CompositionProjectedShadow@Composition@UI@Windows@@UEAAJPEAUICompositionLight@345@@Z @ 0x180006920
 * Callers:
 *     <none>
 * Callees:
 *     ?SetLightSource@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJPEAVCompositionLight@234@@Z @ 0x1800076F4 (-SetLightSource@CompositionProjectedShadow@Composition@UI@Windows@@QEAAJPEAVCompositionLight@234.c)
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionProjectedShadow::Api::put_LightSource(
        Windows::UI::Composition::CompositionProjectedShadow::Api *this,
        struct IUnknown *a2)
{
  Windows::UI::Composition::CompositionProjectedShadow *v2; // rsi
  Microsoft::WRL2::ContextSession *v4; // rbp
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  Microsoft::WRL2::NestableRuntimeClass *v8; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = (Windows::UI::Composition::CompositionProjectedShadow::Api *)((char *)this - 136);
  v4 = (Microsoft::WRL2::ContextSession *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)v2 + 32) & 2) == 0 )
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    goto LABEL_8;
  }
  v5 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
         v4,
         a2,
         (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::CompositionLight::s_InterfaceType,
         &v10);
  v6 = v5;
  if ( v5 < 0 )
  {
    DoStackCaptureDirect(v5, 0x265u);
    v8 = v10;
    if ( !v10 )
      goto LABEL_8;
    goto LABEL_7;
  }
  v7 = Windows::UI::Composition::CompositionProjectedShadow::SetLightSource(v2, v10);
  v6 = v7;
  if ( v7 < 0 )
    DoStackCaptureDirect(v7, 0x267u);
  else
    v6 = 0;
  if ( v10 )
  {
    v8 = v10;
LABEL_7:
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v8);
  }
LABEL_8:
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v6;
}
