/*
 * XREFs of sub_140240C38 @ 0x140240C38
 * Callers:
 *     sub_14028E238 @ 0x14028E238 (sub_14028E238.c)
 *     sub_14032D1C0 @ 0x14032D1C0 (sub_14032D1C0.c)
 *     sub_14032EA60 @ 0x14032EA60 (sub_14032EA60.c)
 *     sub_14033E5D0 @ 0x14033E5D0 (sub_14033E5D0.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14032CE60 @ 0x14032CE60 (sub_14032CE60.c)
 */

__int64 __fastcall sub_140240C38(unsigned __int64 a1, __int64 a2, char a3)
{
  __int64 v5; // r14
  unsigned __int64 v6; // r12
  char i; // al
  __int64 v8; // rdx
  int v9; // r9d

  v5 = *((_QWORD *)KeGetCurrentThread() + 23) + 1664LL;
  v6 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  for ( i = sub_140317A10(a1); (i & 1) == 0; i = sub_140317A10(a1) )
  {
    sub_14020D8D0(v5, v6);
    LOBYTE(v8) = a3;
    sub_1402B0CE0(v5, v8);
    a3 = sub_1402CF4F0(v5);
    LOBYTE(v9) = a3;
    sub_14032CE60(a1, 0, 0, v9, 0);
  }
  return 0LL;
}
