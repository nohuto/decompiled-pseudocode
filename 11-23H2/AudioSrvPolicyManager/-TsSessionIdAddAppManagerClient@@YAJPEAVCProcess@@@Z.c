/*
 * XREFs of ?TsSessionIdAddAppManagerClient@@YAJPEAVCProcess@@@Z @ 0x180037EDC
 * Callers:
 *     PbmRegisterAppManagerNotification @ 0x1800317F0 (PbmRegisterAppManagerNotification.c)
 * Callees:
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800025C0 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x180009190 (-TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B580 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Lock@CApplicationManager@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18000E200 (-Lock@CApplicationManager@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_C.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010214 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace_front@AEAPEAVCProcess@@@?$forward_list@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?A_TAEAPEAVCProcess@@@Z @ 0x180024998 (--$emplace_front@AEAPEAVCProcess@@@-$forward_list@V-$com_ptr_t@VCProcess@@Uerr_returncode_policy.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TsSessionIdAddAppManagerClient(DWORD *a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  const char *v4; // r9
  __int64 result; // rax
  int v6; // ecx
  int v7; // eax
  unsigned int v8; // ebx
  int v9[2]; // [rsp+20h] [rbp-48h] BYREF
  int v10; // [rsp+28h] [rbp-40h]
  int *v11; // [rsp+58h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct CProcess *v13; // [rsp+70h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+78h] [rbp+10h] BYREF
  struct TSSession *v15; // [rsp+80h] [rbp+18h] BYREF

  v13 = (struct CProcess *)a1;
  CApplicationManager::Lock((__int64)a1, &v14);
  try
  {
    v2 = TsSessionFromSessionId(a1[41], 1, &v15);
    v3 = v2;
    if ( v2 >= 0 )
    {
      std::forward_list<wil::com_ptr_t<CProcess,wil::err_returncode_policy>>::emplace_front<CProcess * &>(
        (_QWORD *)v15 + 5,
        (__int64 *)&v13);
      v6 = *((_DWORD *)v13 + 41);
      *(_QWORD *)v9 = &off_18004EFD0;
      v10 = v6;
      v11 = v9;
      v7 = QueueGenericWorkItem((__int64 *)v9);
      v8 = v7;
      if ( v7 >= 0 )
      {
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v14);
        result = 0LL;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4EF,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
          (const char *)(unsigned int)v7);
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v14);
        result = v8;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4E5,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)(unsigned int)v2);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v14);
      result = v3;
    }
  }
  catch ( ... )
  {
    LODWORD(v13) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x4F3,
                     (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
                     v4);
    return (unsigned int)v13;
  }
  return result;
}
