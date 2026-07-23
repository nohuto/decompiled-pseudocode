/*
 * XREFs of sub_140345C80 @ 0x140345C80
 * Callers:
 *     sub_140207F60 @ 0x140207F60 (sub_140207F60.c)
 *     sub_14020E1DC @ 0x14020E1DC (sub_14020E1DC.c)
 *     sub_14020E6EC @ 0x14020E6EC (sub_14020E6EC.c)
 *     sub_14020E9E8 @ 0x14020E9E8 (sub_14020E9E8.c)
 *     sub_1402112F8 @ 0x1402112F8 (sub_1402112F8.c)
 *     sub_14022475C @ 0x14022475C (sub_14022475C.c)
 *     sub_14022B5D8 @ 0x14022B5D8 (sub_14022B5D8.c)
 *     sub_140255110 @ 0x140255110 (sub_140255110.c)
 *     sub_14028FFD0 @ 0x14028FFD0 (sub_14028FFD0.c)
 *     sub_140291380 @ 0x140291380 (sub_140291380.c)
 *     sub_140294824 @ 0x140294824 (sub_140294824.c)
 *     sub_1402B0820 @ 0x1402B0820 (sub_1402B0820.c)
 *     KeRemoveQueueEx @ 0x1402B7FA0 (KeRemoveQueueEx.c)
 *     KeSetBasePriorityThread @ 0x1402EBF30 (KeSetBasePriorityThread.c)
 *     sub_1402EFA40 @ 0x1402EFA40 (sub_1402EFA40.c)
 *     sub_14030F330 @ 0x14030F330 (sub_14030F330.c)
 *     sub_140310810 @ 0x140310810 (sub_140310810.c)
 *     sub_140344800 @ 0x140344800 (sub_140344800.c)
 *     KeQueryTotalCycleTimeThread @ 0x140345800 (KeQueryTotalCycleTimeThread.c)
 *     KeUpdateThreadTag @ 0x14035D6A0 (KeUpdateThreadTag.c)
 *     sub_14039C4BC @ 0x14039C4BC (sub_14039C4BC.c)
 *     sub_1403D2D98 @ 0x1403D2D98 (sub_1403D2D98.c)
 *     sub_1403D2F9C @ 0x1403D2F9C (sub_1403D2F9C.c)
 *     sub_14056B410 @ 0x14056B410 (sub_14056B410.c)
 *     sub_14056B9FC @ 0x14056B9FC (sub_14056B9FC.c)
 *     sub_140572774 @ 0x140572774 (sub_140572774.c)
 *     KeSetSelectedCpuSetsThread @ 0x140572A90 (KeSetSelectedCpuSetsThread.c)
 *     sub_140574FA4 @ 0x140574FA4 (sub_140574FA4.c)
 *     sub_140576AA4 @ 0x140576AA4 (sub_140576AA4.c)
 * Callees:
 *     sub_1402B9680 @ 0x1402B9680 (sub_1402B9680.c)
 */

unsigned __int64 __fastcall sub_140345C80(__int64 a1, __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  __int64 v8; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  bool v11; // zf
  unsigned __int64 result; // rax

  *(_BYTE *)(a1 + 32) = 1;
  v6 = __rdtsc();
  v7 = v6 - *(_QWORD *)(a1 + 33152);
  v8 = *(unsigned int *)(a2 + 80);
  v9 = v7 + *(_QWORD *)(a2 + 72);
  *(_QWORD *)(a2 + 72) = v9;
  v10 = v8 + ((v7 * *(unsigned int *)(a1 + 33208)) >> 16);
  if ( v10 > 0xFFFFFFFF )
    LODWORD(v10) = -1;
  *(_QWORD *)(a1 + 33152) = v6;
  v11 = (*(_BYTE *)(a2 + 2) & 0xBE) == 0;
  *(_DWORD *)(a2 + 80) = v10;
  if ( !v11 )
    sub_1402B9680(a1, a2, v7, a4);
  result = v9;
  if ( a3 )
    *a3 = v6;
  return result;
}
