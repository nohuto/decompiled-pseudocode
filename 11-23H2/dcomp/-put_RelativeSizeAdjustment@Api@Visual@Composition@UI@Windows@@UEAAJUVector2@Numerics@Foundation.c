/*
 * XREFs of ?put_RelativeSizeAdjustment@Api@Visual@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@5@@Z @ 0x18006DCA0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$SetAnimatablePropertyWorker@V?$SparsePropertyUpdater@UVector2@Numerics@Foundation@Windows@@VVisual@Composition@UI@4@P85674@EBA?AU1234@XZP85674@EAAXU1234@@Z@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$SparsePropertyUpdater@UVector2@Numerics@Foundation@Windows@@VVisual@Composition@UI@4@P85674@EBA?AU1234@XZP85674@EAAXU1234@@Z@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18006E7FC (--$SetAnimatablePropertyWorker@V-$SparsePropertyUpdater@UVector2@Numerics@Foundation@Windows@@VV.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::Api::put_RelativeSizeAdjustment(__int64 a1, __int64 a2)
{
  Windows::UI::Composition::CompositionObject *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  int updated; // eax
  unsigned int v5; // edi
  __int64 v7; // [rsp+20h] [rbp-68h] BYREF
  __int128 v8; // [rsp+28h] [rbp-60h]
  __int128 v9; // [rsp+38h] [rbp-50h]
  Windows::UI::Composition::CompositionObject *v10; // [rsp+48h] [rbp-40h]
  __int128 v11; // [rsp+50h] [rbp-38h]
  __int128 v12; // [rsp+60h] [rbp-28h]
  __int64 *v13; // [rsp+70h] [rbp-18h]

  v2 = (Windows::UI::Composition::CompositionObject *)(a1 - 176);
  v7 = a2;
  v3 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 176 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    DWORD2(v9) = 0;
    DWORD2(v8) = 0;
    *(_QWORD *)&v9 = &Windows::UI::Composition::Visual::SetSparse_RelativeSizeAdjustment;
    v10 = v2;
    *(_QWORD *)&v8 = &Windows::UI::Composition::Visual::GetSparse_RelativeSizeAdjustment;
    v13 = &v7;
    v11 = v8;
    v12 = v9;
    updated = Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::SparsePropertyUpdater<Windows::Foundation::Numerics::Vector2,Windows::UI::Composition::Visual,Windows::Foundation::Numerics::Vector2 (Windows::UI::Composition::Visual::*)(void)const,void (Windows::UI::Composition::Visual::*)(Windows::Foundation::Numerics::Vector2)>,Windows::UI::Composition::PropertyUpdateInfo>(v2);
    v5 = updated;
    if ( updated < 0 )
      DoStackCaptureDirect(updated, 0xA8Fu);
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
