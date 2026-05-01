/*
 * XREFs of ?ResourceSetFactory@ResourceSet@ExecutionModel@@CAJ_KPEAVBaseResourceSet@2@PEAU_RM_ACTIVITY_HOST@@PEAXPEAPEAV12@@Z @ 0x1800510F0
 * Callers:
 *     ?CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAXPEAUIResourceSetCallback@2@PEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_REASON_INTERNAL@@_KPEAPEAV12@@Z @ 0x180050BBC (-CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAX.c)
 * Callees:
 *     ?RmpObjectHeaderInitialize@@YAXPEAU_RM_OBJECT_HEADER@@_KW4_HAM_OBJECT_TYPE@@@Z @ 0x180010D00 (-RmpObjectHeaderInitialize@@YAXPEAU_RM_OBJECT_HEADER@@_KW4_HAM_OBJECT_TYPE@@@Z.c)
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180010F30 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?RmpResourceSetAssociateWithEmSet@@YAXPEAU_RM_RESOURCE_SET@@PEAVResourceSet@ExecutionModel@@@Z @ 0x1800117AC (-RmpResourceSetAssociateWithEmSet@@YAXPEAU_RM_RESOURCE_SET@@PEAVResourceSet@ExecutionModel@@@Z.c)
 *     ??0ResourceSet@ExecutionModel@@AEAA@XZ @ 0x180014C10 (--0ResourceSet@ExecutionModel@@AEAA@XZ.c)
 *     ?RmpObjectTableAddObject@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z @ 0x18002DD10 (-RmpObjectTableAddObject@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180032530 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpSystemDuplicateHandle@@YAJPEAXKPEAPEAX@Z @ 0x180041C94 (-RmpSystemDuplicateHandle@@YAJPEAXKPEAPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AA48 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1800536FA (memset_0.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::ResourceSetFactory(
        __int64 a1,
        struct ExecutionModel::BaseResourceSet *a2,
        struct _RM_ACTIVITY_HOST *a3,
        void *a4,
        struct ExecutionModel::ResourceSet **a5)
{
  PVOID Heap; // rax
  __int64 v10; // rdi
  NTSTATUS v11; // ebx
  ExecutionModel::ResourceSet *v12; // rax
  ExecutionModel::ResourceSet *v13; // rax
  struct ExecutionModel::ResourceSet *v14; // rbx

  Heap = HampAllocateHeap(0x50uLL);
  v10 = (__int64)Heap;
  if ( !Heap )
  {
    v11 = -1073741801;
    return v11 | 0x10000000u;
  }
  memset_0(Heap, 0, 0x50uLL);
  RmpObjectHeaderInitialize(v10, a1, 1);
  if ( a4 )
  {
    v11 = RmpSystemDuplicateHandle(a4, 1u, (PHANDLE)(v10 + 56));
    if ( v11 < 0 )
    {
LABEL_11:
      RmpObjectRelease((struct _RM_OBJECT_HEADER *)v10);
      return v11 | 0x10000000u;
    }
  }
  v12 = (ExecutionModel::ResourceSet *)operator new(0x6D0uLL);
  if ( !v12 || (v13 = ExecutionModel::ResourceSet::ResourceSet(v12), (v14 = v13) == 0LL) )
  {
    v11 = -1073741801;
    goto LABEL_11;
  }
  *((_QWORD *)v13 + 8) = a2;
  *((_DWORD *)v13 + 4) = *((_DWORD *)a2 + 4);
  *((_QWORD *)v13 + 3) = *((_QWORD *)a2 + 3);
  *((_QWORD *)v13 + 159) = *((_QWORD *)a2 + 159);
  if ( _InterlockedIncrement64((volatile signed __int64 *)a3 + 2) <= 1 )
    __fastfail(0xEu);
  *((_QWORD *)v13 + 165) = a3;
  RmpResourceSetAssociateWithEmSet((struct _RM_RESOURCE_SET *)v10, v13);
  RmpObjectTableAddObject(
    (struct _RM_OBJECT_TABLE *)(*(_QWORD *)(*((_QWORD *)v14 + 3) + 128LL) + 536LL),
    (struct _RM_OBJECT_HEADER *)v10);
  *a5 = v14;
  v11 = 0;
  return v11 | 0x10000000u;
}
