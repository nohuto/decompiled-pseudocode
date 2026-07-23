/*
 * XREFs of PpmApplyProfile @ 0x14099D220
 * Callers:
 *     PdcPoPpmApplyProfile @ 0x1408A5D40 (PdcPoPpmApplyProfile.c)
 * Callees:
 *     PpmReleaseLock @ 0x14032C510 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x14032C560 (PpmAcquireLock.c)
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 *     PpmCompareAndApplyPolicySettings @ 0x14099304C (PpmCompareAndApplyPolicySettings.c)
 *     PpmEventTraceProfileChange @ 0x140999FA0 (PpmEventTraceProfileChange.c)
 *     PpmEndProfileAccumulation @ 0x14099D45C (PpmEndProfileAccumulation.c)
 *     PpmPostProcessMediaBuffering @ 0x14099D4F4 (PpmPostProcessMediaBuffering.c)
 */

void __fastcall PpmApplyProfile(__int64 *a1)
{
  __int64 v1; // r14
  __int64 v3; // rbx
  __int64 *v4; // rbp
  __int64 *v5; // rsi
  __int64 *v6; // rax
  __int64 v7; // rax
  __int64 *v8; // r10
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v1 = dword_140C3D96C;
  v3 = 0LL;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  PopAcquireRwLockExclusive((ULONG_PTR)&PpmIdlePolicyLock);
  v4 = PpmCurrentProfile;
  v5 = PpmDefaultProfile;
  if ( a1 )
    v5 = a1;
  if ( v5 == (__int64 *)PpmLowPowerProfile )
  {
    v6 = v5;
    v5 = PpmDefaultProfile;
    if ( !PpmPerfMultimediaQosSupported )
      v5 = v6;
  }
  if ( PpmCurrentProfile == v5 )
  {
    PopReleaseRwLock((__int64 *)&PpmIdlePolicyLock);
    PpmReleaseLock(&PpmPerfPolicyLock);
  }
  else
  {
    v7 = PpmEndProfileAccumulation(PpmCurrentProfile, MEMORY[0xFFFFF78000000008]);
    v9 = 2LL;
    v10 = 0LL;
    *((_DWORD *)v5 + 7) |= 2u;
    *((_DWORD *)v4 + 7) &= ~2u;
    PpmCurrentProfile = v5;
    v5[115] = v7;
    do
    {
      if ( v5 != v8 )
        v3 |= v5[55 * v1 + 5 + v10];
      if ( v4 != v8 )
        v3 |= v4[55 * v1 + 5 + v10];
      ++v10;
      --v9;
    }
    while ( v9 );
    v11 = v3 & 0x3FFCFFFFD8034FC0LL;
    PpmCompareAndApplyPolicySettings(&v11, (__int64)&v4[55 * v1 + 5], (__int64)&v5[55 * v1 + 5]);
    PpmEventTraceProfileChange((__int64)v4, (__int64)v5);
    if ( PpmLowPowerProfile )
    {
      if ( v4 == (__int64 *)PpmLowPowerProfile )
      {
        PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
        PpmPostProcessMediaBuffering();
      }
    }
  }
}
