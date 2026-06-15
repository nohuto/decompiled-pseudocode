/*
 * XREFs of ?GetRelatedProcesses@ApplicationSpecificEndpointInfo@@UEAAJPEA_KPEAPEAK@Z @ 0x180043190
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B5D0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010264 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationSpecificEndpointInfo::GetRelatedProcesses(
        ApplicationSpecificEndpointInfo *this,
        unsigned __int64 *a2,
        unsigned int **a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  unsigned int *v9; // rcx
  __int64 v11; // rdx
  const char *v12; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+40h] [rbp+8h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v14 = v6;
  v7 = (__int64)(*((_QWORD *)this + 8) - *((_QWORD *)this + 7)) >> 2;
  v8 = 0LL;
  v9 = 0LL;
  *a2 = v7;
  if ( v7 )
  {
    v9 = (unsigned int *)CoTaskMemAlloc(4 * v7);
    if ( !v9 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x141,
        (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
        (const char *)0x8007000ELL);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v14);
      return 2147942414LL;
    }
    while ( v8 < v7 )
    {
      v11 = *((_QWORD *)this + 7);
      if ( (*((_QWORD *)this + 8) - v11) >> 2 <= v8 )
      {
        try
        {
          std::_Xout_of_range("invalid vector subscript");
        }
        catch ( ... )
        {
          return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                                 retaddr,
                                 (void *)0x14D,
                                 (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applications"
                                      "pecificendpointinfo.cpp",
                                 v12);
        }
      }
      v9[v8] = *(_DWORD *)(v11 + 4 * v8);
      ++v8;
    }
  }
  *a3 = v9;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v14);
  return 0LL;
}
