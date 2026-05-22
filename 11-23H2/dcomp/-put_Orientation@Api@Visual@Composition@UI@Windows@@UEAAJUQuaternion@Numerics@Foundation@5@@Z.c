/*
 * XREFs of ?put_Orientation@Api@Visual@Composition@UI@Windows@@UEAAJUQuaternion@Numerics@Foundation@5@@Z @ 0x18010D5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?SetOrientation@Visual@Composition@UI@Windows@@QEAAJAEBUQuaternion@Numerics@Foundation@4@@Z @ 0x18010BCD8 (-SetOrientation@Visual@Composition@UI@Windows@@QEAAJAEBUQuaternion@Numerics@Foundation@4@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::Api::put_Orientation(
        __int64 a1,
        const struct Windows::Foundation::Numerics::Quaternion *a2)
{
  Windows::UI::Composition::Visual *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi
  int v6; // eax

  v2 = (Windows::UI::Composition::Visual *)(a1 - 168);
  v4 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 168 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    v6 = Windows::UI::Composition::Visual::SetOrientation(v2, a2);
    v5 = v6;
    if ( v6 < 0 )
      DoStackCaptureDirect(v6, 0xA87u);
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
