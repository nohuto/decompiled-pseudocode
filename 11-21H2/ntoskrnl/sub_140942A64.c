/*
 * XREFs of sub_140942A64 @ 0x140942A64
 * Callers:
 *     IoDuplicateDependency @ 0x140942470 (IoDuplicateDependency.c)
 * Callees:
 *     sub_14055F864 @ 0x14055F864 (sub_14055F864.c)
 */

__int64 __fastcall sub_140942A64(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  _QWORD *v4; // rbx
  __int64 result; // rax
  _QWORD *v7; // r8

  v2 = (_QWORD *)(a1 + 56);
  v4 = *(_QWORD **)(a1 + 56);
  result = 0LL;
  do
  {
    if ( v4 == v2 )
      break;
    v7 = v4;
    v4 = (_QWORD *)*v4;
    result = sub_14055F864(*(_QWORD *)(a1 + 40), a2, (__int64)(v7 + 2));
  }
  while ( (int)result >= 0 );
  return result;
}
