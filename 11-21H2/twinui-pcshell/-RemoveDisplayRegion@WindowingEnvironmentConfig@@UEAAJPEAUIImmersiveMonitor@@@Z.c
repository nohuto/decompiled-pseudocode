/*
 * XREFs of ?RemoveDisplayRegion@WindowingEnvironmentConfig@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x18041C090
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ??$_Find_lower_bound@K@?$_Tree@V?$_Tmap_traits@KUDisplayRegionInfo@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBKUDisplayRegionInfo@@@std@@PEAX@std@@@1@AEBK@Z @ 0x18010A048 (--$_Find_lower_bound@K@-$_Tree@V-$_Tmap_traits@KUDisplayRegionInfo@@U-$less@K@std@@V-$allocator@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_687e5a8c7a4f05ed052b2b78739515ed___ @ 0x18041B8CC (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_687e5a8c7a4f05ed052b2b78739515ed.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowingEnvironmentConfig::RemoveDisplayRegion(
        WindowingEnvironmentConfig *this,
        struct IImmersiveMonitor *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  __int64 *v6; // r10
  __int64 v7; // rdx
  DWORD CurrentThreadId; // eax
  unsigned int v9; // ecx
  int v10; // eax
  const char *v11; // r9
  __int64 result; // rax
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v16; // [rsp+50h] [rbp+8h] BYREF
  __int64 v17; // [rsp+60h] [rbp+18h] BYREF
  RTL_SRWLOCK *v18; // [rsp+68h] [rbp+20h] BYREF

  v4 = *((_QWORD *)this + 6);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 48LL))(v4);
    v16 = 0;
    v5 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, unsigned int *))(*(_QWORD *)a2 + 24LL))(a2, &v16);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xF3,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v5,
        v13);
    std::_Tree<std::_Tmap_traits<unsigned long,DisplayRegionInfo,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,DisplayRegionInfo>>,0>>::_Find_lower_bound<unsigned long>(
      (__int64 *)this + 9,
      (__int64)&v13,
      &v16);
    v7 = v14;
    if ( *(_BYTE *)(v14 + 25) || v16 < *(_DWORD *)(v14 + 28) )
      v7 = *v6;
    v17 = v7;
    if ( v7 == *v6 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xF6,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)0x80070057LL,
        v13);
    *(_QWORD *)&v13 = (char *)this - 32;
    *((_QWORD *)&v13 + 1) = &v17;
    CurrentThreadId = GetCurrentThreadId();
    v10 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_687e5a8c7a4f05ed052b2b78739515ed___(
            v9,
            CurrentThreadId,
            &v13);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x10B,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v10,
        v13);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v18);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x10F,
                           (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
                           v11);
  }
  return result;
}
