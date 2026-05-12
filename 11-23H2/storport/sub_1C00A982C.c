/*
 * XREFs of sub_1C00A982C @ 0x1C00A982C
 * Callers:
 *     StorPortInitialize @ 0x1C00428F0 (StorPortInitialize.c)
 * Callees:
 *     sub_1C003FB18 @ 0x1C003FB18 (sub_1C003FB18.c)
 *     sub_1C0041EE4 @ 0x1C0041EE4 (sub_1C0041EE4.c)
 *     sub_1C00576D4 @ 0x1C00576D4 (sub_1C00576D4.c)
 *     sub_1C00ABE7C @ 0x1C00ABE7C (sub_1C00ABE7C.c)
 */

__int64 __fastcall sub_1C00A982C(__int64 a1, _QWORD *a2, __int64 a3, const UNICODE_STRING *a4)
{
  if ( MEMORY[0xFFFFF780000003C6] )
    byte_1C0093BA0 = 1;
  if ( _InterlockedIncrement(&dword_1C0093C50) == 1 )
  {
    sub_1C003FB18();
    sub_1C00ABE7C();
  }
  a2[14] = sub_1C00A11B0;
  a2[16] = sub_1C00A1110;
  a2[28] = sub_1C0006C10;
  a2[29] = sub_1C0004D60;
  a2[41] = sub_1C0007B00;
  a2[36] = sub_1C0011E40;
  a2[37] = sub_1C00A39D0;
  *(_QWORD *)(a2[6] + 8LL) = sub_1C003FB90;
  a2[12] = 0LL;
  a2[13] = sub_1C003FE70;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a3;
  sub_1C00576D4((PUNICODE_STRING)(a1 + 40), a4, a3, (__int64)a2);
  sub_1C0041EE4(a3, a1);
  return 0LL;
}
