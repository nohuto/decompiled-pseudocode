/*
 * XREFs of ?put_Target@Api@CompositionAnimation@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@@Z @ 0x180083520
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?SetTarget@CompositionAnimation@Composition@UI@Windows@@QEAAXPEAUHSTRING__@@@Z @ 0x180083590 (-SetTarget@CompositionAnimation@Composition@UI@Windows@@QEAAXPEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionAnimation::Api::put_Target(
        Windows::UI::Composition::CompositionAnimation::Api *this,
        HSTRING a2)
{
  Windows::UI::Composition::CompositionAnimation *v2; // rbp
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi

  v2 = (Windows::UI::Composition::CompositionAnimation::Api *)((char *)this - 136);
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    v5 = 0;
    if ( a2 )
    {
      Windows::UI::Composition::CompositionAnimation::SetTarget(v2, a2);
    }
    else
    {
      v5 = -2147024809;
      DoStackCaptureDirect(-2147024809, 0x7A8u);
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
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v5;
}
