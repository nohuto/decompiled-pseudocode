/*
 * XREFs of sub_140298378 @ 0x140298378
 * Callers:
 *     sub_140298420 @ 0x140298420 (sub_140298420.c)
 *     sub_140576820 @ 0x140576820 (sub_140576820.c)
 *     sub_1407035C0 @ 0x1407035C0 (sub_1407035C0.c)
 * Callees:
 *     sub_14025CB30 @ 0x14025CB30 (sub_14025CB30.c)
 *     sub_14056E34C @ 0x14056E34C (sub_14056E34C.c)
 */

__int64 __fastcall sub_140298378(__int64 a1, _DWORD *a2, unsigned __int64 *a3)
{
  __int64 result; // rax
  char *v7; // r8
  __int64 v8; // r10
  unsigned __int64 v9; // rax
  __int64 v10; // r9

  if ( (a2[12] & 0x100040) != 0x100040 )
    return 0LL;
  v7 = sub_14025CB30(a2 + 308, 0xBu, 0xFFFFF780000003D8uLL, 0LL);
  if ( !v7 )
    return 0LL;
  v8 = (int)a2[312];
  v9 = __readmsr(0x6A7u);
  *a3 = v9;
  v10 = *(_QWORD *)((_BYTE *)a2 + v8 + 1232) & 0x800LL;
  if ( (*(_DWORD *)(a1 + 116) & 0x100000) != 0 )
  {
    if ( !v10 )
    {
      *(_QWORD *)((char *)a2 + v8 + 1232) |= 0x800uLL;
      *(_QWORD *)v7 = 1LL;
      *((_QWORD *)v7 + 1) = v9;
      return 0LL;
    }
    result = sub_14056E34C(v7, v9);
    if ( (int)result >= 0 )
      return 0LL;
  }
  else
  {
    if ( !v10 || !*(_QWORD *)v7 && !*((_QWORD *)v7 + 1) )
      return 0LL;
    return 3221227018LL;
  }
  return result;
}
