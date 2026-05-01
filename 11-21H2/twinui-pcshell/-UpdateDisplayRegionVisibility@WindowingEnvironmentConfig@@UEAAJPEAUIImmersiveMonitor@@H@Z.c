/*
 * XREFs of ?UpdateDisplayRegionVisibility@WindowingEnvironmentConfig@@UEAAJPEAUIImmersiveMonitor@@H@Z @ 0x18041C270
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ??$_Find_lower_bound@K@?$_Tree@V?$_Tmap_traits@KUDisplayRegionInfo@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBKUDisplayRegionInfo@@@std@@PEAX@std@@@1@AEBK@Z @ 0x18010A048 (--$_Find_lower_bound@K@-$_Tree@V-$_Tmap_traits@KUDisplayRegionInfo@@U-$less@K@std@@V-$allocator@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_5b81071474e0379f4c1550f72c623acc___ @ 0x18041B7EC (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_5b81071474e0379f4c1550f72c623acc.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowingEnvironmentConfig::UpdateDisplayRegionVisibility(
        WindowingEnvironmentConfig *this,
        struct IImmersiveMonitor *a2,
        int a3)
{
  __int64 v5; // rcx
  int v6; // eax
  __int64 *v7; // r10
  __int64 v8; // rdx
  DWORD CurrentThreadId; // eax
  unsigned int v10; // ecx
  int v11; // eax
  const char *v12; // r9
  __int64 result; // rax
  int v14[2]; // [rsp+20h] [rbp-38h] BYREF
  RTL_SRWLOCK *v15; // [rsp+28h] [rbp-30h] BYREF
  __int128 v16; // [rsp+30h] [rbp-28h] BYREF
  int v17[2]; // [rsp+40h] [rbp-18h]
  int *v18; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v20; // [rsp+60h] [rbp+8h] BYREF
  int v21; // [rsp+70h] [rbp+18h] BYREF
  unsigned int v22; // [rsp+78h] [rbp+20h] BYREF

  v21 = a3;
  v5 = *((_QWORD *)this + 6);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 48LL))(v5);
    v22 = 0;
    v6 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, unsigned int *))(*(_QWORD *)a2 + 24LL))(a2, &v22);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x116,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)(unsigned int)v6,
        v14[0]);
    std::_Tree<std::_Tmap_traits<unsigned long,DisplayRegionInfo,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,DisplayRegionInfo>>,0>>::_Find_lower_bound<unsigned long>(
      (__int64 *)this + 9,
      (__int64)&v16,
      &v22);
    v8 = *(_QWORD *)v17;
    if ( *(_BYTE *)(*(_QWORD *)v17 + 25LL) || v22 < *(_DWORD *)(*(_QWORD *)v17 + 28LL) )
      v8 = *v7;
    *(_QWORD *)v14 = v8;
    if ( v8 == *v7 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x119,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)0x80070057LL,
        v14[0]);
    LOBYTE(v20) = v21 != 0;
    if ( (v21 != 0) != *(_BYTE *)(v8 + 56) )
    {
      *(_QWORD *)&v16 = (char *)this - 32;
      *((_QWORD *)&v16 + 1) = v14;
      *(_QWORD *)v17 = &v20;
      v18 = &v21;
      CurrentThreadId = GetCurrentThreadId();
      v11 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_5b81071474e0379f4c1550f72c623acc___(
              v10,
              CurrentThreadId,
              &v16);
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x132,
          (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
          (const char *)(unsigned int)v11,
          v14[0]);
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v15);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x137,
                           (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
                           v12);
  }
  return result;
}
