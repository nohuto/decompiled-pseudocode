/*
 * XREFs of ?HampDepGroupInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18004D750
 * Callers:
 *     ?HampDepGroupCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@1PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003B04C (-HampDepGroupCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@1PEAPEAU_HAM_DEPE.c)
 * Callees:
 *     CempLockInitialize @ 0x1800114A4 (CempLockInitialize.c)
 *     memset_0 @ 0x1800536FA (memset_0.c)
 */

void __fastcall HampDepGroupInitialize(struct _HOST_ACTIVITY_MANAGER *a1, struct _HAM_DEPENDENCY_GROUP *a2)
{
  signed __int64 v4; // rax

  memset_0(a2, 0, 0x88uLL);
  v4 = _InterlockedIncrement64(&NextDependencyGroupId);
  *((_QWORD *)a2 + 4) = a1;
  *(_QWORD *)a2 = v4;
  CempLockInitialize((__int64)a2 + 8);
  RtlInitializeConditionVariable((char *)a2 + 24);
  *((_QWORD *)a2 + 7) = 0LL;
  *((_QWORD *)a2 + 8) = 0LL;
  *((_QWORD *)a2 + 9) = 0LL;
  *((_QWORD *)a2 + 10) = 0LL;
  *((_QWORD *)a2 + 12) = 1LL;
}
