/*
 * XREFs of ?AddWorkItemToQueue@CConstraintModelResourceManager@@AEAAJPEAVReacquireResourceWorkItem@@@Z @ 0x18010A424
 * Callers:
 *     ?ReacquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJKPEA_K@Z @ 0x180066100 (-ReacquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJKPEA_K@Z.c)
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005A820 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     ?NewNode@?$CAtlList@V?$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V?$CAutoPtrElementTraits@VReacquireResourceWorkItem@@@2@@ATL@@AEAAPEAVCNode@12@AEAV?$CAutoPtr@VReacquireResourceWorkItem@@@2@PEAV312@1@Z @ 0x18010C6E4 (-NewNode@-$CAtlList@V-$CAutoPtr@VReacquireResourceWorkItem@@@ATL@@V-$CAutoPtrElementTraits@VReac.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CConstraintModelResourceManager::AddWorkItemToQueue(
        CConstraintModelResourceManager *this,
        struct ReacquireResourceWorkItem *a2)
{
  CConstraintModelResourceManager *v3; // rdi
  unsigned int v4; // esi
  __int64 v5; // rax
  __int64 *v6; // rcx
  ATL::CAtlException *v8; // rbx
  ATL::CAtlException *v9; // [rsp+20h] [rbp-38h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v11; // [rsp+30h] [rbp-28h]
  void *v13; // [rsp+70h] [rbp+18h] BYREF

  v3 = this;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 232));
  try
  {
    v13 = a2;
    v4 = 0;
    v5 = ATL::CAtlList<ATL::CAutoPtr<ReacquireResourceWorkItem>,ATL::CAutoPtrElementTraits<ReacquireResourceWorkItem>>::NewNode(
           (char *)v3 + 272,
           &v13,
           *((_QWORD *)v3 + 35));
    v6 = (__int64 *)*((_QWORD *)v3 + 35);
    if ( v6 )
      *v6 = v5;
    else
      *((_QWORD *)v3 + 34) = v5;
    *((_QWORD *)v3 + 35) = v5;
  }
  catch ( ATL::CAtlException *v9 )
  {
    v8 = v9;
    if ( *(_DWORD *)v9 == -1073741571 )
      _o__resetstkoflw();
    v3 = this;
    v4 = *(_DWORD *)v8;
  }
  SetEvent(*((HANDLE *)v3 + 28));
  if ( v13 )
    operator delete(v13);
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
  return v4;
}
