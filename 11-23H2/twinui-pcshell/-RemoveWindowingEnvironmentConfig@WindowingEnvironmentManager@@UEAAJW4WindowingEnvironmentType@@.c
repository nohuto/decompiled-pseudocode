/*
 * XREFs of ?RemoveWindowingEnvironmentConfig@WindowingEnvironmentManager@@UEAAJW4WindowingEnvironmentType@@@Z @ 0x18008E5B0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_37b02de6af5cc70082ddb03b5db08654___ @ 0x18008E4C8 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_37b02de6af5cc70082ddb03b5db08654.c)
 *     ??$_Find_lower_bound@W4WindowingEnvironmentType@@@?$_Tree@V?$_Tmap_traits@W4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@U?$less@W4WindowingEnvironmentType@@@std@@V?$allocator@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBW4WindowingEnvironmentType@@V?$com_ptr_t@UIWindowingEnvironmentConfigInternal@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@std@@@1@AEBW4WindowingEnvironmentType@@@Z @ 0x1800915D0 (--$_Find_lower_bound@W4WindowingEnvironmentType@@@-$_Tree@V-$_Tmap_traits@W4WindowingEnvironment.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowingEnvironmentManager::RemoveWindowingEnvironmentConfig(RTL_SRWLOCK *a1, int a2)
{
  RTL_SRWLOCK *v3; // rbx
  __int64 v4; // rcx
  DWORD CurrentThreadId; // eax
  unsigned int v7; // ecx
  int v8; // eax
  int v10[10]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = a2;
  v3 = a1 + 3;
  AcquireSRWLockExclusive(a1 + 3);
  v4 = *(_QWORD *)(std::_Tree<std::_Tmap_traits<enum WindowingEnvironmentType,wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>,std::less<enum WindowingEnvironmentType>,std::allocator<std::pair<enum WindowingEnvironmentType const,wil::com_ptr_t<IWindowingEnvironmentConfigInternal,wil::err_exception_policy>>>,0>>::_Find_lower_bound<enum WindowingEnvironmentType>(
                     &a1[4],
                     v10,
                     &v12)
                 + 16);
  if ( *(_BYTE *)(v4 + 25) || v12 < *(_DWORD *)(v4 + 32) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xA6,
      (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
      (const char *)0x80070057LL,
      v10[0]);
  *(_QWORD *)v10 = a1 - 17;
  *(_QWORD *)&v10[2] = &v12;
  CurrentThreadId = GetCurrentThreadId();
  v8 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_37b02de6af5cc70082ddb03b5db08654___(
         v7,
         CurrentThreadId,
         v10);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xD3,
      (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
      (const char *)(unsigned int)v8,
      v10[0]);
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  return 0LL;
}
