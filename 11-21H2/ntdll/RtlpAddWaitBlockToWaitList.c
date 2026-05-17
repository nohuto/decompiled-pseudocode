/*
 * XREFs of RtlpAddWaitBlockToWaitList @ 0x18001D7A4
 * Callers:
 *     RtlpWaitOnAddress @ 0x18005B350 (RtlpWaitOnAddress.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpAddWaitBlockToWaitList(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r11
  volatile signed __int64 *v3; // r9
  signed __int64 i; // rcx
  signed __int64 v5; // r8
  __int64 v6; // rax
  __int64 result; // rax

  v2 = a2 & 0xFFFFFFFFFFFFFFFCuLL;
  v3 = (volatile signed __int64 *)(a1 + 8LL * ((*(_DWORD *)a2 >> 5) & 0x7F));
  for ( i = *v3; ; i = result )
  {
    v5 = v2 | i & 3;
    *(_QWORD *)(a2 + 16) = i & 0xFFFFFFFFFFFFFFFCuLL;
    if ( (i & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
      v5 = v2 | i & 3 | 2;
    v6 = a2;
    if ( (i & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
      v6 = 0LL;
    *(_QWORD *)(a2 + 32) = v6;
    result = _InterlockedCompareExchange64(v3, v5, i);
    if ( i == result )
      break;
  }
  if ( (((unsigned __int8)i ^ (unsigned __int8)v5) & 2) != 0 )
    return RtlpOptimizeWaitOnAddressWaitList(v3);
  return result;
}
