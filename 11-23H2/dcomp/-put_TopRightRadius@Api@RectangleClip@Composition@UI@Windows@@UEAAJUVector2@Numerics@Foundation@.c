/*
 * XREFs of ?put_TopRightRadius@Api@RectangleClip@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@5@@Z @ 0x180081970
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@M@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@M@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18004D300 (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@M@Composition@UI@Windows@@VPropertyUpdateInfo@.c)
 */

__int64 __fastcall Windows::UI::Composition::RectangleClip::Api::put_TopRightRadius(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  unsigned int v4; // edi
  __int64 v7; // [rsp+28h] [rbp-18h] BYREF
  int *v8; // [rsp+30h] [rbp-10h]
  int *v9; // [rsp+38h] [rbp-8h]
  int v10; // [rsp+60h] [rbp+20h] BYREF
  void **v11; // [rsp+70h] [rbp+30h] BYREF

  v2 = a1 - 168;
  v3 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 168 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*(_BYTE *)(v2 + 32) & 2) != 0 )
  {
    v7 = v2 + 256;
    v10 = a2;
    v8 = &v10;
    v9 = &v10;
    v11 = (void **)&Windows::UI::Composition::RectangleClip::sc_TopRightRadiusX;
    Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertyUpdater<float>,Windows::UI::Composition::PropertyUpdateInfo>(
      (__int64 *)v2,
      (__int64)&v7,
      &v11);
    v7 = v2 + 260;
    v10 = HIDWORD(a2);
    v8 = &v10;
    v9 = &v10;
    v11 = (void **)&Windows::UI::Composition::RectangleClip::sc_TopRightRadiusY;
    Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertyUpdater<float>,Windows::UI::Composition::PropertyUpdateInfo>(
      (__int64 *)v2,
      (__int64)&v7,
      &v11);
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
