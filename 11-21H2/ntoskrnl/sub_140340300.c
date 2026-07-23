/*
 * XREFs of sub_140340300 @ 0x140340300
 * Callers:
 *     sub_140207F60 @ 0x140207F60 (sub_140207F60.c)
 *     sub_14020E1DC @ 0x14020E1DC (sub_14020E1DC.c)
 *     sub_14020E6EC @ 0x14020E6EC (sub_14020E6EC.c)
 *     sub_14020E9E8 @ 0x14020E9E8 (sub_14020E9E8.c)
 *     sub_14020F360 @ 0x14020F360 (sub_14020F360.c)
 *     sub_140211410 @ 0x140211410 (sub_140211410.c)
 *     sub_14022B5D8 @ 0x14022B5D8 (sub_14022B5D8.c)
 *     sub_1402447EC @ 0x1402447EC (sub_1402447EC.c)
 *     sub_140255110 @ 0x140255110 (sub_140255110.c)
 *     sub_14028FFD0 @ 0x14028FFD0 (sub_14028FFD0.c)
 *     sub_140294574 @ 0x140294574 (sub_140294574.c)
 *     sub_1402A9790 @ 0x1402A9790 (sub_1402A9790.c)
 *     sub_1402B0820 @ 0x1402B0820 (sub_1402B0820.c)
 *     sub_1402B3140 @ 0x1402B3140 (sub_1402B3140.c)
 *     sub_1402B4130 @ 0x1402B4130 (sub_1402B4130.c)
 *     sub_1402B4EC0 @ 0x1402B4EC0 (sub_1402B4EC0.c)
 *     sub_1402B9970 @ 0x1402B9970 (sub_1402B9970.c)
 *     KeSetBasePriorityThread @ 0x1402EBF30 (KeSetBasePriorityThread.c)
 *     sub_14030F330 @ 0x14030F330 (sub_14030F330.c)
 *     sub_140340390 @ 0x140340390 (sub_140340390.c)
 *     sub_140343DC0 @ 0x140343DC0 (sub_140343DC0.c)
 *     sub_140344800 @ 0x140344800 (sub_140344800.c)
 *     sub_140359020 @ 0x140359020 (sub_140359020.c)
 *     sub_1403597CC @ 0x1403597CC (sub_1403597CC.c)
 *     sub_14035EE9C @ 0x14035EE9C (sub_14035EE9C.c)
 *     sub_14039C4BC @ 0x14039C4BC (sub_14039C4BC.c)
 *     sub_14039EE50 @ 0x14039EE50 (sub_14039EE50.c)
 *     sub_1403D2D98 @ 0x1403D2D98 (sub_1403D2D98.c)
 *     sub_1403D2F9C @ 0x1403D2F9C (sub_1403D2F9C.c)
 *     sub_14056B410 @ 0x14056B410 (sub_14056B410.c)
 *     sub_14056B9FC @ 0x14056B9FC (sub_14056B9FC.c)
 *     sub_140572774 @ 0x140572774 (sub_140572774.c)
 *     KeSetSelectedCpuSetsThread @ 0x140572A90 (KeSetSelectedCpuSetsThread.c)
 *     sub_140574B54 @ 0x140574B54 (sub_140574B54.c)
 *     sub_140574FA4 @ 0x140574FA4 (sub_140574FA4.c)
 *     sub_140576AA4 @ 0x140576AA4 (sub_140576AA4.c)
 *     sub_1405777C0 @ 0x1405777C0 (sub_1405777C0.c)
 *     sub_14057C888 @ 0x14057C888 (sub_14057C888.c)
 * Callees:
 *     HalRequestIpiSpecifyVector @ 0x140300100 (HalRequestIpiSpecifyVector.c)
 *     HalSendSoftwareInterrupt @ 0x140342650 (HalSendSoftwareInterrupt.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140340300(unsigned __int8 *a1)
{
  __int64 result; // rax
  bool v3; // zf
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // r8d

  result = a1[1];
  if ( (_BYTE)result )
  {
    v3 = (_BYTE)result == 1;
    CurrentPrcb = KeGetCurrentPrcb();
    if ( v3 )
    {
      v5 = *a1;
      v6 = *((unsigned int *)a1 + 1);
      ++*((_DWORD *)CurrentPrcb + 8757);
      result = HalSendSoftwareInterrupt(v6, v5);
    }
    else
    {
      v7 = 47;
      if ( *a1 == 1 )
        v7 = 31;
      ++*((_DWORD *)CurrentPrcb + 8757);
      result = HalRequestIpiSpecifyVector(0, (_WORD *)a1 + 4, v7);
    }
    if ( a1[1] == 2 )
    {
      *((_QWORD *)a1 + 1) = 2097153LL;
      result = (__int64)memset(a1 + 16, 0, 0x100uLL);
    }
    a1[1] = 0;
    *((_DWORD *)a1 + 1) = 0xFFFF;
  }
  return result;
}
