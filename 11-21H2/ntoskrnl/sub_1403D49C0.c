/*
 * XREFs of sub_1403D49C0 @ 0x1403D49C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402DCC34 @ 0x1402DCC34 (sub_1402DCC34.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 sub_1403D49C0()
{
  __int64 *v0; // r14
  unsigned int i; // r15d
  int v2; // r8d
  char v3; // al
  struct _KTHREAD *v4; // rsi
  unsigned int v5; // ecx
  __int64 v6; // rdi
  unsigned int v7; // edx
  int v8; // r8d
  char v9; // al
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v11; // ecx
  unsigned int v12; // edx
  __int64 v13; // rdi
  char v14; // bp
  struct _KTHREAD *v15; // rsi
  unsigned int v16; // ecx
  __int64 v17; // rdi
  int v18; // r8d
  __int64 result; // rax

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C48C90, 0LL);
  v0 = (__int64 *)qword_140C48C30;
  for ( i = -1; qword_140C48C30; v0 = (__int64 *)qword_140C48C30 )
  {
    qword_140C48C30 = *v0;
    v9 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C48C90, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v9 & 2) != 0 && (v9 & 4) == 0 )
      ExfTryToWakePushLock(&qword_140C48C90);
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned __int64)&qword_140C48C90 - qword_140C50630 < 0x8000000000LL )
      v11 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
    else
      v11 = -1;
    _disable();
    v12 = 0;
    v13 = (__int64)CurrentThread + 1696;
    while ( (*(_QWORD *)v13 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C48C90 & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(v13 + 18)
         || (*(_DWORD *)v13 & 1) != 0
         || *(_DWORD *)(v13 + 8) != v11 )
    {
      ++v12;
      v13 += 96LL;
      if ( v12 >= 6 )
        goto LABEL_31;
    }
    *(_BYTE *)(v13 + 18) = 0;
    if ( v13 )
    {
      if ( *(__int64 *)v13 < 0 )
      {
        *(_BYTE *)v13 |= 2u;
        _enable();
        sub_14034EE30(v13);
        _disable();
      }
      v2 = *(_DWORD *)(v13 + 88);
      *(_DWORD *)(v13 + 88) = 0;
      *(_BYTE *)(v13 + 17) = 0;
      *(_QWORD *)v13 = 0LL;
      *((_BYTE *)CurrentThread + 792) |= 1 << *(_BYTE *)(v13 + 16);
      _enable();
      if ( v2 )
        sub_14022B568((ULONG_PTR)CurrentThread, (__int64)&qword_140C48C90, v2);
      goto LABEL_12;
    }
LABEL_31:
    if ( (*((_DWORD *)CurrentThread + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&qword_140C48C90, v11, 0LL);
    _enable();
LABEL_12:
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C48C70, 0LL);
    sub_1402DCC34(*(v0 - 1), v0[1]);
    v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C48C70, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v3 & 2) != 0 && (v3 & 4) == 0 )
      ExfTryToWakePushLock(&qword_140C48C70);
    v4 = KeGetCurrentThread();
    if ( (unsigned __int64)&qword_140C48C70 - qword_140C50630 < 0x8000000000LL )
      v5 = sub_140287F30(*((_QWORD *)v4 + 23));
    else
      v5 = -1;
    _disable();
    v6 = (__int64)v4 + 1696;
    v7 = 0;
    while ( (*(_QWORD *)v6 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C48C70 & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(v6 + 18)
         || (*(_DWORD *)v6 & 1) != 0
         || *(_DWORD *)(v6 + 8) != v5 )
    {
      ++v7;
      v6 += 96LL;
      if ( v7 >= 6 )
        goto LABEL_34;
    }
    *(_BYTE *)(v6 + 18) = 0;
    if ( v6 )
    {
      if ( *(__int64 *)v6 < 0 )
      {
        *(_BYTE *)v6 |= 2u;
        _enable();
        sub_14034EE30(v6);
        _disable();
      }
      v8 = *(_DWORD *)(v6 + 88);
      *(_DWORD *)(v6 + 88) = 0;
      *(_BYTE *)(v6 + 17) = 0;
      *(_QWORD *)v6 = 0LL;
      *((_BYTE *)v4 + 792) |= 1 << *(_BYTE *)(v6 + 16);
      _enable();
      if ( v8 )
        sub_14022B568((ULONG_PTR)v4, (__int64)&qword_140C48C70, v8);
      goto LABEL_25;
    }
LABEL_34:
    if ( (*((_DWORD *)v4 + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v4, (ULONG_PTR)&qword_140C48C70, v5, 0LL);
    _enable();
LABEL_25:
    ExFreePoolWithTag(v0 - 1, 0x75714D45u);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C48C90, 0LL);
  }
  v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C48C90, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v14 & 2) != 0 && (v14 & 4) == 0 )
    ExfTryToWakePushLock(&qword_140C48C90);
  v15 = KeGetCurrentThread();
  if ( (unsigned __int64)&qword_140C48C90 - qword_140C50630 < 0x8000000000LL )
    i = sub_140287F30(*((_QWORD *)v15 + 23));
  _disable();
  v16 = 0;
  v17 = (__int64)v15 + 1696;
  while ( (*(_QWORD *)v17 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C48C90 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v17 + 18)
       || (*(_DWORD *)v17 & 1) != 0
       || *(_DWORD *)(v17 + 8) != i )
  {
    ++v16;
    v17 += 96LL;
    if ( v16 >= 6 )
      goto LABEL_53;
  }
  *(_BYTE *)(v17 + 18) = 0;
  if ( v17 )
  {
    if ( *(__int64 *)v17 < 0 )
    {
      *(_BYTE *)v17 |= 2u;
      _enable();
      sub_14034EE30(v17);
      _disable();
    }
    v18 = *(_DWORD *)(v17 + 88);
    *(_DWORD *)(v17 + 88) = 0;
    *(_BYTE *)(v17 + 17) = 0;
    *(_QWORD *)v17 = 0LL;
    result = *(unsigned __int8 *)(v17 + 16);
    *((_BYTE *)v15 + 792) |= 1 << result;
    _enable();
    if ( v18 )
      result = sub_14022B568((ULONG_PTR)v15, (__int64)&qword_140C48C90, v18);
    goto LABEL_51;
  }
LABEL_53:
  result = *((unsigned int *)v15 + 30);
  if ( (result & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v15, (ULONG_PTR)&qword_140C48C90, i, 0LL);
  _enable();
LABEL_51:
  _InterlockedExchange(&dword_140C48C10, 0);
  return result;
}
