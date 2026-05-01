/*
 * XREFs of ??1ResourceManager@ExecutionModel@@QEAA@XZ @ 0x18008289C
 * Callers:
 *     ?Release@ResourceManager@ExecutionModel@@UEAAKXZ @ 0x180082AC0 (-Release@ResourceManager@ExecutionModel@@UEAAKXZ.c)
 * Callees:
 *     ??1?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@QEAA@XZ @ 0x1800118AC (--1-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@QEAA@XZ.c)
 *     ??1?$CComPtrBase@UIModernResourceEnforcerCallback@@@ATL@@QEAA@XZ @ 0x180013CF4 (--1-$CComPtrBase@UIModernResourceEnforcerCallback@@@ATL@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18004AAAC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall ExecutionModel::ResourceManager::~ResourceManager(ExecutionModel::ResourceManager *this)
{
  __int64 v2; // rcx
  __int64 **v3; // rdi
  __int64 *v4; // rcx
  __int64 *v5; // rdx
  __int64 v6; // rax
  void *v7; // rcx
  __int64 **v8; // rdi
  __int64 *v9; // rsi
  __int64 *v10; // rdx
  __int64 v11; // rax
  void *v12; // rcx
  __int64 v13; // rdi
  char *v14; // rbx

  *(_QWORD *)this = &ExecutionModel::ResourceManager::`vftable'{for `ExecutionModel::IExternalResourceRegister'};
  *((_QWORD *)this + 1) = &ExecutionModel::ResourceManager::`vftable'{for `IModernResourceEnforcerCallback'};
  v2 = *((_QWORD *)this + 17);
  if ( v2 )
  {
    TpReleaseCleanupGroupMembers(v2, 1LL);
    TpReleaseCleanupGroup(*((_QWORD *)this + 17));
  }
  v3 = (__int64 **)((char *)this + 168);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == (__int64 *)v3 )
      break;
    v5 = (__int64 *)v4[1];
    v6 = *v4;
    *v5 = *v4;
    *(_QWORD *)(v6 + 8) = v5;
    operator delete(v4);
  }
  *((_QWORD *)this + 24) = 0LL;
  v7 = (void *)*((_QWORD *)this + 23);
  if ( v7 )
    operator delete(v7);
  v8 = (__int64 **)((char *)this + 88);
  while ( 1 )
  {
    v9 = *v8;
    if ( *v8 == (__int64 *)v8 )
      break;
    v10 = (__int64 *)v9[1];
    v11 = *v9;
    *v10 = *v9;
    *(_QWORD *)(v11 + 8) = v10;
    ATL::CComPtrBase<IModernResourceEnforcerCallback>::~CComPtrBase<IModernResourceEnforcerCallback>(v9 + 4);
    operator delete(v9);
  }
  *((_QWORD *)this + 14) = 0LL;
  v12 = (void *)*((_QWORD *)this + 13);
  if ( v12 )
    operator delete(v12);
  v13 = 2LL;
  v14 = (char *)this + 40;
  do
  {
    v14 -= 8;
    ATL::CComPtr<ExecutionModel::BaseResourceSet>::~CComPtr<ExecutionModel::BaseResourceSet>((__int64)v14);
    --v13;
  }
  while ( v13 );
}
