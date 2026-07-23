/*
 * XREFs of sub_14096FEDC @ 0x14096FEDC
 * Callers:
 *     sub_1409800F4 @ 0x1409800F4 (sub_1409800F4.c)
 * Callees:
 *     sub_140319600 @ 0x140319600 (sub_140319600.c)
 *     sub_14059DF58 @ 0x14059DF58 (sub_14059DF58.c)
 *     sub_14059F23C @ 0x14059F23C (sub_14059F23C.c)
 */

__int64 __fastcall sub_14096FEDC(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 *v4; // rsi
  __int64 *v5; // rbx
  __int64 *v6; // rdi
  __int64 *v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 *v9; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(unsigned __int8 *)(a1 + 32);
  v2 = *(unsigned int *)(a1 + 24);
  v8 = 0LL;
  v9 = 0LL;
  sub_140319600(a1, v2 | (v1 << 32), 0, (__int64 *)&v8);
  sub_140319600(
    a1,
    *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32),
    0,
    (__int64 *)&v9);
  v4 = v8;
  v5 = v8;
  if ( (unsigned int)sub_14059F23C(v8, *((unsigned int *)v8 + 11)) != -1 )
  {
    do
    {
      if ( v5 == v9 )
        return 0LL;
      v6 = v5;
      v5 = (__int64 *)v5[2];
    }
    while ( (unsigned int)sub_14059F23C(v5, *((unsigned int *)v5 + 11)) != -1 );
    if ( v6 )
      sub_14059DF58(v4, v6);
  }
  return 3221225626LL;
}
