/*
 * XREFs of sub_140281A58 @ 0x140281A58
 * Callers:
 *     sub_140216EE8 @ 0x140216EE8 (sub_140216EE8.c)
 *     sub_14025F344 @ 0x14025F344 (sub_14025F344.c)
 *     sub_14029F6FC @ 0x14029F6FC (sub_14029F6FC.c)
 *     sub_1402ECFD8 @ 0x1402ECFD8 (sub_1402ECFD8.c)
 *     sub_140580FA4 @ 0x140580FA4 (sub_140580FA4.c)
 *     sub_140581158 @ 0x140581158 (sub_140581158.c)
 *     sub_1405BCAF8 @ 0x1405BCAF8 (sub_1405BCAF8.c)
 *     sub_140693498 @ 0x140693498 (sub_140693498.c)
 *     sub_1406F7D78 @ 0x1406F7D78 (sub_1406F7D78.c)
 *     sub_1406F7F40 @ 0x1406F7F40 (sub_1406F7F40.c)
 *     sub_1406F89A4 @ 0x1406F89A4 (sub_1406F89A4.c)
 *     sub_1406F9990 @ 0x1406F9990 (sub_1406F9990.c)
 *     sub_1406FB4D0 @ 0x1406FB4D0 (sub_1406FB4D0.c)
 *     sub_140709A08 @ 0x140709A08 (sub_140709A08.c)
 *     sub_140709D14 @ 0x140709D14 (sub_140709D14.c)
 *     sub_14070A1B8 @ 0x14070A1B8 (sub_14070A1B8.c)
 *     sub_14079D5B4 @ 0x14079D5B4 (sub_14079D5B4.c)
 *     sub_1407B8B60 @ 0x1407B8B60 (sub_1407B8B60.c)
 *     sub_1407B99C0 @ 0x1407B99C0 (sub_1407B99C0.c)
 *     sub_140852834 @ 0x140852834 (sub_140852834.c)
 *     sub_14096D8A8 @ 0x14096D8A8 (sub_14096D8A8.c)
 *     sub_140978F40 @ 0x140978F40 (sub_140978F40.c)
 *     sub_14097D688 @ 0x14097D688 (sub_14097D688.c)
 *     sub_14097D9E0 @ 0x14097D9E0 (sub_14097D9E0.c)
 * Callees:
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_140281A58(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v5; // ecx
  char *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // rdx
  int v9; // r9d
  __int64 result; // rax

  *(_BYTE *)(a1 + 1384) &= ~1u;
  v2 = a2 + 1224;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 1224), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a2 + 1224);
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
