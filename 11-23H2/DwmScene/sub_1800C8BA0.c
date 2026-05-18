/*
 * XREFs of sub_1800C8BA0 @ 0x1800C8BA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800C8BA0(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 8) = -1;
  *(_DWORD *)(a1 + 12) = -1;
  result = a1;
  *(_DWORD *)(a1 + 16) = 0;
  *(_BYTE *)(a1 + 48) = 0;
  return result;
}
