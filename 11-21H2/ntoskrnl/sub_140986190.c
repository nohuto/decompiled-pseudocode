/*
 * XREFs of sub_140986190 @ 0x140986190
 * Callers:
 *     sub_1405C5EC8 @ 0x1405C5EC8 (sub_1405C5EC8.c)
 *     sub_1409863A0 @ 0x1409863A0 (sub_1409863A0.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     sub_140985CD8 @ 0x140985CD8 (sub_140985CD8.c)
 *     sub_140985DE4 @ 0x140985DE4 (sub_140985DE4.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

char __fastcall sub_140986190(
        __int64 a1,
        char a2,
        unsigned __int16 a3,
        unsigned int a4,
        unsigned __int16 *Source2,
        int a6)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int16 *v11; // rdi
  unsigned __int16 v12; // r9
  unsigned __int16 i; // dx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rdi
  _SLIST_ENTRY *Pool2; // rax
  struct _KTHREAD *v19; // rax
  bool v20; // zf
  unsigned __int16 *v22; // [rsp+20h] [rbp-38h] BYREF

  v22 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C252D8, 0LL);
  if ( (dword_140D05010 & 0x73) != 0 )
  {
    if ( (int)sub_140985CD8(a1, &v22) >= 0 )
    {
      v11 = v22;
      if ( v22 )
      {
        v12 = sub_140985DE4(Source2);
        if ( v12 >= 0x3FFDu )
        {
          DbgPrintEx(0, 1u, "ObpPushRefDerefInfo - ObpStackTable overflow\n");
        }
        else
        {
          for ( i = v11[16]; i; *(_DWORD *)&v11[2 * v14 + 22] = *(_DWORD *)&v11[6 * i-- + 16] )
          {
            if ( a4 >= *(_DWORD *)&v11[6 * i + 12] )
              break;
            v14 = 3LL * i;
            *(_QWORD *)&v11[2 * v14 + 18] = *(_QWORD *)&v11[6 * i + 12];
          }
          v15 = i;
          v16 = 3LL * i;
          v11[2 * v16 + 20] = v12 | (a2 != 0 ? 0x8000 : 0);
          v11[2 * v16 + 21] = a3;
          *(_DWORD *)&v11[6 * v15 + 18] = a4;
          *(_DWORD *)&v11[2 * v16 + 22] = a6;
          ++v11[16];
        }
      }
    }
    v17 = 100LL;
    if ( LOWORD(stru_140D01990.Alignment) < 0x64u )
    {
      do
      {
        Pool2 = (_SLIST_ENTRY *)ExAllocatePool2(64LL, 176LL, 1951556175LL);
        if ( Pool2 )
          ExpInterlockedPushEntrySList(&stru_140D01990, Pool2);
        --v17;
      }
      while ( v17 );
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C252D8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C252D8);
    sub_1402AFC00((ULONG_PTR)&qword_140C252D8);
    v19 = KeGetCurrentThread();
    v20 = (*((_WORD *)v19 + 243))++ == 0xFFFF;
    if ( v20 )
    {
LABEL_21:
      v19 = (struct _KTHREAD *)((char *)v19 + 152);
      if ( *(struct _KTHREAD **)v19 != v19 )
        LOBYTE(v19) = KiCheckForKernelApcDelivery();
    }
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C252D8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C252D8);
    sub_1402AFC00((ULONG_PTR)&qword_140C252D8);
    v19 = KeGetCurrentThread();
    v20 = (*((_WORD *)v19 + 243))++ == 0xFFFF;
    if ( v20 )
      goto LABEL_21;
  }
  return (char)v19;
}
