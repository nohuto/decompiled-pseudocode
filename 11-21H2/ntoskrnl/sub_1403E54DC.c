/*
 * XREFs of sub_1403E54DC @ 0x1403E54DC
 * Callers:
 *     sqrtf @ 0x1403E2850 (sqrtf.c)
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1403E5260 @ 0x1403E5260 (sub_1403E5260.c)
 *     sub_1403E52DC @ 0x1403E52DC (sub_1403E52DC.c)
 *     _raise_excf @ 0x1403E5BC0 (_raise_excf.c)
 *     _ctrlfp @ 0x1403E5C18 (_ctrlfp.c)
 *     memset @ 0x140435E00 (memset.c)
 */

float __fastcall sub_1403E54DC(
        __int64 a1,
        int a2,
        int a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        int a7,
        float a8,
        int a9)
{
  BOOL v13; // eax
  __int64 v14; // r9
  float v15; // xmm6_4
  __int64 v17; // [rsp+48h] [rbp-91h] BYREF
  __int64 v18; // [rsp+50h] [rbp-89h] BYREF
  _DWORD v19[28]; // [rsp+58h] [rbp-81h] BYREF

  v18 = ctrlfp(8064LL, 65472LL);
  LODWORD(v17) = a3;
  v13 = sub_1403E52DC(a5, v18);
  v15 = a8;
  if ( !v13 )
  {
    memset(v19, 0, sizeof(v19));
    if ( a9 == 2 )
    {
      *(float *)&v19[12] = a8;
      v19[16] = 1;
    }
    raise_excf((unsigned int)v19, (unsigned int)&v18, a5, a2, (__int64)&a7, (__int64)&v17);
  }
  if ( !dword_140C094CC && a4 )
    return sub_1403E5260(a4, a6, a1, v14, COERCE__INT64(v15), *(float *)&v17, v18);
  _misaligned_access();
  ctrlfp(v18, 65472LL);
  return *(float *)&v17;
}
