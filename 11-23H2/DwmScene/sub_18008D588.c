/*
 * XREFs of sub_18008D588 @ 0x18008D588
 * Callers:
 *     sub_18008CB70 @ 0x18008CB70 (sub_18008CB70.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 */

__int64 __fastcall sub_18008D588(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    sub_1800100E8(v6, 2 * ((__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v6) >> 1));
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 2 * a3;
  result = a2 + 2 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
