/*
 * XREFs of ?put_IsPixelSnappingEnabled@Api@Visual@Composition@UI@Windows@@UEAAJE@Z @ 0x18010D500
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@_N@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@_N@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18006FE44 (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@_N@Composition@UI@Windows@@VPropertyUpdateInfo.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::Api::put_IsPixelSnappingEnabled(
        Windows::UI::Composition::Visual::Api *this,
        char a2)
{
  Windows::UI::Composition::CompositionObject *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi
  int updated; // eax
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF
  bool v9; // [rsp+50h] [rbp+8h] BYREF
  PVOID *v10; // [rsp+60h] [rbp+18h] BYREF

  v2 = (Windows::UI::Composition::Visual::Api *)((char *)this - 192);
  v4 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 21);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    v8[0] = (char *)v2 + 264;
    v8[1] = &v9;
    v9 = a2 != 0;
    v8[2] = &v9;
    v10 = (PVOID *)&Windows::UI::Composition::Visual::sc_IsPixelSnappingEnabled;
    updated = Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertyUpdater<bool>,Windows::UI::Composition::PropertyUpdateInfo>(
                v2,
                (__int64)v8,
                &v10);
    v5 = updated;
    if ( updated < 0 )
      DoStackCaptureDirect(updated, 0xA2Eu);
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
