/*
 * XREFs of ?SetQuaternionParameter@Api@CompositionAnimation@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@UQuaternion@Numerics@Foundation@5@@Z @ 0x18014F9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?SetQuaternionParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUQuaternion@Numerics@Foundation@4@@Z @ 0x18014FA88 (-SetQuaternionParameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUQua.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionAnimation::Api::SetQuaternionParameter(
        __int64 a1,
        HSTRING a2,
        const struct Windows::Foundation::Numerics::Quaternion *a3)
{
  Windows::UI::Composition::CompositionAnimation *v3; // rdi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  unsigned int v7; // edi
  int v8; // eax

  v3 = (Windows::UI::Composition::CompositionAnimation *)(a1 - 128);
  v5 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 128 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v5);
  if ( (*((_BYTE *)v3 + 32) & 2) != 0 )
  {
    v8 = Windows::UI::Composition::CompositionAnimation::SetQuaternionParameter(v3, a2, a3);
    v7 = v8;
    if ( v8 < 0 )
      DoStackCaptureDirect(v8, 0x733u);
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
