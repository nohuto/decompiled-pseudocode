/*
 * XREFs of sub_1800117E0 @ 0x1800117E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 (__fastcall **__fastcall sub_1800117E0(__int64 a1, __int64 a2))()
{
  __int64 (__fastcall **result)(); // rax

  result = off_180020D80;
  *(_QWORD *)a2 = off_180020D80;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 24);
  return result;
}
