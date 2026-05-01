/*
 * XREFs of ?SetShellCloak@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_privilegedoperations_0000_0002_0001@@@Z @ 0x18014C810
 * Callers:
 *     <none>
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?get@?$static_lazy@VPrivilegedOperationsTraceLogging@@@details@wil@@QEAAPEAVPrivilegedOperationsTraceLogging@@P6AXXZ@Z @ 0x18014CA54 (-get@-$static_lazy@VPrivilegedOperationsTraceLogging@@@details@wil@@QEAAPEAVPrivilegedOperations.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrivilegedPresentationOperations::SetShellCloak(__int64 a1, HWND a2, int a3)
{
  volatile int *v6; // rdx
  _DWORD *v7; // r9
  DWORD WindowThreadProcessId; // ebx
  __int64 v9; // rcx
  __int64 v10; // r10
  REGHANDLE v11; // rcx
  RTL_SRWLOCK *v12; // rdi
  unsigned int v13; // esi
  signed __int32 Ptr_high; // edx
  DWORD dwProcessId; // [rsp+30h] [rbp-59h] BYREF
  DWORD v17; // [rsp+34h] [rbp-55h] BYREF
  DWORD v18; // [rsp+38h] [rbp-51h] BYREF
  BOOL v19; // [rsp+3Ch] [rbp-4Dh] BYREF
  _DWORD pvAttribute[2]; // [rsp+40h] [rbp-49h] BYREF
  HWND v21; // [rsp+48h] [rbp-41h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-29h] BYREF
  void *v24; // [rsp+70h] [rbp-19h]
  int v25; // [rsp+78h] [rbp-11h]
  int v26; // [rsp+7Ch] [rbp-Dh]
  BOOL *v27; // [rsp+80h] [rbp-9h]
  int v28; // [rsp+88h] [rbp-1h]
  int v29; // [rsp+8Ch] [rbp+3h]
  HWND *v30; // [rsp+90h] [rbp+7h]
  int v31; // [rsp+98h] [rbp+Fh]
  int v32; // [rsp+9Ch] [rbp+13h]
  DWORD *v33; // [rsp+A0h] [rbp+17h]
  int v34; // [rsp+A8h] [rbp+1Fh]
  int v35; // [rsp+ACh] [rbp+23h]
  DWORD *v36; // [rsp+B0h] [rbp+27h]
  int v37; // [rsp+B8h] [rbp+2Fh]
  int v38; // [rsp+BCh] [rbp+33h]

  v7 = *(_DWORD **)(wil::details::static_lazy<PrivilegedOperationsTraceLogging>::get(
                      a1,
                      _lambda_87ebf9cdbe9512ecf246e0e20380c4a1_::_lambda_invoker_cdecl_)
                  + 8);
  if ( v7 )
  {
    if ( *v7 )
    {
      WindowThreadProcessId = GetWindowThreadProcessId(a2, &dwProcessId);
      v10 = *(_QWORD *)(wil::details::static_lazy<PrivilegedOperationsTraceLogging>::get(
                          v9,
                          _lambda_87ebf9cdbe9512ecf246e0e20380c4a1_::_lambda_invoker_cdecl_)
                      + 8);
      if ( *(_DWORD *)v10 > 5u )
      {
        v17 = dwProcessId;
        v18 = WindowThreadProcessId;
        v21 = a2;
        v37 = 4;
        v34 = 4;
        v38 = 0;
        v35 = 0;
        v32 = 0;
        v29 = 0;
        EventDescriptor.Keyword = 0LL;
        v19 = a3 == 1;
        v36 = &v17;
        v33 = &v18;
        v30 = &v21;
        v27 = &v19;
        *(_DWORD *)&EventDescriptor.Level = 5;
        UserData.Ptr = *(_QWORD *)(v10 + 8);
        v31 = 8;
        v28 = 4;
        *(_DWORD *)&EventDescriptor.Id = 184549376;
        UserData.Size = *(unsigned __int16 *)UserData.Ptr;
        v24 = &unk_180857220;
        UserData.Reserved = 2;
        v11 = *(_QWORD *)(v10 + 32);
        v25 = 54;
        v26 = 1;
        pvAttribute[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
        EventWriteTransfer(v11, &EventDescriptor, 0LL, 0LL, 6u, &UserData);
      }
    }
  }
  v12 = *(RTL_SRWLOCK **)(a1 + 48);
  if ( v12 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)((char *)&v12[4].Ptr + 4), v6);
  AcquireSRWLockExclusive(v12 + 6);
  EnableIAMAccess(v12[5].Ptr, 1LL);
  pvAttribute[0] = a3 != 0;
  v13 = DwmSetWindowAttribute(a2, 0xDu, pvAttribute, 4u);
  EnableIAMAccess(v12[5].Ptr, 0LL);
  ReleaseSRWLockExclusive(v12 + 6);
  if ( v12 )
  {
    do
      Ptr_high = HIDWORD(v12[4].Ptr);
    while ( Ptr_high != 0x7FFFFFFF
         && Ptr_high != _InterlockedCompareExchange((volatile signed __int32 *)&v12[4].Ptr + 1, Ptr_high - 1, Ptr_high) );
    if ( Ptr_high == 1 )
    {
      (*((void (__fastcall **)(RTL_SRWLOCK *, __int64, __int64))v12->Ptr + 9))(v12, 1LL, 0x7FFFFFFFLL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return v13;
}
