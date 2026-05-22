/*
 * XREFs of ?put_RightInset@Api@InsetClip@Composition@UI@Windows@@UEAAJM@Z @ 0x180080950
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@M@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@M@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18004D300 (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@M@Composition@UI@Windows@@VPropertyUpdateInfo@.c)
 */

__int64 __fastcall Windows::UI::Composition::InsetClip::Api::put_RightInset(
        Windows::UI::Composition::InsetClip::Api *this,
        float a2)
{
  __int64 *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  int updated; // eax
  unsigned int v5; // edi
  _QWORD v7[4]; // [rsp+20h] [rbp-38h] BYREF
  float v8; // [rsp+60h] [rbp+8h] BYREF
  void **v9; // [rsp+70h] [rbp+18h] BYREF

  v2 = (__int64 *)((char *)this - 168);
  v3 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 18);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (v2[4] & 2) != 0 )
  {
    v8 = a2;
    v7[0] = v2 + 26;
    v7[1] = &v8;
    v7[2] = &v8;
    v9 = (void **)&Windows::UI::Composition::InsetClip::sc_RightInset;
    updated = Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertyUpdater<float>,Windows::UI::Composition::PropertyUpdateInfo>(
                v2,
                (__int64)v7,
                &v9);
    v5 = updated;
    if ( updated < 0 )
      DoStackCaptureDirect(updated, 0x174u);
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
