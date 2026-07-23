/*
 * XREFs of sub_14062FC2C @ 0x14062FC2C
 * Callers:
 *     sub_14062DD68 @ 0x14062DD68 (sub_14062DD68.c)
 *     sub_1409E1FA0 @ 0x1409E1FA0 (sub_1409E1FA0.c)
 *     sub_1409E2AC8 @ 0x1409E2AC8 (sub_1409E2AC8.c)
 *     sub_1409E3B48 @ 0x1409E3B48 (sub_1409E3B48.c)
 * Callees:
 *     sub_1402AB170 @ 0x1402AB170 (sub_1402AB170.c)
 */

void __fastcall sub_14062FC2C(__int64 a1, unsigned int a2, __int64 a3, unsigned __int16 a4, unsigned int a5)
{
  unsigned int v8; // ebx
  bool i; // zf

  v8 = a3 & *(_DWORD *)(qword_140D05008 + 4248);
  for ( i = !_BitScanForward((unsigned int *)&a3, v8); !i; i = !_BitScanForward((unsigned int *)&a3, v8) )
  {
    v8 &= v8 - 1;
    sub_1402AB170(a1, qword_140D05008, *(unsigned __int8 *)(qword_140D05008 + 2 * a3 + 4232), a2, a4, a5);
  }
}
