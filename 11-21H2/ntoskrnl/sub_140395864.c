/*
 * XREFs of sub_140395864 @ 0x140395864
 * Callers:
 *     sub_140386DC4 @ 0x140386DC4 (sub_140386DC4.c)
 *     sub_1408042A4 @ 0x1408042A4 (sub_1408042A4.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_1402E5B0C @ 0x1402E5B0C (sub_1402E5B0C.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14031DE00 @ 0x14031DE00 (sub_14031DE00.c)
 */

__int64 __fastcall sub_140395864(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // rsi
  unsigned __int8 v5; // bp
  __int64 v6; // r9
  unsigned __int64 i; // rbx
  unsigned __int64 v8; // rax

  v3 = *((_QWORD *)KeGetCurrentThread() + 23) + 1664LL;
  v4 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v5 = sub_1402CF4F0(v3);
  for ( i = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL; i <= v4; i += 8LL )
  {
    sub_14031DE00(v3, i, 0LL, v6);
    v8 = sub_140317A10(i);
    sub_1402E5B0C(48 * ((v8 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL, 2);
    sub_14020D8D0(v3, i);
  }
  return sub_1402B0CE0(v3, v5);
}
