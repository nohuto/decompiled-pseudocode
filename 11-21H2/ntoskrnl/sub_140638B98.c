/*
 * XREFs of sub_140638B98 @ 0x140638B98
 * Callers:
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExSystemExceptionFilter @ 0x1409F8660 (ExSystemExceptionFilter.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140638B98(void *Src, size_t Size)
{
  size_t v2; // r14
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *PoolWithTag; // rsi
  unsigned int v6; // r14d
  struct _KTHREAD *v7; // rsi
  unsigned int v8; // ecx
  unsigned int v9; // edx
  __int64 v10; // rbx
  int v11; // edx

  v2 = (unsigned int)Size;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C15B60, 0LL);
  PoolWithTag = qword_140C5B128;
  if ( qword_140C5B128 )
  {
    if ( (_DWORD)v2 != *(_DWORD *)qword_140C5B128 )
    {
      ExFreePoolWithTag(qword_140C5B128, 0x64506142u);
      PoolWithTag = 0LL;
      qword_140C5B128 = 0LL;
    }
    if ( PoolWithTag )
      goto LABEL_10;
  }
  if ( !(_DWORD)v2 )
  {
LABEL_9:
    if ( !PoolWithTag )
    {
LABEL_11:
      v6 = 0;
      goto LABEL_12;
    }
LABEL_10:
    memmove(PoolWithTag + 1, Src, v2);
    *PoolWithTag = v2;
    goto LABEL_11;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v2 + 4, 0x64506142u);
  qword_140C5B128 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0;
    goto LABEL_9;
  }
  v6 = -1073741670;
LABEL_12:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C15B60, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C15B60);
  v7 = KeGetCurrentThread();
  if ( (unsigned __int64)&qword_140C15B60 - qword_140C50630 >= 0x8000000000LL )
    v8 = -1;
  else
    v8 = sub_140287F30(*((_QWORD *)v7 + 23));
  _disable();
  v9 = 0;
  v10 = (__int64)v7 + 1696;
  while ( (*(_QWORD *)v10 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C15B60 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v10 + 18)
       || (*(_DWORD *)v10 & 1) != 0
       || *(_DWORD *)(v10 + 8) != v8 )
  {
    ++v9;
    v10 += 96LL;
    if ( v9 >= 6 )
    {
      v10 = 0LL;
      goto LABEL_24;
    }
  }
  *(_BYTE *)(v10 + 18) = 0;
LABEL_24:
  if ( v10 )
  {
    if ( *(__int64 *)v10 < 0 )
    {
      *(_BYTE *)v10 |= 2u;
      _enable();
      sub_14034EE30(v10);
      _disable();
    }
    v11 = *(_DWORD *)(v10 + 88);
    *(_DWORD *)(v10 + 88) = 0;
    *(_BYTE *)(v10 + 17) = 0;
    *(_QWORD *)v10 = 0LL;
    *((_BYTE *)v7 + 792) |= 1 << *(_BYTE *)(v10 + 16);
    _enable();
    if ( v11 )
      sub_14022B568((ULONG_PTR)v7, (__int64)&qword_140C15B60, v11);
  }
  else
  {
    if ( (*((_DWORD *)v7 + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v7, (ULONG_PTR)&qword_140C15B60, v8, 0LL);
    _enable();
  }
  sub_1402F9540((__int64)KeGetCurrentThread());
  return v6;
}
