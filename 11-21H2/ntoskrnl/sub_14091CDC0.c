/*
 * XREFs of sub_14091CDC0 @ 0x14091CDC0
 * Callers:
 *     sub_14053F5E8 @ 0x14053F5E8 (sub_14053F5E8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14091CDC0(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 24) = 0LL;
  result = a1 + 16;
  *(_QWORD *)(a1 + 24) = a1 + 16;
  *(_QWORD *)(a1 + 16) = a1 + 16;
  *(_DWORD *)(a1 + 8) = -1073741823;
  return result;
}
