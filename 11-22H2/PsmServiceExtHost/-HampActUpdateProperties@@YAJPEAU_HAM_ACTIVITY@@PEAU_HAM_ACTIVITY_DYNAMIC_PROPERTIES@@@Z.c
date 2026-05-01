/*
 * XREFs of ?HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x1800152E4
 * Callers:
 *     ?HamSrvUpdateActivityProperties@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x18001506C (-HamSrvUpdateActivityProperties@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_DYNAMIC_PROPERT.c)
 * Callees:
 *     ?HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180014438 (-HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpImportanceToRequiredExecutionSpeed@@YA?AW4_RM_EXECUTION_SPEED@@T_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x180015438 (-RmpImportanceToRequiredExecutionSpeed@@YA-AW4_RM_EXECUTION_SPEED@@T_RM_ACTIVITY_IMPORTANCE@@@Z.c)
 *     ?RmHamHostUpdateSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180015468 (-RmHamHostUpdateSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x18001777C (-HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001C5B4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001D6A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180022690 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003B664 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 */

__int64 __fastcall HampActUpdateProperties(struct _HAM_ACTIVITY *a1, struct _HAM_ACTIVITY_DYNAMIC_PROPERTIES *a2)
{
  unsigned __int64 v4; // rsi
  unsigned int v5; // edx
  int v6; // eax
  int v7; // ebx
  int v8; // ebp
  int v9; // eax
  unsigned int v10; // ebx
  struct _RM_HAM_ACTIVITY_HOST *v11; // rsi
  int v12; // eax
  signed int v13; // edx
  struct _HAM_DEPENDENCY_GROUP *v14; // rsi
  int v16; // [rsp+40h] [rbp+8h]
  int v17; // [rsp+40h] [rbp+8h]

  v4 = *((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
  HampHostAcquireLockExclusiveEx(*((struct _RM_HAM_ACTIVITY_HOST **)a1 + 10), 0);
  if ( *((_BYTE *)a1 + 562) == 4 )
  {
    v10 = -1073741275;
LABEL_27:
    HampHostReleaseLockExclusiveEx(*((struct _RM_HAM_ACTIVITY_HOST **)a1 + 10), v5);
    return v10;
  }
  if ( (*((_BYTE *)a1 + 552) & 8) != 0 )
  {
    v10 = -1058275327;
    goto LABEL_27;
  }
  v6 = RmpImportanceToRequiredExecutionSpeed(*((unsigned int *)a1 + 106));
  v7 = *(_DWORD *)a2;
  v8 = v6;
  v16 = *(_DWORD *)a2;
  if ( (*((_DWORD *)a1 + 120) & 3) > v6 )
    v8 = *((_DWORD *)a1 + 120) & 3;
  if ( (v7 & 0x10000) != 0 )
  {
    *((_DWORD *)a1 + 28) &= ~0x200u;
    *((_DWORD *)a1 + 28) |= (v7 & 1) << 9;
  }
  if ( (v7 & 0x40000) != 0 )
  {
    *((_DWORD *)a1 + 28) &= ~0x4000u;
    *((_DWORD *)a1 + 28) |= (v7 & 8) << 11;
    HampPdcSignalWorker((struct _HAM_PDC_CONTEXT *)(v4 + 120), 0);
  }
  if ( (v16 & 0x20000) != 0 )
  {
    *((_DWORD *)a1 + 28) &= 0xFFFFFE7F;
    *((_DWORD *)a1 + 28) |= (v7 & 6) << 6;
  }
  v9 = *((_DWORD *)a2 + 1);
  v10 = 0;
  v11 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 10);
  v17 = v9;
  if ( (v9 & 1) != 0 )
  {
    if ( !HIBYTE(v9) )
    {
      HIBYTE(v17) = *((_BYTE *)a1 + 427);
      v9 = v17;
    }
    *((_DWORD *)a1 + 106) = v9;
    HampHostUpdateActivityState(v11);
  }
  v12 = RmpImportanceToRequiredExecutionSpeed(*((unsigned int *)a1 + 106));
  v13 = *((_DWORD *)a1 + 120) & 3;
  if ( v13 > v12 )
    v12 = *((_DWORD *)a1 + 120) & 3;
  if ( v8 == v12 || (unsigned __int8)(*((_BYTE *)a1 + 562) - 2) > 1u )
    v14 = 0LL;
  else
    v14 = HampHostCheckEnterDependencyWorker(v11);
  HampHostReleaseLockExclusiveEx(*((struct _RM_HAM_ACTIVITY_HOST **)a1 + 10), v13);
  if ( v14 )
    HampDepGroupRunStateChangeWorker(v14);
  RmHamHostUpdateSettings(*((struct _RM_HAM_ACTIVITY_HOST **)a1 + 10));
  return v10;
}
