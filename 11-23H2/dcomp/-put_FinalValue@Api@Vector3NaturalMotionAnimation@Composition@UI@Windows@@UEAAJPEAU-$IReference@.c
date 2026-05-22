/*
 * XREFs of ?put_FinalValue@Api@Vector3NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAU?$IReference@UVector3@Numerics@Foundation@Windows@@@Foundation@5@@Z @ 0x180168A90
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ??$ConvertReferenceToValue@UVector3@Numerics@Foundation@Windows@@@AnimationHelper@Composition@UI@Windows@@YAJPEAU?$IReference@UVector3@Numerics@Foundation@Windows@@@Foundation@3@PEAUVector3@Numerics@53@PEA_N@Z @ 0x180134634 (--$ConvertReferenceToValue@UVector3@Numerics@Foundation@Windows@@@AnimationHelper@Composition@UI.c)
 *     ?SetVector3RefValue@Vector3NaturalMotionAnimation@Composition@UI@Windows@@CAJUVector3@Numerics@Foundation@4@_NPEAU?$ScalarNullable@UVector3@Numerics@Foundation@Windows@@@WRL2@Microsoft@@@Z @ 0x180168848 (-SetVector3RefValue@Vector3NaturalMotionAnimation@Composition@UI@Windows@@CAJUVector3@Numerics@F.c)
 */

__int64 __fastcall Windows::UI::Composition::Vector3NaturalMotionAnimation::Api::put_FinalValue(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi
  int v6; // eax
  char v7[16]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v8; // [rsp+30h] [rbp-38h] BYREF
  int v9; // [rsp+38h] [rbp-30h]
  __int64 v10; // [rsp+40h] [rbp-28h] BYREF
  int v11; // [rsp+48h] [rbp-20h]

  result = Windows::UI::Composition::AnimationHelper::ConvertReferenceToValue<Windows::Foundation::Numerics::Vector3>(
             a2,
             (__int64)&v10,
             v7);
  if ( (int)result >= 0 )
  {
    v4 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 424);
    Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
    if ( (*(_BYTE *)(a1 - 416) & 2) != 0 )
    {
      v8 = v10;
      v9 = v11;
      v6 = Windows::UI::Composition::Vector3NaturalMotionAnimation::SetVector3RefValue((__int64)&v8, v7[0], a1 - 48);
      v5 = v6;
      if ( v6 < 0 )
        DoStackCaptureDirect(v6, 0x91u);
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
    Microsoft::WRL2::ContextSession::EndApiEntry(v4);
    return v5;
  }
  return result;
}
