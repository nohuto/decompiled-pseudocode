/*
 * XREFs of sub_14028DA5C @ 0x14028DA5C
 * Callers:
 *     sub_1406FF49C @ 0x1406FF49C (sub_1406FF49C.c)
 *     sub_1407074F0 @ 0x1407074F0 (sub_1407074F0.c)
 *     sub_14097FBF4 @ 0x14097FBF4 (sub_14097FBF4.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_14028DA5C(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v5; // ecx
  char *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // rdx
  int v9; // r9d
  __int64 result; // rax

  v2 = a2 + 24;
  *(_QWORD *)(a2 + 8) = a1 | 1;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a2 + 24);
  CurrentThread = KeGetCurrentThread();
  if ( v2 - qword_140C50630 < 0x8000000000LL )
    v5 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
  else
    v5 = -1;
  _disable();
  v6 = (char *)CurrentThread + 1696;
  v7 = v2 & 0x7FFFFFFFFFFFFFFCLL;
  v8 = 0LL;
  while ( (*(_QWORD *)v6 & 0x7FFFFFFFFFFFFFFCLL) != v7
       || !v6[18]
       || (*(_DWORD *)v6 & 1) != 0
       || *((_DWORD *)v6 + 2) != v5 )
  {
    v8 = (unsigned int)(v8 + 1);
    v6 += 96;
    if ( (unsigned int)v8 >= 6 )
      goto LABEL_19;
  }
  v6[18] = 0;
  if ( v6 )
  {
    if ( *(__int64 *)v6 < 0 )
    {
      *v6 |= 2u;
      _enable();
      sub_14034EE30(v6, v8, v7);
      _disable();
    }
    v9 = *((_DWORD *)v6 + 22);
    *((_DWORD *)v6 + 22) = 0;
    v6[17] = 0;
    *(_QWORD *)v6 = 0LL;
    result = (unsigned __int8)v6[16];
    *((_BYTE *)CurrentThread + 792) |= 1 << result;
    _enable();
    if ( v9 )
      result = sub_14022B568((ULONG_PTR)CurrentThread, v2, v9);
    goto LABEL_15;
  }
LABEL_19:
  result = *((unsigned int *)CurrentThread + 30);
  if ( (result & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v2, v5, 0LL);
  _enable();
LABEL_15:
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    result = a1 + 152;
    if ( *(_QWORD *)result != result )
      return KiCheckForKernelApcDelivery();
  }
  return result;
}
