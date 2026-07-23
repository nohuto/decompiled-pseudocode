/*
 * XREFs of sub_1402E4D28 @ 0x1402E4D28
 * Callers:
 *     sub_140211108 @ 0x140211108 (sub_140211108.c)
 *     sub_140227490 @ 0x140227490 (sub_140227490.c)
 *     sub_14022DBD4 @ 0x14022DBD4 (sub_14022DBD4.c)
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z @ 0x14024D7F4 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z.c)
 *     sub_1402704A0 @ 0x1402704A0 (sub_1402704A0.c)
 *     sub_1402D92AC @ 0x1402D92AC (sub_1402D92AC.c)
 *     sub_1402E4724 @ 0x1402E4724 (sub_1402E4724.c)
 *     sub_1402E48A0 @ 0x1402E48A0 (sub_1402E48A0.c)
 *     sub_1402E4BF0 @ 0x1402E4BF0 (sub_1402E4BF0.c)
 *     sub_140321F70 @ 0x140321F70 (sub_140321F70.c)
 *     sub_140338DB0 @ 0x140338DB0 (sub_140338DB0.c)
 *     sub_140367190 @ 0x140367190 (sub_140367190.c)
 *     sub_14038EF10 @ 0x14038EF10 (sub_14038EF10.c)
 *     sub_1403B790C @ 0x1403B790C (sub_1403B790C.c)
 *     sub_1405803C8 @ 0x1405803C8 (sub_1405803C8.c)
 *     MmProtectMdlSystemAddress @ 0x140585D50 (MmProtectMdlSystemAddress.c)
 *     sub_1405954F4 @ 0x1405954F4 (sub_1405954F4.c)
 *     sub_1405A3E3C @ 0x1405A3E3C (sub_1405A3E3C.c)
 *     sub_1405ABD20 @ 0x1405ABD20 (sub_1405ABD20.c)
 *     sub_1405B85F8 @ 0x1405B85F8 (sub_1405B85F8.c)
 *     sub_1405BA864 @ 0x1405BA864 (sub_1405BA864.c)
 *     sub_140B190F0 @ 0x140B190F0 (sub_140B190F0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402E4D28(__int64 a1, char a2)
{
  __int64 v2; // rcx

  v2 = 32 * (a2 & 0x1F | ((a1 & 0xFFFFFFFFFFLL) << 7) | 0x40);
  if ( qword_140C50780 )
  {
    if ( (qword_140C50780 & v2) != 0 )
      return v2 | 0x10;
    else
      return qword_140C50780 | v2;
  }
  return v2;
}
