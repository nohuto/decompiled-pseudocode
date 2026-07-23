/*
 * XREFs of sub_1403B770C @ 0x1403B770C
 * Callers:
 *     sub_140582D7C @ 0x140582D7C (sub_140582D7C.c)
 *     sub_1405C00C0 @ 0x1405C00C0 (sub_1405C00C0.c)
 *     sub_140AF522C @ 0x140AF522C (sub_140AF522C.c)
 *     sub_140AF5478 @ 0x140AF5478 (sub_140AF5478.c)
 * Callees:
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_14033B6A0 @ 0x14033B6A0 (sub_14033B6A0.c)
 *     sub_14033C300 @ 0x14033C300 (sub_14033C300.c)
 *     sub_14033C33C @ 0x14033C33C (sub_14033C33C.c)
 *     sub_14036C868 @ 0x14036C868 (sub_14036C868.c)
 *     sub_1403B78C4 @ 0x1403B78C4 (sub_1403B78C4.c)
 */

__int64 __fastcall sub_1403B770C(__int64 a1, __int16 a2, unsigned __int16 a3)
{
  __int64 v3; // rsi
  int v6; // eax
  __int64 v7; // r9
  int v8; // r10d
  __int64 v9; // rbp
  __int16 v10; // r14
  char v11; // cl
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 result; // rax
  __int64 v15; // rdx

  v3 = a3;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_BYTE *)(a1 + 34) = 64;
  sub_14033C33C(a1, 0, 0);
  *(_QWORD *)(a1 + 40) |= 0x40000000000000uLL;
  v6 = sub_1403B78C4(0LL, 3LL);
  *(_QWORD *)(a1 + 16) = sub_14033B6A0(*(_QWORD *)(a1 + 16), -(__int64)(v6 != 0) & 0xFFFFFFFDLL);
  v9 = (unsigned int)(v8 - 2);
  v10 = v8 - 1;
  if ( (a2 & 0x100) != 0 )
  {
    sub_14033C300(a1, v8);
LABEL_5:
    v11 = 6;
    goto LABEL_11;
  }
  if ( (a2 & 0x80u) != 0 )
  {
    *(_QWORD *)(a1 + 8) = 0xFFFFF68000000000uLL;
    goto LABEL_5;
  }
  if ( ((unsigned __int8)a2 & (unsigned __int8)v10) != 0 )
  {
    *(_QWORD *)(a1 + 40) = v7 | 0x20000000000000LL;
    if ( (a2 & 4) != 0 )
    {
      v12 = *(_QWORD *)(a1 + 24) & 0xC000000000000001uLL;
      *(_WORD *)(a1 + 32) = v8 - 2;
      *(_QWORD *)(a1 + 24) = v9 | v12;
      goto LABEL_5;
    }
    v11 = v8 - 1;
  }
  else
  {
    v11 = (v8 - 2) | (4 * ((v8 - 2) & a2));
  }
LABEL_11:
  v13 = *(_QWORD *)(a1 + 40) ^ (v3 << 43);
  *(_BYTE *)(a1 + 34) = v11 | *(_BYTE *)(a1 + 34) & 0xF8;
  result = 0x1FF80000000000LL;
  *(_QWORD *)(a1 + 40) ^= v13 & 0x1FF80000000000LL;
  if ( (a2 & 0x180) != 0 )
  {
    *(_QWORD *)(a1 + 24) = v9 | *(_QWORD *)(a1 + 24) & 0xC000000000000001uLL;
    *(_QWORD *)(a1 + 16) = sub_1402CCC50(128LL);
    *(_QWORD *)(a1 + 40) = v15 & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFELL;
    sub_14036C868(a1, *((_QWORD *)KeGetCurrentThread() + 23), v9);
    result = 0x4000000000000000LL;
    *(_WORD *)(a1 + 32) = v10;
    *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  }
  return result;
}
