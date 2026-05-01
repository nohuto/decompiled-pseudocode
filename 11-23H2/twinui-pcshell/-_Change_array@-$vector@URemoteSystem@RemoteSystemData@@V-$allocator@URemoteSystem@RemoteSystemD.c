/*
 * XREFs of ?_Change_array@?$vector@URemoteSystem@RemoteSystemData@@V?$allocator@URemoteSystem@RemoteSystemData@@@std@@@std@@AEAAXQEAURemoteSystem@RemoteSystemData@@_K1@Z @ 0x18071A470
 * Callers:
 *     ??$_Emplace_reallocate@AEAURemoteSystem@RemoteSystemData@@@?$vector@URemoteSystem@RemoteSystemData@@V?$allocator@URemoteSystem@RemoteSystemData@@@std@@@std@@QEAAPEAURemoteSystem@RemoteSystemData@@QEAU23@AEAU23@@Z @ 0x18070A360 (--$_Emplace_reallocate@AEAURemoteSystem@RemoteSystemData@@@-$vector@URemoteSystem@RemoteSystemDa.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@URemoteSystem@RemoteSystemData@@@std@@@std@@YAXPEAURemoteSystem@RemoteSystemData@@QEAU12@AEAV?$allocator@URemoteSystem@RemoteSystemData@@@0@@Z @ 0x18070A098 (--$_Destroy_range@V-$allocator@URemoteSystem@RemoteSystemData@@@std@@@std@@YAXPEAURemoteSystem@R.c)
 */

void __fastcall std::vector<RemoteSystemData::RemoteSystem>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  volatile signed __int32 **v6; // rcx

  v6 = *(volatile signed __int32 ***)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<RemoteSystemData::RemoteSystem>>(v6, *(volatile signed __int32 ***)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFE0uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 32 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 32 * a4;
}
