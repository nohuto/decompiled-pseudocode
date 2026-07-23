/*
 * XREFs of sub_14056DB6C @ 0x14056DB6C
 * Callers:
 *     sub_14096029C @ 0x14096029C (sub_14096029C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14056DB6C(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 result; // rax

  v1 = (unsigned __int64)*(unsigned __int8 *)(a1 + 208) << 6;
  dword_140D0E5E0[*(unsigned int *)(a1 + 36)] = 0;
  result = *(unsigned __int8 *)(a1 + 209);
  dword_140D105E0[result + v1] = 0;
  *(_QWORD *)(a1 + 192) = 0LL;
  return result;
}
