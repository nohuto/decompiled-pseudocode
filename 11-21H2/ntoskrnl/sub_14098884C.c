/*
 * XREFs of sub_14098884C @ 0x14098884C
 * Callers:
 *     sub_140988C68 @ 0x140988C68 (sub_140988C68.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14098884C(__int64 a1, __int64 a2, volatile signed __int64 *a3)
{
  int v3; // r9d
  int v4; // r10d
  unsigned int v7; // eax
  unsigned int v8; // eax
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v10; // rdi
  struct _KTHREAD *v11; // rax
  void *v12; // rbp
  __int128 v13; // [rsp+20h] [rbp-28h]
  __int64 v14; // [rsp+30h] [rbp-18h]

  HIDWORD(v14) = 0;
  v3 = 1 << *(_DWORD *)(a2 + 8);
  v4 = -1;
  v7 = v3;
  if ( v3 )
  {
    do
    {
      ++v4;
      v7 >>= 1;
    }
    while ( v7 );
  }
  LODWORD(v14) = 0;
  v8 = v4 + 1;
  if ( ((v3 - 1) & v3) == 0 )
    v8 = v4;
  *(_QWORD *)&v13 = 0LL;
  *((_QWORD *)&v13 + 1) = v8;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v10 = (volatile signed __int64 *)(a1 + 128);
  ExAcquirePushLockExclusiveEx(a1 + 128, 0LL);
  v11 = KeGetCurrentThread();
  v12 = *(void **)a2;
  --*((_WORD *)v11 + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)a3, 0LL);
  *(_OWORD *)a2 = v13;
  *(_QWORD *)(a2 + 16) = v14;
  if ( (_InterlockedExchangeAdd64(a3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a3);
  sub_1402AFC00((ULONG_PTR)a3);
  KeLeaveCriticalRegion();
  if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v10);
  sub_1402AFC00((ULONG_PTR)v10);
  KeLeaveCriticalRegion();
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
}
