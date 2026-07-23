/*
 * XREFs of sub_14029F5C0 @ 0x14029F5C0
 * Callers:
 *     sub_14022B9E4 @ 0x14022B9E4 (sub_14022B9E4.c)
 *     sub_14023E4B8 @ 0x14023E4B8 (sub_14023E4B8.c)
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_14029F350 @ 0x14029F350 (sub_14029F350.c)
 *     sub_140307E90 @ 0x140307E90 (sub_140307E90.c)
 *     sub_140345190 @ 0x140345190 (sub_140345190.c)
 *     sub_1403C7918 @ 0x1403C7918 (sub_1403C7918.c)
 *     sub_1403C79D4 @ 0x1403C79D4 (sub_1403C79D4.c)
 *     sub_1405EE634 @ 0x1405EE634 (sub_1405EE634.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14029F5C0(unsigned int *a1)
{
  unsigned int v1; // r8d
  __int64 result; // rax
  unsigned __int64 v3; // rax
  unsigned int i; // ecx

  v1 = *a1;
  if ( *a1 )
  {
    if ( v1 < 0x1FFF )
      v1 *= 2;
  }
  else
  {
    result = (unsigned int)dword_140D06884;
    if ( (_DWORD)dword_140D06884 == 1 )
      return result;
    v1 = 64;
  }
  *a1 = v1;
  v3 = __rdtsc();
  result = 10 * (((v1 - 1) & (unsigned int)v3) + v1) / MEMORY[0xFFFFF780000002D6];
  for ( i = 0; i < (unsigned int)result; ++i )
    _mm_pause();
  return result;
}
