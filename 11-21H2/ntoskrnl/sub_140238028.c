/*
 * XREFs of sub_140238028 @ 0x140238028
 * Callers:
 *     sub_140237ABC @ 0x140237ABC (sub_140237ABC.c)
 *     sub_140262938 @ 0x140262938 (sub_140262938.c)
 * Callees:
 *     sub_1405FAB9C @ 0x1405FAB9C (sub_1405FAB9C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140238028(__int64 a1)
{
  unsigned int v1; // edi
  __int64 i; // rbx
  __int64 v3; // rdi
  __int64 v4; // rcx

  v1 = 1;
  for ( i = a1; v1 < *(_DWORD *)(i + 256); ++v1 )
  {
    _BitScanReverse((unsigned int *)&v4, v1);
    if ( *(_QWORD *)(*(_QWORD *)(i + 8 * v4) + 16 * (v1 ^ (unsigned __int64)(unsigned int)(1 << v4))) )
      sub_1405FAB9C(i);
  }
  v3 = 32LL;
  do
  {
    if ( *(_QWORD *)i )
      ExFreePoolWithTag(*(PVOID *)i, 0);
    i += 8LL;
    --v3;
  }
  while ( v3 );
}
