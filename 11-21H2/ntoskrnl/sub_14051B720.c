/*
 * XREFs of sub_14051B720 @ 0x14051B720
 * Callers:
 *     sub_1403BB9B8 @ 0x1403BB9B8 (sub_1403BB9B8.c)
 * Callees:
 *     sub_1403BF104 @ 0x1403BF104 (sub_1403BF104.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14051A924 @ 0x14051A924 (sub_14051A924.c)
 *     sub_14051B634 @ 0x14051B634 (sub_14051B634.c)
 */

__int64 __fastcall sub_14051B720(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _DWORD *v5; // rax
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  result = sub_14042A5E0(*(_QWORD *)(a1 + 16), &v6);
  if ( (_DWORD)result == -1073741789 )
  {
    v5 = (_DWORD *)sub_1403BF104(8 * v6 + 8, 1u);
    *(_QWORD *)(a1 + 544) = v5;
    if ( v5 )
    {
      *v5 = v6;
      result = sub_14042A5E0(*(_QWORD *)(a1 + 16), &v6);
      if ( (int)result >= 0 )
      {
        result = sub_14051B634(v6, *(_QWORD *)(a1 + 544) + 8LL, a2);
        if ( (int)result >= 0 )
          return sub_14051A924(*(unsigned int **)(a1 + 544));
      }
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
