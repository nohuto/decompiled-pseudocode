/*
 * XREFs of ?put_Source@Partner@CompositionSkyBoxBrush@Private@Composition@UI@Windows@@UEAAJPEAUICompositionCubeMap@3456@@Z @ 0x180182360
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PEBUInterfaceType@NestableRuntimeClass@23@PEAPEAV123@@Z @ 0x18006BBE0 (-ValidateInterface@ContextRuntimeClass@WRL2@Microsoft@@KAJPEAVContextSession@23@PEAUIUnknown@@PE.c)
 *     ?SetSource@CompositionSkyBoxBrush@Private@Composition@UI@Windows@@QEAAXPEAVCompositionCubeMap@2345@@Z @ 0x180181414 (-SetSource@CompositionSkyBoxBrush@Private@Composition@UI@Windows@@QEAAXPEAVCompositionCubeMap@23.c)
 */

__int64 __fastcall Windows::UI::Composition::Private::CompositionSkyBoxBrush::Partner::put_Source(
        Windows::UI::Composition::Private::CompositionSkyBoxBrush::Partner *this,
        struct IUnknown *a2)
{
  Windows::UI::Composition::Private::CompositionSkyBoxBrush *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  unsigned int v5; // ebx
  int v6; // eax
  struct Microsoft::WRL2::ContextRuntimeClass *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (Windows::UI::Composition::Private::CompositionSkyBoxBrush::Partner *)((char *)this - 152);
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 16);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    v8 = 0LL;
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v8);
    v6 = Microsoft::WRL2::ContextRuntimeClass::ValidateInterface(
           (struct Microsoft::WRL2::ContextSession *)v4,
           a2,
           (const struct Microsoft::WRL2::NestableRuntimeClass::InterfaceType *)&Windows::UI::Composition::Private::CompositionCubeMap::s_InterfaceType,
           &v8);
    v5 = v6;
    if ( v6 < 0 )
    {
      DoStackCaptureDirect(v6, 0x2B2u);
    }
    else
    {
      Windows::UI::Composition::Private::CompositionSkyBoxBrush::SetSource(v2, v8);
      v5 = 0;
    }
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock(&v8);
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v5;
}
