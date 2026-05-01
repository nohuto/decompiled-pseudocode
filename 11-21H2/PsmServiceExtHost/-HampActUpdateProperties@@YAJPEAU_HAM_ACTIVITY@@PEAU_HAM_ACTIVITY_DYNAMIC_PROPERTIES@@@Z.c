/*
 * XREFs of ?HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x180029FCC
 * Callers:
 *     ?HamSrvUpdateActivityProperties@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x18002C698 (-HamSrvUpdateActivityProperties@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_DYNAMIC_PROPERT.c)
 * Callees:
 *     ?HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x180007A5C (-HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180015C90 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpImportanceToRequiredExecutionSpeed@@YA?AW4_RM_EXECUTION_SPEED@@T_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x18002A1C0 (-RmpImportanceToRequiredExecutionSpeed@@YA-AW4_RM_EXECUTION_SPEED@@T_RM_ACTIVITY_IMPORTANCE@@@Z.c)
 *     ?RmHamHostUpdateSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002C484 (-RmHamHostUpdateSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A9F4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003E6B0 (-HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18007616C (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 */

__int64 __fastcall HampActUpdateProperties(struct _HAM_ACTIVITY *a1, struct _HAM_ACTIVITY_DYNAMIC_PROPERTIES *a2)
{
  DWORD v3; // esi
  unsigned __int64 v4; // rbp
  __int64 v5; // r14
  _QWORD *Value; // rbx
  unsigned int v8; // edx
  int v9; // eax
  int v10; // ebx
  int v11; // r14d
  int v12; // eax
  unsigned int v13; // ebx
  struct _RM_HAM_ACTIVITY_HOST *v14; // rsi
  int v15; // eax
  struct _HAM_DEPENDENCY_GROUP *v16; // rsi
  __int64 v17; // rbp
  __int64 *v18; // rax
  __int64 v19; // rdx
  int v22; // [rsp+40h] [rbp+8h]
  int v23; // [rsp+40h] [rbp+8h]

  v3 = HampLockTrackerId;
  v4 = *((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
  v5 = *((_QWORD *)a1 + 10);
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v3) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockExclusive(v5);
  *(_DWORD *)(v5 + 8) = GetCurrentThreadId();
  if ( *((_BYTE *)a1 + 562) == 4 )
  {
    v13 = -1073741275;
LABEL_36:
    HampHostReleaseLockExclusiveEx(*((struct _RM_HAM_ACTIVITY_HOST **)a1 + 10), v8);
    return v13;
  }
  if ( (*((_BYTE *)a1 + 552) & 8) != 0 )
  {
    v13 = -1058275327;
    goto LABEL_36;
  }
  v9 = RmpImportanceToRequiredExecutionSpeed(*((unsigned int *)a1 + 106));
  v10 = *(_DWORD *)a2;
  v11 = v9;
  v22 = *(_DWORD *)a2;
  if ( (*((_DWORD *)a1 + 120) & 3) > v9 )
    v11 = *((_DWORD *)a1 + 120) & 3;
  if ( (v10 & 0x10000) != 0 )
  {
    *((_DWORD *)a1 + 28) &= ~0x200u;
    *((_DWORD *)a1 + 28) |= (v10 & 1) << 9;
  }
  if ( (v10 & 0x40000) != 0 )
  {
    *((_DWORD *)a1 + 28) &= ~0x4000u;
    *((_DWORD *)a1 + 28) |= (v10 & 8) << 11;
    HampPdcSignalWorker((struct _HOST_ACTIVITY_MANAGER **)(v4 + 120), 0);
  }
  if ( (v22 & 0x20000) != 0 )
  {
    *((_DWORD *)a1 + 28) &= 0xFFFFFE7F;
    *((_DWORD *)a1 + 28) |= (v10 & 6) << 6;
  }
  v12 = *((_DWORD *)a2 + 1);
  v13 = 0;
  v14 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 10);
  v23 = v12;
  if ( (v12 & 1) != 0 )
  {
    if ( !HIBYTE(v12) )
    {
      HIBYTE(v23) = *((_BYTE *)a1 + 427);
      v12 = v23;
    }
    *((_DWORD *)a1 + 106) = v12;
    HampHostUpdateActivityState(v14);
  }
  v15 = RmpImportanceToRequiredExecutionSpeed(*((unsigned int *)a1 + 106));
  if ( (*((_DWORD *)a1 + 120) & 3) > v15 )
    v15 = *((_DWORD *)a1 + 120) & 3;
  if ( v11 == v15 || (unsigned __int8)(*((_BYTE *)a1 + 562) - 2) > 1u )
    v16 = 0LL;
  else
    v16 = HampHostCheckEnterDependencyWorker(v14);
  v17 = *((_QWORD *)a1 + 10);
  if ( HampLockTrackerId != -1 )
  {
    v18 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v19 = *v18;
    if ( (*v18 & 2) == 0 )
      __int2c();
    if ( v18[2]-- == 1 )
      *v18 = v19 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *(_DWORD *)(v17 + 8) = 0;
  RtlReleaseSRWLockExclusive(v17);
  if ( v16 )
    HampDepGroupRunStateChangeWorker(v16);
  RmHamHostUpdateSettings(*((struct _RM_HAM_ACTIVITY_HOST **)a1 + 10));
  return v13;
}
