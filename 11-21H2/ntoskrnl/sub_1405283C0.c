/*
 * XREFs of sub_1405283C0 @ 0x1405283C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403B1B5C @ 0x1403B1B5C (sub_1403B1B5C.c)
 *     sub_14045939A @ 0x14045939A (sub_14045939A.c)
 *     sub_14051AD44 @ 0x14051AD44 (sub_14051AD44.c)
 */

__int64 __fastcall sub_1405283C0(__int64 a1)
{
  int v2; // edi
  ULONG_PTR v3; // rdx
  ULONG_PTR v4; // rcx
  __int64 v5; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), 0x40000000, 0) )
  {
    return (unsigned int)-1073740024;
  }
  else
  {
    v3 = *(_QWORD *)a1;
    v4 = *(_QWORD *)(a1 + 16);
    v7 = *(_QWORD *)(a1 + 8);
    v2 = sub_14051AD44(v4, v3, &v7, 0);
    if ( v2 >= 0 )
    {
      v2 = sub_14045939A(*(_QWORD *)(a1 + 16), *(_QWORD *)a1);
      if ( v2 >= 0 )
        sub_1403B1B5C(v5, a1);
    }
  }
  return (unsigned int)v2;
}
