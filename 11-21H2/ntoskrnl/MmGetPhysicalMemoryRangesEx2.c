/*
 * XREFs of MmGetPhysicalMemoryRangesEx2 @ 0x140852570
 * Callers:
 *     sub_1403D506C @ 0x1403D506C (sub_1403D506C.c)
 *     MmGetPhysicalMemoryRangesEx @ 0x140852530 (MmGetPhysicalMemoryRangesEx.c)
 *     MmGetPhysicalMemoryRanges @ 0x140852550 (MmGetPhysicalMemoryRanges.c)
 * Callees:
 *     sub_140264ED0 @ 0x140264ED0 (sub_140264ED0.c)
 *     sub_1403606C4 @ 0x1403606C4 (sub_1403606C4.c)
 *     sub_1408525D8 @ 0x1408525D8 (sub_1408525D8.c)
 */

__int64 __fastcall MmGetPhysicalMemoryRangesEx2(ULONG_PTR **a1, unsigned int a2)
{
  ULONG_PTR *v3; // rax
  ULONG_PTR *v4; // rdi
  __int64 v5; // rbx
  char v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0;
  if ( (a2 & 0xFFFFFFFC) != 0 || (a2 & 2) != 0 && a1 )
    return 0LL;
  v3 = sub_140264ED0(a1, 0LL, &v7);
  v4 = v3;
  if ( !v3 )
    return 0LL;
  v5 = sub_1408525D8(v3, a2);
  if ( v7 )
    sub_1403606C4(v4[22]);
  return v5;
}
