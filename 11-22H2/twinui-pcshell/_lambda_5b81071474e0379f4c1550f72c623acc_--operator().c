/*
 * XREFs of _lambda_5b81071474e0379f4c1550f72c623acc_::operator() @ 0x1804F477C
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_5b81071474e0379f4c1550f72c623acc___::Run @ 0x1804F4FA0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_5b81071474e0379f4c1550f7_ea_1804F4FA0.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_5b81071474e0379f4c1550f72c623acc_::operator()(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, __int64 *); // rsi
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, _QWORD, __int64 *); // rsi
  __int64 v9; // rcx
  int v10; // eax
  _BYTE *v11; // rdx
  int v12; // eax
  int v13; // eax
  const char *v14; // r9
  __int64 result; // rax
  int v16; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v18; // [rsp+30h] [rbp+8h] BYREF
  __int64 v19; // [rsp+38h] [rbp+10h] BYREF

  v19 = 0LL;
  v2 = *(_QWORD *)(*(_QWORD *)a1 + 80LL);
  try
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
    v4 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 48LL);
    v5 = v19;
    v19 = 0LL;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    v6 = v4(v3, &v19);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x124,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v6,
        v16);
    v18 = 0LL;
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 80LL) + 40LL))(*(_QWORD *)(*(_QWORD *)a1 + 80LL));
    v8 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v7 + 56LL);
    v9 = v18;
    v18 = 0LL;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v10 = v8(v7, *(unsigned int *)(**(_QWORD **)(a1 + 8) + 32LL), &v18);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x127,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v10,
        v16);
    v11 = *(_BYTE **)(a1 + 16);
    LOBYTE(v11) = *v11;
    v12 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v18 + 112LL))(v18, v11);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x128,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v12,
        v16);
    v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 56LL))(v19);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x12A,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v13,
        v16);
    *(_BYTE *)(**(_QWORD **)(a1 + 8) + 56LL) = **(_DWORD **)(a1 + 24) != 0;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v18);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v19);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x12E,
                           (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
                           v14);
  }
  return result;
}
