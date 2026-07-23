/*
 * XREFs of sub_1405E2E00 @ 0x1405E2E00
 * Callers:
 *     sub_1405E1764 @ 0x1405E1764 (sub_1405E1764.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1408826B4 @ 0x1408826B4 (sub_1408826B4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1405E2E00(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v3; // rdi
  _QWORD *PoolWithTag; // rax
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v10; // rbp
  _BOOL8 v11; // r8
  unsigned __int64 *v12; // rdi
  int v13; // eax
  _QWORD *v14; // rsi
  _QWORD *v15; // rax
  struct _KTHREAD *v16; // rsi
  unsigned int v17; // ecx
  __int64 v18; // rbx
  unsigned int v19; // edx
  int v20; // r9d

  v3 = 0LL;
  if ( a3 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x74457350u);
    v3 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    *((_DWORD *)PoolWithTag + 9) = 0;
    PoolWithTag[3] = a2;
    *((_DWORD *)PoolWithTag + 8) = a3;
  }
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v10 = (volatile signed __int64 *)(a1 + 112);
  ExAcquirePushLockExclusiveEx(a1 + 112, 0LL);
  if ( !a3 )
  {
    v12 = *(unsigned __int64 **)(a1 + 104);
    while ( v12 )
    {
      v13 = sub_1408826B4(a2, v12, v11);
      if ( v13 >= 0 )
      {
        if ( v13 <= 0 )
          break;
        v12 = (unsigned __int64 *)v12[1];
      }
      else
      {
        v12 = (unsigned __int64 *)*v12;
      }
    }
    RtlAvlRemoveNode((unsigned __int64 *)(a1 + 104), v12);
    goto LABEL_21;
  }
  v14 = *(_QWORD **)(a1 + 104);
  LOBYTE(v11) = 0;
  if ( !v14 )
    goto LABEL_20;
  while ( (int)sub_1408826B4(a2, v14, v11) >= 0 )
  {
    v15 = (_QWORD *)v14[1];
    if ( !v15 )
    {
      LOBYTE(v11) = 1;
      goto LABEL_20;
    }
LABEL_18:
    v14 = v15;
  }
  v15 = (_QWORD *)*v14;
  if ( *v14 )
    goto LABEL_18;
  LOBYTE(v11) = 0;
LABEL_20:
  RtlAvlInsertNodeEx((unsigned __int64 *)(a1 + 104), (unsigned __int64)v14, v11, v3);
  v12 = 0LL;
LABEL_21:
  if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 112);
  v16 = KeGetCurrentThread();
  if ( (unsigned __int64)v10 - qword_140C50630 >= 0x8000000000LL )
    v17 = -1;
  else
    v17 = sub_140287F30(*((_QWORD *)v16 + 23));
  _disable();
  v18 = (__int64)v16 + 1696;
  v19 = 0;
  while ( (*(_QWORD *)v18 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)v10 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v18 + 18)
       || (*(_DWORD *)v18 & 1) != 0
       || *(_DWORD *)(v18 + 8) != v17 )
  {
    ++v19;
    v18 += 96LL;
    if ( v19 >= 6 )
      goto LABEL_32;
  }
  *(_BYTE *)(v18 + 18) = 0;
  if ( !v18 )
  {
LABEL_32:
    if ( (*((_DWORD *)v16 + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v16, a1 + 112, v17, 0LL);
    _enable();
    goto LABEL_40;
  }
  if ( *(__int64 *)v18 < 0 )
  {
    *(_BYTE *)v18 |= 2u;
    _enable();
    sub_14034EE30(v18);
    _disable();
  }
  v20 = *(_DWORD *)(v18 + 88);
  *(_DWORD *)(v18 + 88) = 0;
  *(_BYTE *)(v18 + 17) = 0;
  *(_QWORD *)v18 = 0LL;
  *((_BYTE *)v16 + 792) |= 1 << *(_BYTE *)(v18 + 16);
  _enable();
  if ( v20 )
    sub_14022B568((ULONG_PTR)v16, a1 + 112, v20);
LABEL_40:
  KeLeaveCriticalRegion();
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  return 0LL;
}
