/*
 * XREFs of RtlpHpVaMgrCtxStart @ 0x1800B1B08
 * Callers:
 *     RtlHpHeapManagerStart @ 0x18011F4D4 (RtlHpHeapManagerStart.c)
 * Callees:
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x180055694 (RtlpHpVaMgrCtxAllocatorReference.c)
 *     RtlCSparseBitmapStart @ 0x180120AFC (RtlCSparseBitmapStart.c)
 */

__int64 __fastcall RtlpHpVaMgrCtxStart(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  unsigned int v5; // eax
  unsigned __int64 v7; // rdx
  __int64 result; // rax
  int v9; // ebx
  unsigned int v10; // r8d
  _DWORD v11[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v12; // [rsp+28h] [rbp-20h]

  _BitScanForward(&v5, 0x20u);
  *(_DWORD *)(a1 + 24) = v5;
  v7 = (a5 >> 20) + 1;
  if ( (a5 & 0xFFFFF) == 0 )
    v7 = a5 >> 20;
  if ( !is_mul_ok(v7, 8uLL) || !is_mul_ok(8 * v7, 0x20uLL) )
    return 3221225621LL;
  result = RtlCSparseBitmapStart((PVOID *)(a1 + 32));
  if ( (int)result >= 0 )
  {
    *(_DWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0LL;
    v11[0] = -1;
    v12 = 0LL;
    v9 = 0;
    while ( 1 )
    {
      v11[1] = v9;
      v10 = 0x200000;
      if ( (unsigned int)(v9 - 2) > 1 && v9 == 4 )
        v10 = 0x40000000;
      result = RtlpHpVaMgrCtxAllocatorReference(a1, (__int64)v11, v10);
      if ( (int)result < 0 )
        break;
      if ( ++v9 >= 5 )
        return 0LL;
    }
  }
  return result;
}
