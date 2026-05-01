/*
 * XREFs of ?RmpCpuSetManagerFindProcess@@YAPEAU_RM_CPU_SET_PROCESS@@PEAU_RM_CPU_SET_MANAGER@@PEAX@Z @ 0x1800868D8
 * Callers:
 *     ?RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x1800878A0 (-RmpCpuSetManagerRegisterProcessWithAllocation@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAXPEAU_RM_C.c)
 * Callees:
 *     ?RmpCpuSetManagerFindProcessComparator@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z @ 0x180086A34 (-RmpCpuSetManagerFindProcessComparator@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z.c)
 */

struct _RM_CPU_SET_PROCESS *__fastcall RmpCpuSetManagerFindProcess(struct _RM_CPU_SET_MANAGER *a1, void *a2)
{
  __int64 v4; // rdi
  void *v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // r11
  __int64 v8; // r10
  int v9; // r9d
  DWORD ProcessId; // [rsp+30h] [rbp+8h]
  __int64 v12; // [rsp+30h] [rbp+8h]

  ProcessId = GetProcessId(a2);
  v4 = HIBYTE(ProcessId)
     + 37 * (BYTE2(ProcessId) + 37 * (BYTE1(ProcessId) + 37 * ((unsigned __int8)ProcessId + 11623883LL)));
  v5 = (void *)GetProcessId(a2);
  v6 = 0LL;
LABEL_2:
  v7 = -1LL << (*((_BYTE *)a1 + 76) & 0x1F);
  v8 = v7 & v4;
  if ( v6 )
    goto LABEL_5;
  v9 = *((_DWORD *)a1 + 19) >> 5;
  if ( v9 )
  {
    v12 = v7 & v4;
    v6 = *((_QWORD *)a1 + 10)
       + 8LL
       * ((37
         * (BYTE6(v12)
          + 37
          * (BYTE5(v12)
           + 37
           * (BYTE4(v12)
            + 37 * (BYTE3(v12) + 37 * (BYTE2(v12) + 37 * (BYTE1(v12) + 37 * ((unsigned __int8)v8 + 11623883)))))))
         + HIBYTE(v12)) & (unsigned int)(v9 - 1));
LABEL_5:
    while ( 1 )
    {
      v6 = *(_QWORD *)v6;
      if ( (v6 & 1) != 0 )
        break;
      if ( v8 == (v7 & *(_QWORD *)(v6 + 8)) )
      {
        if ( v6 && !RmpCpuSetManagerFindProcessComparator((struct _RTL_HASH_ENTRY *)v6, v5) )
          goto LABEL_2;
        return (struct _RM_CPU_SET_PROCESS *)v6;
      }
    }
  }
  return 0LL;
}
