/*
 * XREFs of sub_14093BDD4 @ 0x14093BDD4
 * Callers:
 *     sub_14093B898 @ 0x14093B898 (sub_14093B898.c)
 * Callees:
 *     MmAllocateMemoryRanges @ 0x14096AB50 (MmAllocateMemoryRanges.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14093BDD4(ULONG_PTR a1, __int64 a2, ULONG_PTR a3, __int64 *a4, _DWORD *a5, _QWORD *a6)
{
  int MemoryRanges; // ebx
  __int64 v8; // rdi
  unsigned __int64 v9; // r10
  int v10; // r8d
  __int64 Pool2; // rdx
  unsigned __int64 i; // r8
  __int64 v13; // rcx
  __int64 v14; // rax
  ULONG_PTR BugCheckParameter2[4]; // [rsp+20h] [rbp-40h] BYREF
  unsigned int v17; // [rsp+40h] [rbp-20h]
  _BYTE P[20]; // [rsp+44h] [rbp-1Ch]

  *(_DWORD *)&P[16] = 0;
  *a4 = 0LL;
  *a5 = 0;
  BugCheckParameter2[1] = a1;
  *a6 = 0LL;
  *(_OWORD *)P = 0LL;
  BugCheckParameter2[0] = 0x700000001LL;
  BugCheckParameter2[3] = 0x40000000LL;
  v17 = 0x80000000;
  BugCheckParameter2[2] = a3;
  MemoryRanges = MmAllocateMemoryRanges((ULONG_PTR)BugCheckParameter2);
  if ( MemoryRanges >= 0 )
  {
    v8 = 0LL;
    v9 = 0LL;
    if ( !*(_QWORD *)&P[4] )
      goto LABEL_10;
    do
    {
      v10 = *(_DWORD *)(*(_QWORD *)&P[12] + 8 * v9++);
      v8 += (((((unsigned __int64)(v10 & 0x3FFFFFFF) << 30) + 0x40000000) >> 12) + 16777214) / 0xFFFFFF;
    }
    while ( v9 < *(_QWORD *)&P[4] );
    if ( v8 )
    {
      Pool2 = ExAllocatePool2(64LL, 8 * v8, 1886217292LL);
      if ( Pool2 )
      {
        for ( i = 0LL; i < *(_QWORD *)&P[4]; ++i )
        {
          v13 = (*(_QWORD *)(*(_QWORD *)&P[12] + 8 * i) >> 12) & 0xFFFFFFFFC0000LL;
          v14 = ((*(_QWORD *)(*(_QWORD *)&P[12] + 8 * i) & 0x3FFFFFFFLL) + 1) << 18;
          *a6 += v14;
          *(_QWORD *)(Pool2 + 8 * i) = (v14 << 40) | v13;
        }
        *a4 = Pool2;
        *a5 = v8;
      }
      else
      {
        MemoryRanges = -1073741670;
      }
    }
    else
    {
LABEL_10:
      MemoryRanges = -1073741823;
    }
  }
  if ( *(_QWORD *)&P[12] )
    ExFreePoolWithTag(*(PVOID *)&P[12], 0);
  return (unsigned int)MemoryRanges;
}
