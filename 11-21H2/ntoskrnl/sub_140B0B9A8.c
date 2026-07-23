/*
 * XREFs of sub_140B0B9A8 @ 0x140B0B9A8
 * Callers:
 *     sub_140B0B630 @ 0x140B0B630 (sub_140B0B630.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140B0BB6C @ 0x140B0BB6C (sub_140B0BB6C.c)
 *     sub_140B0BE8C @ 0x140B0BE8C (sub_140B0BE8C.c)
 *     sub_140B0C004 @ 0x140B0C004 (sub_140B0C004.c)
 *     sub_140B0C87C @ 0x140B0C87C (sub_140B0C87C.c)
 *     sub_140B0CB80 @ 0x140B0CB80 (sub_140B0CB80.c)
 *     sub_140B0CDAC @ 0x140B0CDAC (sub_140B0CDAC.c)
 *     sub_140B18928 @ 0x140B18928 (sub_140B18928.c)
 */

__int64 __fastcall sub_140B0B9A8(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  PVOID *v5; // rbx
  int v6; // edi
  char v7; // al
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v9; // ecx
  __int64 v10; // rbx
  unsigned int v11; // edx
  int v13; // r9d
  int v14; // [rsp+50h] [rbp+18h] BYREF

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C48C20, 0LL);
  v14 = 0;
  v4 = sub_140B18928(a1, a2, &v14);
  v5 = (PVOID *)v4;
  if ( v4 )
  {
    v6 = sub_140B0BE8C(v4);
    if ( v6 >= 0 )
    {
      v6 = sub_140B0C004(v5);
      if ( v6 >= 0 )
      {
        v6 = sub_140B0C87C(v5);
        if ( v6 >= 0 )
        {
          v6 = sub_140B0CB80(v5);
          if ( v6 >= 0 )
            v6 = sub_140B0CDAC(v5);
        }
      }
    }
    sub_140B0BB6C(*v5);
    ExFreePoolWithTag(v5, 0);
  }
  else
  {
    v6 = -1073741816;
  }
  v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C48C20, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v7 & 2) != 0 && (v7 & 4) == 0 )
    ExfTryToWakePushLock(&qword_140C48C20);
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned __int64)&qword_140C48C20 - qword_140C50630 >= 0x8000000000LL )
    v9 = -1;
  else
    v9 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
  _disable();
  v10 = (__int64)CurrentThread + 1696;
  v11 = 0;
  while ( (*(_QWORD *)v10 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C48C20 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(v10 + 18)
       || (*(_DWORD *)v10 & 1) != 0
       || *(_DWORD *)(v10 + 8) != v9 )
  {
    ++v11;
    v10 += 96LL;
    if ( v11 >= 6 )
      goto LABEL_17;
  }
  *(_BYTE *)(v10 + 18) = 0;
  if ( !v10 )
  {
LABEL_17:
    if ( (*((_DWORD *)CurrentThread + 30) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)&qword_140C48C20, v9, 0LL);
    _enable();
    return (unsigned int)v6;
  }
  if ( *(__int64 *)v10 < 0 )
  {
    *(_BYTE *)v10 |= 2u;
    _enable();
    sub_14034EE30(v10);
    _disable();
  }
  v13 = *(_DWORD *)(v10 + 88);
  *(_DWORD *)(v10 + 88) = 0;
  *(_BYTE *)(v10 + 17) = 0;
  *(_QWORD *)v10 = 0LL;
  *((_BYTE *)CurrentThread + 792) |= 1 << *(_BYTE *)(v10 + 16);
  _enable();
  if ( v13 )
    sub_14022B568((ULONG_PTR)CurrentThread, (__int64)&qword_140C48C20, v13);
  return (unsigned int)v6;
}
