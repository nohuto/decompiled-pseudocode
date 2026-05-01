/*
 * XREFs of ?RmpCpuSetManagerCheckRequestSatisfiability@@YAJPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@K@Z @ 0x18008887C
 * Callers:
 *     ?RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@KPEAPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x180088400 (-RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFO.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpCpuSetManagerCheckRequestSatisfiability(
        struct _RM_CPU_SET_MANAGER *a1,
        struct _RM_CPU_SET_REQUEST_INFORMATION *a2,
        char a3)
{
  unsigned int v3; // r9d
  int v5; // ebx
  _QWORD *v6; // rdx
  unsigned int v7; // r11d
  unsigned int v8; // edx
  unsigned int v9; // eax
  unsigned int v10; // r8d
  _QWORD *v11; // rdx
  __int64 v12; // rcx

  v3 = 0;
  v5 = *((_DWORD *)a2 + 66) & 1;
  if ( !v5 )
  {
LABEL_5:
    if ( (a3 & 1) != 0 )
      v8 = *((_DWORD *)a1 + 351);
    else
      v8 = *((_DWORD *)a1 + 352);
    v9 = *((_DWORD *)a1 + 350);
    if ( v9 > v8 && *(_DWORD *)a2 <= v9 - v8 )
    {
      if ( !v5 )
        return v3;
      v10 = 0;
      v11 = (_QWORD *)((char *)a2 + 8);
      v12 = a1 - a2;
      while ( (~*(_QWORD *)((char *)v11 + v12 + 336) & *v11) == 0LL )
      {
        ++v10;
        ++v11;
        if ( v10 >= 0x20 )
          return v3;
      }
    }
    return (unsigned int)-1073741670;
  }
  v6 = (_QWORD *)((char *)a2 + 8);
  v7 = 0;
  while ( (~*(_QWORD *)((char *)v6 + a1 - a2 + 80) & *v6) == 0LL )
  {
    ++v7;
    ++v6;
    if ( v7 >= 0x20 )
      goto LABEL_5;
  }
  return (unsigned int)-1073741811;
}
