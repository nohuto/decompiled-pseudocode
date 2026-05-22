/*
 * XREFs of ?GetFaceVisibility@Partner@CompositionSkyBoxBrush@Private@Composition@UI@Windows@@UEAAJW4CompositionCubeMapFace@3456@PEAE@Z @ 0x180180F10
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Private::CompositionSkyBoxBrush::Partner::GetFaceVisibility(
        __int64 a1,
        int a2,
        bool *a3)
{
  unsigned int v4; // edi
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  const char *v9; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = 0;
  *a3 = 0;
  v6 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 128);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v6);
  if ( (*(_BYTE *)(a1 - 120) & 2) != 0 )
  {
    if ( a2 <= 5 )
    {
      *a3 = ((unsigned __int8)(1 << a2) & *(_BYTE *)(a1 + 25)) != 0;
    }
    else
    {
      v4 = -2147024809;
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)0x22E,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionskyboxbrush.cpp",
        (const char *)0x80070057LL,
        (int)"Invalid cube map face value.",
        v9);
      DoStackCaptureDirect(-2147024809, 0x2CAu);
    }
  }
  else
  {
    v4 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v6);
  return v4;
}
