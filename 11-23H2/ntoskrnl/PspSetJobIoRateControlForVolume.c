/*
 * XREFs of PspSetJobIoRateControlForVolume @ 0x1409B2CB4
 * Callers:
 *     PspSetJobIoRateControl @ 0x1407D836C (PspSetJobIoRateControl.c)
 * Callees:
 *     PspIoRateControlInfoIsAnySet @ 0x1403627E4 (PspIoRateControlInfoIsAnySet.c)
 *     PspJobIoRateVolumeEntryInsert @ 0x1405A49A8 (PspJobIoRateVolumeEntryInsert.c)
 *     PspJobIoRateVolumeEntryRemove @ 0x1405A4BF8 (PspJobIoRateVolumeEntryRemove.c)
 *     PspIoRateEntryInitialize @ 0x140688AF8 (PspIoRateEntryInitialize.c)
 *     PspIoRateEntryActivate @ 0x1407D893C (PspIoRateEntryActivate.c)
 *     PspIoRateEntryDeactivate @ 0x1407D8A48 (PspIoRateEntryDeactivate.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PspSetJobIoRateControlForVolume(unsigned __int64 a1, _QWORD *a2, _BYTE *a3, _BYTE *a4, _QWORD *a5)
{
  __int64 Pool2; // rax
  __int64 v10; // rbx
  int v11; // edi
  struct _EX_RUNDOWN_REF *v12; // rax
  struct _EX_RUNDOWN_REF *v13; // rdi

  *a3 = 0;
  *a4 = 0;
  *a5 = 0LL;
  Pool2 = ExAllocatePool2(64LL, 56LL, 1766486864LL);
  v10 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  PspIoRateEntryInitialize(Pool2);
  v11 = PspIoRateEntryActivate(v10, a1, (__int64)a2, 0LL);
  if ( v11 < 0 )
  {
LABEL_10:
    ExFreePoolWithTag((PVOID)v10, 0);
    return (unsigned int)v11;
  }
  v12 = (struct _EX_RUNDOWN_REF *)PspJobIoRateVolumeEntryRemove(a1, *(_QWORD *)(v10 + 24));
  v13 = v12;
  if ( v12 )
  {
    PspIoRateEntryDeactivate(v12);
    ExFreePoolWithTag(v13, 0);
    *a3 = 1;
  }
  if ( PspIoRateControlInfoIsAnySet(a2) )
  {
    *a5 = *(_QWORD *)(v10 + 40);
    PspJobIoRateVolumeEntryInsert(a1, (_RTL_BALANCED_NODE *)v10);
    v10 = 0LL;
    *a4 = 1;
  }
  v11 = 0;
  if ( v10 )
  {
    PspIoRateEntryDeactivate((struct _EX_RUNDOWN_REF *)v10);
    goto LABEL_10;
  }
  return (unsigned int)v11;
}
