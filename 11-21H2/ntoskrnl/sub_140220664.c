/*
 * XREFs of sub_140220664 @ 0x140220664
 * Callers:
 *     ExTryAcquirePushLockSharedEx @ 0x140220540 (ExTryAcquirePushLockSharedEx.c)
 *     sub_1402C7DF0 @ 0x1402C7DF0 (sub_1402C7DF0.c)
 *     sub_140360258 @ 0x140360258 (sub_140360258.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x14039E320 (ExTryAcquireAutoExpandPushLockShared.c)
 *     sub_14039E3FC @ 0x14039E3FC (sub_14039E3FC.c)
 *     sub_140559C3C @ 0x140559C3C (sub_140559C3C.c)
 *     sub_1405B7EB4 @ 0x1405B7EB4 (sub_1405B7EB4.c)
 *     sub_14060A0A0 @ 0x14060A0A0 (sub_14060A0A0.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x14063C3D0 (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     ExfTryAcquirePushLockShared @ 0x14063C4B0 (ExfTryAcquirePushLockShared.c)
 *     sub_14069A534 @ 0x14069A534 (sub_14069A534.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140220664(signed __int64 *a1, char a2)
{
  char v2; // r8
  signed __int64 v4; // rax
  signed __int64 v5; // rcx
  signed __int64 v6; // rtt

  v2 = 0;
  _m_prefetchw(a1);
  v4 = *a1;
  while ( (v4 & 3) == 0 || (v4 & 1) == 0 && (a2 & 4) == 0 || (v4 & 2) == 0 && (v4 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
  {
    v5 = (v4 | 1) + 16;
    if ( (v4 & 2) != 0 )
      v5 = v4 | 1;
    v6 = v4;
    v4 = _InterlockedCompareExchange64(a1, v5, v4);
    if ( v6 == v4 )
      return 1;
  }
  return v2;
}
