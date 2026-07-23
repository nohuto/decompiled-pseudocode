/*
 * XREFs of sub_1405CE300 @ 0x1405CE300
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405CAE6C @ 0x1405CAE6C (sub_1405CAE6C.c)
 */

__int64 __fastcall sub_1405CE300(__int64 a1, unsigned int a2, unsigned __int8 a3)
{
  ULONG_PTR v5; // rdx
  signed __int32 v6; // eax
  signed __int32 v7; // ecx

  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 832) + 8LL * a2);
  v6 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 92), 0, 0);
  if ( a3 )
  {
    if ( (v6 & 1) == 0 )
      sub_1405CAE6C(0x606uLL, v5, *(int *)(v5 + 92), a3);
    v7 = v6 & 0xFFFFFFFE;
  }
  else
  {
    if ( (v6 & 1) != 0 )
      sub_1405CAE6C(0x606uLL, v5, *(int *)(v5 + 92), 0LL);
    v7 = v6 | 1;
  }
  if ( v6 != _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 92), v7, v6) )
    sub_1405CAE6C(0x606uLL, v5, v5 + 88, v7);
  return sub_14042A5E0(*(_QWORD *)(a1 + 192), a2);
}
