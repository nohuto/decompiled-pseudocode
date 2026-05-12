/*
 * XREFs of sub_1C007FC70 @ 0x1C007FC70
 * Callers:
 *     sub_1C007B570 @ 0x1C007B570 (sub_1C007B570.c)
 *     sub_1C007B6C0 @ 0x1C007B6C0 (sub_1C007B6C0.c)
 *     sub_1C007B860 @ 0x1C007B860 (sub_1C007B860.c)
 *     sub_1C007C758 @ 0x1C007C758 (sub_1C007C758.c)
 *     sub_1C007CAA0 @ 0x1C007CAA0 (sub_1C007CAA0.c)
 *     sub_1C007EDC0 @ 0x1C007EDC0 (sub_1C007EDC0.c)
 *     sub_1C007EEF0 @ 0x1C007EEF0 (sub_1C007EEF0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C007FC70(__int64 a1)
{
  __int64 v1; // rdx

  v1 = 0LL;
  if ( (unsigned int)(*(_DWORD *)(a1 + 8) - 7) <= 0xA )
  {
    v1 = a1 + 16;
    if ( *(_DWORD *)(a1 + 12) > 8u )
      return *(_QWORD *)v1;
  }
  return v1;
}
