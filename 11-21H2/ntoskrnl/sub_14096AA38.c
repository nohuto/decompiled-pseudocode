/*
 * XREFs of sub_14096AA38 @ 0x14096AA38
 * Callers:
 *     MmAllocateMemoryRanges @ 0x14096AB50 (MmAllocateMemoryRanges.c)
 *     MmFreeMemoryRanges @ 0x14096AD50 (MmFreeMemoryRanges.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140587304 @ 0x140587304 (sub_140587304.c)
 *     sub_1405875A0 @ 0x1405875A0 (sub_1405875A0.c)
 */

void __fastcall sub_14096AA38(ULONG_PTR BugCheckParameter2, __int64 *a2, int a3)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  _QWORD *i; // r14
  __int64 v9; // rbp
  _DWORD *v10; // r15
  char v11; // r9

  v3 = *a2;
  v4 = 0LL;
  for ( i = (_QWORD *)a2[2]; v3; --v3 )
  {
    v4 ^= (v4 ^ (*i / *(_QWORD *)(BugCheckParameter2 + 24))) & 0x3FFFFF;
    v9 = *i % *(_QWORD *)(BugCheckParameter2 + 24) + 1LL;
    v10 = (_DWORD *)(qword_140C52968 + 8 * (v4 & 0x3FFFFF));
    do
    {
      --v9;
      v11 = 0;
      if ( a3 )
      {
        if ( (*v10 & 0x1C00000) != 0xC00000LL )
          KeBugCheckEx(0x1Au, 0x30000004uLL, BugCheckParameter2, v4 & 0x3FFFFF, *a2 - v3);
      }
      else if ( sub_140587304(v4) )
      {
        v11 = 2;
      }
      sub_1405875A0(0LL, v4, v11);
      v10 += 2;
      v4 ^= (v4 ^ (v4 + 1)) & 0x3FFFFF;
    }
    while ( v9 );
    ++i;
  }
  *a2 = 0LL;
}
