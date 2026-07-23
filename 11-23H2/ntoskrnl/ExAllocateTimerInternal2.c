/*
 * XREFs of ExAllocateTimerInternal2 @ 0x14031E620
 * Callers:
 *     ExAllocateTimer @ 0x14031E5F0 (ExAllocateTimer.c)
 *     ExAllocateTimerInternal @ 0x14060BA50 (ExAllocateTimerInternal.c)
 * Callees:
 *     ExpExTimerAttributesAreValid @ 0x14031E748 (ExpExTimerAttributesAreValid.c)
 *     KiInitializeTimer2 @ 0x14031E7AC (KiInitializeTimer2.c)
 *     KeInitializeIRTimer @ 0x14036F798 (KeInitializeIRTimer.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall ExAllocateTimerInternal2(__int64 a1, __int64 a2, _WORD *a3, unsigned int a4)
{
  ULONG_PTR v5; // rdi
  __int64 Pool2; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  _WORD v12[20]; // [rsp+30h] [rbp-28h] BYREF

  v5 = a4;
  if ( !(unsigned __int8)ExpExTimerAttributesAreValid(a4) || ((v5 & 2) != 0) != (a3 != 0LL) )
    KeBugCheckEx(0xC7u, 9uLL, 0LL, v5, 0LL);
  Pool2 = ExAllocatePool2(64LL, 160LL, 1834252357LL);
  v9 = Pool2;
  if ( Pool2 )
  {
    if ( (v5 & 2) != 0 )
    {
      v12[0] = *a3;
      v12[1] = a3[1];
      KeInitializeIRTimer(Pool2, a1, a2, (unsigned int)v12, v5);
    }
    else
    {
      *(_WORD *)(Pool2 + 2) = 0;
      KiInitializeTimer2(Pool2, a1, a2, (unsigned int)v5);
    }
    *(_QWORD *)(v9 + 136) = KiWaitNever ^ __ROR8__(v9 ^ _byteswap_uint64(KiWaitAlways), KiWaitNever);
    v10 = KiWaitNever ^ __ROR8__(v9 ^ _byteswap_uint64(KiWaitAlways), KiWaitNever);
    *(_BYTE *)(v9 + 152) = ExpTimerFreedCookie;
    *(_QWORD *)(v9 + 144) = v10;
  }
  return v9;
}
