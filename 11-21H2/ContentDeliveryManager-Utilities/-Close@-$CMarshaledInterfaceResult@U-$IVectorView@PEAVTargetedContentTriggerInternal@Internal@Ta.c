/*
 * XREFs of ?Close@?$CMarshaledInterfaceResult@U?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Internal@Windows@@QEAAXXZ @ 0x18009C12C
 * Callers:
 *     ?OnClose@?$AsyncOperation@U?$IAsyncOperation@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@23@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAXXZ @ 0x18009F1F0 (-OnClose@-$AsyncOperation@U-$IAsyncOperation@PEAU-$IVectorView@PEAVTargetedContentTriggerInterna.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>::Close(
        __int64 a1)
{
  RTL_SRWLOCK *v2; // rsi
  __int64 *v3; // rax
  __int64 v4; // rdi
  char *v5; // rax
  __int64 v6; // rbx
  char v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (RTL_SRWLOCK *)(a1 + 32);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 32));
  v3 = (__int64 *)(a1 + 16);
  v4 = 0LL;
  if ( &v7 != (char *)(a1 + 16) )
  {
    v4 = *v3;
    *v3 = 0LL;
  }
  v5 = (char *)(a1 + 24);
  v6 = 0LL;
  if ( &v7 != v5 )
  {
    v6 = *(_QWORD *)v5;
    *(_QWORD *)v5 = 0LL;
  }
  ReleaseSRWLockExclusive(v2);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
}
