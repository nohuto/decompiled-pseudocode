/*
 * XREFs of sub_18002DE00 @ 0x18002DE00
 * Callers:
 *     sub_180032D40 @ 0x180032D40 (sub_180032D40.c)
 *     sub_1800339DC @ 0x1800339DC (sub_1800339DC.c)
 * Callees:
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_18001D3F8 @ 0x18001D3F8 (sub_18001D3F8.c)
 *     sub_18002DF34 @ 0x18002DF34 (sub_18002DF34.c)
 */

void __fastcall sub_18002DE00(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  _QWORD *v5; // rax
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  v4 = **(_QWORD **)(a1 + 88);
  v7 = v4;
  while ( !*(_BYTE *)(v4 + 25) )
  {
    v5 = sub_180012440(v6, v4 + 32);
    sub_18002DF34(a1, a2, v5);
    sub_18001D3F8(&v7);
    v4 = v7;
  }
}
