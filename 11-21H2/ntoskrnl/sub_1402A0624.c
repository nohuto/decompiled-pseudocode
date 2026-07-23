/*
 * XREFs of sub_1402A0624 @ 0x1402A0624
 * Callers:
 *     sub_14070A4FC @ 0x14070A4FC (sub_14070A4FC.c)
 *     sub_1407F35F8 @ 0x1407F35F8 (sub_1407F35F8.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14031DE00 @ 0x14031DE00 (sub_14031DE00.c)
 *     sub_140322F10 @ 0x140322F10 (sub_140322F10.c)
 */

char __fastcall sub_1402A0624(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  char v5; // al
  __int64 v6; // rax
  char v7; // bl
  unsigned __int64 v8; // rax
  __int64 v9; // rdx

  v5 = a3 ^ *(_BYTE *)(a1 + 184);
  *(_QWORD *)(a1 + 16) = a2;
  LOBYTE(v6) = v5 & 7;
  *(_BYTE *)(a1 + 184) ^= v6;
  if ( a3 )
  {
    *(_QWORD *)(a1 + 128) = 0LL;
    *(_QWORD *)(a1 + 136) = 0LL;
    *(_QWORD *)(a1 + 144) = 0LL;
    *(_QWORD *)(a1 + 152) = 0LL;
    if ( a3 == 1 )
    {
      *(_BYTE *)(a1 + 184) |= 0x80u;
      v6 = *(_QWORD *)(a1 + 112) + 6LL;
      *(_QWORD *)(a1 + 120) = v6;
    }
    else
    {
      *(_QWORD *)(a1 + 120) = a4;
    }
  }
  else
  {
    *(_QWORD *)(a1 - 392) = 1LL;
    v7 = sub_1402CF4F0(a1);
    sub_14031DE00(a1, 0xFFFFF6FB7DBEDF68uLL, 0LL);
    v8 = sub_140317A10(0xFFFFF6FB7DBEDF68uLL);
    sub_140322F10(a1, 2109661032, 48 * (v8 >> 12), 0, 0LL, 0, 0LL);
    sub_14020D8D0(a1, 0xFFFFF6FB7DBEDF68uLL);
    LOBYTE(v9) = v7;
    LOBYTE(v6) = sub_1402B0CE0(a1, v9);
  }
  return v6;
}
