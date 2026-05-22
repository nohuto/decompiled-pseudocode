/*
 * XREFs of ?put_IsVisible@Api@Visual@Composition@UI@Windows@@UEAAJE@Z @ 0x18006FDA0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@_N@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@_N@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18006FE44 (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@_N@Composition@UI@Windows@@VPropertyUpdateInfo.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::Api::put_IsVisible(Windows::UI::Composition::Visual::Api *this)
{
  Windows::UI::Composition::CompositionObject *v1; // rdi
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  int updated; // eax
  unsigned int v4; // edi

  v1 = (Windows::UI::Composition::Visual::Api *)((char *)this - 168);
  v2 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 18);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v2);
  if ( (*((_BYTE *)v1 + 32) & 2) != 0 )
  {
    updated = Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertyUpdater<bool>,Windows::UI::Composition::PropertyUpdateInfo>(v1);
    v4 = updated;
    if ( updated < 0 )
      DoStackCaptureDirect(updated, 0xA06u);
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
