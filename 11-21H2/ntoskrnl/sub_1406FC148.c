/*
 * XREFs of sub_1406FC148 @ 0x1406FC148
 * Callers:
 *     sub_140287660 @ 0x140287660 (sub_140287660.c)
 *     sub_1406FF49C @ 0x1406FF49C (sub_1406FF49C.c)
 *     sub_1407FB090 @ 0x1407FB090 (sub_1407FB090.c)
 * Callees:
 *     sub_140248574 @ 0x140248574 (sub_140248574.c)
 *     sub_14029EB0C @ 0x14029EB0C (sub_14029EB0C.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     RtlClearBitsEx @ 0x14030BB30 (RtlClearBitsEx.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140761FC0 @ 0x140761FC0 (sub_140761FC0.c)
 */

char __fastcall sub_1406FC148(__int64 a1)
{
  _QWORD *v1; // rax
  unsigned __int64 v2; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v1 = &retaddr;
  v9 = 0LL;
  v2 = *(_QWORD *)a1;
  v7 = 0LL;
  if ( v2 != -1LL )
  {
    if ( *(_BYTE *)(a1 + 12) )
    {
      if ( *(_BYTE *)(a1 + 13) )
        LOBYTE(v1) = sub_140761FC0((v2 - 0x80000000) << 16, (unsigned int)(*(_DWORD *)(a1 + 8) << 16));
    }
    else
    {
      sub_14029EB0C(*(_DWORD *)(a1 + 16), &v7, &v9, 0LL);
      sub_140248574(a1, v9 - ((v2 + *(unsigned int *)(a1 + 8)) << 16));
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 243);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4F300, 0LL);
      if ( *((_QWORD *)&v7 + 1) )
        RtlClearBitsEx(*((__int64 *)&v7 + 1), v2, *(unsigned int *)(a1 + 8));
      RtlClearBitsEx(v7, v2, *(unsigned int *)(a1 + 8));
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4F300, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140C4F300);
      LOBYTE(v1) = sub_1402AFC00((ULONG_PTR)&qword_140C4F300);
      if ( (*((_WORD *)CurrentThread + 243))++ == 0xFFFF )
      {
        v1 = (_QWORD *)((char *)CurrentThread + 152);
        if ( (_QWORD *)*v1 != v1 )
          LOBYTE(v1) = KiCheckForKernelApcDelivery();
      }
    }
  }
  return (char)v1;
}
