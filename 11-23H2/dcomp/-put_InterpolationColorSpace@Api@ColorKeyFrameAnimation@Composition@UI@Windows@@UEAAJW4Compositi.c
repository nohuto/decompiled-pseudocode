/*
 * XREFs of ?put_InterpolationColorSpace@Api@ColorKeyFrameAnimation@Composition@UI@Windows@@UEAAJW4CompositionColorSpace@345@@Z @ 0x180081B10
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::ColorKeyFrameAnimation::Api::put_InterpolationColorSpace(
        __int64 a1,
        unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v5; // edi

  v2 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 472);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*(_BYTE *)(a1 - 464) & 2) != 0 )
  {
    if ( a2 > 4 )
    {
      v5 = -2147024809;
      RoOriginateErrorW(2147942487LL, 0LL, L"An invalid CompositionColorSpace is specified.");
      DoStackCaptureDirect(-2147024809, 0x5Cu);
    }
    else
    {
      *(_DWORD *)(a1 - 12) = a2;
      v5 = 0;
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
