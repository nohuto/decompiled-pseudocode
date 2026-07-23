/*
 * XREFs of sub_1405F3A90 @ 0x1405F3A90
 * Callers:
 *     sub_14023DD4C @ 0x14023DD4C (sub_14023DD4C.c)
 *     sub_140363A64 @ 0x140363A64 (sub_140363A64.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x140369460 (ExBlockOnAddressPushLock.c)
 */

__int64 __fastcall sub_1405F3A90(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  if ( !*(_BYTE *)(a4 + 48) )
    return ExBlockOnAddressPushLock(a4 + 40, a1, a2, 8uLL, 0LL);
  while ( a1 == (_QWORD *)*a2 )
    _mm_pause();
  return 0LL;
}
