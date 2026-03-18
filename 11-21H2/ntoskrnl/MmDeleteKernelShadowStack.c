/*
 * XREFs of MmDeleteKernelShadowStack @ 0x1405A5DF0
 * Callers:
 *     KeUninitThread @ 0x1406E90B4 (KeUninitThread.c)
 *     KeUserModeCallback @ 0x1407A3EC0 (KeUserModeCallback.c)
 *     KiDeleteKernelShadowStack @ 0x140961490 (KiDeleteKernelShadowStack.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140429880 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 *     MiDeleteKernelShadowStack @ 0x1405A511C (MiDeleteKernelShadowStack.c)
 *     MiKernelShadowStackIdealForCaching @ 0x1405A5628 (MiKernelShadowStackIdealForCaching.c)
 *     VslResetKernelShadowStack @ 0x140932ACC (VslResetKernelShadowStack.c)
 */

char MmDeleteKernelShadowStack(unsigned __int64 a1, int a2, char a3, ...)
{
  __int64 v4; // rdi
  __int64 v5; // r14
  int v6; // r15d
  struct _KPRCB *CurrentPrcb; // r8
  signed __int64 v8; // rax
  int *v9; // rbx
  PSLIST_ENTRY v10; // rsi
  int v11; // eax
  union _SLIST_HEADER *v13; // [rsp+60h] [rbp+30h] BYREF
  unsigned int v14; // [rsp+68h] [rbp+38h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+78h] [rbp+48h] BYREF
  va_list va; // [rsp+78h] [rbp+48h]
  va_list va1; // [rsp+80h] [rbp+50h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  BugCheckParameter4 = va_arg(va1, _QWORD);
  v14 = 0;
  v13 = 0LL;
  v4 = a2;
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( a2 > 2 )
    goto LABEL_15;
  v6 = MiKernelShadowStackIdealForCaching(
         ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000010LL,
         ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000010LL + 8,
         (__int64)&v13,
         &v14);
  if ( (a3 & 4) != 0 && (_DWORD)v4 == 2 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    a2 = CurrentPrcb->SchedulerSubNode->Affinity.Reserved[0];
    if ( a2 == v14 && !CurrentPrcb->CachedShadowStack && v13 == (union _SLIST_HEADER *)&MiSystemPartition )
    {
      v8 = _InterlockedCompareExchange64(
             (volatile signed __int64 *)&CurrentPrcb->CachedShadowStack,
             BugCheckParameter4,
             0LL);
      if ( !v8 )
        return v8;
    }
  }
  v9 = (int *)(v13[1].Alignment + 32 * (v4 + 766LL * v14 + 721));
  if ( *(unsigned __int16 *)v9 >= v9[4] || (v10 = RtlpInterlockedPopEntrySList(v13 + 28)) == 0LL )
  {
LABEL_15:
    LOBYTE(v8) = MiDeleteKernelShadowStack((_QWORD *)(v5 - 24), a2, BugCheckParameter4);
    return v8;
  }
  if ( (_DWORD)v4 != 2 )
  {
    v11 = VslResetKernelShadowStack((unsigned int)v4, (ULONG_PTR *)va);
    if ( v11 < 0 )
      KeBugCheckEx(0x1Au, 0x3502uLL, v5 - 24, v11, BugCheckParameter4);
  }
  v10[1].Next = (_SLIST_ENTRY *)BugCheckParameter4;
  LOBYTE(v8) = (unsigned __int8)RtlpInterlockedPushEntrySList((PSLIST_HEADER)v9, v10);
  if ( v6 )
    *((_BYTE *)v9 + 29) = 1;
  return v8;
}
