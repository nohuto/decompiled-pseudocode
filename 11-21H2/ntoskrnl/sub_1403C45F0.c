/*
 * XREFs of sub_1403C45F0 @ 0x1403C45F0
 * Callers:
 *     sub_140540E10 @ 0x140540E10 (sub_140540E10.c)
 *     EmpProviderRegister @ 0x14082D070 (EmpProviderRegister.c)
 *     sub_14092C834 @ 0x14092C834 (sub_14092C834.c)
 *     EmProviderDeregister @ 0x14092CA90 (EmProviderDeregister.c)
 *     EmProviderRegisterEntry @ 0x14092CCA0 (EmProviderRegisterEntry.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1403C45F0(__int64 a1, __int64 a2)
{
  _QWORD *i; // rax
  _QWORD *Pool2; // rax
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v7; // ecx
  __int64 v8; // rbx
  unsigned int v9; // edx
  int v10; // r9d
  __int64 result; // rax

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C48C90, 0LL);
  for ( i = (_QWORD *)qword_140C48C30; i; i = (_QWORD *)*i )
  {
    if ( *(i - 1) == a1 )
    {
      if ( i != (_QWORD *)8 )
      {
        i[1] = 0LL;
        goto LABEL_8;
      }
      break;
    }
  }
  Pool2 = (_QWORD *)ExAllocatePool2(256LL, 24LL, 1970359621LL);
  if ( Pool2 )
  {
    *Pool2 = a1;
    Pool2[2] = a2;
    Pool2[1] = qword_140C48C30;
    qword_140C48C30 = (__int64)(Pool2 + 1);
    if ( !dword_140C48C10 )
    {
      _InterlockedExchange(&dword_140C48C10, 1);
      ExQueueWorkItem(&stru_140C48C40, DelayedWorkQueue);
    }
  }
LABEL_8:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C48C90, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C48C90);
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned __int64)&qword_140C48C90 - qword_140C50630 < 0x8000000000LL )
    v7 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
  else
    v7 = -1;
  _disable();
  v8 = (__int64)CurrentThread + 1696;
  v9 = 0;
  while ( (*(_QWORD *)v8 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C48C90 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v8 + 18)
       || (*(_DWORD *)v8 & 1) != 0
       || *(_DWORD *)(v8 + 8) != v7 )
  {
    ++v9;
    v8 += 96LL;
    if ( v9 >= 6 )
      goto LABEL_23;
  }
  *(_BYTE *)(v8 + 18) = 0;
  if ( v8 )
  {
    if ( *(__int64 *)v8 < 0 )
    {
      *(_BYTE *)v8 |= 2u;
      _enable();
      sub_14034EE30(v8);
      _disable();
    }
    v10 = *(_DWORD *)(v8 + 88);
    *(_DWORD *)(v8 + 88) = 0;
    *(_BYTE *)(v8 + 17) = 0;
    *(_QWORD *)v8 = 0LL;
    result = *(unsigned __int8 *)(v8 + 16);
    *((_BYTE *)CurrentThread + 792) |= 1 << result;
    _enable();
    if ( v10 )
      return sub_14022B568((ULONG_PTR)CurrentThread, (__int64)&qword_140C48C90, v10);
    return result;
  }
LABEL_23:
  result = *((unsigned int *)CurrentThread + 30);
  if ( (result & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&qword_140C48C90, v7, 0LL);
  _enable();
  return result;
}
