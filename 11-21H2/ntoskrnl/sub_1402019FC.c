/*
 * XREFs of sub_1402019FC @ 0x1402019FC
 * Callers:
 *     sub_140318330 @ 0x140318330 (sub_140318330.c)
 *     sub_14032EA60 @ 0x14032EA60 (sub_14032EA60.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_140316400 @ 0x140316400 (sub_140316400.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14031DE00 @ 0x14031DE00 (sub_14031DE00.c)
 */

char __fastcall sub_1402019FC(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v2; // rbp
  __int64 v3; // rsi
  __int64 v4; // rbx
  char v5; // r14
  __int16 v6; // ax
  __int64 v7; // rdx

  v2 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v3 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v4 = sub_14026DFC0(2LL);
  v5 = sub_1402CF4F0(v4);
  sub_14031DE00(v4, v3, 0LL);
  v6 = sub_140317A10(v2);
  if ( (v6 & 1) != 0 && (v6 & 0x200) != 0 )
    sub_140316400(BugCheckParameter2);
  sub_14020D8D0(v4, v3);
  LOBYTE(v7) = v5;
  sub_1402B0CE0(v4, v7);
  return *(_BYTE *)BugCheckParameter2;
}
