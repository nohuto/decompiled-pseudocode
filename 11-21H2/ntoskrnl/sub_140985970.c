/*
 * XREFs of sub_140985970 @ 0x140985970
 * Callers:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402BA130 @ 0x1402BA130 (sub_1402BA130.c)
 *     sub_1402D4530 @ 0x1402D4530 (sub_1402D4530.c)
 *     sub_1406A1000 @ 0x1406A1000 (sub_1406A1000.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1409E2AC8 @ 0x1409E2AC8 (sub_1409E2AC8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140985970(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rbp
  __int64 v4; // rdx
  _QWORD *i; // rdi
  struct _KTHREAD *v6; // rax
  bool v7; // zf
  __int64 v8; // rax
  struct _KTHREAD *v9; // rax

  if ( (xmmword_140D06910 & 0x80u) != 0LL )
    sub_1409E2AC8(4401LL, a1);
  if ( (*(_BYTE *)(a1 + 25) & 3) == 1 )
  {
    CurrentThread = KeGetCurrentThread();
    v3 = 0LL;
    --*((_WORD *)CurrentThread + 243);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C252D8, 0LL);
    if ( (dword_140D05010 & 0x73) != 0 )
    {
      v4 = (((unsigned int)(a1 + 48) >> 4) & 0xFFFFF) % 0x191;
      for ( i = (_QWORD *)*((_QWORD *)qword_140C252C8 + v4); i; i = (_QWORD *)i[1] )
      {
        if ( *i == a1 )
        {
          v8 = i[1];
          if ( v3 )
            v3[1] = v8;
          else
            *((_QWORD *)qword_140C252C8 + v4) = v8;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C252D8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(&qword_140C252D8);
          sub_1402AFC00((ULONG_PTR)&qword_140C252D8);
          v9 = KeGetCurrentThread();
          v7 = (*((_WORD *)v9 + 243))++ == 0xFFFF;
          if ( v7 && *((struct _KTHREAD **)v9 + 19) != (struct _KTHREAD *)((char *)v9 + 152) )
            KiCheckForKernelApcDelivery();
          ExFreePoolWithTag(i, 0x7452624Fu);
          return;
        }
        v3 = i;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C252D8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140C252D8);
      sub_1402AFC00((ULONG_PTR)&qword_140C252D8);
      v6 = KeGetCurrentThread();
      v7 = (*((_WORD *)v6 + 243))++ == 0xFFFF;
      if ( !v7 )
        return;
      goto LABEL_25;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C252D8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C252D8);
    sub_1402AFC00((ULONG_PTR)&qword_140C252D8);
    v6 = KeGetCurrentThread();
    v7 = (*((_WORD *)v6 + 243))++ == 0xFFFF;
    if ( v7 )
    {
LABEL_25:
      if ( *((struct _KTHREAD **)v6 + 19) != (struct _KTHREAD *)((char *)v6 + 152) )
        KiCheckForKernelApcDelivery();
    }
  }
}
