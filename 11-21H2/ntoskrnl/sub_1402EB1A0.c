/*
 * XREFs of sub_1402EB1A0 @ 0x1402EB1A0
 * Callers:
 *     sub_1406F914C @ 0x1406F914C (sub_1406F914C.c)
 * Callees:
 *     sub_140268408 @ 0x140268408 (sub_140268408.c)
 *     sub_140277C50 @ 0x140277C50 (sub_140277C50.c)
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_1402E7704 @ 0x1402E7704 (sub_1402E7704.c)
 *     sub_1402E8990 @ 0x1402E8990 (sub_1402E8990.c)
 *     sub_1402E89B0 @ 0x1402E89B0 (sub_1402E89B0.c)
 *     sub_1402EB440 @ 0x1402EB440 (sub_1402EB440.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140313D20 @ 0x140313D20 (sub_140313D20.c)
 *     sub_140336AD8 @ 0x140336AD8 (sub_140336AD8.c)
 *     sub_1403B1DEC @ 0x1403B1DEC (sub_1403B1DEC.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1402EB1A0(ULONG_PTR a1)
{
  unsigned __int64 *v1; // r15
  __int64 v2; // rbx
  unsigned __int64 v4; // r8
  __int64 v5; // rbx
  __int64 v6; // r14
  int v7; // esi
  int v8; // edi
  int v9; // eax
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  __int64 result; // rax
  BOOL v13; // eax
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v15; // r8
  bool v16; // zf
  unsigned int v17; // [rsp+60h] [rbp+8h] BYREF
  __int64 v18; // [rsp+68h] [rbp+10h]

  v1 = (unsigned __int64 *)(a1 + 16);
  v2 = *(_QWORD *)(a1 + 16);
  v17 = 0;
  if ( qword_140C50780 && (v2 & 0x10) == 0 )
    v2 &= ~qword_140C50780;
  v4 = *v1;
  v5 = v2 >> 16;
  v6 = 0LL;
  v18 = *(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(*(_QWORD *)v5 + 60LL) & 0x3FF));
  if ( (unsigned int)sub_140313D20(v18, v5, v4, &v17)
    && (!sub_140277C50(a1) || !(unsigned int)sub_1403B1DEC(a1, v17) && v17 <= 3) )
  {
    v7 = *(_DWORD *)(*(_QWORD *)v5 + 56LL);
    v8 = *((_DWORD *)sub_1402C1550(0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4)) + 2);
    v9 = sub_1402E8990(a1);
    v10 = sub_1402EB440(
            v18,
            v17,
            (v9 << byte_140C506CD) | (v8 << byte_140C506CC) | (-1431655765 * ((__int64)(a1 + 0x220000000000LL) >> 4)) & dword_140C50738,
            (v7 & 0x7F00000) == 0 ? 2 : 0,
            -1LL,
            0x20000);
    if ( v10 != -1 )
      v6 = 48 * v10 - 0x220000000000LL;
  }
  v11 = (unsigned __int8)sub_1402F2700(a1);
  sub_140336AD8(a1);
  if ( v6 && !*(_WORD *)(a1 + 32) && *(char *)(a1 + 35) >= 0 && (unsigned __int8)((*(_BYTE *)(a1 + 34) & 7) - 2) <= 1u )
  {
    v13 = sub_140277C50(a1);
    sub_1402E7704(a1, v6, v13, 0LL);
    *v1 = 0LL;
    sub_1402E89B0(v1);
    v6 = a1;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = (unsigned int)dword_140D06B08;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v11 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
        v15 = *((_QWORD *)CurrentPrcb + 4375);
        v16 = ((unsigned int)result & *(_DWORD *)(v15 + 20)) == 0;
        *(_DWORD *)(v15 + 20) &= result;
        if ( v16 )
          result = sub_140418E4C(CurrentPrcb);
      }
    }
  }
  __writecr8(v11);
  if ( v6 )
    return sub_140268408(v6);
  return result;
}
