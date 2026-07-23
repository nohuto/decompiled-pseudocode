/*
 * XREFs of sub_140246B70 @ 0x140246B70
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402C1900 @ 0x1402C1900 (sub_1402C1900.c)
 *     sub_1409613DC @ 0x1409613DC (sub_1409613DC.c)
 *     sub_140961490 @ 0x140961490 (sub_140961490.c)
 */

__int64 __fastcall sub_140246B70(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v5; // r9
  bool v6; // zf
  unsigned int v7; // r10d
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 116) & 0x800000) == 0 || (v6 = *(_QWORD *)(a2 + 16) == *(_QWORD *)(a1 + 96), v3 = 8LL, !v6) )
    v3 = 2LL;
  result = sub_1402C1900(*(_QWORD *)a2, v3, a1);
  v5 = *(_QWORD *)(a2 + 48);
  if ( v5 )
  {
    v7 = *(_DWORD *)(a2 + 40) & 7;
    v8 = *(_QWORD *)(a2 + 48);
    if ( v7 == 2 )
    {
      sub_1409613DC(&v8, *(_QWORD *)(a2 + 56));
      v5 = v8;
    }
    return sub_140961490(*(_QWORD *)(a2 + 32), v7, 0LL, v5);
  }
  return result;
}
