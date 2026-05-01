/*
 * XREFs of ?RmpCpuSetManagerInsertProcessRegistration@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_PROCESS@@PEAU_RM_CPU_SET_ALLOCATION@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x1800892C4
 * Callers:
 *     ?RmpCpuSetManagerCreateProcessRegistration@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_PROCESS@@PEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x1800889A8 (-RmpCpuSetManagerCreateProcessRegistration@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_P.c)
 * Callees:
 *     ?RmpCpuSetManagerMarkProcessDirty@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x18008951C (-RmpCpuSetManagerMarkProcessDirty@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z.c)
 *     ?RmpObjectTableAddObject@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z @ 0x18008CB74 (-RmpObjectTableAddObject@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z.c)
 */

void __fastcall RmpCpuSetManagerInsertProcessRegistration(
        struct _RM_CPU_SET_CLIENT_CONTEXT *a1,
        struct _RM_CPU_SET_PROCESS *a2,
        struct _RM_CPU_SET_ALLOCATION *a3,
        struct _RM_CPU_SET_PROCESS_REGISTRATION *a4)
{
  struct _RM_CPU_SET_MANAGER *v4; // r14
  struct _RM_CPU_SET_PROCESS **v9; // r8
  struct _RM_CPU_SET_PROCESS *v10; // rdx
  signed __int64 v11; // r9
  struct _RM_CPU_SET_ALLOCATION **v12; // rdx
  struct _RM_CPU_SET_ALLOCATION *v13; // rax
  unsigned int v14; // ecx
  struct _RM_CPU_SET_CLIENT_CONTEXT **v15; // r8
  struct _RM_CPU_SET_CLIENT_CONTEXT *v16; // rax

  v4 = *(struct _RM_CPU_SET_MANAGER **)a1;
  RmpObjectTableAddObject((struct _RM_OBJECT_TABLE *)(*(_QWORD *)a1 + 48LL), a4);
  *((_QWORD *)a4 + 7) = a2;
  v9 = (struct _RM_CPU_SET_PROCESS **)*((_QWORD *)a2 + 4);
  v10 = (struct _RM_CPU_SET_PROCESS_REGISTRATION *)((char *)a4 + 88);
  if ( *v9 != (struct _RM_CPU_SET_PROCESS *)((char *)a2 + 24) )
    goto LABEL_11;
  *(_QWORD *)v10 = (char *)a2 + 24;
  *((_QWORD *)a4 + 12) = v9;
  *v9 = v10;
  *((_QWORD *)a2 + 4) = v10;
  ++*((_DWORD *)a2 + 15);
  RmpCpuSetManagerMarkProcessDirty(v4, a2);
  *((_QWORD *)a4 + 8) = a3;
  v12 = (struct _RM_CPU_SET_ALLOCATION **)*((_QWORD *)a3 + 11);
  v13 = (struct _RM_CPU_SET_PROCESS_REGISTRATION *)((char *)a4 + 104);
  if ( *v12 != (struct _RM_CPU_SET_ALLOCATION *)((char *)a3 + 80) )
    goto LABEL_11;
  *(_QWORD *)v13 = (char *)a3 + 80;
  *((_QWORD *)a4 + 14) = v12;
  *v12 = v13;
  *((_QWORD *)a3 + 11) = v13;
  v14 = v11 + 13;
  if ( v11 + _InterlockedExchangeAdd64((volatile signed __int64 *)a3 + 2, (unsigned int)v11) <= v11 )
    __fastfail(v14);
  if ( v11 + _InterlockedExchangeAdd64((volatile signed __int64 *)a4 + 2, v11) <= v11 )
    __fastfail(v14);
  *((_QWORD *)a4 + 6) = a1;
  v15 = (struct _RM_CPU_SET_CLIENT_CONTEXT **)*((_QWORD *)a1 + 6);
  v16 = (struct _RM_CPU_SET_PROCESS_REGISTRATION *)((char *)a4 + 72);
  if ( *v15 != (struct _RM_CPU_SET_CLIENT_CONTEXT *)((char *)a1 + 40) )
LABEL_11:
    __fastfail(3u);
  *(_QWORD *)v16 = (char *)a1 + 40;
  *((_QWORD *)a4 + 10) = v15;
  *v15 = v16;
  *((_QWORD *)a1 + 6) = v16;
  if ( v11 + _InterlockedExchangeAdd64((volatile signed __int64 *)a4 + 2, v11) <= v11 )
    __fastfail(v14);
}
