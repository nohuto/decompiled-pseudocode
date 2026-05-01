/*
 * XREFs of sub_18000E4B8 @ 0x18000E4B8
 * Callers:
 *     sub_18000E64C @ 0x18000E64C (sub_18000E64C.c)
 * Callees:
 *     sub_18000D260 @ 0x18000D260 (sub_18000D260.c)
 */

__int64 __fastcall sub_18000E4B8(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1;
  v1 = qword_180032908;
  if ( !*(_QWORD *)(qword_180032908 + 8) )
  {
    v2 = *(_QWORD *)qword_180032908;
    v4 = 0LL;
    if ( (int)sub_18000D260(v2, &v4) >= 0 && !*(_QWORD *)(v1 + 8) )
      *(_QWORD *)(v1 + 8) = v4;
  }
  return (*(_QWORD *)(v1 + 8) + 32LL) & -(__int64)(*(_QWORD *)(v1 + 8) != 0LL);
}
