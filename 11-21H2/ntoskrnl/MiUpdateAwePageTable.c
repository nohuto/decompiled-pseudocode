/*
 * XREFs of MiUpdateAwePageTable @ 0x1405AC9A0
 * Callers:
 *     MiDeleteEnclavePage @ 0x1405A931C (MiDeleteEnclavePage.c)
 *     MiWriteEnclavePte @ 0x1405AA07C (MiWriteEnclavePte.c)
 *     MiFreePhysicalPages @ 0x1405AAA4C (MiFreePhysicalPages.c)
 *     MiWriteAwePtes @ 0x1405ACB84 (MiWriteAwePtes.c)
 * Callees:
 *     MiDecreaseUsedPtesCount @ 0x140232154 (MiDecreaseUsedPtesCount.c)
 *     MiIncreaseUsedPtesCount @ 0x14028FB74 (MiIncreaseUsedPtesCount.c)
 *     MiGetUsedPtesHandle @ 0x1402D03D0 (MiGetUsedPtesHandle.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiUpdateAwePageTable(unsigned __int64 a1, __int64 a2, signed int a3)
{
  unsigned int v6; // ebx
  unsigned __int64 v7; // rsi
  __int64 v8; // rdx
  unsigned __int64 v9; // rdi
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 UsedPtesHandle; // rcx
  int v14; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0;
  v7 = (__int64)(a1 << 25) >> 16 << 25 >> 16;
  if ( a2 )
  {
    v9 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(a1) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v14 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v14, v8, v10, v11);
      while ( *(__int64 *)(v9 + 24) < 0 );
    }
    *(_QWORD *)(v9 + 24) ^= (*(_QWORD *)(v9 + 24) ^ (*(_QWORD *)(v9 + 24) + a2)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( a1 == 0xFFFFF6FB7DBEDF68uLL || !a3 )
    return 0LL;
  UsedPtesHandle = MiGetUsedPtesHandle(v7);
  if ( a3 <= 0 )
  {
    if ( !(unsigned int)MiDecreaseUsedPtesCount(UsedPtesHandle, (unsigned int)-a3) )
      return 1;
  }
  else
  {
    MiIncreaseUsedPtesCount(UsedPtesHandle, a3);
  }
  return v6;
}
