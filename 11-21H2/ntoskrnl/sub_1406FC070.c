/*
 * XREFs of sub_1406FC070 @ 0x1406FC070
 * Callers:
 *     <none>
 * Callees:
 *     sub_140287574 @ 0x140287574 (sub_140287574.c)
 *     sub_140287970 @ 0x140287970 (sub_140287970.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1406DDA18 @ 0x1406DDA18 (sub_1406DDA18.c)
 *     sub_14096C0AC @ 0x14096C0AC (sub_14096C0AC.c)
 */

__int64 __fastcall sub_1406FC070(__int64 a1)
{
  unsigned int v1; // ebp
  unsigned __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // edx
  unsigned int v8; // edx
  struct _KTHREAD *CurrentThread; // rsi
  bool v10; // zf

  v1 = *(_WORD *)(a1 + 58) & 1;
  v3 = sub_140287970(a1);
  if ( *(_QWORD *)(v4 + 24) )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 243);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4F110, 0LL);
    RtlAvlRemoveNode((unsigned __int64 *)&qword_140C4F108, (unsigned __int64 *)a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4F110, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C4F110);
    sub_1402AFC00((ULONG_PTR)&qword_140C4F110);
    v10 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( v10 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
      KiCheckForKernelApcDelivery();
  }
  v5 = *(_QWORD *)(a1 + 40);
  if ( (v5 & 3) != 0 )
    ObfDereferenceObject((PVOID)(v5 & 0xFFFFFFFFFFFFFFFCuLL));
  v6 = *(_DWORD *)(v3 + 56);
  if ( (v6 & 0x20) == 0 && (*(_DWORD *)(a1 + 56) & 0x10000000) != 0 && *(_QWORD *)(v3 + 64) )
  {
    _InterlockedAdd((volatile signed __int32 *)(v3 + 92), 0xFFFFFFFF);
    v6 = *(_DWORD *)(v3 + 56);
  }
  if ( (v6 & 0x8000000) != 0 )
  {
    v8 = (*(_DWORD *)(a1 + 60) >> 12) & 0x7FFFF;
    if ( v8 == 0x7FFFF )
      v8 = -1;
    sub_1406DDA18((__int64 *)v3, v8);
  }
  if ( (DWORD1(xmmword_140D06900[0]) & 0x400001) != 0 && !*(_QWORD *)(v3 + 64) )
    sub_14096C0AC(a1, 0LL);
  return sub_140287574(v3, v1);
}
