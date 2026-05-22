/*
 * XREFs of ?put_InitialValue@Api@Vector2NaturalMotionAnimation@Composition@UI@Windows@@UEAAJPEAU?$IReference@UVector2@Numerics@Foundation@Windows@@@Foundation@5@@Z @ 0x180168540
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$ConvertReferenceToValue@UVector2@Numerics@Foundation@Windows@@@AnimationHelper@Composition@UI@Windows@@YAJPEAU?$IReference@UVector2@Numerics@Foundation@Windows@@@Foundation@3@PEAUVector2@Numerics@53@PEA_N@Z @ 0x180167DAC (--$ConvertReferenceToValue@UVector2@Numerics@Foundation@Windows@@@AnimationHelper@Composition@UI.c)
 *     ?SetVector2RefValue@Vector2NaturalMotionAnimation@Composition@UI@Windows@@CAJAEBUVector2@Numerics@Foundation@4@_NPEAU?$ScalarNullable@UVector2@Numerics@Foundation@Windows@@@WRL2@Microsoft@@@Z @ 0x180168224 (-SetVector2RefValue@Vector2NaturalMotionAnimation@Composition@UI@Windows@@CAJAEBUVector2@Numeric.c)
 */

__int64 __fastcall Windows::UI::Composition::Vector2NaturalMotionAnimation::Api::put_InitialValue(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi
  int v6; // eax
  char v7; // [rsp+40h] [rbp+18h] BYREF
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  result = Windows::UI::Composition::AnimationHelper::ConvertReferenceToValue<Windows::Foundation::Numerics::Vector2>(
             a2,
             (__int64)&v8,
             &v7);
  if ( (int)result >= 0 )
  {
    v4 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 408);
    Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
    if ( (*(_BYTE *)(a1 - 400) & 2) != 0 )
    {
      v6 = Windows::UI::Composition::Vector2NaturalMotionAnimation::SetVector2RefValue(&v8, v7, a1 - 20);
      v5 = v6;
      if ( v6 < 0 )
        DoStackCaptureDirect(v6, 0xA6u);
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
