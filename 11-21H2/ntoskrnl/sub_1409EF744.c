/*
 * XREFs of sub_1409EF744 @ 0x1409EF744
 * Callers:
 *     sub_1409F26E8 @ 0x1409F26E8 (sub_1409F26E8.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1409F0E74 @ 0x1409F0E74 (sub_1409F0E74.c)
 *     sub_1409F1CB0 @ 0x1409F1CB0 (sub_1409F1CB0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

char __fastcall sub_1409EF744(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD **v3; // rdx
  unsigned __int64 v4; // rcx
  unsigned __int64 *v5; // r8
  _QWORD **v6; // rdx
  unsigned __int64 v7; // rcx
  unsigned __int64 *v8; // r8
  _QWORD *v9; // r9
  _QWORD *i; // r8
  _QWORD *v11; // rsi
  _QWORD *v12; // r9
  _QWORD *j; // r8
  void *v14; // rcx

  sub_1409F1CB0(a1 + 736, 0LL);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx(a1 + 664, 0LL);
  *(_QWORD *)(a1 + 672) = KeGetCurrentThread();
  v3 = *(_QWORD ***)(a1 + 688);
  v4 = (unsigned __int64)v3;
  while ( 1 )
  {
    v5 = (unsigned __int64 *)v4;
    if ( !v4 )
      break;
    v4 = *(_QWORD *)v4;
    if ( (v4 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v4 = *v5;
    if ( (v4 & 1) != 0 )
      break;
LABEL_16:
    if ( !v4 )
      goto LABEL_10;
    v9 = (_QWORD *)v4;
    for ( i = v3; (*i & 1) == 0; i = (_QWORD *)*i )
    {
      if ( *i == v4 )
      {
        *i = *(_QWORD *)v4;
        --*(_DWORD *)(a1 + 680);
        *(_QWORD *)v4 |= 0x8000000000000002uLL;
        v4 = (unsigned __int64)i;
        goto LABEL_23;
      }
    }
    v9 = 0LL;
LABEL_23:
    *v9 = 0LL;
  }
  for ( ++v3; (unsigned __int64)v3 < *(_QWORD *)(a1 + 688) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 684) >> 5); ++v3 )
  {
    v4 = (unsigned __int64)*v3;
    if ( ((unsigned __int8)*v3 & 1) == 0 )
      goto LABEL_16;
  }
LABEL_10:
  v6 = *(_QWORD ***)(a1 + 704);
  v7 = (unsigned __int64)v6;
  while ( 1 )
  {
    v8 = (unsigned __int64 *)v7;
    if ( !v7 )
      break;
    v7 = *(_QWORD *)v7;
    if ( (v7 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v7 = *v8;
    if ( (v7 & 1) != 0 )
      break;
LABEL_30:
    if ( !v7 )
      goto LABEL_27;
    v12 = (_QWORD *)v7;
    for ( j = v6; (*j & 1) == 0; j = (_QWORD *)*j )
    {
      if ( *j == v7 )
      {
        *j = *(_QWORD *)v7;
        --*(_DWORD *)(a1 + 696);
        *(_QWORD *)v7 |= 0x8000000000000002uLL;
        v7 = (unsigned __int64)j;
        goto LABEL_37;
      }
    }
    v12 = 0LL;
LABEL_37:
    *v12 = 0LL;
  }
  for ( ++v6; (unsigned __int64)v6 < *(_QWORD *)(a1 + 704) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 700) >> 5); ++v6 )
  {
    v7 = (unsigned __int64)*v6;
    if ( ((unsigned __int8)*v6 & 1) == 0 )
      goto LABEL_30;
  }
LABEL_27:
  v11 = (_QWORD *)(a1 + 712);
  while ( (_QWORD *)*v11 != v11 )
  {
    *(_DWORD *)(*v11 - 72LL + 132) = 0;
    sub_1409F0E74(a1);
  }
  v14 = *(void **)(a1 + 688);
  if ( v14 )
    ExFreePoolWithTag(v14, 0x56777445u);
  *(_QWORD *)(a1 + 672) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 664), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 664);
  sub_1402AFC00(a1 + 664);
  return sub_1402F9540((__int64)KeGetCurrentThread());
}
