/*
 * XREFs of sub_140AF9E94 @ 0x140AF9E94
 * Callers:
 *     sub_1403BF088 @ 0x1403BF088 (sub_1403BF088.c)
 *     sub_1403BF104 @ 0x1403BF104 (sub_1403BF104.c)
 *     sub_1403BF1EC @ 0x1403BF1EC (sub_1403BF1EC.c)
 *     sub_140509490 @ 0x140509490 (sub_140509490.c)
 *     sub_140522410 @ 0x140522410 (sub_140522410.c)
 *     sub_1405229B0 @ 0x1405229B0 (sub_1405229B0.c)
 *     sub_140529428 @ 0x140529428 (sub_140529428.c)
 *     sub_140A72820 @ 0x140A72820 (sub_140A72820.c)
 *     sub_140AF968C @ 0x140AF968C (sub_140AF968C.c)
 *     sub_140AF9CC8 @ 0x140AF9CC8 (sub_140AF9CC8.c)
 *     sub_140B4CE34 @ 0x140B4CE34 (sub_140B4CE34.c)
 *     sub_140B4CF2C @ 0x140B4CF2C (sub_140B4CF2C.c)
 * Callees:
 *     sub_140416FEC @ 0x140416FEC (sub_140416FEC.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140AF9F04 @ 0x140AF9F04 (sub_140AF9F04.c)
 */

__int64 __fastcall sub_140AF9E94(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v7; // rax
  void *v8; // rax
  void *v9; // rbx

  if ( (unsigned int)(dword_140C0C688 - dword_140C4D108) <= 3 )
  {
    v7 = sub_140AF9F04(a1, 0LL, 1LL);
    if ( v7 )
    {
      v8 = (void *)sub_140416FEC(v7, 1LL, 0, 4LL);
      v9 = v8;
      if ( v8 )
      {
        memset(v8, 0, 0x1000uLL);
        dword_140C4D108 = 0;
        off_140C07090 = v9;
        dword_140C0C688 = 85;
      }
    }
  }
  return sub_140AF9F04(a1, a2, a3);
}
