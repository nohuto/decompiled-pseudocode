/*
 * XREFs of sub_1403FD778 @ 0x1403FD778
 * Callers:
 *     sub_1403FCD10 @ 0x1403FCD10 (sub_1403FCD10.c)
 * Callees:
 *     sub_1403FB460 @ 0x1403FB460 (sub_1403FB460.c)
 */

__int64 __fastcall sub_1403FD778(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 result; // rax
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v3 = 0LL;
    v8 = 0LL;
    do
    {
      sub_1403FB460(**(_QWORD **)(a1 + 8 * v3) + 96LL, *(_QWORD *)(*(_QWORD *)(a1 + 8 * v3) + 32LL), a3, (__int64)&v8);
      *(_QWORD *)(*(_QWORD *)(a1 + 8 * v3) + 32LL) += a3;
      result = *(_QWORD *)(a1 + 8 * v3++);
      *(_QWORD *)(result + 40) -= a3;
    }
    while ( v3 < a2 );
  }
  return result;
}
