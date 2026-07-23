/*
 * XREFs of sub_14093CF20 @ 0x14093CF20
 * Callers:
 *     sub_14093B898 @ 0x14093B898 (sub_14093B898.c)
 * Callees:
 *     MmQueryMemoryRanges @ 0x14096ADD0 (MmQueryMemoryRanges.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14093CF20(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v5; // rbx
  unsigned __int64 i; // rdx
  __int64 v7; // rax
  _QWORD v8[4]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v9; // [rsp+40h] [rbp-20h]
  PVOID P; // [rsp+50h] [rbp-10h]

  *a3 = 0LL;
  v8[1] = a1;
  v8[2] = 0LL;
  P = 0LL;
  v9 = 0LL;
  v8[0] = 0x700000001LL;
  v8[3] = 0x40000000LL;
  LODWORD(v9) = 0x80000000;
  result = MmQueryMemoryRanges(v8);
  if ( (int)result >= 0 )
  {
    v5 = 0LL;
    for ( i = 0LL; i < *((_QWORD *)&v9 + 1); v5 += v7 + 1 )
      v7 = *((_DWORD *)P + 2 * i++) & 0x3FFFFFFF;
    if ( P )
      ExFreePoolWithTag(P, 0);
    *a3 = v5;
    return 0LL;
  }
  return result;
}
