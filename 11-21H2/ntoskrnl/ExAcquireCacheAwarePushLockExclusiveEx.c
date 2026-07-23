/*
 * XREFs of ExAcquireCacheAwarePushLockExclusiveEx @ 0x14041AB50
 * Callers:
 *     <none>
 * Callees:
 *     sub_14029EC30 @ 0x14029EC30 (sub_14029EC30.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 */

volatile signed __int32 *__fastcall ExAcquireCacheAwarePushLockExclusiveEx(volatile signed __int32 **a1, char a2)
{
  __int64 v3; // rbx
  volatile signed __int32 *result; // rax

  if ( (a2 & 2) != 0 )
    v3 = 0LL;
  else
    v3 = sub_140347C10((__int64)a1, 0LL);
  result = sub_14029EC30(a1, v3, (__int64)a1);
  if ( v3 )
    *(_BYTE *)(v3 + 18) = 1;
  return result;
}
