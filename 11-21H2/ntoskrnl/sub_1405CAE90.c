/*
 * XREFs of sub_1405CAE90 @ 0x1405CAE90
 * Callers:
 *     sub_14098BDD4 @ 0x14098BDD4 (sub_14098BDD4.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     sub_140355350 @ 0x140355350 (sub_140355350.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_1405CAE90(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR i; // rdi
  _QWORD *v4; // rcx
  _QWORD *v5; // rax
  struct _KTHREAD *v6; // rdi
  unsigned int v7; // ecx
  __int64 v8; // rbx
  unsigned int v9; // edx
  __int64 result; // rax
  int v11; // r9d

  a1[1] = a1;
  *a1 = a1;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C23CB8, 0LL);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C23B98, 0LL);
  for ( i = qword_140C23B80; (ULONG_PTR *)i != &qword_140C23B80; i = *(_QWORD *)i )
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(i + 824), 0, 0) & 0x40) != 0 )
    {
      sub_140355350(i);
      v4 = (_QWORD *)a1[1];
      v5 = (_QWORD *)(i + 872);
      if ( (_QWORD *)*v4 != a1 )
        __fastfail(3u);
      *v5 = a1;
      *(_QWORD *)(i + 880) = v4;
      *v4 = v5;
      a1[1] = v5;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C23B98, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C23B98);
  v6 = KeGetCurrentThread();
  if ( (unsigned __int64)&qword_140C23B98 - qword_140C50630 >= 0x8000000000LL )
    v7 = -1;
  else
    v7 = sub_140287F30(*((_QWORD *)v6 + 23));
  _disable();
  v8 = (__int64)v6 + 1696;
  v9 = 0;
  while ( (*(_QWORD *)v8 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C23B98 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v8 + 18)
       || (*(_DWORD *)v8 & 1) != 0
       || *(_DWORD *)(v8 + 8) != v7 )
  {
    ++v9;
    v8 += 96LL;
    if ( v9 >= 6 )
      goto LABEL_19;
  }
  *(_BYTE *)(v8 + 18) = 0;
  if ( !v8 )
  {
LABEL_19:
    result = *((unsigned int *)v6 + 30);
    if ( (result & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v6, (ULONG_PTR)&qword_140C23B98, v7, 0LL);
    _enable();
    return result;
  }
  if ( *(__int64 *)v8 < 0 )
  {
    *(_BYTE *)v8 |= 2u;
    _enable();
    sub_14034EE30(v8);
    _disable();
  }
  v11 = *(_DWORD *)(v8 + 88);
  *(_DWORD *)(v8 + 88) = 0;
  *(_BYTE *)(v8 + 17) = 0;
  *(_QWORD *)v8 = 0LL;
  result = *(unsigned __int8 *)(v8 + 16);
  *((_BYTE *)v6 + 792) |= 1 << result;
  _enable();
  if ( v11 )
    return sub_14022B568((ULONG_PTR)v6, (__int64)&qword_140C23B98, v11);
  return result;
}
