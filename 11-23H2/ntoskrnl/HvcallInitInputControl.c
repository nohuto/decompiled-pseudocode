/*
 * XREFs of HvcallInitInputControl @ 0x140372BF0
 * Callers:
 *     HvlpCreateRootVirtualProcessor @ 0x1409412A4 (HvlpCreateRootVirtualProcessor.c)
 *     HvlpLpCpuid @ 0x140941450 (HvlpLpCpuid.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140941598 (HvlpDynamicUpdateMicrocode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvcallInitInputControl(int a1, _QWORD *a2)
{
  __int64 result; // rax

  result = a1;
  *a2 = a1;
  return result;
}
