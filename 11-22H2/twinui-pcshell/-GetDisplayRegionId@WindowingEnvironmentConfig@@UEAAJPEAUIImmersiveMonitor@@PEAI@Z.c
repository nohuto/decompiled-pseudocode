/*
 * XREFs of ?GetDisplayRegionId@WindowingEnvironmentConfig@@UEAAJPEAUIImmersiveMonitor@@PEAI@Z @ 0x180055120
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Find_lower_bound@K@?$_Tree@V?$_Tmap_traits@KUDisplayRegionInfo@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUDisplayRegionInfo@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBKUDisplayRegionInfo@@@std@@PEAX@std@@@1@AEBK@Z @ 0x18008FABC (--$_Find_lower_bound@K@-$_Tree@V-$_Tmap_traits@KUDisplayRegionInfo@@U-$less@K@std@@V-$allocator@.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowingEnvironmentConfig::GetDisplayRegionId(
        WindowingEnvironmentConfig *this,
        struct IImmersiveMonitor *a2,
        unsigned int *a3)
{
  int v6; // eax
  __int64 *v7; // r10
  __int64 v8; // rdx
  char v9; // al
  int v11[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v14; // [rsp+60h] [rbp+18h] BYREF
  PSRWLOCK SRWLock; // [rsp+68h] [rbp+20h] BYREF

  if ( !a3 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x13B,
      (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
      (const char *)0x80070057LL,
      v11[0]);
  *a3 = 0;
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 6) + 56LL))(*((_QWORD *)this + 6), &SRWLock);
  v14 = 0;
  v6 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, unsigned int *))(*(_QWORD *)a2 + 24LL))(a2, &v14);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x142,
      (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
      (const char *)(unsigned int)v6,
      v11[0]);
  std::_Tree<std::_Tmap_traits<unsigned long,DisplayRegionInfo,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,DisplayRegionInfo>>,0>>::_Find_lower_bound<unsigned long>(
    (char *)this + 72,
    v11,
    &v14);
  v8 = v12;
  if ( *(_BYTE *)(v12 + 25) || v14 < *(_DWORD *)(v12 + 28) )
  {
    v8 = *v7;
LABEL_5:
    v9 = 1;
    goto LABEL_9;
  }
  if ( v12 == *v7 )
    goto LABEL_5;
  v9 = 0;
LABEL_9:
  if ( v9 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x145,
      (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
      (const char *)0x80070057LL,
      v11[0]);
  *a3 = *(_DWORD *)(v8 + 32);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return 0LL;
}
