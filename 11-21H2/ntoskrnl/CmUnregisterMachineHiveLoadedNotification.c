/*
 * XREFs of CmUnregisterMachineHiveLoadedNotification @ 0x140910120
 * Callers:
 *     <none>
 * Callees:
 *     ExRundownCompleted @ 0x1402095E0 (ExRundownCompleted.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall CmUnregisterMachineHiveLoadedNotification(unsigned int *P)
{
  ULONG_PTR v1; // r8
  __int64 v3; // rcx
  char *v4; // rbx
  struct _KTHREAD *v5; // rax
  PVOID *v6; // rcx

  if ( P )
  {
    v1 = P[26];
    v3 = 184 * v1;
    if ( *((struct _KTHREAD **)P + 12) == KeGetCurrentThread() )
      KeBugCheckEx(0x51u, 0x28uLL, v1, 0LL, 0LL);
    v4 = (char *)&unk_140C025C0 + v3;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&unk_140C025C0 + v3, 0LL);
    if ( *((_BYTE *)P + 109) )
    {
      v5 = *(struct _KTHREAD **)P;
      if ( *(unsigned int **)(*(_QWORD *)P + 8LL) != P || (v6 = (PVOID *)*((_QWORD *)P + 1), *v6 != P) )
        __fastfail(3u);
      *v6 = v5;
      *((_QWORD *)v5 + 1) = v6;
      *((_BYTE *)P + 109) = 0;
    }
    ExReleasePushLockEx((ULONG_PTR)v4, 0LL);
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)P + 6);
    ExRundownCompleted((PEX_RUNDOWN_REF)P + 6);
    ExFreePoolWithTag(P, 0);
  }
}
