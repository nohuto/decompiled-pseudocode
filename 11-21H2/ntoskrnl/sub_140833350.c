/*
 * XREFs of sub_140833350 @ 0x140833350
 * Callers:
 *     sub_14083332C @ 0x14083332C (sub_14083332C.c)
 * Callees:
 *     sub_140258680 @ 0x140258680 (sub_140258680.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1403C7B20 @ 0x1403C7B20 (sub_1403C7B20.c)
 *     sub_14083347C @ 0x14083347C (sub_14083347C.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140833350(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, _QWORD *a5)
{
  unsigned int v5; // esi
  char *Pool2; // rdi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v11; // rax
  unsigned __int32 v13; // eax

  v5 = 0;
  if ( byte_140C49592 )
  {
    Pool2 = (char *)ExAllocatePool2(64LL, 96LL, 1665559875LL);
    if ( !Pool2 )
      return (unsigned int)-1073741670;
  }
  else
  {
    v13 = _InterlockedIncrement(&dword_140C49594);
    if ( v13 > 3 )
      return (unsigned int)-1073741670;
    Pool2 = (char *)&unk_140C49688 + 96 * v13 - 96;
  }
  sub_14083347C(Pool2, a2, a3);
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C49670, 0LL);
  v11 = (_QWORD *)qword_140C49680;
  if ( *(__int64 **)qword_140C49680 != &qword_140C49678 )
    __fastfail(3u);
  *(_QWORD *)Pool2 = &qword_140C49678;
  *((_QWORD *)Pool2 + 1) = v11;
  *v11 = Pool2;
  qword_140C49680 = (__int64)Pool2;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140C49670, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&stru_140C49670);
  sub_1402AFC00((ULONG_PTR)&stru_140C49670);
  sub_1402F9540((__int64)KeGetCurrentThread());
  if ( a4 && sub_140258680((__int64)&qword_140C49458) != *a4 )
    sub_1403C7B20((PWORK_QUEUE_ITEM)(Pool2 + 16));
  *a5 = Pool2;
  return v5;
}
