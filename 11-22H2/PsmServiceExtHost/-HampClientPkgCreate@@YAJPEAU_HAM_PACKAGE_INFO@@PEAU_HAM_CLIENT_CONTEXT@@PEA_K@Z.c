/*
 * XREFs of ?HampClientPkgCreate@@YAJPEAU_HAM_PACKAGE_INFO@@PEAU_HAM_CLIENT_CONTEXT@@PEA_K@Z @ 0x180036FD8
 * Callers:
 *     ?HamSrvOpenPackageHandle@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAEKPEA_K@Z @ 0x180036E1C (-HamSrvOpenPackageHandle@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAEKPEA_K@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     ?HampClientPkgInitialize@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z @ 0x18001448C (-HampClientPkgInitialize@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_PACKAGE_.c)
 *     ?HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@@@Z @ 0x180031CD0 (-HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@.c)
 *     ?HampClientPkgInsert@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z @ 0x180037854 (-HampClientPkgInsert@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z.c)
 */

__int64 __fastcall HampClientPkgCreate(
        struct _HAM_PACKAGE_INFO *a1,
        struct _HAM_CLIENT_CONTEXT *a2,
        unsigned __int64 *a3)
{
  struct _HAM_CLIENT_PACKAGE_CONTEXT *v5; // rbx
  int v6; // esi
  struct _HAM_CLIENT_PACKAGE_CONTEXT *Heap; // rax
  struct _HAM_PACKAGE *v8; // rdi
  struct _HAM_PACKAGE *v10; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0LL;
  v10 = 0LL;
  v6 = HampPkgFindOrCreate(
         (struct _HOST_ACTIVITY_MANAGER *)((*((_QWORD *)a2 + 4) & 0xFFFFFFFFFFFFFFFCuLL)
                                         - 48LL * *((unsigned __int8 *)a2 + 164)
                                         - 16),
         a1,
         &v10);
  if ( v6 < 0 )
  {
    v8 = v10;
  }
  else
  {
    Heap = (struct _HAM_CLIENT_PACKAGE_CONTEXT *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x48uLL);
    v8 = v10;
    v5 = Heap;
    if ( Heap )
    {
      HampClientPkgInitialize(a2, v10, Heap);
      HampClientPkgInsert(a2, v5);
      v6 = 0;
      *a3 = *((_QWORD *)v5 + 6);
    }
    else
    {
      v6 = -1073741801;
    }
  }
  if ( v8 )
    CemRcObjectDereference(v8);
  if ( v5 )
    CemRcObjectDereference(v5);
  return (unsigned int)v6;
}
