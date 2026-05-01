/*
 * XREFs of ??0ResourceSetClientProxy@@QEAA@PEAXPEAVResourceManagerClientProxy@@@Z @ 0x18001E8B4
 * Callers:
 *     ?AcquireResourceSetImpl@ResourceManagerClientProxy@@QEAAJPEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG2KK_KKPEA_NPEAUIResourceSet@3@PEAPEAU53@@Z @ 0x18001EF64 (-AcquireResourceSetImpl@ResourceManagerClientProxy@@QEAAJPEAU_ResourceSetInfo@ExecutionModel@@PE.c)
 *     ?CreateTerminalResourceSet@ResourceSetClientProxy@@UEBAJPEAPEAUIResourceSet@ExecutionModel@@@Z @ 0x18001F8B0 (-CreateTerminalResourceSet@ResourceSetClientProxy@@UEBAJPEAPEAUIResourceSet@ExecutionModel@@@Z.c)
 * Callees:
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x18001E940 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 */

ResourceSetClientProxy *__fastcall ResourceSetClientProxy::ResourceSetClientProxy(
        ResourceSetClientProxy *this,
        void *a2,
        struct ResourceManagerClientProxy *a3)
{
  *((_QWORD *)this + 3) = -1LL;
  *((_QWORD *)this + 4) = 0LL;
  *(_QWORD *)this = &ResourceSetClientProxy::`vftable';
  *((_BYTE *)this + 8) = 0;
  *((_QWORD *)this + 2) = a2;
  ExecutionModel::_ResourceSetInfo::_ResourceSetInfo((ResourceSetClientProxy *)((char *)this + 40));
  *((_DWORD *)this + 104) = 0;
  *((_DWORD *)this + 105) = 1;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = a3;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this + 11, 0, 0);
  *((_DWORD *)this + 120) = 0;
  return this;
}
