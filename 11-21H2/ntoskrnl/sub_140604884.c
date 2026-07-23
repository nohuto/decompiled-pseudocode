/*
 * XREFs of sub_140604884 @ 0x140604884
 * Callers:
 *     sub_140A9CBF8 @ 0x140A9CBF8 (sub_140A9CBF8.c)
 *     sub_140B0DBD4 @ 0x140B0DBD4 (sub_140B0DBD4.c)
 * Callees:
 *     sub_1405FFDD0 @ 0x1405FFDD0 (sub_1405FFDD0.c)
 *     sub_1406019A0 @ 0x1406019A0 (sub_1406019A0.c)
 *     sub_140601DB0 @ 0x140601DB0 (sub_140601DB0.c)
 *     CarRegisterDefaultRuleClassConfiguration @ 0x140603CB0 (CarRegisterDefaultRuleClassConfiguration.c)
 *     CarSetCustomRuleIdRange @ 0x1406042D0 (CarSetCustomRuleIdRange.c)
 *     DifUtilDbgPrint @ 0x140604500 (DifUtilDbgPrint.c)
 *     sub_140628A6C @ 0x140628A6C (sub_140628A6C.c)
 *     sub_14065521C @ 0x14065521C (sub_14065521C.c)
 *     sub_140AA4854 @ 0x140AA4854 (sub_140AA4854.c)
 */

__int64 sub_140604884()
{
  unsigned int *v0; // rdi
  __int64 v1; // rsi
  int v2; // eax
  unsigned int v3; // ebx

  v0 = (unsigned int *)&unk_140C0DA0C;
  v1 = 4LL;
  do
  {
    v2 = CarRegisterDefaultRuleClassConfiguration(*(v0 - 2), *(v0 - 3));
    v3 = v2;
    if ( v2 < 0 )
      DifUtilDbgPrint("Failed to register kernel DIF plugin %d for reporting. NTSTATUS code: 0x%x", dword_140C0DA00, v2);
    else
      CarSetCustomRuleIdRange(*(v0 - 3));
    v0 += 4;
    --v1;
  }
  while ( v1 );
  if ( (qword_140D01450 & 0x8000000000LL) != 0 )
    v3 = sub_140628A6C();
  if ( (qword_140D01450 & 1) != 0 )
    v3 = sub_14065521C();
  if ( (qword_140D01450 & 8) != 0 )
    v3 = sub_140601DB0();
  if ( (qword_140D01450 & 0x100) != 0 )
    v3 = sub_1405FFDD0();
  if ( (qword_140D01450 & 0x800) != 0 )
    v3 = sub_140AA4854();
  if ( (qword_140D01450 & 0x10) != 0 )
    return (unsigned int)sub_1406019A0();
  return v3;
}
