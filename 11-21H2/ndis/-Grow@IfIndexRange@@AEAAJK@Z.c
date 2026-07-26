/*
 * XREFs of ?Grow@IfIndexRange@@AEAAJK@Z @ 0x1C0033C44
 * Callers:
 *     ?AllocateAnyBit@IfIndexRange@@QEAAJPEAK@Z @ 0x1C0022188 (-AllocateAnyBit@IfIndexRange@@QEAAJPEAK@Z.c)
 *     ndisIfTryAllocatingSuggestedIndex @ 0x1C0022210 (ndisIfTryAllocatingSuggestedIndex.c)
 * Callees:
 *     memmove @ 0x1C0036080 (memmove.c)
 *     memset @ 0x1C0036340 (memset.c)
 */

__int64 __fastcall IfIndexRange::Grow(IfIndexRange *this, unsigned int a2)
{
  _RTL_BITMAP_EX *v2; // r14
  unsigned __int64 v3; // r8
  int v5; // eax
  unsigned __int64 v6; // rbp
  unsigned __int64 *Pool2; // rax
  unsigned __int64 *v8; // r15
  void *v9; // rsi
  ULONG64 v10; // rdi
  ULONG64 v11; // r8

  v2 = (_RTL_BITMAP_EX *)((char *)this + 8);
  v3 = *((_QWORD *)this + 1);
  if ( a2 <= v3 )
    return 0LL;
  if ( (unsigned int)(*((_DWORD *)this + 1) - *(_DWORD *)this) > v3 )
  {
    v5 = 8;
    if ( a2 >= 8 )
      v5 = a2;
    v6 = (((unsigned __int64)(unsigned int)(v5 + 7) >> 3) + 15) & 0xFFFFFFFFFFFFFFF0uLL;
    Pool2 = (unsigned __int64 *)ExAllocatePool2(66LL, v6, 1718174798);
    v8 = Pool2;
    if ( Pool2 )
    {
      v9 = (void *)*((_QWORD *)this + 2);
      v10 = v2->SizeOfBitMap >> 3;
      if ( v9 )
      {
        memmove(Pool2, *((const void **)this + 2), v2->SizeOfBitMap >> 3);
        ExFreePoolWithTag(v9, 0x6669444Eu);
      }
      memset((char *)v8 + v10, 0, v6 - v10);
      v11 = 8 * v6;
      if ( 8 * v6 >= (unsigned int)(*((_DWORD *)this + 1) - *(_DWORD *)this) )
        v11 = (unsigned int)(*((_DWORD *)this + 1) - *(_DWORD *)this);
      RtlInitializeBitMapEx(v2, v8, v11);
      return 0LL;
    }
  }
  return 3221225626LL;
}
