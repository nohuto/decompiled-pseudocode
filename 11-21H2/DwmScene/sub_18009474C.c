/*
 * XREFs of sub_18009474C @ 0x18009474C
 * Callers:
 *     sub_180095F34 @ 0x180095F34 (sub_180095F34.c)
 *     sub_18009B094 @ 0x18009B094 (sub_18009B094.c)
 *     sub_18009B150 @ 0x18009B150 (sub_18009B150.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180088D1C @ 0x180088D1C (sub_180088D1C.c)
 */

__int64 __fastcall sub_18009474C(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  __int64 v3; // rbx

  v2 = (_QWORD *)(a2 + 16);
  *(_DWORD *)a1 = *(_DWORD *)a2;
  v3 = a1 + 16;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  if ( a1 + 16 != a2 + 16 )
  {
    if ( *(_QWORD *)v3 )
    {
      sub_180088D1C(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24));
      sub_180010884(*(char **)v3, 16 * ((__int64)(*(_QWORD *)(v3 + 16) - *(_QWORD *)v3) >> 4));
      *(_QWORD *)v3 = 0LL;
      *(_QWORD *)(v3 + 8) = 0LL;
      *(_QWORD *)(v3 + 16) = 0LL;
    }
    *(_QWORD *)v3 = *v2;
    *(_QWORD *)(v3 + 8) = v2[1];
    *(_QWORD *)(v3 + 16) = v2[2];
    *v2 = 0LL;
    v2[1] = 0LL;
    v2[2] = 0LL;
  }
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
  return a1;
}
