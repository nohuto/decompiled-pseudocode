/*
 * XREFs of ?close@?$basic_filebuf@DU?$char_traits@D@std@@@std@@QEAAPEAV12@XZ @ 0x18064B8BC
 * Callers:
 *     ??1?$basic_filebuf@DU?$char_traits@D@std@@@std@@UEAA@XZ @ 0x18064B450 (--1-$basic_filebuf@DU-$char_traits@D@std@@@std@@UEAA@XZ.c)
 * Callees:
 *     ?_Endwrite@?$basic_filebuf@DU?$char_traits@D@std@@@std@@IEAA_NXZ @ 0x18064B580 (-_Endwrite@-$basic_filebuf@DU-$char_traits@D@std@@@std@@IEAA_NXZ.c)
 *     ?_Init@?$basic_filebuf@DU?$char_traits@D@std@@@std@@IEAAXPEAU_iobuf@@W4_Initfl@12@@Z @ 0x18064B66C (-_Init@-$basic_filebuf@DU-$char_traits@D@std@@@std@@IEAAXPEAU_iobuf@@W4_Initfl@12@@Z.c)
 */

__int64 __fastcall std::filebuf::close(__int64 a1)
{
  __int64 v2; // rbx

  if ( !*(_QWORD *)(a1 + 128) || (v2 = a1 & -(__int64)std::filebuf::_Endwrite(a1), fclose(*(FILE **)(a1 + 128))) )
    v2 = 0LL;
  std::filebuf::_Init(a1, 0LL, 2);
  return v2;
}
