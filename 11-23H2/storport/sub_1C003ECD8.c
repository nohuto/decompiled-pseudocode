/*
 * XREFs of sub_1C003ECD8 @ 0x1C003ECD8
 * Callers:
 *     sub_1C003A010 @ 0x1C003A010 (sub_1C003A010.c)
 * Callees:
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C003E940 @ 0x1C003E940 (sub_1C003E940.c)
 *     sub_1C00AEFFC @ 0x1C00AEFFC (sub_1C00AEFFC.c)
 */

__int64 __fastcall sub_1C003ECD8(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // edi
  _DWORD Dst[10]; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v6; // [rsp+88h] [rbp-20h]

  memset_0(Dst, 0, 0x40uLL);
  v6 = v6 & 0xFFFFFF00 | 0xD1;
  Dst[0] = 10;
  v2 = sub_1C00AEFFC(a1, 0, 0, 0, (__int64)Dst);
  v3 = v2;
  if ( v2 < 0 )
  {
    sub_1C003E940(a1, -1, -1, 0, v2);
  }
  else
  {
    *(_DWORD *)(a1 + 5964) = 0;
    *(_DWORD *)(a1 + 5960) = 0;
  }
  return v3;
}
