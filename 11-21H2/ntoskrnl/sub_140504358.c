/*
 * XREFs of sub_140504358 @ 0x140504358
 * Callers:
 *     sub_140516D80 @ 0x140516D80 (sub_140516D80.c)
 *     sub_140517BAC @ 0x140517BAC (sub_140517BAC.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140504DAC @ 0x140504DAC (sub_140504DAC.c)
 */

__int64 __fastcall sub_140504358(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int128 *v5; // rdx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v3 = *a2;
  v6 = *(_OWORD *)(a1 + 248);
  sub_14042A5E0(a2, a2);
  if ( v3 == *(_QWORD *)(a1 + 552) )
    return sub_140504DAC((PDMA_ADAPTER)a1);
  result = 0LL;
  v5 = &v6;
  while ( !*(_QWORD *)v5 || v3 != *(_QWORD *)(*(_QWORD *)v5 + 24LL) )
  {
    result = (unsigned int)(result + 1);
    v5 = (__int128 *)((char *)v5 + 8);
    if ( (unsigned int)result >= 2 )
      return sub_14042A5E0(v3, v5);
  }
  return result;
}
