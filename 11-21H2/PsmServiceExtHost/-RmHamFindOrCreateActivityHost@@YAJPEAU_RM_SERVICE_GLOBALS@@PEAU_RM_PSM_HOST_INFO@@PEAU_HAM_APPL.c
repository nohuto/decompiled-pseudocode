/*
 * XREFs of ?RmHamFindOrCreateActivityHost@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@PEAU_RM_PARTITION@@KW4_HOST_GROUP@@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180024984
 * Callers:
 *     ?RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180023C00 (-RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PE.c)
 * Callees:
 *     ?RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000BB70 (-RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x1800248A0 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpObjectTableFindObjectByHandleWithLock@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADER@@@Z @ 0x180024AC0 (-RmpObjectTableFindObjectByHandleWithLock@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADE.c)
 *     ?RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180024F40 (-RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_I.c)
 */

__int64 __fastcall RmHamFindOrCreateActivityHost(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _RM_PARTITION *a4,
        char a5,
        char a6,
        struct _RM_ACTIVITY_HOST **a7)
{
  int ObjectByHandleWithLock; // ebx
  unsigned int v12; // r9d
  __int64 result; // rax
  struct _RM_ACTIVITY_HOST *v14; // rcx
  struct _RM_ACTIVITY_HOST *v15; // rdx
  struct _RM_ACTIVITY_HOST *v16; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v17; // [rsp+70h] [rbp+8h] BYREF
  PVOID P; // [rsp+78h] [rbp+10h] BYREF

  v17 = *(_QWORD *)(a2 + 544);
  RtlAcquireSRWLockShared(a1 + 32);
  ObjectByHandleWithLock = RmpObjectTableFindObjectByHandleWithLock(
                             (struct _RM_OBJECT_TABLE *)(a1 + 16),
                             &v17,
                             (struct _RM_OBJECT_HEADER **)&P);
  RtlReleaseSRWLockShared(a1 + 32);
  if ( ObjectByHandleWithLock >= 0 )
  {
    if ( *((_BYTE *)P + 656) == a6 || a6 == 3 )
    {
      RmHamHostReferenceUnsafe((struct _RM_HAM_ACTIVITY_HOST *)((char *)P + 64));
      *a7 = v15;
      return 0LL;
    }
    if ( P )
      RmpObjectRelease((char *)P);
  }
  v12 = (2 * (a5 & 1) + 1) | 4;
  if ( (a5 & 2) == 0 )
    v12 = 2 * (a5 & 1) + 1;
  result = RmpActivityHostCreateHostPsm((struct _RM_SERVICE_GLOBALS *)a1, a4, (struct _RM_PSM_HOST_INFO *)a2, v12, &v16);
  if ( (int)result >= 0 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(a3 + 24)) <= 1 )
      __fastfail(0xEu);
    v14 = v16;
    *((_QWORD *)v16 + 107) = a3;
    if ( *((int *)v14 + 6) >= 0 )
      ++*((_QWORD *)v14 + 83);
    *a7 = v14;
    return 0LL;
  }
  return result;
}
