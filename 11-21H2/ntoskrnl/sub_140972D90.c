/*
 * XREFs of sub_140972D90 @ 0x140972D90
 * Callers:
 *     sub_140971DC0 @ 0x140971DC0 (sub_140971DC0.c)
 *     sub_140972F98 @ 0x140972F98 (sub_140972F98.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     sub_1409734B8 @ 0x1409734B8 (sub_1409734B8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140972D90(char *P)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rbx
  void *v4; // rcx
  __int64 v5; // rax
  volatile signed __int64 *v6; // rbp
  _QWORD *v7; // rcx
  PVOID *v8; // rax
  bool v9; // zf

  CurrentThread = KeGetCurrentThread();
  v3 = *((_QWORD *)CurrentThread + 23);
  RtlFreeUnicodeString((PUNICODE_STRING)(P + 40));
  v4 = (void *)*((_QWORD *)P + 3);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( *(_QWORD *)P )
  {
    v5 = sub_1409734B8(v3, 0LL);
    --*((_WORD *)CurrentThread + 243);
    v6 = (volatile signed __int64 *)(v5 + 16);
    ExAcquirePushLockExclusiveEx(v5 + 16, 0LL);
    v7 = *(_QWORD **)P;
    if ( *(char **)(*(_QWORD *)P + 8LL) != P || (v8 = (PVOID *)*((_QWORD *)P + 1), *v8 != P) )
      __fastfail(3u);
    *v8 = v7;
    v7[1] = v8;
    if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6);
    sub_1402AFC00((ULONG_PTR)v6);
    v9 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( v9 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
      KiCheckForKernelApcDelivery();
  }
  ExFreePoolWithTag(P, 0);
}
