/*
 * XREFs of PpmProfileAcDcUpdate @ 0x14099D57C
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x140870480 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     PpmAcquireLock @ 0x14032C2D0 (PpmAcquireLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C5E4 (PopAcquireRwLockExclusive.c)
 *     PpmCompareAndApplyPolicySettings @ 0x140992E4C (PpmCompareAndApplyPolicySettings.c)
 */

void PpmProfileAcDcUpdate()
{
  __int64 v0; // rdi
  __int64 v1; // rbx
  __int64 v2; // r8
  __int64 *v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v0 = dword_140C3D86C;
  v1 = 0LL;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PopAcquireRwLockExclusive((ULONG_PTR)&PpmIdlePolicyLock);
  v2 = 2LL;
  v3 = PpmCurrentProfile + 5;
  do
  {
    v4 = *v3 | v3[55];
    ++v3;
    v1 |= v4;
    --v2;
  }
  while ( v2 );
  v5 = v1 & 0x3FFCFFFFD8034FC0LL;
  PpmCompareAndApplyPolicySettings(
    &v5,
    (__int64)PpmCurrentProfile + (-(__int64)((_DWORD)v0 != 0) & 0xFFFFFFFFFFFFFE48uLL) + 480,
    (__int64)&PpmCurrentProfile[55 * v0 + 5]);
}
