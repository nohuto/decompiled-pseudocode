/*
 * XREFs of ??0BaseResourceSet@ExecutionModel@@QEAA@XZ @ 0x18003DD38
 * Callers:
 *     ??0ResourceSet@ExecutionModel@@AEAA@XZ @ 0x180014C10 (--0ResourceSet@ExecutionModel@@AEAA@XZ.c)
 *     ??0ExternalResourceSet@ExecutionModel@@AEAA@XZ @ 0x18003AA38 (--0ExternalResourceSet@ExecutionModel@@AEAA@XZ.c)
 *     ?InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x1800454D4 (-InitializePools@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 *     ?InitResourcesFromRegisteredDlls@ResourceManager@ExecutionModel@@QEAAJXZ @ 0x180045D6C (-InitResourcesFromRegisteredDlls@ResourceManager@ExecutionModel@@QEAAJXZ.c)
 * Callees:
 *     ??0_ResourceInfo@ExecutionModel@@QEAA@XZ @ 0x180039560 (--0_ResourceInfo@ExecutionModel@@QEAA@XZ.c)
 */

ExecutionModel::BaseResourceSet *__fastcall ExecutionModel::BaseResourceSet::BaseResourceSet(
        ExecutionModel::BaseResourceSet *this)
{
  ExecutionModel::_ResourceInfo *v1; // rdi
  __int64 v3; // rsi
  ExecutionModel::BaseResourceSet *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  v1 = (ExecutionModel::BaseResourceSet *)((char *)this + 72);
  *((_DWORD *)this + 8) = -1;
  *(_QWORD *)this = &ExecutionModel::BaseResourceSet::`vftable';
  v3 = 50LL;
  *((_BYTE *)this + 12) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 9) = 1;
  *((_QWORD *)this + 5) = (char *)this + 40;
  *((_QWORD *)this + 6) = (char *)this + 40;
  do
  {
    ExecutionModel::_ResourceInfo::_ResourceInfo(v1);
    v1 = (ExecutionModel::_ResourceInfo *)((char *)v1 + 24);
    --v3;
  }
  while ( v3 );
  *((_QWORD *)this + 159) = 0LL;
  result = this;
  *((_DWORD *)this + 320) = 0;
  *((_DWORD *)this + 321) = 0;
  *((_DWORD *)this + 322) = -1;
  return result;
}
