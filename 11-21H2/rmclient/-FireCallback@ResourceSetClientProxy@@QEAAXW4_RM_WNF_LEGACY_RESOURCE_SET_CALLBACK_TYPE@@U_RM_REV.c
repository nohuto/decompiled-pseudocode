/*
 * XREFs of ?FireCallback@ResourceSetClientProxy@@QEAAXW4_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_TYPE@@U_RM_REVOKE_MESSAGE@@@Z @ 0x18001FAE8
 * Callers:
 *     ?LegacyResourceSetCallbackHandler@ResourceManagerClientProxy@@IEAAXPEAU_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_PAYLOAD@@@Z @ 0x18001FE6C (-LegacyResourceSetCallbackHandler@ResourceManagerClientProxy@@IEAAXPEAU_RM_WNF_LEGACY_RESOURCE_S.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180015750 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$CComPtrBase@UIResourceSetCallback@ExecutionModel@@@ATL@@QEAA@XZ @ 0x18001E9FC (--1-$CComPtrBase@UIResourceSetCallback@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18001F674 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 */

__int64 __fastcall ResourceSetClientProxy::FireCallback(__int64 a1, int a2, unsigned int a3)
{
  struct IUnknown *v5; // rcx
  struct IUnknown *v7; // rdx
  int v8; // edi
  int v9; // edi
  struct IUnknown *v11; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  v11 = 0LL;
  v7 = *(struct IUnknown **)(a1 + 424);
  if ( v7 )
  {
    ATL::AtlComPtrAssign(&v11, v7);
    v5 = v11;
  }
  if ( a2 )
  {
    v8 = a2 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 == 1 )
          ((void (__fastcall *)(struct IUnknown *, _QWORD))v5->lpVtbl[2].QueryInterface)(v5, *(_QWORD *)(a1 + 32));
      }
      else
      {
        ((void (__fastcall *)(struct IUnknown *, _QWORD))v5->lpVtbl[1].Release)(v5, *(_QWORD *)(a1 + 32));
      }
    }
    else
    {
      ((void (__fastcall *)(struct IUnknown *, _QWORD, _QWORD))v5->lpVtbl[1].QueryInterface)(
        v5,
        *(_QWORD *)(a1 + 32),
        a3);
    }
  }
  else
  {
    ((void (__fastcall *)(struct IUnknown *, _QWORD))v5->lpVtbl[1].AddRef)(v5, *(_QWORD *)(a1 + 32));
  }
  return ATL::CComPtrBase<ExecutionModel::IResourceSetCallback>::~CComPtrBase<ExecutionModel::IResourceSetCallback>((__int64 *)&v11);
}
