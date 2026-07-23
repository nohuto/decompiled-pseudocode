/*
 * XREFs of sub_1402D94D8 @ 0x1402D94D8
 * Callers:
 *     MmProtectDriverSection @ 0x14025D5E0 (MmProtectDriverSection.c)
 *     sub_1402D8F30 @ 0x1402D8F30 (sub_1402D8F30.c)
 *     sub_14033F41C @ 0x14033F41C (sub_14033F41C.c)
 *     sub_140582320 @ 0x140582320 (sub_140582320.c)
 *     sub_14075F23C @ 0x14075F23C (sub_14075F23C.c)
 *     sub_1407607D8 @ 0x1407607D8 (sub_1407607D8.c)
 *     sub_140760A2C @ 0x140760A2C (sub_140760A2C.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1402AC890 (ExReleaseAutoExpandPushLockExclusive.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_1402D94D8(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  ULONG_PTR v3; // rdi
  struct _KTHREAD *v4; // rsi
  unsigned int v5; // ecx
  char *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // r8d
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  v3 = a1 + 104;
  if ( a2 )
  {
    if ( a2 == 2 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v3, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(a1 + 104);
      result = sub_1402AFC00(v3);
    }
    else
    {
      result = ExReleaseAutoExpandPushLockExclusive(a1 + 104, 0LL);
    }
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 104);
    v4 = KeGetCurrentThread();
    if ( v3 - qword_140C50630 < 0x8000000000LL )
      v5 = sub_140287F30(*((_QWORD *)v4 + 23));
    else
      v5 = -1;
    _disable();
    v6 = (char *)v4 + 1696;
    v7 = 0LL;
    v8 = v3 & 0x7FFFFFFFFFFFFFFCLL;
    while ( (*(_QWORD *)v6 & 0x7FFFFFFFFFFFFFFCLL) != v8
         || !v6[18]
         || (*(_DWORD *)v6 & 1) != 0
         || *((_DWORD *)v6 + 2) != v5 )
    {
      v7 = (unsigned int)(v7 + 1);
      v6 += 96;
      if ( (unsigned int)v7 >= 6 )
        goto LABEL_20;
    }
    v6[18] = 0;
    if ( v6 )
    {
      if ( *(__int64 *)v6 < 0 )
      {
        *v6 |= 2u;
        _enable();
        sub_14034EE30(v6, v7, v8);
        _disable();
      }
      v9 = *((_DWORD *)v6 + 22);
      *((_DWORD *)v6 + 22) = 0;
      v6[17] = 0;
      *(_QWORD *)v6 = 0LL;
      result = (unsigned __int8)v6[16];
      *((_BYTE *)v4 + 792) |= 1 << result;
      _enable();
      if ( v9 )
        result = sub_14022B568((ULONG_PTR)v4, v3, v9);
      goto LABEL_16;
    }
LABEL_20:
    result = *((unsigned int *)v4 + 30);
    if ( (result & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v4, v3, v5, 0LL);
    _enable();
  }
LABEL_16:
  if ( (*((_WORD *)CurrentThread + 243))++ == 0xFFFF )
  {
    result = (__int64)CurrentThread + 152;
    if ( *(_QWORD *)result != result )
      return KiCheckForKernelApcDelivery();
  }
  return result;
}
