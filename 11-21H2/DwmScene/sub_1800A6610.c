/*
 * XREFs of sub_1800A6610 @ 0x1800A6610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800A6610(__int64 *a1, __int64 a2, int a3)
{
  __int64 v3; // rax

  v3 = *a1;
  *((_DWORD *)a1 + 36) = a3;
  return (*(__int64 (**)(void))(v3 + 48))();
}
