/*
 * XREFs of sub_14084476C @ 0x14084476C
 * Callers:
 *     sub_140844658 @ 0x140844658 (sub_140844658.c)
 *     sub_140A47990 @ 0x140A47990 (sub_140A47990.c)
 * Callees:
 *     HalQueryMaximumProcessorCount @ 0x14036FA30 (HalQueryMaximumProcessorCount.c)
 *     sub_1403B37B0 @ 0x1403B37B0 (sub_1403B37B0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14050E264 @ 0x14050E264 (sub_14050E264.c)
 */

__int64 __fastcall sub_14084476C(int *a1)
{
  int v1; // eax
  int MaximumProcessorCount; // eax
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  v1 = dword_140C4A844;
  if ( !dword_140C4A844 )
    v1 = 1;
  *a1 = v1;
  v5 = 0LL;
  MaximumProcessorCount = HalQueryMaximumProcessorCount();
  a1[2] = 0;
  a1[1] = 150 * MaximumProcessorCount;
  if ( sub_1403B37B0() )
  {
    sub_14050E264(0x40000000u, &v5);
    if ( (unsigned int)v5 >= 0x40000006 )
    {
      sub_14050E264(0x40000006u, &v5);
      if ( (v5 & 0x20) != 0 )
      {
        sub_14050E264(0x40000005u, &v5);
        if ( DWORD2(v5) < a1[1] / (unsigned int)HalQueryMaximumProcessorCount() * dword_140C0BB30 )
          a1[1] = DWORD2(v5) / dword_140C0BB30 * HalQueryMaximumProcessorCount();
        a1[2] = DWORD2(v5) - a1[1] / (unsigned int)HalQueryMaximumProcessorCount() * dword_140C0BB30;
      }
    }
  }
  return 0LL;
}
