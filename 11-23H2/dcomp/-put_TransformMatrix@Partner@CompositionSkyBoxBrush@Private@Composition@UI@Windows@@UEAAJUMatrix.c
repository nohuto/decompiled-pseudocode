/*
 * XREFs of ?put_TransformMatrix@Partner@CompositionSkyBoxBrush@Private@Composition@UI@Windows@@UEAAJUMatrix4x4@Numerics@Foundation@6@@Z @ 0x180182430
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?SetTransformMatrix@ComponentTransform3D@Composition@UI@Windows@@QEAAJAEBUMatrix4x4@Numerics@Foundation@4@@Z @ 0x180152FE4 (-SetTransformMatrix@ComponentTransform3D@Composition@UI@Windows@@QEAAJAEBUMatrix4x4@Numerics@Fou.c)
 */

__int64 __fastcall Windows::UI::Composition::Private::CompositionSkyBoxBrush::Partner::put_TransformMatrix(
        __int64 a1,
        const struct Windows::Foundation::Numerics::Matrix4x4 *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v5; // edi
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 128);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*(_BYTE *)(a1 - 120) & 2) != 0 )
  {
    v6 = Windows::UI::Composition::ComponentTransform3D::SetTransformMatrix(
           *(Windows::UI::Composition::ComponentTransform3D **)(a1 + 48),
           a2);
    v5 = v6;
    if ( v6 >= 0 )
    {
      v5 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x219,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionskyboxbrush.cpp",
        (const char *)(unsigned int)v6);
      DoStackCaptureDirect(v5, 0x262u);
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
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v5;
}
