/*
 * XREFs of sub_14021294C @ 0x14021294C
 * Callers:
 *     sub_1402128E0 @ 0x1402128E0 (sub_1402128E0.c)
 *     HalHandleNMI @ 0x14050A180 (HalHandleNMI.c)
 *     sub_14051BE30 @ 0x14051BE30 (sub_14051BE30.c)
 *     sub_140A5AE1C @ 0x140A5AE1C (sub_140A5AE1C.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140215340 (MmMapIoSpaceEx.c)
 *     sub_14051BDDC @ 0x14051BDDC (sub_14051BDDC.c)
 *     sub_14051BEFC @ 0x14051BEFC (sub_14051BEFC.c)
 *     WheaReportHwError @ 0x140643630 (WheaReportHwError.c)
 */

char __fastcall sub_14021294C(__int64 a1)
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
    sub_14051BDDC(a1);
    if ( *(_DWORD *)(a1 + 96) != 12 )
    {
      *v4 &= ~1u;
      goto LABEL_13;
    }
LABEL_12:
    *v4 = 0;
    goto LABEL_13;
  }
  sub_14051BDDC(a1);
  if ( *(_DWORD *)(a1 + 96) == 12 )
    goto LABEL_12;
  *v4 &= ~2u;
LABEL_13:
  PshedRetrieveErrorInfo(*(_QWORD *)(a1 + 24), a1 + 88);
  if ( *(_DWORD *)(a1 + 96) == 12 )
    sub_14051BEFC(a1);
  WheaReportHwError(*(_QWORD *)(a1 + 24));
  return 1;
}
