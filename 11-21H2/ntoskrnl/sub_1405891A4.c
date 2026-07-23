/*
 * XREFs of sub_1405891A4 @ 0x1405891A4
 * Callers:
 *     sub_14025C1B4 @ 0x14025C1B4 (sub_14025C1B4.c)
 *     sub_140586854 @ 0x140586854 (sub_140586854.c)
 *     sub_1405872B0 @ 0x1405872B0 (sub_1405872B0.c)
 *     sub_140587900 @ 0x140587900 (sub_140587900.c)
 *     sub_1405879D8 @ 0x1405879D8 (sub_1405879D8.c)
 *     sub_1405882D0 @ 0x1405882D0 (sub_1405882D0.c)
 *     sub_140588C48 @ 0x140588C48 (sub_140588C48.c)
 * Callees:
 *     sub_140226804 @ 0x140226804 (sub_140226804.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_1403B76EC @ 0x1403B76EC (sub_1403B76EC.c)
 */

__int64 __fastcall sub_1405891A4(__int64 a1, int a2)
{
  __int64 v2; // r12
  unsigned __int64 v3; // rsi
  unsigned __int64 v5; // rdi
  __int64 v6; // r13
  char v7; // r15
  __int64 v8; // rbx
  unsigned __int64 *v9; // r14
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int v12; // r10d
  unsigned __int64 v13; // rdx
  __int64 *v14; // r9
  unsigned __int64 *v15; // r8
  __int64 result; // rax
  unsigned __int64 v17; // rcx

  v2 = *(_QWORD *)(a1 + 15984);
  v3 = (unsigned int)dword_140C507C0[0];
  v5 = a2 & 0x3FFFFF;
  v6 = (unsigned int)sub_1403B76EC(v5 << 18);
  v7 = 0;
  v8 = *((unsigned int *)sub_1402C1550(v5 << 18) + 2);
  v9 = (unsigned __int64 *)(qword_140C52968 + 8 * v5);
  v10 = *v9;
  v11 = *v9 & 0x1C00000;
  if ( v11 == 0x800000 )
  {
    if ( (v10 & 0x800000000000LL) != 0 )
    {
      sub_140226804(qword_140C52968 + 8 * v5, 1, 1u);
      v10 = *v9;
    }
    v12 = 1;
    v13 = v3 + (unsigned int)(2 * v3 * v8);
  }
  else if ( v11 == 0x400000 )
  {
    if ( (v10 & 0x800000000000LL) != 0 )
    {
      sub_140226804(qword_140C52968 + 8 * v5, 1, 1u);
      v10 = *v9;
      v7 = 1;
    }
    v12 = 0;
    v13 = (unsigned int)(2 * v3 * v8);
  }
  else
  {
    v12 = 5;
    v13 = (unsigned int)v8 + 2 * (_DWORD)v3 * (unsigned __int16)word_140D05000;
  }
  v14 = (__int64 *)(v2 + 8 * v13);
  if ( v12 != 5 )
    v14 += v5 % v3;
  if ( ((v10 >> 25) & 0x3FFFFF) != 0 )
    v15 = (unsigned __int64 *)(qword_140C52968 + 8 * ((v10 >> 25) & 0x3FFFFF));
  else
    v15 = (unsigned __int64 *)v14;
  *v15 = v10 & 0x3FFFFF | *v15 & 0xFFFFFFFFFFC00000uLL;
  if ( (v10 & 0x3FFFFF) != 0 )
    v14 = (__int64 *)(qword_140C52968 + 8 * (v10 & 0x3FFFFF));
  result = *v14 ^ (v10 ^ *v14) & 0x7FFFFE000000LL;
  *v14 = result;
  if ( *(_BYTE *)(a1 + 15589) || v7 || v12 )
    v17 = v10 & 0xFFFFFFFFFFC00000uLL | 1;
  else
    v17 = v10 & 0xFFFFFFFFFFC00000uLL;
  *v9 = v17 & 0xFFFFFFFFFE3FFFFFuLL | 0xC00000;
  if ( v12 != 5 )
  {
    --*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24512 * v8 + 8 * (v6 + 4LL * v12) + 22648);
    --*(_QWORD *)(a1 + 15992);
  }
  return result;
}
