/*
 * XREFs of HalpCheckAndReportGhes @ 0x14021294C
 * Callers:
 *     HalpGenericPolledWorkerRoutine @ 0x1402128E0 (HalpGenericPolledWorkerRoutine.c)
 *     HalHandleNMI @ 0x14050A180 (HalHandleNMI.c)
 *     HalpPeiInterruptHandler @ 0x14051BE30 (HalpPeiInterruptHandler.c)
 *     HalpGenInitialRead @ 0x140A5AE1C (HalpGenInitialRead.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140215340 (MmMapIoSpaceEx.c)
 *     HalpExtractGenericErrorData @ 0x14051BDDC (HalpExtractGenericErrorData.c)
 *     HalpSignalRAS @ 0x14051BEFC (HalpSignalRAS.c)
 *     WheaReportHwError @ 0x140643630 (WheaReportHwError.c)
 */

char __fastcall HalpCheckAndReportGhes(__int64 a1)
{
  char v2; // si
  _QWORD *v3; // rcx
  _DWORD *v4; // rdi
  __int64 v6; // rax

  v2 = 0;
  v3 = *(_QWORD **)(a1 + 40);
  if ( *v3 == -1LL )
    return v2;
  v4 = *(_DWORD **)(a1 + 56);
  if ( !v4 )
  {
    v6 = MmMapIoSpaceEx(*v3, *(unsigned int *)(a1 + 48), 516LL);
    *(_QWORD *)(a1 + 56) = v6;
    v4 = (_DWORD *)v6;
    if ( !v6 )
      return v2;
  }
  if ( (*v4 & 2) == 0 )
  {
    if ( (*v4 & 1) == 0 )
      return v2;
    HalpExtractGenericErrorData(a1);
    if ( *(_DWORD *)(a1 + 96) != 12 )
    {
      *v4 &= ~1u;
      goto LABEL_13;
    }
LABEL_12:
    *v4 = 0;
    goto LABEL_13;
  }
  HalpExtractGenericErrorData(a1);
  if ( *(_DWORD *)(a1 + 96) == 12 )
    goto LABEL_12;
  *v4 &= ~2u;
LABEL_13:
  PshedRetrieveErrorInfo(*(_QWORD *)(a1 + 24), a1 + 88);
  if ( *(_DWORD *)(a1 + 96) == 12 )
    HalpSignalRAS(a1);
  WheaReportHwError(*(_QWORD *)(a1 + 24));
  return 1;
}
