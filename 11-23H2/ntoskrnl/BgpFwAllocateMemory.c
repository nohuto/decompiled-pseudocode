/*
 * XREFs of BgpFwAllocateMemory @ 0x14038780C
 * Callers:
 *     BcpGetProgressMessages @ 0x140384E10 (BcpGetProgressMessages.c)
 *     BgpFwQueryBootGraphicsInformation @ 0x140384F24 (BgpFwQueryBootGraphicsInformation.c)
 *     BgpRasPrintGlyph @ 0x140385904 (BgpRasPrintGlyph.c)
 *     RaspAllocateMemory @ 0x1403877AC (RaspAllocateMemory.c)
 *     BgpTxtGetRegionContext @ 0x140AEC70C (BgpTxtGetRegionContext.c)
 *     TxtpAddCacheEntry @ 0x140AED9C8 (TxtpAddCacheEntry.c)
 *     BgpGxRectangleCreate @ 0x140AEDA94 (BgpGxRectangleCreate.c)
 *     BgpFwLibraryInitialize @ 0x140AEDC78 (BgpFwLibraryInitialize.c)
 *     BgpTxtCreateRegion @ 0x140AEE2AC (BgpTxtCreateRegion.c)
 *     BgpDisplayCharacterGetContext @ 0x140AEE4B8 (BgpDisplayCharacterGetContext.c)
 *     BgpConsoleInitialize @ 0x140AEE6E0 (BgpConsoleInitialize.c)
 *     ResFwBackgroundTransition @ 0x140AEEAF8 (ResFwBackgroundTransition.c)
 *     BgpBcInitializeCriticalMode @ 0x140B9C3E8 (BgpBcInitializeCriticalMode.c)
 *     FopReadNamingTable @ 0x140B9C740 (FopReadNamingTable.c)
 *     FopReadMappingTable @ 0x140B9CAAC (FopReadMappingTable.c)
 *     FopValidateFontNameTable @ 0x140B9CC7C (FopValidateFontNameTable.c)
 *     FopReadCmapTable @ 0x140B9CE00 (FopReadCmapTable.c)
 *     FopInitializeFonts @ 0x140B9CF5C (FopInitializeFonts.c)
 *     BgpFoInitialize @ 0x140B9D09C (BgpFoInitialize.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14027D1F0 (MmMapLockedPagesSpecifyCache.c)
 *     MiFreePagesFromMdl @ 0x1402EBE10 (MiFreePagesFromMdl.c)
 *     MmAllocatePagesForMdlEx @ 0x1402F89D0 (MmAllocatePagesForMdlEx.c)
 *     BgpFwReserveAllocate @ 0x140387F74 (BgpFwReserveAllocate.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall BgpFwAllocateMemory(unsigned __int64 a1)
{
  int v1; // ebp
  char *v2; // rdi
  PMDL v3; // rbx
  unsigned int v4; // r14d
  __int64 v5; // r15
  SIZE_T v6; // rsi
  char *Pool2; // rax
  __int64 v8; // rcx
  char *v9; // rax
  PMDL PagesForMdl; // rax

  if ( !a1 )
    return 0LL;
  if ( (dword_140C0E4B0 & 0x800) == 0 )
  {
    v1 = dword_140C0E4B0 & 0x8000;
    v2 = 0LL;
    v3 = 0LL;
    v4 = v1 != 0 ? 1262634818 : 1263093570;
    v5 = v1 != 0 ? 48LL : 32LL;
    v6 = v5 + a1;
    if ( v5 + a1 >= a1 && v6 < 0xFFFFEFFF )
    {
      if ( v6 < 0x1000 )
      {
        Pool2 = (char *)ExAllocatePool2(64LL, v6, v4);
LABEL_7:
        if ( !Pool2 )
          goto LABEL_20;
        v2 = &Pool2[v5];
        if ( v1 )
        {
          v8 = qword_140C0E580;
          v9 = v2 - 40;
          if ( *(__int64 **)(qword_140C0E580 + 8) != &qword_140C0E580 )
            __fastfail(3u);
          *(_QWORD *)v9 = qword_140C0E580;
          *((_QWORD *)v9 + 1) = &qword_140C0E580;
          *(_QWORD *)(v8 + 8) = v9;
          qword_140C0E580 = (__int64)(v2 - 40);
        }
        *((_DWORD *)v2 - 6) = v4;
        *((_QWORD *)v2 - 2) = v6;
        *((_QWORD *)v2 - 1) = v3;
        if ( !v2 )
        {
LABEL_20:
          if ( v3 )
          {
            MiFreePagesFromMdl((ULONG_PTR)v3, 0);
            ExFreePoolWithTag(v3, 0);
          }
        }
        return (__int64)v2;
      }
      v6 = (v6 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, v6, MmCached, 5u);
      v3 = PagesForMdl;
      if ( PagesForMdl )
      {
        if ( (PagesForMdl->MdlFlags & 5) != 0 )
          Pool2 = (char *)PagesForMdl->MappedSystemVa;
        else
          Pool2 = (char *)MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000010u);
        goto LABEL_7;
      }
    }
    return (__int64)v2;
  }
  return BgpFwReserveAllocate();
}
