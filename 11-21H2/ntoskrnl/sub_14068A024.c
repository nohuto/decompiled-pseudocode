/*
 * XREFs of sub_14068A024 @ 0x14068A024
 * Callers:
 *     sub_140689424 @ 0x140689424 (sub_140689424.c)
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 * Callees:
 *     RtlClearAllBits @ 0x14020AE80 (RtlClearAllBits.c)
 *     sub_1406C61D8 @ 0x1406C61D8 (sub_1406C61D8.c)
 */

__int64 __fastcall sub_14068A024(ULONG_PTR a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 96) )
  {
    sub_1406C61D8(a1);
    RtlClearAllBits((PRTL_BITMAP)(a1 + 88));
    result = (unsigned int)_InterlockedExchangeAdd(&dword_140C48DF4, -*(_DWORD *)(a1 + 104));
    *(_DWORD *)(a1 + 104) = 0;
  }
  return result;
}
