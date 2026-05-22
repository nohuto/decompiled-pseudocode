/*
 * XREFs of ?put_EmissiveFactor@Api@ScenePbrMaterial@Scenes@Composition@UI@Windows@@UEAAJUVector3@Numerics@Foundation@6@@Z @ 0x1801920C0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@UVector3@Numerics@Foundation@Windows@@@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@UVector3@Numerics@Foundation@Windows@@@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18007DED0 (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@UVector3@Numerics@Foundation@Windows@@@Composi.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::ScenePbrMaterial::Api::put_EmissiveFactor(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi
  __int64 v6; // xmm0_8
  int updated; // eax
  __int64 v9; // [rsp+20h] [rbp-38h] BYREF
  int v10; // [rsp+28h] [rbp-30h]
  __int64 v11[5]; // [rsp+30h] [rbp-28h] BYREF
  PVOID *v12; // [rsp+60h] [rbp+8h] BYREF

  v2 = a1 - 168;
  v4 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 168 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*(_BYTE *)(v2 + 32) & 2) != 0 )
  {
    v6 = *a2;
    v10 = *((_DWORD *)a2 + 2);
    v9 = v6;
    v11[0] = v2 + 216;
    v11[1] = (__int64)&v9;
    v11[2] = (__int64)&v9;
    v12 = (PVOID *)&Windows::UI::Composition::Scenes::ScenePbrMaterial::sc_EmissiveFactor;
    updated = Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertyUpdater<Windows::Foundation::Numerics::Vector3>,Windows::UI::Composition::PropertyUpdateInfo>(
                v2,
                v11,
                &v12);
    v5 = updated;
    if ( updated < 0 )
      DoStackCaptureDirect(updated, 0x15Bu);
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
