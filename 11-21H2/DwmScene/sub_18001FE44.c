/*
 * XREFs of sub_18001FE44 @ 0x18001FE44
 * Callers:
 *     sub_1800476C0 @ 0x1800476C0 (sub_1800476C0.c)
 *     sub_180060484 @ 0x180060484 (sub_180060484.c)
 *     sub_18006180C @ 0x18006180C (sub_18006180C.c)
 *     sub_18006B90C @ 0x18006B90C (sub_18006B90C.c)
 *     sub_18006D170 @ 0x18006D170 (sub_18006D170.c)
 *     sub_180078CD0 @ 0x180078CD0 (sub_180078CD0.c)
 *     sub_180078F40 @ 0x180078F40 (sub_180078F40.c)
 *     sub_180079180 @ 0x180079180 (sub_180079180.c)
 *     sub_180079400 @ 0x180079400 (sub_180079400.c)
 *     sub_1800F6120 @ 0x1800F6120 (sub_1800F6120.c)
 *     sub_1800F9D04 @ 0x1800F9D04 (sub_1800F9D04.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_18001FE44(char *a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  char result; // al
  unsigned __int16 v5; // r9
  signed __int64 v6; // rcx
  bool v7; // cc
  unsigned __int16 v8; // r9

  v2 = a2[2];
  if ( a2[3] >= 8uLL )
    a2 = (_QWORD *)*a2;
  v3 = *((_QWORD *)a1 + 2);
  if ( *((_QWORD *)a1 + 3) >= 8uLL )
    a1 = *(char **)a1;
  if ( v3 == v2 )
  {
    result = 1;
    if ( !v3 )
      return result;
    v5 = *(_WORD *)a1;
    if ( *(_WORD *)a1 >= *(_WORD *)a2 )
    {
      v6 = a1 - (char *)a2;
      v7 = v5 <= *(_WORD *)a2;
      do
      {
        if ( !v7 )
          break;
        if ( v3 == 1 )
          return result;
        a2 = (_QWORD *)((char *)a2 + 2);
        --v3;
        v8 = *(_WORD *)((char *)a2 + v6);
        v7 = v8 <= *(_WORD *)a2;
      }
      while ( v8 >= *(_WORD *)a2 );
    }
  }
  return 0;
}
