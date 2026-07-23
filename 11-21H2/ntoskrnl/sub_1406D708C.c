/*
 * XREFs of sub_1406D708C @ 0x1406D708C
 * Callers:
 *     sub_140792A4C @ 0x140792A4C (sub_140792A4C.c)
 *     sub_140796B04 @ 0x140796B04 (sub_140796B04.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ObDereferenceSecurityDescriptor @ 0x140725730 (ObDereferenceSecurityDescriptor.c)
 *     sub_140796B04 @ 0x140796B04 (sub_140796B04.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1406D708C(char *P)
{
  void *v2; // rcx
  struct _KTHREAD *CurrentThread; // rax
  char **v4; // rdx
  PVOID *v5; // rcx

  if ( *((_QWORD *)P + 50) )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    ExAcquirePushLockExclusiveEx(*((_QWORD *)P + 50) + 408LL, 0LL);
    *(_QWORD *)(*((_QWORD *)P + 50) + 416LL) = KeGetCurrentThread();
    v4 = (char **)*((_QWORD *)P + 2);
    if ( v4[1] != P + 16 || (v5 = (PVOID *)*((_QWORD *)P + 3), *v5 != P + 16) )
      __fastfail(3u);
    *v5 = v4;
    v4[1] = (char *)v5;
    *(_QWORD *)(*((_QWORD *)P + 50) + 416LL) = 0LL;
    ExReleasePushLockEx(*((_QWORD *)P + 50) + 408LL, 0LL);
    KeLeaveCriticalRegion();
    sub_140796B04(*((PVOID *)P + 50));
  }
  ObDereferenceSecurityDescriptor(*((_QWORD *)P + 9), 1LL);
  v2 = (void *)*((_QWORD *)P + 48);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  _InterlockedAdd((volatile signed __int32 *)(*((_QWORD *)P + 49) + 4120LL), 0xFFFFFFFF);
  ExFreePoolWithTag(P, 0);
}
