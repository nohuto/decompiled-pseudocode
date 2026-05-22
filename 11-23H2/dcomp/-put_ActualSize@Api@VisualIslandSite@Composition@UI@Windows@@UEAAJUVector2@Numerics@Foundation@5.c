/*
 * XREFs of ?put_ActualSize@Api@VisualIslandSite@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@5@@Z @ 0x18006D720
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?NotifyToIsland_ActualSizeChanged@CompositionIslandSite@Composition@UI@Windows@@IEAAXUfloat2@Numerics@Foundation@4@@Z @ 0x18006D690 (-NotifyToIsland_ActualSizeChanged@CompositionIslandSite@Composition@UI@Windows@@IEAAXUfloat2@Num.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@UVector2@Numerics@Foundation@Windows@@@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@UVector2@Numerics@Foundation@Windows@@@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18006E2E0 (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@UVector2@Numerics@Foundation@Windows@@@Composi.c)
 */

__int64 __fastcall Windows::UI::Composition::VisualIslandSite::Api::put_ActualSize(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  __int64 v4; // rcx
  int updated; // eax
  unsigned int v6; // edi
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v9[4]; // [rsp+28h] [rbp-20h] BYREF
  void *v10; // [rsp+50h] [rbp+8h] BYREF

  v2 = a1 - 248;
  v8 = a2;
  v3 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 248 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*(_BYTE *)(v2 + 32) & 2) != 0 )
  {
    v4 = *(_QWORD *)(v2 + 280);
    v9[0] = v4 + 268;
    v9[1] = &v8;
    v9[2] = &v8;
    v10 = &Windows::UI::Composition::Visual::sc_Size;
    updated = Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertyUpdater<Windows::Foundation::Numerics::Vector2>,Windows::UI::Composition::PropertyUpdateInfo>(
                v4,
                v9,
                &v10);
    v6 = updated;
    if ( updated < 0 )
    {
      DoStackCaptureDirect(updated, 0xEDu);
    }
    else
    {
      Windows::UI::Composition::CompositionIslandSite::NotifyToIsland_ActualSizeChanged(v2, v8);
      v6 = 0;
    }
  }
  else
  {
    v6 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return v6;
}
