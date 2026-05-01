/*
 * XREFs of ?close@?$basic_filebuf@GU?$char_traits@G@std@@@std@@QEAAPEAV12@XZ @ 0x1806E4098
 * Callers:
 *     ??1?$basic_filebuf@GU?$char_traits@G@std@@@std@@UEAA@XZ @ 0x1806E193C (--1-$basic_filebuf@GU-$char_traits@G@std@@@std@@UEAA@XZ.c)
 * Callees:
 *     ?_Endwrite@?$basic_filebuf@GU?$char_traits@G@std@@@std@@IEAA_NXZ @ 0x1806E3DAC (-_Endwrite@-$basic_filebuf@GU-$char_traits@G@std@@@std@@IEAA_NXZ.c)
 *     ?_Init@?$basic_filebuf@GU?$char_traits@G@std@@@std@@IEAAXPEAU_iobuf@@W4_Initfl@12@@Z @ 0x1806E3E9C (-_Init@-$basic_filebuf@GU-$char_traits@G@std@@@std@@IEAAXPEAU_iobuf@@W4_Initfl@12@@Z.c)
 */

__int64 __fastcall std::basic_filebuf<unsigned short>::close(__int64 a1)
{
  __int64 v2; // rbx

  if ( !*(_QWORD *)(a1 + 128)
    || (v2 = a1 & -(__int64)std::basic_filebuf<unsigned short>::_Endwrite(a1), fclose(*(FILE **)(a1 + 128))) )
  {
    v2 = 0LL;
  }
  std::basic_filebuf<unsigned short>::_Init(a1, 0LL, 2);
  return v2;
}
