/*
 * XREFs of ?WorkItemThreadProc@CConstraintModelResourceManager@@AEAAXXZ @ 0x180014BC8
 * Callers:
 *     ?s_WorkerThreadProc@CConstraintModelResourceManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x180014B20 (-s_WorkerThreadProc@CConstraintModelResourceManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_W.c)
 * Callees:
 *     ?DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleInfo@@@Z @ 0x180014D6C (-DoReacquireSaDeviceResource@CConstraintModelResourceManager@@AEAAJKPEAUReacquireResourceHandleI.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180014E70 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?RemoveHead@?$CAtlList@V?$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V?$CAutoPtrElementTraits@VReacquireResourceWorkItem@@@2@@ATL@@QEAA?AV?$CAutoPtr@VReacquireResourceWorkItem@@@2@XZ @ 0x180014EA4 (-RemoveHead@-$CAtlList@V-$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V-$CAutoPtrElementTraits@VR.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067028 (--3@YAXPEAX_K@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800CE814 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CConstraintModelResourceManager::WorkItemThreadProc(CConstraintModelResourceManager *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rbp
  char *v5; // r14
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-38h] BYREF
  char v7; // [rsp+28h] [rbp-30h]
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+30h] [rbp-28h]
  char v9; // [rsp+38h] [rbp-20h]
  void *v10; // [rsp+60h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 232);
  while ( 1 )
  {
    v3 = 0LL;
    v8 = v2;
    EnterCriticalSection(v2);
    v9 = 1;
    v4 = *((_QWORD *)this + 36);
    v5 = (char *)this + 272;
    if ( v4 )
    {
      if ( !*(_QWORD *)v5 )
        ATL::AtlThrowImpl(-2147467259);
      v3 = *(_QWORD *)(*(_QWORD *)v5 + 16LL);
    }
    LeaveCriticalSection(v2);
    v9 = 0;
    if ( !v4 )
      break;
    CConstraintModelResourceManager::DoReacquireSaDeviceResource(
      this,
      *(_DWORD *)v3,
      (struct ReacquireResourceHandleInfo *)(v3 + 8));
    ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
      &lpCriticalSection,
      v2);
    ATL::CAtlList<ATL::CAutoPtr<ReacquireResourceWorkItem>,ATL::CAutoPtrElementTraits<ReacquireResourceWorkItem>>::RemoveHead(
      (char *)this + 272,
      &v10);
    if ( v10 )
      operator delete(v10, 0x18uLL);
    v10 = 0LL;
    if ( v7 )
    {
      LeaveCriticalSection(lpCriticalSection);
      v7 = 0;
    }
  }
}
