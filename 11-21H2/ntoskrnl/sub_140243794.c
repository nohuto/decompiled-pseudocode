/*
 * XREFs of sub_140243794 @ 0x140243794
 * Callers:
 *     sub_140243648 @ 0x140243648 (sub_140243648.c)
 *     sub_1402436C8 @ 0x1402436C8 (sub_1402436C8.c)
 *     sub_1403DAB6C @ 0x1403DAB6C (sub_1403DAB6C.c)
 *     sub_1405E0320 @ 0x1405E0320 (sub_1405E0320.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_140243794(__int64 a1, unsigned __int8 a2)
{
  ULONG_PTR v2; // rdi
  unsigned __int64 v3; // rbx
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // r14
  char v6; // r9
  struct _KTHREAD *v7; // rsi
  unsigned int v8; // ecx
  char *v9; // rbx
  __int64 v10; // r8
  __int64 v11; // rdx
  int v12; // r8d
  bool v13; // zf
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v15; // r8

  v2 = a1 + 16;
  v3 = a2;
  if ( *(_DWORD *)a1 )
  {
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 16));
    result = (unsigned int)dword_140D06B08;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v3 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v15 = *((_QWORD *)CurrentPrcb + 4375);
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          v13 = ((unsigned int)result & *(_DWORD *)(v15 + 20)) == 0;
          *(_DWORD *)(v15 + 20) &= result;
          if ( v13 )
            result = sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v3);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v6 & 2) != 0 && (v6 & 4) == 0 )
      ExfTryToWakePushLock(a1 + 16);
    v7 = KeGetCurrentThread();
    if ( v2 - qword_140C50630 < 0x8000000000LL )
      v8 = sub_140287F30(*((_QWORD *)v7 + 23));
    else
      v8 = -1;
    _disable();
    v9 = (char *)v7 + 1696;
    v10 = v2 & 0x7FFFFFFFFFFFFFFCLL;
    v11 = 0LL;
    while ( (*(_QWORD *)v9 & 0x7FFFFFFFFFFFFFFCLL) != v10
         || !v9[18]
         || (*(_DWORD *)v9 & 1) != 0
         || *((_DWORD *)v9 + 2) != v8 )
    {
      v11 = (unsigned int)(v11 + 1);
      v9 += 96;
      if ( (unsigned int)v11 >= 6 )
        goto LABEL_22;
    }
    v9[18] = 0;
    if ( v9 )
    {
      if ( *(__int64 *)v9 < 0 )
      {
        *v9 |= 2u;
        _enable();
        sub_14034EE30(v9, v11, v10);
        _disable();
      }
      v12 = *((_DWORD *)v9 + 22);
      *((_DWORD *)v9 + 22) = 0;
      v9[17] = 0;
      *(_QWORD *)v9 = 0LL;
      result = (unsigned __int8)v9[16];
      *((_BYTE *)v7 + 792) |= 1 << result;
      _enable();
      if ( v12 )
        result = sub_14022B568((ULONG_PTR)v7, v2, v12);
      goto LABEL_18;
    }
LABEL_22:
    result = *((unsigned int *)v7 + 30);
    if ( (result & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v7, v2, v8, 0LL);
    _enable();
LABEL_18:
    v13 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
    if ( v13 )
    {
      result = (__int64)CurrentThread + 152;
      if ( *(_QWORD *)result != result )
        return KiCheckForKernelApcDelivery();
    }
  }
  return result;
}
