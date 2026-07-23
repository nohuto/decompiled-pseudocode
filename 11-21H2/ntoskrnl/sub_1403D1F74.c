/*
 * XREFs of sub_1403D1F74 @ 0x1403D1F74
 * Callers:
 *     sub_1403D1870 @ 0x1403D1870 (sub_1403D1870.c)
 *     sub_1405D73F0 @ 0x1405D73F0 (sub_1405D73F0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1403D1F74(_QWORD *a1)
{
  __int64 v1; // r9
  unsigned __int64 v2; // r8
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int64 *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rax

  v1 = *a1;
  if ( *(_BYTE *)(*a1 + 5LL) )
  {
    v2 = a1[2];
    a1[2] = 0LL;
    v3 = *(unsigned int *)(v1 + 20);
    a1[3] += v2;
    v4 = a1[1] + 1000 * v3;
    *(_QWORD *)(v4 + 40) += v2;
    if ( *(_DWORD *)(v1 + 68) == 3 )
    {
      if ( *(int *)(v1 + 64) < 0 )
      {
        ++*(_DWORD *)(v4 + 52);
      }
      else
      {
        ++*(_DWORD *)(v4 + 56);
        v5 = (unsigned __int64 *)&unk_140D05670;
        v6 = 0LL;
        while ( v2 >= *v5 )
        {
          v6 = (unsigned int)(v6 + 1);
          v5 += 3;
          if ( (unsigned int)v6 >= 0x1A )
          {
            ++*(_DWORD *)(v4 + 60);
            goto LABEL_12;
          }
        }
        v7 = 32 * v6;
        *(_QWORD *)(v7 + v4 + 208) += v2;
        ++*(_DWORD *)(v7 + v4 + 232);
        if ( v2 < *(_QWORD *)(v7 + v4 + 216) )
          *(_QWORD *)(v7 + v4 + 216) = v2;
        if ( v2 > *(_QWORD *)(v7 + v4 + 224) )
          *(_QWORD *)(v7 + v4 + 224) = v2;
LABEL_12:
        if ( v2 < *(_QWORD *)(v4 + 64) )
          *(_QWORD *)(v4 + 64) = v2;
        if ( v2 > *(_QWORD *)(v4 + 72) )
          *(_QWORD *)(v4 + 72) = v2;
      }
    }
    else
    {
      ++*(_DWORD *)(v4 + 48);
    }
  }
  *(_DWORD *)(v1 + 64) = 0;
  *(_DWORD *)(v1 + 68) = 3;
  *(_BYTE *)(v1 + 5) = 0;
}
