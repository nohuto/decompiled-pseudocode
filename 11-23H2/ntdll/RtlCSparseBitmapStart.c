/*
 * XREFs of RtlCSparseBitmapStart @ 0x1800B1C08
 * Callers:
 *     RtlpHpVaMgrCtxStart @ 0x1800B1B3C (RtlpHpVaMgrCtxStart.c)
 *     RtlHpHeapManagerStart @ 0x180122874 (RtlHpHeapManagerStart.c)
 * Callees:
 *     RtlpHpEnvAllocVA @ 0x180047474 (RtlpHpEnvAllocVA.c)
 */

__int64 __fastcall RtlCSparseBitmapStart(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  bool v11; // cc
  __int64 v12; // [rsp+28h] [rbp-30h]
  __int64 v13; // [rsp+28h] [rbp-30h]
  unsigned __int64 v14; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v15; // [rsp+68h] [rbp+10h] BYREF

  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_BYTE *)(a1 + 49) = 0;
  *(_BYTE *)(a1 + 50) = a4;
  *(_QWORD *)(a1 + 16) = a2;
  *(_BYTE *)(a1 + 48) = a4 != 0;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    return 2147483653LL;
  v6 = (((a2 + 7) >> 3) + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v7 = ((((v6 >> 12) + 7) >> 3) + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v8 = *(unsigned int *)(a1 + 52);
  v15 = v7;
  if ( ((v7 >> 12) + 7) >> 3 > v8 )
    return 2147483653LL;
  v14 = v7 + v6;
  result = RtlpHpEnvAllocVA(a1 + 8, (__int64)&v14, 0LL, 1056768, 4, v12, (unsigned __int8)a4, 0LL);
  if ( (int)result >= 0 )
  {
    _BitScanForward64(&v9, v14);
    v10 = v6 + *(_QWORD *)(a1 + 8);
    *(_BYTE *)(a1 + 51) = v9;
    v11 = v15 <= 0x1000;
    *(_QWORD *)a1 = v10;
    if ( v11 )
    {
      result = RtlpHpEnvAllocVA(a1, (__int64)&v15, 0LL, 1073745920, 4, v13, *(unsigned __int8 *)(a1 + 50), 0LL);
      if ( (int)result < 0 )
        return result;
      *(_QWORD *)(a1 + 56) = 1LL;
    }
    return 0LL;
  }
  return result;
}
