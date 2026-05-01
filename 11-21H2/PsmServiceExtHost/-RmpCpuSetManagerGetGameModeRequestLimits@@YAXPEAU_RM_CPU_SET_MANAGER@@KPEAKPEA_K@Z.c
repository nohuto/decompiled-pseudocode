/*
 * XREFs of ?RmpCpuSetManagerGetGameModeRequestLimits@@YAXPEAU_RM_CPU_SET_MANAGER@@KPEAKPEA_K@Z @ 0x180088DB8
 * Callers:
 *     ?RmSrvGameModeGetLargestValidResourceRequest@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x180085AB8 (-RmSrvGameModeGetLargestValidResourceRequest@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_RESO.c)
 *     ?RmpCpuSetManagerIsGameModeRequestSatisfiable@@YAEPEAU_RM_CPU_SET_MANAGER@@KK_K@Z @ 0x1800894A8 (-RmpCpuSetManagerIsGameModeRequestSatisfiable@@YAEPEAU_RM_CPU_SET_MANAGER@@KK_K@Z.c)
 * Callees:
 *     ?RmpCpuSetManagerGetSystemReserveTarget@@YAKPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18004B4B0 (-RmpCpuSetManagerGetSystemReserveTarget@@YAKPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 */

void __fastcall RmpCpuSetManagerGetGameModeRequestLimits(
        struct _RM_CPU_SET_MANAGER *a1,
        char a2,
        unsigned int *a3,
        unsigned __int64 *a4)
{
  int v4; // eax
  __int64 v5; // r11
  struct _RM_CPU_SET_MANAGER *v8; // r10
  unsigned int v9; // ebx
  unsigned int v10; // eax
  int SystemReserveTarget; // eax
  unsigned int v12; // r8d
  unsigned __int64 v13; // r9
  __int64 v14; // rcx

  v4 = *((_DWORD *)a1 + 348);
  v5 = 0LL;
  v8 = a1;
  v9 = 0;
  if ( v4 != -1 )
  {
    v10 = v4 - 256;
    v9 = (unsigned __int8)v10;
    v5 = HIWORD(v10);
    *((_QWORD *)a1 + v5 + 11) |= 1LL << v10;
    ++*((_DWORD *)a1 + 349);
  }
  if ( (a2 & 1) != 0 )
  {
    v12 = *((_DWORD *)a1 + 349) - *((_DWORD *)a1 + 351);
  }
  else
  {
    SystemReserveTarget = RmpCpuSetManagerGetSystemReserveTarget(a1);
    v12 = *((_DWORD *)v8 + 349) - SystemReserveTarget;
  }
  v13 = *((_QWORD *)v8 + 11);
  if ( v12 >= 0x40 )
    v12 = 64;
  if ( *((_DWORD *)v8 + 348) != -1 )
  {
    v14 = *((_QWORD *)v8 + v5 + 11);
    _bittestandreset64(&v14, v9);
    *((_QWORD *)v8 + v5 + 11) = v14;
    --*((_DWORD *)v8 + 349);
  }
  *a3 = v12;
  *a4 = v13;
}
