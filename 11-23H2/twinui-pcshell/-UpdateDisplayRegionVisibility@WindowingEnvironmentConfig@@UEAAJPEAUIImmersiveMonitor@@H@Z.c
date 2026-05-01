/*
 * XREFs of ?UpdateDisplayRegionVisibility@WindowingEnvironmentConfig@@UEAAJPEAUIImmersiveMonitor@@H@Z @ 0x1804F5000
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Find_lower_bound@K@?$_Tree@V?$_Tmap_traits@KUDisplayRegionInfo@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBKUDisplayRegionInfo@@@std@@PEAX@std@@@1@AEBK@Z @ 0x18008FABC (--$_Find_lower_bound@K@-$_Tree@V-$_Tmap_traits@KUDisplayRegionInfo@@U-$less@K@std@@V-$allocator@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_5b81071474e0379f4c1550f72c623acc___ @ 0x1804F4568 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_5b81071474e0379f4c1550f72c623acc.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowingEnvironmentConfig::UpdateDisplayRegionVisibility(
        WindowingEnvironmentConfig *this,
        struct IImmersiveMonitor *a2,
        int a3)
{
  __int64 v5; // rcx
  int v6; // eax
  const char *v7; // r9
  __int64 *v8; // r10
  __int64 v9; // rdx
  DWORD CurrentThreadId; // eax
  unsigned int v11; // ecx
  int v12; // eax
  __int64 result; // rax
  int v14[2]; // [rsp+20h] [rbp-38h] BYREF
  PSRWLOCK SRWLock; // [rsp+28h] [rbp-30h]
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
    v9 = *(_QWORD *)v17;
    if ( *(_BYTE *)(*(_QWORD *)v17 + 25LL) || v22 < *(_DWORD *)(*(_QWORD *)v17 + 28LL) )
      v9 = *v8;
    *(_QWORD *)v14 = v9;
    if ( v9 == *v8 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x119,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)0x80070057LL,
        v14[0]);
    LOBYTE(v20) = v21 != 0;
    if ( (v21 != 0) != *(_BYTE *)(v9 + 56) )
    {
      *(_QWORD *)&v16 = (char *)this - 32;
      *((_QWORD *)&v16 + 1) = v14;
      *(_QWORD *)v17 = &v20;
      v18 = &v21;
      CurrentThreadId = GetCurrentThreadId();
      v12 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_5b81071474e0379f4c1550f72c623acc___(
              v11,
              CurrentThreadId,
              &v16);
      if ( v12 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x132,
          (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
          (const char *)(unsigned int)v12,
          v14[0]);
    }
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x137,
                           (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
                           v7);
  }
  return result;
}
