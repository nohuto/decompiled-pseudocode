/*
 * XREFs of sub_1405E30A0 @ 0x1405E30A0
 * Callers:
 *     sub_140928158 @ 0x140928158 (sub_140928158.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405AA214 @ 0x1405AA214 (sub_1405AA214.c)
 *     sub_1405E3044 @ 0x1405E3044 (sub_1405E3044.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1405E30A0(__int64 a1, char **a2, unsigned int *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // r13d
  unsigned int v6; // r12d
  char *v7; // rsi
  ULONG_PTR v8; // r15
  __int64 v9; // r9
  _QWORD **v10; // rdx
  _QWORD *v11; // rcx
  char *PoolWithTag; // rax
  __int64 v13; // r14
  _QWORD **v14; // rsi
  _QWORD *v15; // rdi
  char *v16; // rbx
  struct _KTHREAD *v17; // rdi
  unsigned int v18; // ecx
  __int64 v19; // rbx
  unsigned int v20; // edx
  int v21; // r9d
  ULONG_PTR v23; // [rsp+30h] [rbp-28h]
  _QWORD *v24; // [rsp+40h] [rbp-18h]
  _QWORD *v25; // [rsp+40h] [rbp-18h]
  _QWORD **v26; // [rsp+48h] [rbp-10h]
  _QWORD **v27; // [rsp+48h] [rbp-10h]
  unsigned int v28; // [rsp+A0h] [rbp+48h]
  char *v31; // [rsp+B8h] [rbp+60h]

  CurrentThread = KeGetCurrentThread();
  v28 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0LL;
  --*((_WORD *)CurrentThread + 242);
  v8 = a1 + 2264;
  v23 = a1 + 2264;
  ExAcquirePushLockExclusiveEx(a1 + 2264, 0LL);
  v9 = *(_QWORD *)(a1 + 2248);
  if ( v9 )
  {
    v10 = *(_QWORD ***)(v9 + 8);
    v26 = v10;
    v11 = v10;
    v24 = v10;
    while ( v11 )
    {
      if ( (*v11 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      {
        v10 = v26;
        v11 = v24;
      }
      v11 = (_QWORD *)*v11;
      if ( ((unsigned __int8)v11 & 1) != 0 )
        break;
LABEL_15:
      v24 = v11;
      if ( !v11 )
        goto LABEL_11;
      ++v6;
    }
    for ( ++v10; (unsigned __int64)v10 < *(_QWORD *)(v9 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(v9 + 4) >> 5); ++v10 )
    {
      v11 = *v10;
      if ( ((unsigned __int8)*v10 & 1) == 0 )
      {
        v26 = v10;
        goto LABEL_15;
      }
    }
LABEL_11:
    if ( v6 )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 16LL * v6, 0x56455350u);
      v31 = PoolWithTag;
      v7 = PoolWithTag;
      if ( PoolWithTag )
      {
        v13 = *(_QWORD *)(a1 + 2248);
        v14 = *(_QWORD ***)(v13 + 8);
        v27 = v14;
        v15 = v14;
        v25 = v14;
        v16 = PoolWithTag;
        while ( v15 )
        {
          if ( (*v15 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
          {
            v14 = v27;
            v15 = v25;
          }
          v15 = (_QWORD *)*v15;
          if ( ((unsigned __int8)v15 & 1) != 0 )
            break;
LABEL_28:
          v25 = v15;
          if ( v15 )
          {
            v5 = sub_1405AA214(v15[4], &v16[16 * v28], (unsigned int *)&v16[16 * v28 + 8]);
            if ( v5 >= 0 && ++v28 < v6 )
              continue;
          }
          goto LABEL_31;
        }
        for ( ++v14;
              (unsigned __int64)v14 < *(_QWORD *)(v13 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(v13 + 4) >> 5);
              ++v14 )
        {
          v15 = *v14;
          if ( ((unsigned __int8)*v14 & 1) == 0 )
          {
            v27 = v14;
            goto LABEL_28;
          }
        }
LABEL_31:
        v8 = v23;
        v7 = v31;
      }
      else
      {
        v5 = -1073741801;
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v8);
  v17 = KeGetCurrentThread();
  if ( v8 - qword_140C50630 >= 0x8000000000LL )
    v18 = -1;
  else
    v18 = sub_140287F30(*((_QWORD *)v17 + 23));
  _disable();
  v19 = (__int64)v17 + 1696;
  v20 = 0;
  while ( (*(_QWORD *)v19 & 0x7FFFFFFFFFFFFFFCLL) != (v8 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v19 + 18)
       || (*(_DWORD *)v19 & 1) != 0
       || *(_DWORD *)(v19 + 8) != v18 )
  {
    ++v20;
    v19 += 96LL;
    if ( v20 >= 6 )
      goto LABEL_43;
  }
  *(_BYTE *)(v19 + 18) = 0;
  if ( !v19 )
  {
LABEL_43:
    if ( (*((_DWORD *)v17 + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v17, v8, v18, 0LL);
    _enable();
    goto LABEL_51;
  }
  if ( *(__int64 *)v19 < 0 )
  {
    *(_BYTE *)v19 |= 2u;
    _enable();
    sub_14034EE30(v19);
    _disable();
  }
  v21 = *(_DWORD *)(v19 + 88);
  *(_DWORD *)(v19 + 88) = 0;
  *(_BYTE *)(v19 + 17) = 0;
  *(_QWORD *)v19 = 0LL;
  *((_BYTE *)v17 + 792) |= 1 << *(_BYTE *)(v19 + 16);
  _enable();
  if ( v21 )
    sub_14022B568((ULONG_PTR)v17, v8, v21);
LABEL_51:
  sub_1402F9540((__int64)KeGetCurrentThread());
  if ( v5 < 0 )
  {
    sub_1405E3044(v7, v28);
  }
  else
  {
    *a2 = v7;
    *a3 = v6;
  }
  return (unsigned int)v5;
}
