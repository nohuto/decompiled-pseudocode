/*
 * XREFs of ?put_Scale@Api@Visual@Composition@UI@Windows@@UEAAJUVector3@Numerics@Foundation@5@@Z @ 0x18007DDA0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?SetScale@Visual@Composition@UI@Windows@@QEAAJAEBUVector3@Numerics@Foundation@4@@Z @ 0x18007DE08 (-SetScale@Visual@Composition@UI@Windows@@QEAAJAEBUVector3@Numerics@Foundation@4@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::Api::put_Scale(
        __int64 a1,
        const struct Windows::Foundation::Numerics::Vector3 *a2)
{
  Windows::UI::Composition::Visual *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  int v5; // eax
  unsigned int v6; // edi

  v2 = (Windows::UI::Composition::Visual *)(a1 - 168);
  v4 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 168 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    v5 = Windows::UI::Composition::Visual::SetScale(v2, a2);
    v6 = v5;
    if ( v5 < 0 )
      DoStackCaptureDirect(v5, 0xA8Bu);
    else
      v6 = 0;
  }
  else
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return v6;
}
