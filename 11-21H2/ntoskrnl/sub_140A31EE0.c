/*
 * XREFs of sub_140A31EE0 @ 0x140A31EE0
 * Callers:
 *     sub_140A32064 @ 0x140A32064 (sub_140A32064.c)
 * Callees:
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 */

__int64 __fastcall sub_140A31EE0(unsigned int *a1, unsigned int a2, __int64 a3)
{
  SIZE_T v3; // r14
  unsigned int v4; // edi
  const void *v5; // r12
  const void **i; // rsi

  v3 = *a1;
  v4 = 0;
  v5 = (const void *)*((_QWORD *)a1 + 1);
  if ( !(_DWORD)v3 || !a2 )
    return 0LL;
  for ( i = (const void **)(a3 + 168); (_DWORD)v3 != *((_DWORD *)i - 2) || RtlCompareMemory(v5, *i, v3) != v3; i += 30 )
  {
    if ( ++v4 >= a2 )
      return 0LL;
  }
  return a3 + 240LL * v4;
}
