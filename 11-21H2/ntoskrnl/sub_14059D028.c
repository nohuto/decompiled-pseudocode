/*
 * XREFs of sub_14059D028 @ 0x14059D028
 * Callers:
 *     sub_14033AC90 @ 0x14033AC90 (sub_14033AC90.c)
 *     sub_14059B62C @ 0x14059B62C (sub_14059B62C.c)
 *     sub_14059C8C8 @ 0x14059C8C8 (sub_14059C8C8.c)
 * Callees:
 *     sub_1402879F8 @ 0x1402879F8 (sub_1402879F8.c)
 *     sub_140287A8C @ 0x140287A8C (sub_140287A8C.c)
 *     sub_140334790 @ 0x140334790 (sub_140334790.c)
 */

__int64 *__fastcall sub_14059D028(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 *result; // rax

  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 )
  {
    LOBYTE(a2) = *(_BYTE *)(a1 + 32);
    sub_140334790(v5, a2, a3, a4);
  }
  result = (__int64 *)sub_140287A8C(*(_QWORD *)a1, 0);
  if ( result )
    return (__int64 *)sub_1402879F8(result);
  return result;
}
