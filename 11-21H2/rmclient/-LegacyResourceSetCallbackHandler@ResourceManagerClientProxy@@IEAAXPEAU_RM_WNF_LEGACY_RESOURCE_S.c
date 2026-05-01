/*
 * XREFs of ?LegacyResourceSetCallbackHandler@ResourceManagerClientProxy@@IEAAXPEAU_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_PAYLOAD@@@Z @ 0x18001FE6C
 * Callers:
 *     ?LegacyResourceSetCallbackHandlerThunk@ResourceManagerClientProxy@@SAXPEAX0K@Z @ 0x18001FF50 (-LegacyResourceSetCallbackHandlerThunk@ResourceManagerClientProxy@@SAXPEAX0K@Z.c)
 * Callees:
 *     ??$_EqualRangeImpl@_K@?$_HashTable@_KU?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@2@$0A@@utl@@AEBAXU?$integral_constant@_N$0A@@1@AEB_KAEAV?$_DlistIt@U?$_HashNode@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@@utl@@U?$pair@$$CB_KPEAVResourceSetClientProxy@@@2@@1@2AEA_K@Z @ 0x18001E778 (--$_EqualRangeImpl@_K@-$_HashTable@_KU-$pair@$$CB_KPEAVResourceSetClientProxy@@@utl@@U-$hash@_K@.c)
 *     ??1?$CComPtrBase@UIResourceSetCallback@ExecutionModel@@@ATL@@QEAA@XZ @ 0x18001E9FC (--1-$CComPtrBase@UIResourceSetCallback@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18001F674 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?FireCallback@ResourceSetClientProxy@@QEAAXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_TYPE@@U_RM_REVOKE_MESSAGE@@@Z @ 0x18001FAE8 (-FireCallback@ResourceSetClientProxy@@QEAAXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_TYPE@@U_RM_REV.c)
 */

void __fastcall ResourceManagerClientProxy::LegacyResourceSetCallbackHandler(
        ResourceManagerClientProxy *this,
        struct _RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_PAYLOAD *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  ResourceManagerClientProxy *v3; // rsi
  struct IUnknown *v4; // rbx
  __int64 v6; // rdx
  struct IUnknown *v7; // rdx
  _QWORD v8[7]; // [rsp+30h] [rbp-38h] BYREF
  struct IUnknown *v9; // [rsp+70h] [rbp+8h] BYREF
  struct IUnknown **v10; // [rsp+78h] [rbp+10h] BYREF
  __int64 v11; // [rsp+80h] [rbp+18h] BYREF
  __int64 v12; // [rsp+88h] [rbp+20h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 576);
  v3 = this;
  v4 = 0LL;
  v9 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 576));
  v11 = *(_QWORD *)a2;
  v10 = 0LL;
  v3 = (ResourceManagerClientProxy *)((char *)v3 + 616);
  utl::_HashTable<unsigned __int64,utl::pair<unsigned __int64 const,ResourceSetClientProxy *>,utl::hash<unsigned __int64>,utl::equal_to<unsigned __int64>,utl::allocator<utl::pair<unsigned __int64 const,ResourceSetClientProxy *>>,0>::_EqualRangeImpl<unsigned __int64>(
    (__int64)v3,
    v6,
    &v11,
    &v10,
    v8,
    &v12);
  if ( v10 == (struct IUnknown **)v3 )
  {
    LeaveCriticalSection(v2);
  }
  else
  {
    v7 = v10[4];
    if ( v7 )
    {
      ATL::AtlComPtrAssign(&v9, v7);
      v4 = v9;
    }
    LeaveCriticalSection(v2);
    ResourceSetClientProxy::FireCallback((__int64)v4, *((_DWORD *)a2 + 3), *((_DWORD *)a2 + 2));
  }
  ATL::CComPtrBase<ExecutionModel::IResourceSetCallback>::~CComPtrBase<ExecutionModel::IResourceSetCallback>((__int64 *)&v9);
}
