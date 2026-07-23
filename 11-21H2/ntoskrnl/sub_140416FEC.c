/*
 * XREFs of sub_140416FEC @ 0x140416FEC
 * Callers:
 *     sub_140A50388 @ 0x140A50388 (sub_140A50388.c)
 *     sub_140A62018 @ 0x140A62018 (sub_140A62018.c)
 *     sub_140A72820 @ 0x140A72820 (sub_140A72820.c)
 *     sub_140AF9E94 @ 0x140AF9E94 (sub_140AF9E94.c)
 * Callees:
 *     sub_1403BF3B8 @ 0x1403BF3B8 (sub_1403BF3B8.c)
 */

unsigned __int64 __fastcall sub_140416FEC(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  unsigned int v5; // [rsp+20h] [rbp-18h]

  v5 = a4;
  LOBYTE(a4) = a3;
  return sub_1403BF3B8(a1, a2, 1u, a4, v5);
}
