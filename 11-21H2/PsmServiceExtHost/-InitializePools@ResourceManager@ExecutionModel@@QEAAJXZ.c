/*
 * XREFs of ?InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x18004A120
 * Callers:
 *     ?Initialize@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnforcer@@@Z @ 0x180049DD4 (-Initialize@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_SERVICE_GLOBALS@@PEAVModernResourceEnfo.c)
 * Callees:
 *     ??0BaseResourceSet@ExecutionModel@@QEAA@XZ @ 0x180041BB4 (--0BaseResourceSet@ExecutionModel@@QEAA@XZ.c)
 *     ?InitResourcesFromRegisteredDlls@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x18004A1F4 (-InitResourcesFromRegisteredDlls@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 *     ?Attach@?$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@QEAAXPEAVBaseResourceSet@ExecutionModel@@@Z @ 0x18004A744 (-Attach@-$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@QEAAXPEAVBaseResourceSet@ExecutionM.c)
 *     ?SetMainPoolSizes@ResourceManager@ExecutionModel@@QEAAX_K@Z @ 0x18004A778 (-SetMainPoolSizes@ResourceManager@ExecutionModel@@QEAAX_K@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18004A830 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?RmpGetIoPoolSize@@YAKPEA_K@Z @ 0x18004A88C (-RmpGetIoPoolSize@@YAKPEA_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F7E8 (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 */

signed int __fastcall ExecutionModel::ResourceManager::InitializePools(struct IUnknown **this)
{
  char *v2; // rdi
  ExecutionModel::BaseResourceSet *v3; // rax
  signed int result; // eax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = (char *)(this + 4);
  v3 = (ExecutionModel::BaseResourceSet *)operator new(0x510uLL);
  if ( v3 )
    v3 = ExecutionModel::BaseResourceSet::BaseResourceSet(v3);
  ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::Attach(v2, v3);
  if ( !*(_QWORD *)v2 )
    return -2147024882;
  result = RmpGetIoPoolSize(&v6);
  if ( result )
  {
    if ( result > 0 )
      return (unsigned __int16)result | 0x80070000;
  }
  else
  {
    v5 = v6;
    *(_DWORD *)(*(_QWORD *)v2 + 1280LL) = 2;
    *(_DWORD *)(*(_QWORD *)v2 + 16LL) = 1;
    *(_QWORD *)(*(_QWORD *)v2 + 24LL) = this;
    ExecutionModel::ResourceManager::SetMainPoolSizes((ExecutionModel::ResourceManager *)this, v5);
    if ( this[3] )
      ATL::AtlComPtrAssign(this + 3, 0LL);
    result = ExecutionModel::ResourceManager::InitResourcesFromRegisteredDlls((ExecutionModel::ResourceManager *)this);
    if ( result >= 0 )
    {
      ((void (__fastcall *)(struct IUnknown **, __int64, __int64))(*this)[3].lpVtbl)(this, 27LL, 0xFFFFFFFFLL);
      return 0;
    }
  }
  return result;
}
