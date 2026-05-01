/*
 * XREFs of _lambda_086ca819410f95c1740d891b31dce0f8_::operator() @ 0x180078D68
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_086ca819410f95c1740d891b31dce0f8___::Run @ 0x180078D40 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_086ca819410f95c1740d891b31dce0f8___--.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?get@?$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@P6AXXZ@Z @ 0x180090CEC (-get@-$static_lazy@VViewManagerInteropLogging@@@details@wil@@QEAAPEAVViewManagerInteropLogging@@.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_086ca819410f95c1740d891b31dce0f8_::operator()(_DWORD **a1)
{
  _QWORD *v2; // rbx
  int v3; // ecx
  int v4; // edi
  __int64 v5; // rcx
  __int64 v6; // r10
  const char *v7; // r9
  __int64 result; // rax
  int v9; // [rsp+30h] [rbp-88h] BYREF
  _DWORD v10[3]; // [rsp+34h] [rbp-84h] BYREF
  char v11[8]; // [rsp+40h] [rbp-78h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-58h] BYREF
  void *v14; // [rsp+70h] [rbp-48h]
  int v15; // [rsp+78h] [rbp-40h]
  int v16; // [rsp+7Ch] [rbp-3Ch]
  int *v17; // [rsp+80h] [rbp-38h]
  int v18; // [rsp+88h] [rbp-30h]
  int v19; // [rsp+8Ch] [rbp-2Ch]
  _DWORD *v20; // [rsp+90h] [rbp-28h]
  int v21; // [rsp+98h] [rbp-20h]
  int v22; // [rsp+9Ch] [rbp-1Ch]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  try
  {
    v2 = *a1;
    (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)*a1 + 35) + 200LL))(*((_QWORD *)*a1 + 35), v11);
    v3 = *a1[1];
    if ( v3 != *((_DWORD *)v2 + 66) )
    {
      *((_DWORD *)v2 + 66) = v3;
      v4 = (*(__int64 (__fastcall **)(_QWORD *))(v2[2] + 288LL))(v2 + 2);
      v6 = *(_QWORD *)(wil::details::static_lazy<ViewManagerInteropLogging>::get(
                         v5,
                         _lambda_24753d83db9805a1b3cb729875e7abb0_::_lambda_invoker_cdecl_)
                     + 8);
      if ( *(_DWORD *)v6 > 5u )
      {
        v10[0] = *((_DWORD *)v2 + 66);
        v9 = v4;
        v20 = v10;
        v21 = 4;
        v22 = 0;
        v17 = &v9;
        v18 = 4;
        v19 = 0;
        *(_DWORD *)&EventDescriptor.Id = 184549376;
        *(_DWORD *)&EventDescriptor.Level = 5;
        EventDescriptor.Keyword = 0LL;
        UserData.Ptr = *(_QWORD *)(v6 + 8);
        UserData.Size = *(unsigned __int16 *)UserData.Ptr;
        UserData.Reserved = 2;
        v14 = &unk_1806B25C9;
        v15 = 74;
        v16 = 1;
        v10[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
        EventWriteTransfer(*(_QWORD *)(v6 + 32), &EventDescriptor, 0LL, 0LL, 4u, &UserData);
      }
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(v11);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x91F,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v7);
  }
  return result;
}
