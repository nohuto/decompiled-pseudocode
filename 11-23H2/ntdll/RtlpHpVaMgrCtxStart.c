/*
 * XREFs of RtlpHpVaMgrCtxStart @ 0x1800B1B3C
 * Callers:
 *     RtlHpHeapManagerStart @ 0x180122874 (RtlHpHeapManagerStart.c)
 * Callees:
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x18006694C (RtlpHpVaMgrCtxAllocatorReference.c)
 *     RtlCSparseBitmapStart @ 0x1800B1C08 (RtlCSparseBitmapStart.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxStart(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  unsigned int v5; // eax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int128 v9; // rax
  __int64 result; // rax
  int v11; // ebx
  unsigned int v12; // r8d
  _DWORD v13[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v14; // [rsp+28h] [rbp-20h]

  _BitScanForward(&v5, 0x20u);
  *(_DWORD *)(a1 + 24) = v5;
  v7 = (a5 >> 20) + 1;
  if ( (a5 & 0xFFFFF) == 0 )
    v7 = a5 >> 20;
  v8 = 8 * v7;
  if ( !is_mul_ok(v7, 8uLL) )
    return 3221225621LL;
  v9 = 8 * v7 * (unsigned __int128)0x20u;
  if ( !is_mul_ok(v8, 0x20uLL) )
    return 3221225621LL;
  result = RtlCSparseBitmapStart(a1 + 32, v9, a5 >> 20, (unsigned int)(DWORD2(v9) + 1));
  if ( (int)result >= 0 )
  {
    *(_DWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0LL;
    v13[0] = -1;
    v14 = 0LL;
    v11 = 0;
    while ( 1 )
    {
      v13[1] = v11;
      v12 = 0x200000;
      if ( (unsigned int)(v11 - 2) > 1 && v11 == 4 )
        v12 = 0x40000000;
      result = RtlpHpVaMgrCtxAllocatorReference(a1, (__int64)v13, v12);
      if ( (int)result < 0 )
        break;
      if ( ++v11 >= 6 )
        return 0LL;
    }
  }
  return result;
}
