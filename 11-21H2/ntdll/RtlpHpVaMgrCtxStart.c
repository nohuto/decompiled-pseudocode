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
  unsigned __int64 v8; // rcx
  unsigned __int128 v9; // rax
  __int64 result; // rax
  unsigned __int64 v11; // r9
  int v12; // ebx
  unsigned __int64 v13; // r8
  _DWORD v14[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v15; // [rsp+28h] [rbp-20h]

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
    v14[0] = -1;
    v15 = 0LL;
    v12 = 0;
    while ( 1 )
    {
      v14[1] = v12;
      v13 = 0x200000LL;
      if ( (unsigned int)(v12 - 2) > 1 && v12 == 4 )
        v13 = 0x40000000LL;
      result = RtlpHpVaMgrCtxAllocatorReference(a1, (unsigned __int64)v14, v13, v11);
      if ( (int)result < 0 )
        break;
      if ( ++v12 >= 5 )
        return 0LL;
    }
  }
  return result;
}
