/*
 * XREFs of sub_1406FAD90 @ 0x1406FAD90
 * Callers:
 *     sub_1402715A0 @ 0x1402715A0 (sub_1402715A0.c)
 *     sub_1406FACF8 @ 0x1406FACF8 (sub_1406FACF8.c)
 * Callees:
 *     sub_1402182F8 @ 0x1402182F8 (sub_1402182F8.c)
 *     sub_14024AA58 @ 0x14024AA58 (sub_14024AA58.c)
 *     sub_140258680 @ 0x140258680 (sub_140258680.c)
 *     sub_140268408 @ 0x140268408 (sub_140268408.c)
 *     sub_1406FAE2C @ 0x1406FAE2C (sub_1406FAE2C.c)
 */

unsigned __int64 __fastcall sub_1406FAD90(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 v3; // r14
  unsigned __int64 v4; // rdi
  __int64 *v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // r8
  __int64 i; // rbp
  __int64 v9; // r8
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  result = sub_1406FAE2C(a1 + 40, &v10);
  v3 = v10;
  v4 = result;
  v5 = (__int64 *)(a1 + 48);
  v6 = 4LL;
  do
  {
    v7 = *v5;
    for ( i = 0LL; *v5; ++i )
    {
      *v5 = sub_140258680(v7);
      if ( !v3 )
        v3 = sub_1402182F8((*(_QWORD *)(v9 + 40) >> 43) & 0x3FF);
      result = sub_140268408(v9);
      v7 = *v5;
    }
    v4 += i;
    ++v5;
    --v6;
  }
  while ( v6 );
  if ( v4 )
    return sub_14024AA58(v3, v4, 1);
  return result;
}
