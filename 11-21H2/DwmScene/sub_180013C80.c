/*
 * XREFs of sub_180013C80 @ 0x180013C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180013C80(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 16) = 0LL;
  result = a1;
  *(_QWORD *)(a1 + 24) = 15LL;
  *(_BYTE *)a1 = 0;
  return result;
}
