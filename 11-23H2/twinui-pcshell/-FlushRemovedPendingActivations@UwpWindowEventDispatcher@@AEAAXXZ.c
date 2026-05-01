/*
 * XREFs of ?FlushRemovedPendingActivations@UwpWindowEventDispatcher@@AEAAXXZ @ 0x18019E208
 * Callers:
 *     ?v_ShutdownServices@UwpWindowEventDispatcher@@UEAAJPEAUIProfferService@@@Z @ 0x18019E040 (-v_ShutdownServices@UwpWindowEventDispatcher@@UEAAJPEAUIProfferService@@@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6f97718575e1cd15cbb9f08738e16ff5___::Run @ 0x1804D2320 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6f97718575e1cd15cbb9f08738e16ff5___--Run.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$PendingActivationDelete@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z @ 0x1804B9FE4 (--$PendingActivationDelete@AEA_KPEBG@ViewManagerInteropTraceLogging@@SAXAEA_K$$QEAPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall UwpWindowEventDispatcher::FlushRemovedPendingActivations(RTL_SRWLOCK *this)
{
  __int64 v2; // rdi
  void *v3; // rbx
  _QWORD *v4; // rdx
  __int64 v5; // rcx
  PCWSTR StringRawBuffer; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  while ( this[71].Ptr )
  {
    AcquireSRWLockExclusive(this + 61);
    v2 = *(_QWORD *)(*(_QWORD *)this[70].Ptr + 16LL);
    v7 = v2;
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v3 = *(void **)this[70].Ptr;
    v4 = *(_QWORD **)v3;
    --this[71].Ptr;
    **((_QWORD **)v3 + 1) = v4;
    v4[1] = *((_QWORD *)v3 + 1);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v3 + 2);
    std::_Deallocate<16,0>(v3, 0x18uLL);
    if ( this != (RTL_SRWLOCK *)-488LL )
      ReleaseSRWLockExclusive(this + 61);
    v5 = *(_QWORD *)(v2 + 24);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 40LL))(v5);
    StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(v2 + 16), 0LL);
    ViewManagerInteropTraceLogging::PendingActivationDelete<unsigned __int64 &,unsigned short const *>(
      v2 + 8,
      &StringRawBuffer);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v7);
  }
}
