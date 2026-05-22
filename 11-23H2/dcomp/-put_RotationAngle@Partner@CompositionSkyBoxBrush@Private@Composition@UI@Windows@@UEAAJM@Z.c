/*
 * XREFs of ?put_RotationAngle@Partner@CompositionSkyBoxBrush@Private@Composition@UI@Windows@@UEAAJM@Z @ 0x180181FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?SetRotationAngle@CompositionSkyBoxBrush@Private@Composition@UI@Windows@@QEAAJM@Z @ 0x180181310 (-SetRotationAngle@CompositionSkyBoxBrush@Private@Composition@UI@Windows@@QEAAJM@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Private::CompositionSkyBoxBrush::Partner::put_RotationAngle(
        Windows::UI::Composition::Private::CompositionSkyBoxBrush::Partner *this,
        float a2)
{
  Windows::UI::Composition::Private::CompositionSkyBoxBrush *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  unsigned int v4; // edi
  int v5; // eax

  v2 = (Windows::UI::Composition::Private::CompositionSkyBoxBrush::Partner *)((char *)this - 152);
  v3 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 16);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    v5 = Windows::UI::Composition::Private::CompositionSkyBoxBrush::SetRotationAngle(v2, a2);
    v4 = v5;
    if ( v5 < 0 )
      DoStackCaptureDirect(v5, 0x25Du);
    else
      v4 = 0;
  }
  else
  {
    v4 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return v4;
}
