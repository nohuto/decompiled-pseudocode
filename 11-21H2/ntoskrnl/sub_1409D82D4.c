/*
 * XREFs of sub_1409D82D4 @ 0x1409D82D4
 * Callers:
 *     sub_1409D52C0 @ 0x1409D52C0 (sub_1409D52C0.c)
 *     sub_1409D5408 @ 0x1409D5408 (sub_1409D5408.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     ExRundownCompleted @ 0x1402095E0 (ExRundownCompleted.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1409D4850 @ 0x1409D4850 (sub_1409D4850.c)
 *     sub_1409D7C2C @ 0x1409D7C2C (sub_1409D7C2C.c)
 *     sub_1409D843C @ 0x1409D843C (sub_1409D843C.c)
 */

__int64 __fastcall sub_1409D82D4(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  char v6; // r15
  _PRIVILEGE_SET *v8; // rbp
  __int64 v9; // rdi
  unsigned int v10; // edi
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v12; // rsi
  _DWORD *v13; // rax
  _DWORD *v14; // r14
  struct _KTHREAD *v15; // rax

  v6 = a2;
  v8 = 0LL;
  v9 = sub_1409D7C2C(a1, a2);
  if ( v9 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    v12 = (volatile signed __int64 *)(v9 + 160);
    ExAcquirePushLockExclusiveEx(v9 + 160, 0LL);
    v13 = (_DWORD *)sub_1409D843C(v9, a3, a4);
    v14 = v13;
    if ( v13 )
    {
      v13[1] |= 4u;
      *v13 = -1;
      if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v9 + 160);
      sub_1402AFC00(v9 + 160);
      KeLeaveCriticalRegion();
      ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)v14 + 2);
      ExRundownCompleted((PEX_RUNDOWN_REF)v14 + 2);
      sub_1409D4850(a4, a3);
      v15 = KeGetCurrentThread();
      --*((_WORD *)v15 + 242);
      ExAcquirePushLockExclusiveEx(v9 + 160, 0LL);
      v8 = (_PRIVILEGE_SET *)*((_QWORD *)v14 + 1);
      *((_QWORD *)v14 + 1) = 0LL;
      v14[1] &= ~4u;
      v10 = 0;
    }
    else
    {
      v10 = -1073741672;
    }
    if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v12);
    sub_1402AFC00((ULONG_PTR)v12);
    KeLeaveCriticalRegion();
    sub_1402AD030((struct _EX_RUNDOWN_REF *)(32LL * (v6 & 0xF) + a1 + 8));
    if ( v8 )
      SeFreePrivileges(v8);
  }
  else
  {
    return (unsigned int)-1073741672;
  }
  return v10;
}
