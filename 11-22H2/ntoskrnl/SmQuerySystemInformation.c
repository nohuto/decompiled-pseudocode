/*
 * XREFs of SmQuerySystemInformation @ 0x1405CDB30
 * Callers:
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x140343ACC (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 *     ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1405BFDD0 (-SmHighMemPriorityWatchdogWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14022D620 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022D9E0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14041AD60 (ZwQuerySystemInformation.c)
 */

__int64 __fastcall SmQuerySystemInformation(__int64 a1, __int64 a2, void *a3)
{
  unsigned int SystemInformation; // ebx
  $115DCDF994C6370D29323EAB0E0C9502 v6; // [rsp+20h] [rbp-48h] BYREF

  memset(&v6, 0, sizeof(v6));
  if ( (a1 & 1) != 0 )
    a1 = *(_QWORD *)((a1 & 0xFFFFFFFFFFFFFFFEuLL) + 6728);
  KiStackAttachProcess(*(_KPROCESS **)(a1 + 2008), 0, (__int64)&v6);
  SystemInformation = ZwQuerySystemInformation(SystemMemoryUsageInformation, a3, 0x38u, 0LL);
  KiUnstackDetachProcess(&v6);
  return SystemInformation;
}
