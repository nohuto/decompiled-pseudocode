/*
 * XREFs of ?put_MaxOpacity@Velocity@CompositionProjectedShadow@Composition@UI@Windows@@UEAAJM@Z @ 0x180011250
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@M@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@M@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18004D300 (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@M@Composition@UI@Windows@@VPropertyUpdateInfo@.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionProjectedShadow::Velocity::put_MaxOpacity(
        Windows::UI::Composition::CompositionProjectedShadow::Velocity *this,
        float a2)
{
  char *v2; // rdi
  Microsoft::WRL2::ContextSession *v3; // rbx
  int updated; // eax
  unsigned int v5; // edi
  _QWORD v7[4]; // [rsp+20h] [rbp-38h] BYREF
  float v8; // [rsp+60h] [rbp+8h] BYREF
  void *v9; // [rsp+70h] [rbp+18h] BYREF

  v2 = (char *)this - 152;
  v3 = (Microsoft::WRL2::ContextSession *)*((_QWORD *)this - 16);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (v2[32] & 2) != 0 )
  {
    v8 = a2;
    v7[0] = v2 + 184;
    v7[1] = &v8;
    v7[2] = &v8;
    v9 = &Windows::UI::Composition::CompositionProjectedShadow::sc_MaxOpacity;
    updated = Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertyUpdater<float>,Windows::UI::Composition::PropertyUpdateInfo>(
                v2,
                v7,
                &v9);
    v5 = updated;
    if ( updated < 0 )
      DoStackCaptureDirect(updated, 0x2BCu);
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
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return v5;
}
