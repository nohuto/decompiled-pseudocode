/*
 * XREFs of ?SetMainPoolSizes@ResourceManager@ExecutionModel@@QEAAX_K@Z @ 0x1800465CC
 * Callers:
 *     ?InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x180045564 (-InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 * Callees:
 *     ??1?$CComPtrBase@UIModernResourceEnforcerCallback@@@ATL@@QEAA@XZ @ 0x180013CF4 (--1-$CComPtrBase@UIModernResourceEnforcerCallback@@@ATL@@QEAA@XZ.c)
 *     ?InitializeResource@BaseResourceSet@ExecutionModel@@AEAAJPEBU_ResourceInfo@2@@Z @ 0x18003E51C (-InitializeResource@BaseResourceSet@ExecutionModel@@AEAAJPEBU_ResourceInfo@2@@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180046684 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 */

void __fastcall ExecutionModel::ResourceManager::SetMainPoolSizes(ExecutionModel::ResourceManager *this, __int64 a2)
{
  struct IUnknown *v2; // r9
  struct IUnknown *v4; // rdx
  struct IUnknown *v6; // rcx
  ExecutionModel::BaseResourceSet *v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rax
  int v11; // [rsp+20h] [rbp-30h] BYREF
  __int64 v12; // [rsp+28h] [rbp-28h]
  int v13; // [rsp+30h] [rbp-20h]
  __int16 v14; // [rsp+34h] [rbp-1Ch]
  int v15; // [rsp+38h] [rbp-18h] BYREF
  __int64 v16; // [rsp+40h] [rbp-10h]
  int v17; // [rsp+48h] [rbp-8h]
  __int16 v18; // [rsp+4Ch] [rbp-4h]
  struct IUnknown *v19; // [rsp+60h] [rbp+10h] BYREF

  v2 = 0LL;
  v4 = (struct IUnknown *)*((_QWORD *)this + 4);
  v19 = 0LL;
  if ( v4 )
  {
    ATL::AtlComPtrAssign(&v19, v4);
    v2 = v19;
  }
  v6 = v2 + 9;
  if ( LODWORD(v2[9].lpVtbl) != -1 )
  {
    v8 = 0LL;
    v9 = 3LL;
    do
    {
      v6[1].lpVtbl = 0LL;
      LODWORD(v6->lpVtbl) = -1;
      v6 += 3;
      v10 = (__int64)v2[159].lpVtbl & ~(1LL << v8++);
      v2[159].lpVtbl = (struct IUnknownVtbl *)v10;
      --v9;
    }
    while ( v9 );
  }
  v11 = 0;
  v14 = 1;
  v13 = 101;
  v17 = 101;
  v12 = -1LL;
  v15 = 2;
  v18 = 1;
  v16 = a2;
  ExecutionModel::BaseResourceSet::InitializeResource(
    (ExecutionModel::BaseResourceSet *)v2,
    (const struct ExecutionModel::_ResourceInfo *)&v11);
  ExecutionModel::BaseResourceSet::InitializeResource(v7, (const struct ExecutionModel::_ResourceInfo *)&v15);
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 5) = a2;
  ATL::CComPtrBase<IModernResourceEnforcerCallback>::~CComPtrBase<IModernResourceEnforcerCallback>((__int64 *)&v19);
}
