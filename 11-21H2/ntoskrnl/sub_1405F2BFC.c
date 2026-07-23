/*
 * XREFs of sub_1405F2BFC @ 0x1405F2BFC
 * Callers:
 *     sub_1402BD970 @ 0x1402BD970 (sub_1402BD970.c)
 * Callees:
 *     RtlCopyMemoryNonTemporal @ 0x14042A290 (RtlCopyMemoryNonTemporal.c)
 *     sub_1405F2C80 @ 0x1405F2C80 (sub_1405F2C80.c)
 *     sub_1405F2CDC @ 0x1405F2CDC (sub_1405F2CDC.c)
 */

__int64 __fastcall sub_1405F2BFC(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 i; // rdi
  unsigned int v7; // ebx

  for ( i = 0LL; (unsigned int)i < a3; i = (unsigned int)(i + 0x100000) )
  {
    v7 = a3 - i;
    if ( a3 - (unsigned int)i > 0x100000 )
      v7 = 0x100000;
    sub_1405F2C80();
    RtlCopyMemoryNonTemporal((void *)(i + a1), (const void *)(i + a2), v7);
    sub_1405F2CDC();
  }
  return 0LL;
}
