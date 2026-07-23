/*
 * XREFs of sub_14055D50C @ 0x14055D50C
 * Callers:
 *     sub_14055D2EC @ 0x14055D2EC (sub_14055D2EC.c)
 * Callees:
 *     sub_1403D7FD4 @ 0x1403D7FD4 (sub_1403D7FD4.c)
 *     sub_140554800 @ 0x140554800 (sub_140554800.c)
 */

char __fastcall sub_14055D50C(__int64 a1, __int64 a2, __int64 *a3, unsigned int *a4)
{
  char v4; // bl
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rsi
  __int64 v10; // rbp
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // edx
  unsigned int v14; // eax

  v4 = 0;
  if ( a1 && (*(_DWORD *)(a1 + 120) & 0x20000) != 0 )
  {
    v7 = *(_QWORD *)(a2 + 152);
    v8 = *(_QWORD *)(a1 + 48);
    v9 = *(_QWORD *)(a1 + 56);
    if ( v8 > v7 || v7 >= v9 )
    {
      *a3 = *(_QWORD *)(a1 + 48);
      if ( (KeGetPcr()[36].Unused0[2] & 1) != 0 && a1 != *((_QWORD *)KeGetCurrentPrcb() + 3) )
      {
        v10 = KeGetPcr()[36].Unused[0];
        if ( sub_1403D7FD4(v10, 80LL) )
        {
          v11 = *(_QWORD *)(v10 + 64);
          if ( v8 <= v11 && v11 < v9 )
            *a3 = v11;
        }
      }
    }
    else
    {
      *a3 = v7;
    }
    v12 = *a3;
    v13 = v9 - *(_DWORD *)a3;
    *a4 = v13;
    v14 = sub_140554800(v12, v13);
    *a4 = v14;
    if ( *a3 && v14 )
      return 1;
  }
  return v4;
}
