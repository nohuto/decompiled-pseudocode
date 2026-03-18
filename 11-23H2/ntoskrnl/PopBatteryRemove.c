/*
 * XREFs of PopBatteryRemove @ 0x140995740
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 *     PopReleaseRwLock @ 0x14032C480 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C5E4 (PopAcquireRwLockExclusive.c)
 *     IoCancelIrp @ 0x140351E90 (IoCancelIrp.c)
 *     PopBatteryQueueWork @ 0x1403C6458 (PopBatteryQueueWork.c)
 *     PopResetCurrentPolicies @ 0x1408240F8 (PopResetCurrentPolicies.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

void __fastcall PopBatteryRemove(__int64 a1)
{
  __int64 *v2; // rbx
  __int64 v3; // rcx
  __int64 **v4; // rax
  int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8

  IoCancelIrp(*(PIRP *)(a1 + 56));
  KeWaitForSingleObject((PVOID)(a1 + 80), Executive, 0, 0, 0LL);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopCB);
  v2 = (__int64 *)(a1 + 64);
  v3 = *v2;
  if ( *v2 )
  {
    if ( *(__int64 **)(v3 + 8) != v2 || (v4 = (__int64 **)v2[1], *v4 != v2) )
      __fastfail(3u);
    *v4 = (__int64 *)v3;
    *(_QWORD *)(v3 + 8) = v4;
    *v2 = 0LL;
    --dword_140C3CEB4;
    ++dword_140C3CF18;
    byte_140C3CEB8 = 1;
    PopBatteryQueueWork(3u);
  }
  PopBatteryQueueWork(8u);
  PopReleaseRwLock((__int64 *)&PopCB);
  if ( !--dword_140C3CEB0 )
  {
    PopAcquirePolicyLock(v5);
    if ( byte_140C3DA3E )
    {
      byte_140C3DA3E = 0;
      PopResetCurrentPolicies();
    }
    PopReleasePolicyLock(v7, v6, v8);
  }
}
