/*
 * XREFs of sub_140400108 @ 0x140400108
 * Callers:
 *     sub_140A374B0 @ 0x140A374B0 (sub_140A374B0.c)
 * Callees:
 *     sub_14040015C @ 0x14040015C (sub_14040015C.c)
 *     sub_14040079C @ 0x14040079C (sub_14040079C.c)
 *     sub_140656B70 @ 0x140656B70 (sub_140656B70.c)
 */

__int64 __fastcall sub_140400108(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // rax

  v2 = 0LL;
  v3 = (unsigned int)sub_14040079C();
  v4 = sub_140656B70(v3);
  if ( v4 )
    return sub_14040015C(v4, (unsigned int)v3, a1);
  return v2;
}
