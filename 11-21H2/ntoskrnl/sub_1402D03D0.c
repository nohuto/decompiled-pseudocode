/*
 * XREFs of sub_1402D03D0 @ 0x1402D03D0
 * Callers:
 *     sub_140213558 @ 0x140213558 (sub_140213558.c)
 *     sub_140229100 @ 0x140229100 (sub_140229100.c)
 *     sub_14023210C @ 0x14023210C (sub_14023210C.c)
 *     sub_140257F64 @ 0x140257F64 (sub_140257F64.c)
 *     sub_14028E238 @ 0x14028E238 (sub_14028E238.c)
 *     sub_1402C3BA0 @ 0x1402C3BA0 (sub_1402C3BA0.c)
 *     sub_1402CB710 @ 0x1402CB710 (sub_1402CB710.c)
 *     sub_1402CE240 @ 0x1402CE240 (sub_1402CE240.c)
 *     sub_1402D01A8 @ 0x1402D01A8 (sub_1402D01A8.c)
 *     sub_14032D1C0 @ 0x14032D1C0 (sub_14032D1C0.c)
 *     sub_14032EA60 @ 0x14032EA60 (sub_14032EA60.c)
 *     sub_14033B190 @ 0x14033B190 (sub_14033B190.c)
 *     sub_140353230 @ 0x140353230 (sub_140353230.c)
 *     sub_140593E88 @ 0x140593E88 (sub_140593E88.c)
 *     sub_1405A3418 @ 0x1405A3418 (sub_1405A3418.c)
 *     sub_1405AC9A0 @ 0x1405AC9A0 (sub_1405AC9A0.c)
 *     sub_1405B07F4 @ 0x1405B07F4 (sub_1405B07F4.c)
 *     sub_1405C2898 @ 0x1405C2898 (sub_1405C2898.c)
 * Callees:
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 */

unsigned __int64 __fastcall sub_1402D03D0(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v2 = *(_QWORD *)v1;
  if ( v1 >= 0xFFFFF6FB7DBED000uLL
    && v1 <= 0xFFFFF6FB7DBED7F8uLL
    && (dword_140D06880 & 0xC00000) != 0
    && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
    && (v2 & 1) != 0
    && ((v2 & 0x20) == 0 || (v2 & 0x42) == 0) )
  {
    v4 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
    if ( v4 )
    {
      v5 = v2 | 0x20;
      v6 = *(_QWORD *)(v4 + 8 * ((v1 >> 3) & 0x1FF));
      if ( (v6 & 0x20) == 0 )
        v5 = v2;
      v2 = v5;
      if ( (v6 & 0x42) != 0 )
        v2 = v5 | 0x42;
    }
  }
  v7 = v2;
  return 48 * (((unsigned __int64)sub_140317A10(&v7) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
}
