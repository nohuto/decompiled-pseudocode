/*
 * XREFs of RtlCompareMemoryUlong @ 0x14042A260
 * Callers:
 *     sub_14020D86C @ 0x14020D86C (sub_14020D86C.c)
 *     sub_140228CD0 @ 0x140228CD0 (sub_140228CD0.c)
 *     sub_140229100 @ 0x140229100 (sub_140229100.c)
 *     sub_1403C8AA8 @ 0x1403C8AA8 (sub_1403C8AA8.c)
 *     sub_1405C00C0 @ 0x1405C00C0 (sub_1405C00C0.c)
 *     sub_1405E80B0 @ 0x1405E80B0 (sub_1405E80B0.c)
 *     sub_1405E8A08 @ 0x1405E8A08 (sub_1405E8A08.c)
 *     sub_1405E8DF8 @ 0x1405E8DF8 (sub_1405E8DF8.c)
 *     sub_1405EFB90 @ 0x1405EFB90 (sub_1405EFB90.c)
 *     sub_1406D3128 @ 0x1406D3128 (sub_1406D3128.c)
 *     sub_1407BA750 @ 0x1407BA750 (sub_1407BA750.c)
 * Callees:
 *     <none>
 */

SIZE_T __stdcall RtlCompareMemoryUlong(PVOID Source, SIZE_T Length, ULONG Pattern)
{
  bool v4; // zf
  SIZE_T v5; // rdx
  SIZE_T v6; // rcx

  v5 = Length >> 2;
  v4 = v5 == 0;
  if ( v5 )
  {
    v6 = v5;
    do
    {
      if ( !v6 )
        break;
      v4 = *(_DWORD *)Source == Pattern;
      Source = (char *)Source + 4;
      --v6;
    }
    while ( v4 );
    if ( !v4 )
      v5 -= v6 + 1;
  }
  return 4 * v5;
}
