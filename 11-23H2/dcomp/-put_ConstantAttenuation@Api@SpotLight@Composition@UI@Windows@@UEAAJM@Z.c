/*
 * XREFs of ?put_ConstantAttenuation@Api@SpotLight@Composition@UI@Windows@@UEAAJM@Z @ 0x180088350
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?SetAttenuation0@SpotLight@Composition@UI@Windows@@QEAAJM@Z @ 0x1800883B8 (-SetAttenuation0@SpotLight@Composition@UI@Windows@@QEAAJM@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::SpotLight::Api::put_ConstantAttenuation(
        Windows::UI::Composition::SpotLight::Api *this,
        float a2)
{
  Windows::UI::Composition::SpotLight *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  int v4; // eax
  unsigned int v5; // edi

  v2 = (Windows::UI::Composition::SpotLight::Api *)((char *)this - 264);
  v3 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 30);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    v4 = Windows::UI::Composition::SpotLight::SetAttenuation0(v2, a2);
    v5 = v4;
    if ( v4 < 0 )
      DoStackCaptureDirect(v4, 0x3E8u);
    else
      v5 = 0;
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
