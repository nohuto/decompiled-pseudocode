/*
 * XREFs of sub_140977CBC @ 0x140977CBC
 * Callers:
 *     sub_1406C9390 @ 0x1406C9390 (sub_1406C9390.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140972E78 @ 0x140972E78 (sub_140972E78.c)
 *     sub_14097339C @ 0x14097339C (sub_14097339C.c)
 *     sub_140973630 @ 0x140973630 (sub_140973630.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140977CBC(_QWORD *a1, int *a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 *v3; // rbp
  unsigned __int64 *v6; // rax
  unsigned __int64 *v7; // r15
  bool v8; // zf

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C533C0, 0LL);
  v6 = sub_14097339C(a1);
  v7 = v6;
  if ( v6 )
  {
    sub_140972E78(v6 + 3, 1uLL, *a2, a2[1]);
    if ( !v7[3] )
    {
      RtlAvlRemoveNode((unsigned __int64 *)&qword_140C533A8, v7);
      v3 = v7;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C533C0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C533C0);
  sub_1402AFC00((ULONG_PTR)&qword_140C533C0);
  v8 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
  if ( v8 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
    KiCheckForKernelApcDelivery();
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  sub_140973630(*a2, a2[1]);
  return 0LL;
}
