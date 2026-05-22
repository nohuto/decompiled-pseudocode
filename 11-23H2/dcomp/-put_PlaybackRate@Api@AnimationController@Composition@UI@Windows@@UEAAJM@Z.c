/*
 * XREFs of ?put_PlaybackRate@Api@AnimationController@Composition@UI@Windows@@UEAAJM@Z @ 0x18000D6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z @ 0x1800719B4 (-ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z.c)
 *     ??$NotifyPropertyChanged@M@ProxyObject@Composition@UI@Windows@@QEAAJIAEBMI@Z @ 0x18011BB8C (--$NotifyPropertyChanged@M@ProxyObject@Composition@UI@Windows@@QEAAJIAEBMI@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::AnimationController::Api::put_PlaybackRate(
        Windows::UI::Composition::AnimationController::Api *this,
        float a2)
{
  char *v2; // rdi
  Microsoft::WRL2::ContextSession *v3; // rbx
  float v4; // xmm6_4
  float v5; // xmm0_4
  unsigned int v6; // edi
  float v8; // xmm0_4
  float v9; // xmm1_4
  __int64 v10; // rcx
  unsigned int v11; // edx
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  float v14; // [rsp+40h] [rbp+8h] BYREF

  v2 = (char *)this - 168;
  v3 = (Microsoft::WRL2::ContextSession *)*((_QWORD *)this - 18);
  v4 = a2;
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (v2[32] & 2) != 0 )
  {
    v5 = *((float *)v2 + 46);
    v14 = a2;
    if ( v5 == a2 )
      goto LABEL_3;
    if ( a2 != 0.0 )
    {
      if ( a2 >= 0.0 )
      {
        v8 = fmaxf(a2, 0.0625);
        v9 = FLOAT_16_0;
      }
      else
      {
        v8 = fmaxf(a2, -16.0);
        v9 = FLOAT_N0_0625;
      }
      a2 = fminf(v9, v8);
    }
    v10 = *((_QWORD *)v2 + 3);
    v11 = *((_DWORD *)v2 + 32);
    *((float *)v2 + 46) = a2;
    DirectComposition::CDevice::ResourceSetFloatProperty(*(DirectComposition::CDevice **)(v10 + 456), v11, 2u, v4);
    v12 = Windows::UI::Composition::ProxyObject::NotifyPropertyChanged<float>(v2, 2LL, &v14);
    v6 = v12;
    if ( v12 >= 0 )
    {
LABEL_3:
      v6 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA3,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtanimationcontroller.cpp",
        (const char *)(unsigned int)v12);
      DoStackCaptureDirect(v6, 0x1F0u);
    }
  }
  else
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return v6;
}
