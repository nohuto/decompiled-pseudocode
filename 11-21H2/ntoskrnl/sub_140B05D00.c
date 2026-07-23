/*
 * XREFs of sub_140B05D00 @ 0x140B05D00
 * Callers:
 *     sub_140B07C00 @ 0x140B07C00 (sub_140B07C00.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_1403095B0 @ 0x1403095B0 (sub_1403095B0.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1407FD634 @ 0x1407FD634 (sub_1407FD634.c)
 *     sub_14082B1B4 @ 0x14082B1B4 (sub_14082B1B4.c)
 */

__int64 sub_140B05D00()
{
  __int64 *v0; // r14
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v2; // r15
  unsigned __int64 v3; // rdi
  unsigned int i; // ebp
  ULONG_PTR v5; // rax
  struct _KTHREAD *v7; // rdi
  unsigned int v8; // ecx
  __int64 v9; // rbx
  unsigned int v10; // edx
  int v11; // r9d
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF

  *((_QWORD *)&v13 + 1) = 0LL;
  v0 = qword_140C52A10;
  stru_140C529E8.List.Flink = 0LL;
  stru_140C529D0.Header.WaitListHead.Blink = &stru_140C529D0.Header.WaitListHead;
  stru_140C529D0.Header.WaitListHead.Flink = &stru_140C529D0.Header.WaitListHead;
  LOWORD(stru_140C529D0.Header.Lock) = 1;
  stru_140C529E8.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_14038DF70;
  stru_140C529D0.Header.Size = 6;
  stru_140C529D0.Header.SignalState = 1;
  stru_140C529E8.Parameter = (PVOID)-1LL;
  CurrentThread = KeGetCurrentThread();
  v2 = qword_140C50840;
  v3 = (((unsigned __int64)(qword_140C50840 + 8) >> 3) + 4095) >> 12;
  for ( i = 0; i < 2; ++i )
  {
    v5 = sub_1403095B0((__int64)&qword_140C534C0, v3);
    if ( !v5 || !(unsigned int)sub_14082B1B4(&v13, (__int64)(v5 << 25) >> 16, v2 + 1, 12) )
      return 0LL;
    *(_QWORD *)&v13 = 0LL;
    *(_OWORD *)v0 = v13;
    v0 += 2;
  }
  if ( (dword_140D051C4 & 1) != 0 )
  {
    --*((_WORD *)CurrentThread + 243);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C55040, 0LL);
    sub_1407FD634();
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C55040, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C55040);
    v7 = KeGetCurrentThread();
    if ( (unsigned __int64)&qword_140C55040 - qword_140C50630 >= 0x8000000000LL )
      v8 = -1;
    else
      v8 = sub_140287F30(*((_QWORD *)v7 + 23));
    _disable();
    v9 = (__int64)v7 + 1696;
    v10 = 0;
    while ( (*(_QWORD *)v9 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C55040 & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(v9 + 18)
         || (*(_DWORD *)v9 & 1) != 0
         || *(_DWORD *)(v9 + 8) != v8 )
    {
      ++v10;
      v9 += 96LL;
      if ( v10 >= 6 )
        goto LABEL_24;
    }
    *(_BYTE *)(v9 + 18) = 0;
    if ( v9 )
    {
      if ( *(__int64 *)v9 < 0 )
      {
        *(_BYTE *)v9 |= 2u;
        _enable();
        sub_14034EE30(v9);
        _disable();
      }
      v11 = *(_DWORD *)(v9 + 88);
      *(_DWORD *)(v9 + 88) = 0;
      *(_BYTE *)(v9 + 17) = 0;
      *(_QWORD *)v9 = 0LL;
      *((_BYTE *)v7 + 792) |= 1 << *(_BYTE *)(v9 + 16);
      _enable();
      if ( v11 )
        sub_14022B568((ULONG_PTR)v7, (__int64)&qword_140C55040, v11);
      goto LABEL_27;
    }
LABEL_24:
    if ( (*((_DWORD *)v7 + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v7, (ULONG_PTR)&qword_140C55040, v8, 0LL);
    _enable();
LABEL_27:
    if ( (*((_WORD *)CurrentThread + 243))++ == 0xFFFF
      && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return 1LL;
}
