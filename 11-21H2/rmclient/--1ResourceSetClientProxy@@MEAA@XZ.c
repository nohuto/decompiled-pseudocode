/*
 * XREFs of ??1ResourceSetClientProxy@@MEAA@XZ @ 0x18001EAF0
 * Callers:
 *     ??_GResourceSetClientProxy@@MEAAPEAXI@Z @ 0x18001EB80 (--_GResourceSetClientProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseResources@ResourceSetClientProxy@@UEAAJXZ @ 0x180020330 (-ReleaseResources@ResourceSetClientProxy@@UEAAJXZ.c)
 */

void __fastcall ResourceSetClientProxy::~ResourceSetClientProxy(ResourceSetClientProxy *this)
{
  bool v1; // zf

  v1 = *((_DWORD *)this + 120) == 2;
  *(_QWORD *)this = &ResourceSetClientProxy::`vftable';
  if ( !v1 )
    ResourceSetClientProxy::ReleaseResources(this);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 11);
  ATL::CComPtrBase<ExecutionModel::IResourceSetCallback>::~CComPtrBase<ExecutionModel::IResourceSetCallback>((__int64 *)this + 53);
}
