/*
 * XREFs of ?put_RelativeOffsetAdjustment@Api@Visual@Composition@UI@Windows@@UEAAJUVector3@Numerics@Foundation@5@@Z @ 0x1800B5F00
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$SetAnimatablePropertyWorker@V?$SparsePropertyUpdater@UVector3@Numerics@Foundation@Windows@@VVisual@Composition@UI@4@P85674@EBA?AU1234@XZP85674@EAAXU1234@@Z@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$SparsePropertyUpdater@UVector3@Numerics@Foundation@Windows@@VVisual@Composition@UI@4@P85674@EBA?AU1234@XZP85674@EAAXU1234@@Z@123@AEBVPropertyUpdateInfo@123@@Z @ 0x1800B5A6C (--$SetAnimatablePropertyWorker@V-$SparsePropertyUpdater@UVector3@Numerics@Foundation@Windows@@VV.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::Api::put_RelativeOffsetAdjustment(__int64 a1, __int64 a2)
{
  Windows::UI::Composition::CompositionObject *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v5; // edi
  __int128 v6; // xmm0
  int updated; // eax
  __int128 v9; // [rsp+20h] [rbp-58h] BYREF
  __int128 v10; // [rsp+30h] [rbp-48h]
  Windows::UI::Composition::CompositionObject *v11; // [rsp+40h] [rbp-38h] BYREF
  __int128 v12; // [rsp+48h] [rbp-30h]
  __int128 v13; // [rsp+58h] [rbp-20h]
  __int64 v14; // [rsp+68h] [rbp-10h]

  v2 = (Windows::UI::Composition::CompositionObject *)(a1 - 176);
  v4 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 176 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (*((_BYTE *)v2 + 32) & 2) != 0 )
  {
    DWORD2(v9) = 0;
    DWORD2(v10) = 0;
    *(_QWORD *)&v10 = Windows::UI::Composition::Visual::SetSparse_RelativeOffsetAdjustment;
    v11 = v2;
    *(_QWORD *)&v9 = Windows::UI::Composition::Visual::GetSparse_RelativeOffsetAdjustment;
    v6 = v9;
    v14 = a2;
    v13 = v10;
    *(_QWORD *)&v9 = &Windows::UI::Composition::Visual::sc_RelativeOffsetAdjustment;
    v12 = v6;
    updated = Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::SparsePropertyUpdater<Windows::Foundation::Numerics::Vector3,Windows::UI::Composition::Visual,Windows::Foundation::Numerics::Vector3 (Windows::UI::Composition::Visual::*)(void)const,void (Windows::UI::Composition::Visual::*)(Windows::Foundation::Numerics::Vector3)>,Windows::UI::Composition::PropertyUpdateInfo>(
                v2,
                (__int64)&v11,
                (PVOID **)&v9);
    v5 = updated;
    if ( updated < 0 )
      DoStackCaptureDirect(updated, 0xA8Eu);
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
