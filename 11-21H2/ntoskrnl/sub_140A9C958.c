/*
 * XREFs of sub_140A9C958 @ 0x140A9C958
 * Callers:
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140A818B0 @ 0x140A818B0 (sub_140A818B0.c)
 *     sub_140A89D58 @ 0x140A89D58 (sub_140A89D58.c)
 *     sub_140A94644 @ 0x140A94644 (sub_140A94644.c)
 *     sub_140A9D0D0 @ 0x140A9D0D0 (sub_140A9D0D0.c)
 */

__int64 __fastcall sub_140A9C958(int *a1)
{
  unsigned int v2; // edx
  int v3; // ecx
  int v4; // ebx
  __m128i v5; // xmm6
  __int128 v7; // [rsp+28h] [rbp-40h] BYREF
  PVOID P[2]; // [rsp+38h] [rbp-30h]

  v7 = 0LL;
  v2 = a1[6];
  v3 = *a1;
  if ( !v3 || (v4 = sub_140A94644(v3), v4 >= 0) )
  {
    if ( !v2 )
      goto LABEL_7;
    if ( v2 == -1 )
      v2 = 0;
    v4 = sub_140A9D0D0(v2);
    if ( v4 >= 0 )
    {
LABEL_7:
      ++dword_140C2A040;
      v4 = sub_140A818B0((__int64)&v7, (unsigned __int64)(a1 + 2), 64LL);
      if ( v4 >= 0 )
      {
        sub_140A89D58();
        v5 = (__m128i)xmmword_140C2A048;
        *(_OWORD *)P = xmmword_140C2A048;
        xmmword_140C2A048 = v7;
        qword_140C1AD40 = 0LL;
        KeReleaseMutex(&stru_140C1AD60, 0);
        if ( (unsigned __int16)_mm_cvtsi128_si32(v5) )
          ExFreePoolWithTag(P[1], 0);
      }
    }
  }
  return (unsigned int)v4;
}
