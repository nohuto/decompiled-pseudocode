/*
 * XREFs of ?ClearAllParameters@Api@CompositionAnimation@Composition@UI@Windows@@UEAAJXZ @ 0x18003D0A0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ClearAllParameters@CompositionAnimation@Composition@UI@Windows@@QEAAJXZ @ 0x18003D0F4 (-ClearAllParameters@CompositionAnimation@Composition@UI@Windows@@QEAAJXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionAnimation::Api::ClearAllParameters(
        Windows::UI::Composition::CompositionAnimation::Api *this)
{
  Windows::UI::Composition::CompositionAnimation *v1; // rdi
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  int v3; // eax
  unsigned int v4; // edi

  v1 = (Windows::UI::Composition::CompositionAnimation::Api *)((char *)this - 128);
  v2 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 13);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*((_BYTE *)v1 + 32) & 2) != 0 )
  {
    v3 = Windows::UI::Composition::CompositionAnimation::ClearAllParameters(v1);
    v4 = v3;
    if ( v3 < 0 )
      DoStackCaptureDirect(v3, 0x76Du);
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
  Microsoft::WRL2::ContextSession::EndApiEntry(v2);
  return v4;
}
