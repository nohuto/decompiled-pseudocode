/*
 * XREFs of sub_140A32E08 @ 0x140A32E08
 * Callers:
 *     sub_14055E230 @ 0x14055E230 (sub_14055E230.c)
 *     sub_140659E70 @ 0x140659E70 (sub_140659E70.c)
 * Callees:
 *     sub_140A33E74 @ 0x140A33E74 (sub_140A33E74.c)
 */

__int64 __fastcall sub_140A32E08(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = 3;
  result = sub_140A33E74(*(_QWORD *)(a1 + 8), *(_DWORD *)a1, (unsigned int)&v4, (unsigned int)&qword_14000AF00, 4, a2);
  if ( (int)result > 0 )
    return *(unsigned int *)(a2 + 16);
  return result;
}
