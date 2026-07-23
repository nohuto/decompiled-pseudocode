/*
 * XREFs of sub_1409D5498 @ 0x1409D5498
 * Callers:
 *     sub_1405F71B0 @ 0x1405F71B0 (sub_1405F71B0.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __fastcall sub_1409D5498(_PRIVILEGE_SET **a1)
{
  _PRIVILEGE_SET **v2; // rdi
  __int64 v3; // r15
  _PRIVILEGE_SET *v4; // rsi
  volatile signed __int64 *p_Attributes; // rbx
  __int64 v6; // r12
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // r14

  v2 = a1;
  v3 = 32LL;
  do
  {
    v4 = *v2;
    if ( *v2 )
    {
      p_Attributes = (volatile signed __int64 *)&v4->Privilege[0].Attributes;
      v6 = 32LL;
      do
      {
        CurrentThread = KeGetCurrentThread();
        --*((_WORD *)CurrentThread + 242);
        ExAcquirePushLockExclusiveEx((ULONG_PTR)p_Attributes, 0LL);
        v8 = *((_QWORD *)p_Attributes - 2);
        if ( v8 )
        {
          sub_14042A5E0(a1, *((_QWORD *)p_Attributes - 2));
          ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)p_Attributes - 1);
        }
        else
        {
          *((_QWORD *)p_Attributes - 2) = -1LL;
        }
        if ( (_InterlockedExchangeAdd64(p_Attributes, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(p_Attributes);
        sub_1402AFC00((ULONG_PTR)p_Attributes);
        KeLeaveCriticalRegion();
        if ( v8 )
          sub_14042A5E0(a1, v8);
        p_Attributes += 5;
        --v6;
      }
      while ( v6 );
      SeFreePrivileges(v4);
    }
    ++v2;
    --v3;
  }
  while ( v3 );
}
