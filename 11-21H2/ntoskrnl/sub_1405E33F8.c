/*
 * XREFs of sub_1405E33F8 @ 0x1405E33F8
 * Callers:
 *     sub_14097A358 @ 0x14097A358 (sub_14097A358.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1408826B4 @ 0x1408826B4 (sub_1408826B4.c)
 *     sub_14093267C @ 0x14093267C (sub_14093267C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1405E33F8(__int64 a1, __int64 a2, int a3, int a4, ULONG_PTR a5)
{
  _QWORD *PoolWithTag; // rdi
  int v11; // eax
  unsigned int v12; // r12d
  int v13; // ecx
  struct _KTHREAD *CurrentThread; // rcx
  volatile signed __int64 *v15; // rsi
  _QWORD *v16; // r14
  _BOOL8 v17; // r8
  _QWORD *v18; // rax
  struct _KTHREAD *v19; // rdi
  unsigned int v20; // ecx
  __int64 v21; // rbx
  unsigned int v22; // edx
  int v23; // r9d
  int v24; // [rsp+70h] [rbp+18h] BYREF

  v24 = 0;
  if ( a3 == 4 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x74457350u);
    if ( !PoolWithTag )
      return 3221225626LL;
  }
  else
  {
    PoolWithTag = 0LL;
  }
  v11 = sub_14093267C(*(_QWORD *)(a1 + 24), a2, a3, a4, a5, (__int64)&v24);
  v12 = v11;
  if ( PoolWithTag )
  {
    if ( v11 < 0 )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
    }
    else
    {
      v13 = v24;
      *((_DWORD *)PoolWithTag + 9) = 0;
      *((_DWORD *)PoolWithTag + 8) = v13;
      PoolWithTag[3] = a2;
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      v15 = (volatile signed __int64 *)(a1 + 112);
      ExAcquirePushLockExclusiveEx(a1 + 112, 0LL);
      v16 = *(_QWORD **)(a1 + 104);
      LOBYTE(v17) = 0;
      if ( v16 )
      {
        while ( 1 )
        {
          if ( (int)sub_1408826B4(a2, v16, v17) < 0 )
          {
            v18 = (_QWORD *)*v16;
            if ( !*v16 )
            {
              LOBYTE(v17) = 0;
              break;
            }
          }
          else
          {
            v18 = (_QWORD *)v16[1];
            if ( !v18 )
            {
              LOBYTE(v17) = 1;
              break;
            }
          }
          v16 = v18;
        }
      }
      RtlAvlInsertNodeEx((unsigned __int64 *)(a1 + 104), (unsigned __int64)v16, v17, PoolWithTag);
      if ( (_InterlockedExchangeAdd64(v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a1 + 112);
      v19 = KeGetCurrentThread();
      if ( (unsigned __int64)v15 - qword_140C50630 >= 0x8000000000LL )
        v20 = -1;
      else
        v20 = sub_140287F30(*((_QWORD *)v19 + 23));
      _disable();
      v21 = (__int64)v19 + 1696;
      v22 = 0;
      while ( (*(_QWORD *)v21 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)v15 & 0x7FFFFFFFFFFFFFFCLL)
           || !*(_BYTE *)(v21 + 18)
           || (*(_DWORD *)v21 & 1) != 0
           || *(_DWORD *)(v21 + 8) != v20 )
      {
        ++v22;
        v21 += 96LL;
        if ( v22 >= 6 )
          goto LABEL_25;
      }
      *(_BYTE *)(v21 + 18) = 0;
      if ( !v21 )
      {
LABEL_25:
        if ( (*((_DWORD *)v19 + 30) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v19, a1 + 112, v20, 0LL);
        _enable();
        goto LABEL_33;
      }
      if ( *(__int64 *)v21 < 0 )
      {
        *(_BYTE *)v21 |= 2u;
        _enable();
        sub_14034EE30(v21);
        _disable();
      }
      v23 = *(_DWORD *)(v21 + 88);
      *(_DWORD *)(v21 + 88) = 0;
      *(_BYTE *)(v21 + 17) = 0;
      *(_QWORD *)v21 = 0LL;
      *((_BYTE *)v19 + 792) |= 1 << *(_BYTE *)(v21 + 16);
      _enable();
      if ( v23 )
        sub_14022B568((ULONG_PTR)v19, a1 + 112, v23);
LABEL_33:
      sub_1402F9540((__int64)KeGetCurrentThread());
    }
  }
  return v12;
}
