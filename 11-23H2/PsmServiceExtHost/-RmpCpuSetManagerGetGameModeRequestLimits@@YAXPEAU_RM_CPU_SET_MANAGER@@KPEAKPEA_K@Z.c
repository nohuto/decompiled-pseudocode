/*
 * XREFs of ?RmpCpuSetManagerGetGameModeRequestLimits@@YAXPEAU_RM_CPU_SET_MANAGER@@KPEAKPEA_K@Z @ 0x1800866E4
 * Callers:
 *     ?RmSrvGameModeGetLargestValidResourceRequest@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x180083D50 (-RmSrvGameModeGetLargestValidResourceRequest@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_RESO.c)
 *     ?RmpCpuSetManagerIsGameModeRequestSatisfiable@@YAEPEAU_RM_CPU_SET_MANAGER@@KK_K@Z @ 0x180086DD4 (-RmpCpuSetManagerIsGameModeRequestSatisfiable@@YAEPEAU_RM_CPU_SET_MANAGER@@KK_K@Z.c)
 * Callees:
 *     ?RmpCpuSetManagerGetSystemReserveTarget@@YAKPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18004520C (-RmpCpuSetManagerGetSystemReserveTarget@@YAKPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 */

void __fastcall RmpCpuSetManagerGetGameModeRequestLimits(
        struct _RM_CPU_SET_MANAGER *a1,
        char a2,
        unsigned int *a3,
        unsigned __int64 *a4)
{
  int v4; // eax
  _DWORD *v5; // r11
  __int64 v6; // rbx
  struct _RM_CPU_SET_MANAGER *v9; // r10
  unsigned int v10; // edi
  unsigned int v11; // eax
  int SystemReserveTarget; // eax
  unsigned int v13; // r8d
  unsigned __int64 v14; // r9
  __int64 v15; // rcx

  v4 = *((_DWORD *)a1 + 348);
  v5 = (_DWORD *)((char *)a1 + 1396);
  v6 = 0LL;
  v9 = a1;
  v10 = 0;
  if ( v4 != -1 )
  {
    v11 = v4 - 256;
    v10 = (unsigned __int8)v11;
    v6 = HIWORD(v11);
    *((_QWORD *)a1 + v6 + 11) |= 1LL << v11;
    ++*v5;
  }
  if ( (a2 & 1) != 0 )
  {
    v13 = *v5 - *((_DWORD *)a1 + 351);
  }
  else
  {
    SystemReserveTarget = RmpCpuSetManagerGetSystemReserveTarget(a1);
    v13 = *v5 - SystemReserveTarget;
  }
  v14 = *((_QWORD *)v9 + 11);
  if ( v13 >= 0x40 )
    v13 = 64;
  if ( *((_DWORD *)v9 + 348) != -1 )
  {
    v15 = *((_QWORD *)v9 + v6 + 11);
    _bittestandreset64(&v15, v10);
    *((_QWORD *)v9 + v6 + 11) = v15;
    --*v5;
  }
  *a3 = v13;
  *a4 = v14;
}
