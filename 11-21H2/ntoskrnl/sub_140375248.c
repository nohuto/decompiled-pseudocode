/*
 * XREFs of sub_140375248 @ 0x140375248
 * Callers:
 *     sub_1407F6F10 @ 0x1407F6F10 (sub_1407F6F10.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_140375248(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r14d
  unsigned int i; // r15d
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v7; // rdi
  __int64 v8; // rbp
  void *v9; // rbp
  struct _KTHREAD *v10; // rsi
  unsigned int v11; // ecx
  __int64 v12; // rbx
  unsigned int v13; // edx
  int v14; // r9d
  struct _KTHREAD *v16; // rsi
  unsigned int v17; // ecx
  __int64 v18; // rbx
  unsigned int v19; // edx
  int v20; // r8d

  v2 = 0;
  for ( i = 0; i < a2; ++i )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    v7 = a1 + 16LL * i;
    ExAcquirePushLockExclusiveEx(v7, 0LL);
    v8 = *(_QWORD *)(v7 + 8);
    if ( (v8 & 1) != 0 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v7);
      v16 = KeGetCurrentThread();
      if ( v7 - qword_140C50630 < 0x8000000000LL )
        v17 = sub_140287F30(*((_QWORD *)v16 + 23));
      else
        v17 = -1;
      _disable();
      v18 = (__int64)v16 + 1696;
      v19 = 0;
      while ( (*(_QWORD *)v18 & 0x7FFFFFFFFFFFFFFCLL) != (v7 & 0x7FFFFFFFFFFFFFFCLL)
           || !*(_BYTE *)(v18 + 18)
           || (*(_DWORD *)v18 & 1) != 0
           || *(_DWORD *)(v18 + 8) != v17 )
      {
        ++v19;
        v18 += 96LL;
        if ( v19 >= 6 )
          goto LABEL_41;
      }
      *(_BYTE *)(v18 + 18) = 0;
      if ( v18 )
      {
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
          sub_14022B568((ULONG_PTR)v16, v7, v20);
        goto LABEL_39;
      }
LABEL_41:
      if ( (*((_DWORD *)v16 + 30) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v16, v7, v17, 0LL);
      _enable();
LABEL_39:
      KeLeaveCriticalRegion();
    }
    else
    {
      *(_QWORD *)(v7 + 8) = 1LL;
      v9 = (void *)(v8 & 0xFFFFFFFFFFFFFFFEuLL);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v7);
      v10 = KeGetCurrentThread();
      if ( v7 - qword_140C50630 < 0x8000000000LL )
        v11 = sub_140287F30(*((_QWORD *)v10 + 23));
      else
        v11 = -1;
      _disable();
      v12 = (__int64)v10 + 1696;
      v13 = 0;
      while ( (*(_QWORD *)v12 & 0x7FFFFFFFFFFFFFFCLL) != (v7 & 0x7FFFFFFFFFFFFFFCLL)
           || !*(_BYTE *)(v12 + 18)
           || (*(_DWORD *)v12 & 1) != 0
           || *(_DWORD *)(v12 + 8) != v11 )
      {
        ++v13;
        v12 += 96LL;
        if ( v13 >= 6 )
          goto LABEL_22;
      }
      *(_BYTE *)(v12 + 18) = 0;
      if ( v12 )
      {
        if ( *(__int64 *)v12 < 0 )
        {
          *(_BYTE *)v12 |= 2u;
          _enable();
          sub_14034EE30(v12);
          _disable();
        }
        v14 = *(_DWORD *)(v12 + 88);
        *(_DWORD *)(v12 + 88) = 0;
        *(_BYTE *)(v12 + 17) = 0;
        *(_QWORD *)v12 = 0LL;
        *((_BYTE *)v10 + 792) |= 1 << *(_BYTE *)(v12 + 16);
        _enable();
        if ( v14 )
          sub_14022B568((ULONG_PTR)v10, v7, v14);
        goto LABEL_17;
      }
LABEL_22:
      if ( (*((_DWORD *)v10 + 30) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v10, v7, v11, 0LL);
      _enable();
LABEL_17:
      KeLeaveCriticalRegion();
      if ( v9 )
      {
        ObfDereferenceObject(v9);
        ++v2;
      }
    }
  }
  return v2;
}
