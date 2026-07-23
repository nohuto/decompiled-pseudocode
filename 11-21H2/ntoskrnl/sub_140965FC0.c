/*
 * XREFs of sub_140965FC0 @ 0x140965FC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1407B0A20 @ 0x1407B0A20 (sub_1407B0A20.c)
 */

__int64 __fastcall sub_140965FC0(void *a1, __int64 a2)
{
  __int64 result; // rax

  result = sub_1407B0A20(a1, a2, 0LL);
  if ( (_DWORD)result == -1073740030 )
    return 3221226015LL;
  return result;
}
