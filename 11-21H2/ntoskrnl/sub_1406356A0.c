/*
 * XREFs of sub_1406356A0 @ 0x1406356A0
 * Callers:
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140797594 @ 0x140797594 (sub_140797594.c)
 *     sub_1407981E8 @ 0x1407981E8 (sub_1407981E8.c)
 */

__int64 __fastcall sub_1406356A0(unsigned int *a1)
{
  unsigned int v2; // edi
  _QWORD *v3; // rax
  __int64 v4; // rax
  _DWORD *v5; // r14
  ULONG_PTR v6; // rbp
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v8; // ecx
  __int64 v9; // rbx
  unsigned int v10; // edx
  int v11; // r9d

  v2 = 0;
  v3 = sub_140347DB0();
  v4 = sub_140797594(v3[108], *a1, 0LL);
  v5 = (_DWORD *)v4;
  if ( v4 )
  {
    v6 = v4 + 1144;
    ExAcquirePushLockExclusiveEx(v4 + 1144, 0LL);
    v5[294] = a1[1];
    v5[293] = a1[2];
    v5[295] = a1[3];
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6);
    CurrentThread = KeGetCurrentThread();
    if ( v6 - qword_140C50630 >= 0x8000000000LL )
      v8 = -1;
    else
      v8 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
    _disable();
    v9 = (__int64)CurrentThread + 1696;
    v10 = 0;
    while ( (*(_QWORD *)v9 & 0x7FFFFFFFFFFFFFFCLL) != (v6 & 0x7FFFFFFFFFFFFFFCLL)
         || !*(_BYTE *)(v9 + 18)
         || (*(_DWORD *)v9 & 1) != 0
         || *(_DWORD *)(v9 + 8) != v8 )
    {
      ++v10;
      v9 += 96LL;
      if ( v10 >= 6 )
        goto LABEL_14;
    }
    *(_BYTE *)(v9 + 18) = 0;
    if ( !v9 )
    {
LABEL_14:
      if ( (*((_DWORD *)CurrentThread + 30) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v6, v8, 0LL);
      _enable();
      goto LABEL_22;
    }
    if ( *(__int64 *)v9 < 0 )
    {
      *(_BYTE *)v9 |= 2u;
      _enable();
      sub_14034EE30(v9);
      _disable();
    }
    v11 = *(_DWORD *)(v9 + 88);
    *(_DWORD *)(v9 + 88) = 0;
    *(_BYTE *)(v9 + 17) = 0;
    *(_QWORD *)v9 = 0LL;
    *((_BYTE *)CurrentThread + 792) |= 1 << *(_BYTE *)(v9 + 16);
    _enable();
    if ( v11 )
      sub_14022B568((ULONG_PTR)CurrentThread, v6, v11);
LABEL_22:
    sub_1407981E8(v5, 0LL);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
