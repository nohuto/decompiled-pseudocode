/*
 * XREFs of sub_1405FA930 @ 0x1405FA930
 * Callers:
 *     sub_1405F83FC @ 0x1405F83FC (sub_1405F83FC.c)
 *     sub_1405F87B8 @ 0x1405F87B8 (sub_1405F87B8.c)
 *     sub_1405F8978 @ 0x1405F8978 (sub_1405F8978.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405FA930(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  __int64 v4; // rdx
  char v5; // cl

  v2 = *(_QWORD *)(a1 + 1040);
  result = a2;
  v4 = *(_QWORD *)(a1 + 1032);
  v5 = *(_BYTE *)(result + v2);
  if ( v5 )
    *(_BYTE *)(result + v2) = v5 - 1;
  else
    *(_WORD *)(v4 + 2 * result) &= ~0x4000u;
  return result;
}
