/*
 * XREFs of sub_1402E108C @ 0x1402E108C
 * Callers:
 *     sub_1402E1010 @ 0x1402E1010 (sub_1402E1010.c)
 *     sub_14065F10C @ 0x14065F10C (sub_14065F10C.c)
 * Callees:
 *     <none>
 */

__int64 (**__fastcall sub_1402E108C(_QWORD *a1))[2]
{
  int v1; // edx
  __int64 (***i)[2]; // r9
  __int64 *v3; // r11
  __int64 v4; // r8

  v1 = 0;
  for ( i = &off_1400081A0; ; ++i )
  {
    v3 = (__int64 *)(*i)[2];
    v4 = *a1 - *v3;
    if ( *a1 == *v3 )
      v4 = a1[1] - v3[1];
    if ( !v4 )
      break;
    if ( (unsigned int)++v1 >= 0x11 )
      return 0LL;
  }
  return *i;
}
