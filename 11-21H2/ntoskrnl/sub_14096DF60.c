/*
 * XREFs of sub_14096DF60 @ 0x14096DF60
 * Callers:
 *     sub_14098259C @ 0x14098259C (sub_14098259C.c)
 *     sub_140982688 @ 0x140982688 (sub_140982688.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140599E60 @ 0x140599E60 (sub_140599E60.c)
 *     sub_14096E4D8 @ 0x14096E4D8 (sub_14096E4D8.c)
 */

__int64 __fastcall sub_14096DF60(__int64 a1, const void *a2, _QWORD *a3, volatile signed __int64 **a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  volatile signed __int64 *v5; // rdi
  int v10; // esi
  __int64 v11; // rdx
  unsigned int v12; // ecx
  bool v13; // zf

  CurrentThread = KeGetCurrentThread();
  v5 = (volatile signed __int64 *)(a1 + 16672);
  *a3 = 0LL;
  *a4 = 0LL;
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockExclusiveEx(a1 + 16672, 0LL);
  v10 = sub_14096E4D8(a1, a2);
  if ( v10 < 0 )
  {
    v12 = v10;
    if ( v5 )
    {
      if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v5);
      sub_1402AFC00((ULONG_PTR)v5);
      v13 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
      v12 = v10;
      if ( v13 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
      {
        KiCheckForKernelApcDelivery();
        return (unsigned int)v10;
      }
    }
  }
  else
  {
    v11 = *(_QWORD *)(sub_140599E60(a1, a2)[8] + 176LL);
    *a3 = v11;
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v11 + 24)) <= 1 )
      __fastfail(0xEu);
    *a4 = v5;
    return 0;
  }
  return v12;
}
