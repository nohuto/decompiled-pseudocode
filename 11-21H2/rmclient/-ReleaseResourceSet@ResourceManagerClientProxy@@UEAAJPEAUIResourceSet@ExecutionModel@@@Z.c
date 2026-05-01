/*
 * XREFs of ?ReleaseResourceSet@ResourceManagerClientProxy@@UEAAJPEAUIResourceSet@ExecutionModel@@@Z @ 0x180020290
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180015750 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetResourceSetMapIterator@ResourceManagerClientProxy@@IEAAJPEBUIResourceSet@ExecutionModel@@AEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@utl@@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@2@@utl@@@Z @ 0x18001FCE4 (-GetResourceSetMapIterator@ResourceManagerClientProxy@@IEAAJPEBUIResourceSet@ExecutionModel@@AEA.c)
 */

__int64 __fastcall ResourceManagerClientProxy::ReleaseResourceSet(
        ResourceManagerClientProxy *this,
        struct ExecutionModel::IResourceSet *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  int ResourceSetMapIterator; // edi
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 576);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 576));
  ResourceSetMapIterator = ResourceManagerClientProxy::GetResourceSetMapIterator((__int64)this, (__int64)a2, &v7);
  if ( ResourceSetMapIterator >= 0 )
    ResourceSetMapIterator = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v7 + 32) + 120LL))(*(_QWORD *)(v7 + 32));
  LeaveCriticalSection(v2);
  return (unsigned int)ResourceSetMapIterator;
}
