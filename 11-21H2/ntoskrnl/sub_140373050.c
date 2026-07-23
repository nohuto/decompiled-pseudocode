/*
 * XREFs of sub_140373050 @ 0x140373050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall sub_140373050(__int64 a1, __int64 a2, __int64 a3)
{
  char result; // al

  *(_DWORD *)a3 = 2;
  *(_QWORD *)(a3 + 8) = *(_QWORD *)(a1 + 32);
  result = 1;
  *(_BYTE *)(a3 + 16) = 1;
  return result;
}
