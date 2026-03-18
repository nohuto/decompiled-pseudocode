/*
 * XREFs of MiReserveBootDriverPtes @ 0x140B1AC34
 * Callers:
 *     MiInitializeDriverPtes @ 0x140B1A80C (MiInitializeDriverPtes.c)
 * Callees:
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     RtlSetBits @ 0x1402E4C80 (RtlSetBits.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiReserveBootDriverPtes(unsigned __int64 a1, int a2)
{
  __int64 v3; // rbp
  __int64 v4; // rcx
  const void **v5; // rdi
  unsigned __int64 v6; // r14
  __int64 v7; // r10
  unsigned __int64 v8; // r8
  __int64 result; // rax
  unsigned int v10; // r12d
  RTL_BITMAP *v11; // rsi
  unsigned int *v12; // rax

  v3 = ((dword_140C4F478 & 0xFFF) != 0) + a2 + ((unsigned int)dword_140C4F478 >> 12);
  v4 = (__int64)(a1 << 25) >> 16;
  if ( v4 != PsHalImageBase && v4 != PsNtosImageBase )
    v3 = (unsigned int)(dword_140C4F404 + v3);
  v5 = (const void **)qword_140C4F4E8[0];
  v6 = a1 & 0xFFFFFFFFFFFFF000uLL;
  if ( qword_140C4F4E8[0] )
  {
    v7 = *((_QWORD *)qword_140C4F4E8[0] + 1);
    v8 = v7 + 8LL * *((unsigned int *)qword_140C4F4E8[0] + 4);
    if ( a1 + 8 * v3 <= v8 )
    {
      RtlSetBits((PRTL_BITMAP)qword_140C4F4E8[0] + 1, (__int64)(a1 - v7) >> 3, v3);
      return 1LL;
    }
    if ( a1 >= v8 )
      v5 = 0LL;
    else
      v6 = *((_QWORD *)qword_140C4F4E8[0] + 1);
  }
  v10 = (__int64)(((a1 + 4088 + 8 * v3) & 0xFFFFFFFFFFFFF000uLL) - v6) >> 3;
  result = (__int64)MiAllocatePool(64, ((unsigned __int64)v10 >> 3) + 40, 0x70446D4Du);
  v11 = (RTL_BITMAP *)result;
  if ( result )
  {
    *(_DWORD *)(result + 16) = v10;
    v12 = (unsigned int *)(result + 40);
    v11[1].Buffer = v12;
    if ( v5 )
    {
      memmove(v12, v5[3], (unsigned __int64)*((unsigned int *)v5 + 4) >> 3);
      qword_140C4F4E8[0] = (PVOID)*v5;
      ExFreePoolWithTag(v5, 0);
    }
    RtlSetBits(v11 + 1, (__int64)(a1 - v6) >> 3, v3);
    v11[2].SizeOfBitMap = 0;
    *(&v11[2].SizeOfBitMap + 1) = 1;
    v11->Buffer = (unsigned int *)v6;
    *(PVOID *)&v11->SizeOfBitMap = qword_140C4F4E8[0];
    qword_140C4F4E8[0] = v11;
    return 1LL;
  }
  return result;
}
