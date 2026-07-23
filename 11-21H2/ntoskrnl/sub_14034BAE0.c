/*
 * XREFs of sub_14034BAE0 @ 0x14034BAE0
 * Callers:
 *     sub_140A6E028 @ 0x140A6E028 (sub_140A6E028.c)
 *     ExAllocatePool3 @ 0x140A6E1B0 (ExAllocatePool3.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     KePulseEvent @ 0x14026A0D0 (KePulseEvent.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_1402878F0 @ 0x1402878F0 (sub_1402878F0.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14059C99C @ 0x14059C99C (sub_14059C99C.c)
 */

__int64 __fastcall sub_14034BAE0(char a1, unsigned __int64 a2, int a3)
{
  ULONG_PTR *v3; // r14
  ULONG_PTR v5; // r11
  int v7; // edi
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned int v10; // ebx
  unsigned __int64 v11; // rcx
  ULONG_PTR v13; // r8
  ULONG_PTR v14; // rcx
  __int64 v15; // r9
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r8
  __int64 v18; // rax
  struct _KEVENT *v19; // rcx
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v23; // r9
  int v24; // edx
  bool v25; // zf
  struct _KTHREAD *CurrentThread; // rbp
  struct _KEVENT *v27; // rcx
  struct _KTHREAD *v28; // rsi
  unsigned int v29; // ecx
  unsigned __int64 v30; // r8
  char *v31; // rdi
  __int64 v32; // rdx
  int v33; // r8d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  v3 = &StartContext;
  v5 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v7 = a1 & 1;
  if ( (a1 & 1) == 0 )
  {
    v8 = qword_140C4F040[0] - qword_140C4F048;
LABEL_3:
    v9 = v8 << 12;
    goto LABEL_4;
  }
  if ( (a1 & 0x20) == 0 )
  {
    v8 = qword_140C534B8 - qword_140C534A8;
    goto LABEL_3;
  }
  v15 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL);
  v16 = (__int64)*(int *)(v15 + 796) << 21;
  v17 = *(_QWORD *)(v15 + 176) << 12;
  v18 = v16 - v17;
  if ( v16 <= v17 )
    v18 = 0LL;
  v9 = ((0x10000LL - *(unsigned int *)(v15 + 800)) << 21) + v18;
  v3 = *(ULONG_PTR **)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(v15 + 366));
LABEL_4:
  v10 = 0;
  if ( a3 == 16 )
    v11 = a2 + 0x80000;
  else
    v11 = a2 + 0x200000;
  if ( v11 <= v9 )
  {
    if ( !v7 )
      goto LABEL_20;
    v13 = v3[2157];
    v14 = v3[2001] - v13;
    if ( v13 > v3[2001] )
      v14 = 0LL;
    if ( v5 > v14 )
    {
      sub_14059C99C(v3, v5, 2LL, 0LL);
    }
    else
    {
LABEL_20:
      if ( a2 + 10485760 < v9 || v3[2090] < 0x40000 )
        return 1LL;
      v10 = 1;
    }
  }
  if ( (a1 & 0x20) == 0 )
  {
    if ( v7 )
    {
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 243);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C53498, 0LL);
      v27 = (struct _KEVENT *)v3[31];
      if ( !v27->Header.SignalState )
        KePulseEvent(v27, 0, 0);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C53498, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140C53498);
      v28 = KeGetCurrentThread();
      if ( (unsigned __int64)&qword_140C53498 - qword_140C50630 >= 0x8000000000LL )
        v29 = -1;
      else
        v29 = sub_140287F30(*((_QWORD *)v28 + 23));
      _disable();
      v30 = (unsigned __int64)&qword_140C53498 & 0x7FFFFFFFFFFFFFFCLL;
      v31 = (char *)v28 + 1696;
      v32 = 0LL;
      do
      {
        if ( (*(_QWORD *)v31 & 0x7FFFFFFFFFFFFFFCLL) == v30
          && v31[18]
          && (*(_DWORD *)v31 & 1) == 0
          && *((_DWORD *)v31 + 2) == v29 )
        {
          v31[18] = 0;
          if ( *(__int64 *)v31 < 0 )
          {
            *v31 |= 2u;
            _enable();
            sub_14034EE30(v31, v32, v30);
            _disable();
          }
          v33 = *((_DWORD *)v31 + 22);
          *((_DWORD *)v31 + 22) = 0;
          v31[17] = 0;
          *(_QWORD *)v31 = 0LL;
          *((_BYTE *)v28 + 792) |= 1 << v31[16];
          _enable();
          if ( v33 )
            sub_14022B568((ULONG_PTR)v28, (__int64)&qword_140C53498, v33);
          goto LABEL_54;
        }
        v32 = (unsigned int)(v32 + 1);
        v31 += 96;
      }
      while ( (unsigned int)v32 < 6 );
      if ( (*((_DWORD *)v28 + 30) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v28, (ULONG_PTR)&qword_140C53498, v29, 0LL);
      _enable();
LABEL_54:
      v25 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
      if ( v25 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
        KiCheckForKernelApcDelivery();
    }
    else
    {
      KeAcquireInStackQueuedSpinLock(v3 + 1960, &LockHandle);
      v19 = (struct _KEVENT *)v3[33];
      if ( !v19->Header.SignalState )
        KePulseEvent(v19, 0, 0);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v23 = *((_QWORD *)CurrentPrcb + 4375);
            v24 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v25 = (v24 & *(_DWORD *)(v23 + 20)) == 0;
            *(_DWORD *)(v23 + 20) &= v24;
            if ( v25 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
    }
    sub_1402878F0();
  }
  return v10;
}
