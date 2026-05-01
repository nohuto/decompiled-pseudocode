/*
 * XREFs of ?CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAXPEAUIResourceSetCallback@2@PEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_REASON_INTERNAL@@_KPEAPEAV12@@Z @ 0x1800509BC
 * Callers:
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_ACTIVITY_HOST@@PEAXPEAUIResourceSetCallback@2@_KPEAPEAVResourceSet@2@@Z @ 0x18004F664 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_ACTIVITY.c)
 * Callees:
 *     ?RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z @ 0x18000DEDC (-RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z.c)
 *     ?RmpActivityHostAddResourceSet@@YAXPEAVResourceSet@ExecutionModel@@W4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180029CE4 (-RmpActivityHostAddResourceSet@@YAXPEAVResourceSet@ExecutionModel@@W4_RM_RESOURCE_SET_CATEGORY@@.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800465F4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?ResourceSetFactory@ResourceSet@ExecutionModel@@CAJ_KPEAVBaseResourceSet@2@PEAU_RM_ACTIVITY_HOST@@PEAXPEAPEAV12@@Z @ 0x180050EF0 (-ResourceSetFactory@ResourceSet@ExecutionModel@@CAJ_KPEAVBaseResourceSet@2@PEAU_RM_ACTIVITY_HOST.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053500 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceSet::CreateInstance(
        struct ExecutionModel::BaseResourceSet *a1,
        __int64 a2,
        void *a3,
        struct IUnknown *a4,
        struct _RM_ACTIVITY_HOST *a5,
        int a6,
        unsigned __int64 a7,
        struct ExecutionModel::ResourceSet **a8)
{
  struct _RM_ACTIVITY_HOST *v8; // r14
  int v11; // eax
  struct ExecutionModel::ResourceSet *v12; // rbx
  unsigned int v13; // esi
  __int64 v14; // rdx
  char *v15; // rcx
  _OWORD *v16; // rax
  __int128 v17; // xmm1
  _QWORD *v18; // r9
  _QWORD *v19; // r10
  _QWORD *v20; // r8
  int v21; // ecx
  _QWORD *v22; // r10
  _QWORD *v23; // rcx
  _QWORD *v24; // rax
  struct ExecutionModel::ResourceSet *v26; // [rsp+50h] [rbp+8h] BYREF

  v8 = a5;
  v26 = 0LL;
  v11 = ExecutionModel::ResourceSet::ResourceSetFactory(a7, a1, a5, a3, &v26);
  v12 = v26;
  v13 = v11;
  if ( v11 >= 0 )
  {
    v14 = 2LL;
    v15 = (char *)v26 + 1336;
    v16 = (_OWORD *)a2;
    do
    {
      *(_OWORD *)v15 = *v16;
      *((_OWORD *)v15 + 1) = v16[1];
      *((_OWORD *)v15 + 2) = v16[2];
      *((_OWORD *)v15 + 3) = v16[3];
      *((_OWORD *)v15 + 4) = v16[4];
      *((_OWORD *)v15 + 5) = v16[5];
      *((_OWORD *)v15 + 6) = v16[6];
      v15 += 128;
      v17 = v16[7];
      v16 += 8;
      *((_OWORD *)v15 - 1) = v17;
      --v14;
    }
    while ( v14 );
    *(_OWORD *)v15 = *v16;
    *((_OWORD *)v15 + 1) = v16[1];
    *((_OWORD *)v15 + 2) = v16[2];
    *((_OWORD *)v15 + 3) = v16[3];
    *((_OWORD *)v15 + 4) = v16[4];
    *((_OWORD *)v15 + 5) = v16[5];
    *((_OWORD *)v15 + 6) = v16[6];
    *((_QWORD *)v15 + 14) = *((_QWORD *)v16 + 14);
    *((_DWORD *)v12 + 322) = *(_DWORD *)(a2 + 8);
    *((_DWORD *)v12 + 2) = 0;
    *((_DWORD *)v12 + 8) = a6;
    *((_DWORD *)v12 + 320) = 1;
    if ( *((struct IUnknown **)v12 + 214) != a4 )
      ATL::AtlComPtrAssign((struct IUnknown **)v12 + 214, a4);
    *(_OWORD *)((char *)v12 + 72) = *(_OWORD *)(a2 + 80);
    *(_OWORD *)((char *)v12 + 88) = *(_OWORD *)(a2 + 96);
    *(_OWORD *)((char *)v12 + 104) = *(_OWORD *)(a2 + 112);
    *(_OWORD *)((char *)v12 + 120) = *(_OWORD *)(a2 + 128);
    *((_QWORD *)v12 + 17) = *(_QWORD *)(a2 + 144);
    RmpActivityHostAddResourceSet((__int64)v12, 0);
    v18 = (_QWORD *)*((_QWORD *)v12 + 164);
    v19 = (_QWORD *)(*((_QWORD *)v8 + 7) + 216LL);
    v20 = (_QWORD *)*v19;
    if ( (_QWORD *)*v19 != v19 )
    {
      v21 = *(_DWORD *)(v18[6] + 1288LL);
      do
      {
        if ( (int)RmpEmPriorityCompare(v21, *(_DWORD *)(*(v20 - 2) + 1288LL)) > 0 )
          break;
        v20 = (_QWORD *)*v20;
      }
      while ( v20 != v22 );
    }
    v23 = (_QWORD *)v20[1];
    v24 = v18 + 8;
    if ( (_QWORD *)*v23 != v20 )
      __fastfail(3u);
    *v24 = v20;
    v18[9] = v23;
    *v23 = v24;
    v20[1] = v24;
    if ( (*(_BYTE *)(a2 + 42) & 0x20) != 0 && (*(_WORD *)(a2 + 16) & 0x100) == 0 )
      *((_DWORD *)v12 + 333) |= 8u;
    *a8 = v12;
    v12 = 0LL;
    v13 = 0;
  }
  if ( v12 )
  {
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v12 + 32LL))(v12);
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return v13;
}
