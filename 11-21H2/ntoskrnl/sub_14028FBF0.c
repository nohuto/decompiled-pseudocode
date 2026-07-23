/*
 * XREFs of sub_14028FBF0 @ 0x14028FBF0
 * Callers:
 *     sub_14027AA30 @ 0x14027AA30 (sub_14027AA30.c)
 *     sub_14028FA14 @ 0x14028FA14 (sub_14028FA14.c)
 *     sub_14028FB74 @ 0x14028FB74 (sub_14028FB74.c)
 *     sub_14032C1B0 @ 0x14032C1B0 (sub_14032C1B0.c)
 *     sub_14032CE60 @ 0x14032CE60 (sub_14032CE60.c)
 *     sub_14032D1C0 @ 0x14032D1C0 (sub_14032D1C0.c)
 *     sub_140353230 @ 0x140353230 (sub_140353230.c)
 *     sub_14038D4F0 @ 0x14038D4F0 (sub_14038D4F0.c)
 *     MmIsAddressValid @ 0x14038DE50 (MmIsAddressValid.c)
 *     sub_1403AD16C @ 0x1403AD16C (sub_1403AD16C.c)
 *     sub_1403C8AA8 @ 0x1403C8AA8 (sub_1403C8AA8.c)
 *     sub_1403D7FD4 @ 0x1403D7FD4 (sub_1403D7FD4.c)
 *     sub_140552800 @ 0x140552800 (sub_140552800.c)
 *     sub_140552F60 @ 0x140552F60 (sub_140552F60.c)
 *     sub_140554800 @ 0x140554800 (sub_140554800.c)
 *     sub_140554878 @ 0x140554878 (sub_140554878.c)
 *     sub_1405548F0 @ 0x1405548F0 (sub_1405548F0.c)
 *     sub_140554938 @ 0x140554938 (sub_140554938.c)
 *     sub_140554BC4 @ 0x140554BC4 (sub_140554BC4.c)
 *     sub_14055CC5C @ 0x14055CC5C (sub_14055CC5C.c)
 *     sub_14055D868 @ 0x14055D868 (sub_14055D868.c)
 *     sub_14055DD48 @ 0x14055DD48 (sub_14055DD48.c)
 *     sub_140567038 @ 0x140567038 (sub_140567038.c)
 *     sub_140567630 @ 0x140567630 (sub_140567630.c)
 *     sub_140567C08 @ 0x140567C08 (sub_140567C08.c)
 *     sub_140568024 @ 0x140568024 (sub_140568024.c)
 *     sub_140568220 @ 0x140568220 (sub_140568220.c)
 *     sub_1405682F4 @ 0x1405682F4 (sub_1405682F4.c)
 *     sub_140569604 @ 0x140569604 (sub_140569604.c)
 *     sub_140592348 @ 0x140592348 (sub_140592348.c)
 *     sub_140592964 @ 0x140592964 (sub_140592964.c)
 *     sub_140593064 @ 0x140593064 (sub_140593064.c)
 *     sub_1405A7608 @ 0x1405A7608 (sub_1405A7608.c)
 *     sub_140642660 @ 0x140642660 (sub_140642660.c)
 *     sub_140642758 @ 0x140642758 (sub_140642758.c)
 *     sub_140A90A7C @ 0x140A90A7C (sub_140A90A7C.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_14028FBF0(__int64 a1)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  char v8; // r9
  __int64 v9; // [rsp+0h] [rbp-30h]
  unsigned __int64 v10; // [rsp+8h] [rbp-28h]
  unsigned __int64 v11; // [rsp+10h] [rbp-20h]
  unsigned __int64 v12; // [rsp+18h] [rbp-18h]
  __int64 v13; // [rsp+20h] [rbp-10h]

  if ( a1 >> 47 == -1 || a1 >> 47 == 0 )
  {
    v10 = (((unsigned __int64)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v11 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v12 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v13 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v2 = 4LL;
    while ( 1 )
    {
      v3 = *(&v9 + v2--);
      v4 = *(_QWORD *)v3;
      if ( v3 >= 0xFFFFF6FB7DBED000uLL
        && v3 <= 0xFFFFF6FB7DBED7F8uLL
        && (dword_140D06880 & 0xC00000) != 0
        && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1 )
      {
        if ( (v4 & 1) == 0 )
          return 0;
        if ( (v4 & 0x20) == 0 || (v4 & 0x42) == 0 )
        {
          v6 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
          if ( v6 )
          {
            v7 = *(_QWORD *)(v6 + 8 * ((v3 >> 3) & 0x1FF));
            v8 = v4 | 0x20;
            if ( (v7 & 0x20) == 0 )
              v8 = v4;
            LOBYTE(v4) = v8;
            if ( (v7 & 0x42) != 0 )
              LOBYTE(v4) = v8 | 0x42;
          }
        }
      }
      if ( (v4 & 1) == 0 )
        return 0;
      if ( (v4 & 0x80u) != 0LL )
        break;
      if ( !v2 )
        return 1;
    }
    if ( (unsigned __int64)a1 < 0xFFFFF68000000000uLL || (unsigned __int64)a1 > 0xFFFFF6FFFFFFFFFFuLL )
      return 1;
  }
  return 0;
}
