/*
 * XREFs of sub_140372CC0 @ 0x140372CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140372CC0(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 16);
  *(_DWORD *)(result + 64) = a3;
  return result;
}
