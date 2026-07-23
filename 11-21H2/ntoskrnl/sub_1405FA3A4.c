/*
 * XREFs of sub_1405FA3A4 @ 0x1405FA3A4
 * Callers:
 *     sub_14037FA00 @ 0x14037FA00 (sub_14037FA00.c)
 * Callees:
 *     sub_1403818D0 @ 0x1403818D0 (sub_1403818D0.c)
 *     sub_1403865C4 @ 0x1403865C4 (sub_1403865C4.c)
 *     sub_1405F903C @ 0x1405F903C (sub_1405F903C.c)
 *     sub_1405F91C4 @ 0x1405F91C4 (sub_1405F91C4.c)
 */

__int64 __fastcall sub_1405FA3A4(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  PVOID v5; // rax
  __int64 result; // rax
  int v7; // edx
  int v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0;
  v3 = *(_QWORD *)(a2 + 16);
  if ( v3 )
  {
    v5 = sub_1403818D0(v3, &v8);
    if ( !v5 )
      return 3221225626LL;
  }
  else
  {
    v5 = 0LL;
  }
  v7 = *(_DWORD *)(a2 + 8);
  if ( v7 != -1 )
    return sub_1403865C4(a1, v7, (__int64)v5, (unsigned int *)(a2 + 12));
  sub_1405F91C4(a1 + 80);
  sub_1405F91C4(a1 + 2016);
  result = sub_1405F903C((_QWORD *)(a1 + 80));
  if ( (int)result >= 0 )
    return sub_1405F903C((_QWORD *)(a1 + 2016));
  return result;
}
