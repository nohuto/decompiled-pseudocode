/*
 * XREFs of ?Get@?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Internal@Windows@@QEAAJPEAPEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@3@@Z @ 0x180026C68
 * Callers:
 *     ?GetResults@?$AsyncOperation@U?$IAsyncOperation@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@23@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@3@@Z @ 0x180024E20 (-GetResults@-$AsyncOperation@U-$IAsyncOperation@PEAU-$IVectorView@PEAVGameListEntry@GamesEnumera.c)
 * Callees:
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x18002931C (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>>::Get(
        RTL_SRWLOCK *a1,
        void **a2)
{
  PVOID v4; // rdi
  PVOID v5; // rbx
  PVOID Ptr; // rsi
  PVOID v7; // r15
  PVOID v8; // rsi
  bool v9; // r9
  unsigned int v10; // esi
  PVOID v12; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0LL;
  v12 = 0LL;
  v5 = 0LL;
  AcquireSRWLockShared(a1 + 4);
  Ptr = a1[3].Ptr;
  v7 = 0LL;
  if ( Ptr )
  {
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(a1[3].Ptr);
    v4 = Ptr;
    v12 = Ptr;
    v7 = Ptr;
  }
  v8 = a1[2].Ptr;
  if ( v8 )
  {
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v8 + 8LL))(a1[2].Ptr);
    v5 = v8;
  }
  ReleaseSRWLockShared(a1 + 4);
  *a2 = 0LL;
  if ( v5 )
  {
    v10 = (*(__int64 (__fastcall **)(PVOID, GUID *, void **))(*(_QWORD *)v5 + 24LL))(
            v5,
            &GUID_0eea1ad9_03e2_5ba9_ae02_daca432f362a,
            a2);
  }
  else if ( v7 )
  {
    v10 = CMarshaledInterface::_Unmarshal(
            (CMarshaledInterface *)&v12,
            &GUID_0eea1ad9_03e2_5ba9_ae02_daca432f362a,
            a2,
            v9);
    v4 = v12;
  }
  else
  {
    v10 = 0;
  }
  if ( v5 )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v4 )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v4 + 16LL))(v4);
  return v10;
}
