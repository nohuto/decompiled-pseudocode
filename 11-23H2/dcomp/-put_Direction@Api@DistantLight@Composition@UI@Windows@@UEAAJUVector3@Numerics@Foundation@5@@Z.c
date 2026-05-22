/*
 * XREFs of ?put_Direction@Api@DistantLight@Composition@UI@Windows@@UEAAJUVector3@Numerics@Foundation@5@@Z @ 0x180093F30
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@UVector3@Numerics@Foundation@Windows@@@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@UVector3@Numerics@Foundation@Windows@@@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18007DED0 (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@UVector3@Numerics@Foundation@Windows@@@Composi.c)
 */

__int64 __fastcall Windows::UI::Composition::DistantLight::Api::put_Direction(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  int updated; // eax
  unsigned int v6; // edi
  PVOID *v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9[4]; // [rsp+28h] [rbp-20h] BYREF

  v2 = a1 - 264;
  v4 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 264 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*(_BYTE *)(v2 + 32) & 2) != 0 )
  {
    v9[1] = a2;
    v9[0] = v2 + 288;
    v9[2] = a2;
    v8 = (PVOID *)&Windows::UI::Composition::DistantLight::sc_Direction;
    updated = Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertyUpdater<Windows::Foundation::Numerics::Vector3>,Windows::UI::Composition::PropertyUpdateInfo>(
                v2,
                v9,
                &v8);
    v6 = updated;
    if ( updated < 0 )
      DoStackCaptureDirect(updated, 0x144u);
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
