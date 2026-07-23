/*
 * XREFs of sub_140998800 @ 0x140998800
 * Callers:
 *     <none>
 * Callees:
 *     sub_140368A78 @ 0x140368A78 (sub_140368A78.c)
 *     sub_1409984D0 @ 0x1409984D0 (sub_1409984D0.c)
 *     sub_14099862C @ 0x14099862C (sub_14099862C.c)
 *     sub_140998678 @ 0x140998678 (sub_140998678.c)
 *     sub_1409986C4 @ 0x1409986C4 (sub_1409986C4.c)
 *     sub_140998778 @ 0x140998778 (sub_140998778.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

__int64 __fastcall sub_140998800(int a1)
{
  __int64 v1; // rcx
  __int64 QuadPart; // rcx
  char v3; // dl
  LARGE_INTEGER v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx

  sub_140A48330(a1);
  if ( dword_140C1F9D4 && sub_140998778() && _InterlockedExchangeAdd(&dword_140D048D0, 0) == 2 )
  {
    if ( byte_140C1F900 )
    {
      sub_14099862C();
      v4 = sub_1409986C4();
      v3 = 1;
      _InterlockedExchange(&dword_140D048D0, 1);
      QuadPart = v4.QuadPart;
    }
    else
    {
      sub_140998678(v1);
      QuadPart = 300000000LL;
      _InterlockedExchange(&dword_140D048D0, 1);
      v3 = 0;
    }
    sub_1409984D0(QuadPart, v3);
  }
  sub_140368A78((__int64)&unk_140C1F9A8);
  return sub_140A47CF8(v6, v5);
}
