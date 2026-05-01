/*
 * XREFs of ?Get@?$CMarshaledInterfaceResult@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@Windows@@QEAAJPEAPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@3@@Z @ 0x180027224
 * Callers:
 *     ?GetResults@?$AsyncOperation@U?$IAsyncOperation@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@23@V?$CMarshaledInterfaceResult@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAUIGameListEntry@GamesEnumeration@Preview@Gaming@3@@Z @ 0x180023880 (-GetResults@-$AsyncOperation@U-$IAsyncOperation@PEAVGameListEntry@GamesEnumeration@Preview@Gamin.c)
 * Callees:
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180029C4C (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::CMarshaledInterfaceResult<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry>::Get(
        RTL_SRWLOCK *a1,
        void **a2)
{
  PVOID v4; // rsi
  PVOID v5; // rbx
  PVOID Ptr; // rdi
  PVOID v7; // rbp
  PVOID v8; // r13
  PVOID v9; // rdi
  bool v10; // r9
  unsigned int v11; // edi
  PVOID v13; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0LL;
  v13 = 0LL;
  v5 = 0LL;
  AcquireSRWLockShared(a1 + 4);
  Ptr = a1[3].Ptr;
  v7 = 0LL;
  v8 = 0LL;
  if ( Ptr )
  {
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(a1[3].Ptr);
    v4 = Ptr;
    v13 = Ptr;
    v7 = Ptr;
    v8 = Ptr;
  }
  v9 = a1[2].Ptr;
  if ( v9 )
  {
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v9 + 8LL))(a1[2].Ptr);
    v5 = v9;
    v7 = v8;
  }
  ReleaseSRWLockShared(a1 + 4);
  *a2 = 0LL;
  if ( v5 )
  {
    v11 = (*(__int64 (__fastcall **)(PVOID, GUID *, void **))(*(_QWORD *)v5 + 24LL))(
            v5,
            &GUID_735924d3_811f_4494_b69c_c641a0c61543,
            a2);
  }
  else if ( v7 )
  {
    v11 = CMarshaledInterface::_Unmarshal(
            (CMarshaledInterface *)&v13,
            &GUID_735924d3_811f_4494_b69c_c641a0c61543,
            a2,
            v10);
    v4 = v13;
  }
  else
  {
    v11 = 0;
  }
  if ( v5 )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v4 )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v4 + 16LL))(v4);
  return v11;
}
