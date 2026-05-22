/*
 * XREFs of ?put_StrokeLineJoin@Api@CompositionSpriteShape@Composition@UI@Windows@@UEAAJW4CompositionStrokeLineJoin@345@@Z @ 0x18000CDA0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 *     ?OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z @ 0x180149ADC (-OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionSpriteShape::Api::put_StrokeLineJoin(__int64 a1, int a2)
{
  Microsoft::WRL2::ContextSession *v2; // rbx
  __int64 v4; // rsi
  __int64 v5; // rcx
  unsigned int v6; // edx
  unsigned int v7; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(Microsoft::WRL2::ContextSession **)(a1 - 168);
  v4 = a2;
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*(_BYTE *)(a1 - 160) & 2) != 0 )
  {
    if ( (unsigned int)v4 > 3 )
    {
      Windows::UI::Composition::OriginateInvalidArgument(19LL, L"StrokeLineJoin");
      v7 = -2147024809;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x167,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionspriteshape.cpp",
        (const char *)0x80070057LL);
      DoStackCaptureDirect(-2147024809, 0x2CEu);
    }
    else
    {
      if ( *(_DWORD *)(a1 + 72) != (_DWORD)v4 )
      {
        v5 = *(_QWORD *)(a1 - 168);
        v6 = *(_DWORD *)(a1 - 64);
        *(_DWORD *)(a1 + 72) = v4;
        DirectComposition::CDevice::ResourceSetIntegerProperty(*(DirectComposition::CDevice **)(v5 + 456), v6, 8u, v4);
      }
      v7 = 0;
    }
  }
  else
  {
    v7 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v7;
}
