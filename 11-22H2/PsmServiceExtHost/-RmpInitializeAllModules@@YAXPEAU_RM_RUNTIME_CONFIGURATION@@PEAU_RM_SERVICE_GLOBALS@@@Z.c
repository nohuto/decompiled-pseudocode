/*
 * XREFs of ?RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800469EC
 * Callers:
 *     RmpCreateResourceManagerServer @ 0x180043ECC (RmpCreateResourceManagerServer.c)
 * Callees:
 *     CempLockInitialize @ 0x1800114A4 (CempLockInitialize.c)
 *     ?RmpObjectTableInitialize@@YAXPEAU_RM_OBJECT_TABLE@@@Z @ 0x180046CB4 (-RmpObjectTableInitialize@@YAXPEAU_RM_OBJECT_TABLE@@@Z.c)
 *     ?RmpGameModeInitialize@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180046CD4 (-RmpGameModeInitialize@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpEnforcerContextInitialize@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180046E44 (-RmpEnforcerContextInitialize@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?HampManagerInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180046F6C (-HampManagerInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     memset_0 @ 0x1800536FA (memset_0.c)
 *     ?RmpSystemEnableAsyncInSwap@@YAXXZ @ 0x18008EEEC (-RmpSystemEnableAsyncInSwap@@YAXXZ.c)
 */

void __fastcall RmpInitializeAllModules(struct _RM_RUNTIME_CONFIGURATION *a1, struct _RM_SERVICE_GLOBALS *a2)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  bool v11; // zf
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  int v16; // eax
  __int128 v17; // xmm0
  int v18; // eax
  __int128 v19; // xmm0
  int v20; // eax
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  _BYTE SystemInformation[8]; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v24; // [rsp+28h] [rbp-50h]

  memset_0(a2, 0, 0xE90uLL);
  v4 = *((_OWORD *)a1 + 1);
  *(_OWORD *)((char *)a2 + 3544) = *(_OWORD *)a1;
  v5 = *((_OWORD *)a1 + 2);
  *(_OWORD *)((char *)a2 + 3560) = v4;
  v6 = *((_OWORD *)a1 + 3);
  *(_OWORD *)((char *)a2 + 3576) = v5;
  v7 = *((_OWORD *)a1 + 4);
  *(_OWORD *)((char *)a2 + 3592) = v6;
  v8 = *((_OWORD *)a1 + 5);
  *(_OWORD *)((char *)a2 + 3608) = v7;
  v9 = *((_OWORD *)a1 + 6);
  *(_OWORD *)((char *)a2 + 3624) = v8;
  v10 = *((_OWORD *)a1 + 8);
  *(_OWORD *)((char *)a2 + 3640) = v9;
  v11 = (*(_BYTE *)a1 & 8) == 0;
  *(_OWORD *)((char *)a2 + 3656) = *((_OWORD *)a1 + 7);
  v12 = *((_OWORD *)a1 + 9);
  *(_OWORD *)((char *)a2 + 3672) = v10;
  v13 = *((_OWORD *)a1 + 10);
  *(_OWORD *)((char *)a2 + 3688) = v12;
  *(_OWORD *)((char *)a2 + 3704) = v13;
  if ( !v11 )
    RmpSystemEnableAsyncInSwap();
  NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
  RmpPageSize = v24;
  RmpObjectTableInitialize((struct _RM_SERVICE_GLOBALS *)((char *)a2 + 16));
  *((_QWORD *)a2 + 418) = 0LL;
  *((_QWORD *)a2 + 419) = 0LL;
  *((_QWORD *)a2 + 420) = 0LL;
  *((_QWORD *)a2 + 421) = 0LL;
  memset_0((char *)a2 + 688, 0, 0x580uLL);
  *((_QWORD *)a2 + 85) = a2;
  RmpObjectTableInitialize((struct _RM_SERVICE_GLOBALS *)((char *)a2 + 704));
  RmpObjectTableInitialize((struct _RM_SERVICE_GLOBALS *)((char *)a2 + 728));
  *((_QWORD *)a2 + 94) = 0LL;
  *((_QWORD *)a2 + 95) = 0LL;
  *((_DWORD *)a2 + 518) = -1;
  *((_QWORD *)a2 + 87) = (char *)a2 + 688;
  *((_QWORD *)a2 + 86) = (char *)a2 + 688;
  *((_QWORD *)a2 + 257) = (char *)a2 + 2048;
  *((_QWORD *)a2 + 256) = (char *)a2 + 2048;
  RmpEnforcerContextInitialize(a1, a2);
  RmpGameModeInitialize(a2, (struct _RM_SERVICE_GLOBALS *)((char *)a2 + 2096));
  memset_0((char *)a2 + 312, 0, 0x58uLL);
  *((_QWORD *)a2 + 42) = (char *)a2 + 328;
  *((_QWORD *)a2 + 41) = (char *)a2 + 328;
  RtlInitializeConditionVariable((char *)a2 + 344);
  CempLockInitialize((__int64)a2 + 312);
  *((_QWORD *)a2 + 46) = 1LL;
  HampManagerInitialize((struct _RM_SERVICE_GLOBALS *)((char *)a2 + 2248));
  memset_0((char *)a2 + 456, 0, 0x50uLL);
  v14 = *((_OWORD *)a1 + 1);
  v15 = *((_OWORD *)a1 + 2);
  *((_DWORD *)a2 + 126) = *(_DWORD *)a1;
  v16 = *((_DWORD *)a1 + 1);
  *((_OWORD *)a2 + 25) = v14;
  *((_DWORD *)a2 + 127) = v16;
  v17 = *((_OWORD *)a1 + 3);
  LOBYTE(v16) = *((_BYTE *)a1 + 8);
  *((_OWORD *)a2 + 26) = v15;
  *((_BYTE *)a2 + 512) = v16;
  *(_QWORD *)&v15 = *((_QWORD *)a1 + 8);
  v18 = *((_DWORD *)a1 + 31);
  *((_OWORD *)a2 + 27) = v17;
  *((_DWORD *)a2 + 132) = v18;
  v19 = *(_OWORD *)((char *)a1 + 72);
  v20 = *((_DWORD *)a1 + 32);
  *((_QWORD *)a2 + 56) = v15;
  v21 = *(_OWORD *)((char *)a1 + 88);
  *((_DWORD *)a2 + 131) = v20;
  *(_OWORD *)((char *)a2 + 456) = v19;
  v22 = *(_OWORD *)((char *)a1 + 104);
  *(_OWORD *)((char *)a2 + 472) = v21;
  *(_OWORD *)((char *)a2 + 488) = v22;
  *((_DWORD *)a2 + 129) = *((_DWORD *)a1 + 30);
  *((_DWORD *)a2 + 130) = 60;
  memset_0((char *)a2 + 576, 0, 0x58uLL);
  RtlInitializeSRWLock((char *)a2 + 592);
  *((_OWORD *)a2 + 35) = 0LL;
  *(_OWORD *)((char *)a2 + 664) = 0LL;
}
