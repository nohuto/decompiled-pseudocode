/*
 * XREFs of ExAcquireCacheAwarePushLockExclusive @ 0x14029EBE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14029EC30 @ 0x14029EC30 (sub_14029EC30.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 */

__int64 __fastcall ExAcquireCacheAwarePushLockExclusive(__int64 a1)
{
  __int64 v2; // rdi
  __int64 result; // rax

  v2 = sub_140347C10(a1, 0LL, 0LL);
  result = sub_14029EC30(a1, v2, a1);
  if ( v2 )
    *(_BYTE *)(v2 + 18) = 1;
  return result;
}
