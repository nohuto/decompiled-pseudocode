/*
 * XREFs of MiUseSlabAllocator @ 0x1402DED50
 * Callers:
 *     MiWalkEntireImage @ 0x1402DB270 (MiWalkEntireImage.c)
 *     MiPfPutPagesInTransition @ 0x1402DE2D0 (MiPfPutPagesInTransition.c)
 *     MiGetHardFaultPages @ 0x1402DF504 (MiGetHardFaultPages.c)
 *     MiResolveMappedFileFault @ 0x1402E0870 (MiResolveMappedFileFault.c)
 *     MiFinalizeImageHeaderPage @ 0x1403306C4 (MiFinalizeImageHeaderPage.c)
 *     MiPfPrepareReadList @ 0x1406F64B0 (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x1407448D0 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     MiGetSlabAllocatorTypeByProtection @ 0x14046DA0E (MiGetSlabAllocatorTypeByProtection.c)
 */

__int64 __fastcall MiUseSlabAllocator(__int64 a1, __int64 *a2, __int16 a3, _DWORD *a4)
{
  __int64 v4; // rax
  int v7; // r8d
  __int64 v8; // r9
  int SlabAllocatorTypeByProtection; // eax
  _DWORD *v10; // r11
  unsigned int v11; // r8d

  v4 = *a2;
  if ( (*(_DWORD *)(*a2 + 56) & 0x20) == 0 || (*(_BYTE *)(v4 + 62) & 0xC) == 4 || (a3 & 0x400) == 0 )
    return 0LL;
  v7 = *(_DWORD *)(v4 + 92);
  v8 = (*((unsigned __int16 *)a2 + 16) >> 1) & 0x1F;
  if ( (v7 & 0xC0000) == 0 )
  {
    if ( byte_140C658F6 )
    {
      *a4 = 4;
      return *(_BYTE *)(a1 + 16204) == 0;
    }
    return 0LL;
  }
  if ( (*(_DWORD *)(a1 + 4) & 8) == 0
    || (*((_BYTE *)a2 + 34) & 2) != 0 && ((*((unsigned __int16 *)a2 + 16) >> 1) & 5) == 4
    || (MiFlags & 0x100000000LL) != 0
    && ((*((unsigned __int16 *)a2 + 16) >> 1) & 2) == 0
    && ((v7 & 0x20000) == 0 || a2 == (__int64 *)(v4 + 128) || (_DWORD)v8 != 1) )
  {
    return 0LL;
  }
  SlabAllocatorTypeByProtection = MiGetSlabAllocatorTypeByProtection(HIDWORD(MiFlags), (unsigned int)v8, 1LL, v8);
  *v10 = SlabAllocatorTypeByProtection;
  return v11;
}
