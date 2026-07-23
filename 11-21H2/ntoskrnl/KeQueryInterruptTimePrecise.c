/*
 * XREFs of KeQueryInterruptTimePrecise @ 0x140303490
 * Callers:
 *     sub_140217E70 @ 0x140217E70 (sub_140217E70.c)
 *     sub_140224A24 @ 0x140224A24 (sub_140224A24.c)
 *     sub_14022F4BC @ 0x14022F4BC (sub_14022F4BC.c)
 *     sub_14022F6A4 @ 0x14022F6A4 (sub_14022F6A4.c)
 *     sub_1402595B0 @ 0x1402595B0 (sub_1402595B0.c)
 *     sub_1402F2CA0 @ 0x1402F2CA0 (sub_1402F2CA0.c)
 *     sub_1402FEEE0 @ 0x1402FEEE0 (sub_1402FEEE0.c)
 *     sub_140303240 @ 0x140303240 (sub_140303240.c)
 *     KeClockInterruptNotify @ 0x140305780 (KeClockInterruptNotify.c)
 *     sub_140308240 @ 0x140308240 (sub_140308240.c)
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 *     sub_140353FB0 @ 0x140353FB0 (sub_140353FB0.c)
 *     sub_140355830 @ 0x140355830 (sub_140355830.c)
 *     sub_140357EE0 @ 0x140357EE0 (sub_140357EE0.c)
 *     sub_14038BFAC @ 0x14038BFAC (sub_14038BFAC.c)
 *     sub_140397424 @ 0x140397424 (sub_140397424.c)
 *     sub_140398B2C @ 0x140398B2C (sub_140398B2C.c)
 *     sub_14039A8F4 @ 0x14039A8F4 (sub_14039A8F4.c)
 *     sub_140419B58 @ 0x140419B58 (sub_140419B58.c)
 *     sub_14050D1D0 @ 0x14050D1D0 (sub_14050D1D0.c)
 *     sub_14050D380 @ 0x14050D380 (sub_14050D380.c)
 *     sub_14050D91C @ 0x14050D91C (sub_14050D91C.c)
 *     sub_14050EC90 @ 0x14050EC90 (sub_14050EC90.c)
 *     sub_14050ED80 @ 0x14050ED80 (sub_14050ED80.c)
 *     sub_140521CF0 @ 0x140521CF0 (sub_140521CF0.c)
 *     sub_14056A60C @ 0x14056A60C (sub_14056A60C.c)
 *     KeGetNextClockTickDuration @ 0x14056C950 (KeGetNextClockTickDuration.c)
 *     sub_14056C984 @ 0x14056C984 (sub_14056C984.c)
 *     sub_14056CF48 @ 0x14056CF48 (sub_14056CF48.c)
 *     sub_14056D050 @ 0x14056D050 (sub_14056D050.c)
 *     sub_140579E04 @ 0x140579E04 (sub_140579E04.c)
 *     sub_14057A428 @ 0x14057A428 (sub_14057A428.c)
 *     sub_1405C7F88 @ 0x1405C7F88 (sub_1405C7F88.c)
 *     sub_1405C81FC @ 0x1405C81FC (sub_1405C81FC.c)
 *     sub_1405C92A0 @ 0x1405C92A0 (sub_1405C92A0.c)
 *     sub_1405DB13C @ 0x1405DB13C (sub_1405DB13C.c)
 *     sub_1405DBD2C @ 0x1405DBD2C (sub_1405DBD2C.c)
 *     sub_1405DBE28 @ 0x1405DBE28 (sub_1405DBE28.c)
 *     sub_1407F2400 @ 0x1407F2400 (sub_1407F2400.c)
 *     sub_1407F27F4 @ 0x1407F27F4 (sub_1407F27F4.c)
 *     sub_1407F336C @ 0x1407F336C (sub_1407F336C.c)
 *     sub_1407FE8C0 @ 0x1407FE8C0 (sub_1407FE8C0.c)
 *     sub_140806090 @ 0x140806090 (sub_140806090.c)
 *     sub_140809838 @ 0x140809838 (sub_140809838.c)
 *     sub_140997DE0 @ 0x140997DE0 (sub_140997DE0.c)
 *     sub_1409F5F90 @ 0x1409F5F90 (sub_1409F5F90.c)
 *     sub_140B02344 @ 0x140B02344 (sub_140B02344.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 */

__int64 __fastcall KeQueryInterruptTimePrecise(LARGE_INTEGER *a1)
{
  __int64 v2; // rbx
  LARGE_INTEGER v3; // rdi
  __int64 v4; // rbp
  LARGE_INTEGER PerformanceCounter; // rdx
  LONGLONG v6; // rdx

  while ( 1 )
  {
    v2 = MEMORY[0xFFFFF78000000340];
    if ( (MEMORY[0xFFFFF78000000340] & 1) == 0 )
    {
      v3.QuadPart = MEMORY[0xFFFFF78000000350];
      v4 = MEMORY[0xFFFFF78000000008];
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      if ( MEMORY[0xFFFFF78000000340] == v2 )
        break;
    }
    _mm_pause();
  }
  *a1 = PerformanceCounter;
  if ( PerformanceCounter.QuadPart <= (unsigned __int64)v3.QuadPart )
    return v4;
  v6 = PerformanceCounter.QuadPart - v3.QuadPart - 1;
  if ( MEMORY[0xFFFFF78000000369] )
    v6 <<= MEMORY[0xFFFFF78000000369];
  return (((unsigned __int64)v6 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64) + v4;
}
