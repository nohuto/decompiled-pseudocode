/*
 * XREFs of sub_14023FBE4 @ 0x14023FBE4
 * Callers:
 *     sub_1406F4768 @ 0x1406F4768 (sub_1406F4768.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_14031DE00 @ 0x14031DE00 (sub_14031DE00.c)
 */

__int64 __fastcall sub_14023FBE4(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r14
  __int64 v7; // rbp
  __int64 v8; // rdx
  char v9; // r15

  v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = 0LL;
  v6 = v4 + 8 * (a2 >> 12);
  v7 = sub_14026DFC0(2LL);
  v9 = sub_1402CF4F0(v7);
  if ( v4 >= v6 )
    goto LABEL_7;
  do
  {
    if ( v5 )
    {
      if ( (v4 & 0xFFF) != 0 )
        goto LABEL_4;
      sub_14020D8D0(v7, v5);
    }
    v5 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    sub_14031DE00(v7, v5, 0LL);
LABEL_4:
    *(_QWORD *)v4 = a3;
    v4 += 8LL;
  }
  while ( v4 < v6 );
  if ( v5 )
    sub_14020D8D0(v7, v5);
LABEL_7:
  LOBYTE(v8) = v9;
  return sub_1402B0CE0(v7, v8);
}
