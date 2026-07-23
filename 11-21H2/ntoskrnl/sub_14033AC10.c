/*
 * XREFs of sub_14033AC10 @ 0x14033AC10
 * Callers:
 *     sub_140227490 @ 0x140227490 (sub_140227490.c)
 *     sub_140228170 @ 0x140228170 (sub_140228170.c)
 *     sub_140228464 @ 0x140228464 (sub_140228464.c)
 *     sub_140272A10 @ 0x140272A10 (sub_140272A10.c)
 *     sub_14027C784 @ 0x14027C784 (sub_14027C784.c)
 *     sub_1402C2AD0 @ 0x1402C2AD0 (sub_1402C2AD0.c)
 *     sub_1402C3BA0 @ 0x1402C3BA0 (sub_1402C3BA0.c)
 *     sub_1402C8FD0 @ 0x1402C8FD0 (sub_1402C8FD0.c)
 *     sub_1402CB710 @ 0x1402CB710 (sub_1402CB710.c)
 *     sub_1402D92AC @ 0x1402D92AC (sub_1402D92AC.c)
 *     sub_1402E4724 @ 0x1402E4724 (sub_1402E4724.c)
 *     sub_140335870 @ 0x140335870 (sub_140335870.c)
 *     sub_14033A6B0 @ 0x14033A6B0 (sub_14033A6B0.c)
 *     sub_14033A920 @ 0x14033A920 (sub_14033A920.c)
 *     sub_14033BEC0 @ 0x14033BEC0 (sub_14033BEC0.c)
 *     sub_140352A00 @ 0x140352A00 (sub_140352A00.c)
 *     sub_1403B790C @ 0x1403B790C (sub_1403B790C.c)
 *     sub_1403C8EF8 @ 0x1403C8EF8 (sub_1403C8EF8.c)
 *     sub_140562A80 @ 0x140562A80 (sub_140562A80.c)
 *     sub_140563158 @ 0x140563158 (sub_140563158.c)
 *     sub_1405954F4 @ 0x1405954F4 (sub_1405954F4.c)
 *     sub_140598DA4 @ 0x140598DA4 (sub_140598DA4.c)
 *     sub_1405A1F60 @ 0x1405A1F60 (sub_1405A1F60.c)
 *     sub_1405A2A48 @ 0x1405A2A48 (sub_1405A2A48.c)
 *     sub_1405A3E3C @ 0x1405A3E3C (sub_1405A3E3C.c)
 *     sub_1405AE144 @ 0x1405AE144 (sub_1405AE144.c)
 *     sub_140AF5940 @ 0x140AF5940 (sub_140AF5940.c)
 * Callees:
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 */

unsigned __int64 __fastcall sub_14033AC10(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
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
  return ((unsigned __int64)sub_140317A10((unsigned __int64)&v7) >> 12) & 0xFFFFFFFFFFLL;
}
