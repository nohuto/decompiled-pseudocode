/*
 * XREFs of sub_1406EBB94 @ 0x1406EBB94
 * Callers:
 *     sub_140397424 @ 0x140397424 (sub_140397424.c)
 *     sub_14039A210 @ 0x14039A210 (sub_14039A210.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406EBB94(_DWORD *a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd(&dword_140CE205C, 0);
  *a1 = result;
  return result;
}
