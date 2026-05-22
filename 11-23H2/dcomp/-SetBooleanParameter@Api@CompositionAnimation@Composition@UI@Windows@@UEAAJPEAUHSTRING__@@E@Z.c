/*
 * XREFs of ?SetBooleanParameter@Api@CompositionAnimation@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@E@Z @ 0x18014F450
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?SetBooleanParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@_N@Z @ 0x18014F4F0 (-SetBooleanParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@_N@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionAnimation::Api::SetBooleanParameter(
        Windows::UI::Composition::CompositionAnimation::Api *this,
        HSTRING a2,
        char a3)
{
  Windows::UI::Composition::CompositionAnimation *v3; // rdi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  unsigned int v7; // edi
  int v8; // eax

  v3 = (Windows::UI::Composition::CompositionAnimation::Api *)((char *)this - 136);
  v5 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 14);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)v3 + 32) & 2) != 0 )
  {
    v8 = Windows::UI::Composition::CompositionAnimation::SetBooleanParameter(v3, a2, a3 != 0);
    v7 = v8;
    if ( v8 < 0 )
      DoStackCaptureDirect(v8, 0x51Au);
    else
      v7 = 0;
  }
  else
  {
    v7 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v5);
  return v7;
}
