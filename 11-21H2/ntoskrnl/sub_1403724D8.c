/*
 * XREFs of sub_1403724D8 @ 0x1403724D8
 * Callers:
 *     sub_14036DBE4 @ 0x14036DBE4 (sub_14036DBE4.c)
 * Callees:
 *     sub_140366D64 @ 0x140366D64 (sub_140366D64.c)
 *     sub_1403721D8 @ 0x1403721D8 (sub_1403721D8.c)
 */

__int64 __fastcall sub_1403724D8(__int64 a1)
{
  ULONG_PTR v1; // r10
  unsigned __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 result; // rax
  unsigned __int64 v6; // [rsp+50h] [rbp+8h] BYREF
  ULONG_PTR v7; // [rsp+58h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
  {
    v3 = (((unsigned __int64)(*(_QWORD *)(a1 + 16) + 7LL) >> 3) + 4095) & 0xFFFFFFFFFFFFF000uLL;
    if ( *(_QWORD *)a1 )
    {
      sub_1403721D8(v1);
      v1 = *(_QWORD *)(a1 + 8);
    }
    v4 = 1LL << *(_BYTE *)(a1 + 51);
    v7 = v1;
    v6 = ~(v4 - 1) & (v4 + (((((v3 >> 12) + 7) >> 3) + 4095) & 0xFFFFFFFFFFFFF000uLL) + v3 - 1);
    return sub_140366D64(&v7, &v6, 0x8000LL);
  }
  return result;
}
