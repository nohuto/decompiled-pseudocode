/*
 * XREFs of sub_1403DC188 @ 0x1403DC188
 * Callers:
 *     sub_140860DAC @ 0x140860DAC (sub_140860DAC.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_14025D6C0 @ 0x14025D6C0 (sub_14025D6C0.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_1402F391C @ 0x1402F391C (sub_1402F391C.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14031DE00 @ 0x14031DE00 (sub_14031DE00.c)
 */

__int64 sub_1403DC188()
{
  __int64 v0; // rsi
  unsigned __int8 v1; // bl
  __int64 v2; // r9
  signed __int64 v3; // rax
  __int64 v4; // rcx

  v0 = *((_QWORD *)KeGetCurrentThread() + 23) + 1664LL;
  v1 = sub_1402CF4F0(v0);
  sub_14031DE00(v0, 0xFFFFF6FB7DBEDF68uLL, 0LL, v2);
  v3 = sub_140317A10(0xFFFFF6FB7DBEDF68uLL);
  sub_14025D6C0(v4, (volatile signed __int64 *)0xFFFFF6FB7DBEDF68LL, v3, 2);
  sub_14020D8D0(v0, 0xFFFFF6FB7DBEDF68uLL);
  sub_1402B0CE0(v0, v1);
  return sub_1402F391C(1u, 0);
}
