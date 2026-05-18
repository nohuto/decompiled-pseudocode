/*
 * XREFs of sub_18009A858 @ 0x18009A858
 * Callers:
 *     sub_18009AE94 @ 0x18009AE94 (sub_18009AE94.c)
 * Callees:
 *     sub_18001DA38 @ 0x18001DA38 (sub_18001DA38.c)
 */

char __fastcall sub_18009A858(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rbp
  char v3; // si
  __int64 v4; // rbx
  __int64 i; // rdi

  v2 = a1[1];
  v3 = 0;
  v4 = *a1;
  if ( v2 - *a1 == a2[1] - *a2 )
  {
    if ( v4 == v2 )
    {
      return 1;
    }
    else
    {
      for ( i = *a2 + 36LL;
            sub_18001DA38((_QWORD *)v4, (_QWORD *)(i - 36))
         && *(_DWORD *)(v4 + 32) == *(_DWORD *)(i - 4)
         && *(_DWORD *)(v4 + 36) == *(_DWORD *)i
         && *(_BYTE *)(v4 + 40) == *(_BYTE *)(i + 4)
         && *(_DWORD *)(v4 + 44) == *(_DWORD *)(i + 8);
            i += 48LL )
      {
        v4 += 48LL;
        if ( v4 == v2 )
          return 1;
      }
    }
  }
  return v3;
}
