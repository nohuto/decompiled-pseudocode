/*
 * XREFs of ?put_EllipseCenter@Api@CompositionRadialGradientBrush@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@5@@Z @ 0x180176020
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@UVector2@Numerics@Foundation@Windows@@@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@UVector2@Numerics@Foundation@Windows@@@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18006E2E0 (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@UVector2@Numerics@Foundation@Windows@@@Composi.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionRadialGradientBrush::Api::put_EllipseCenter(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rdi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  unsigned int v4; // edi
  int updated; // eax
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v8[4]; // [rsp+28h] [rbp-20h] BYREF
  WCHAR **v9; // [rsp+50h] [rbp+8h] BYREF

  v2 = a1 - 240;
  v7 = a2;
  v3 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 240 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*(_BYTE *)(v2 + 32) & 2) != 0 )
  {
    v8[0] = v2 + 256;
    v8[1] = &v7;
    v8[2] = &v7;
    v9 = (WCHAR **)&Windows::UI::Composition::CompositionRadialGradientBrush::sc_ellipseCenter;
    updated = Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertyUpdater<Windows::Foundation::Numerics::Vector2>,Windows::UI::Composition::PropertyUpdateInfo>(
                (__int64 *)v2,
                (__int64)v8,
                &v9);
    v4 = updated;
    if ( updated < 0 )
      DoStackCaptureDirect(updated, 0xD2u);
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
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return v4;
}
