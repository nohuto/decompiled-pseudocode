/*
 * XREFs of IoFreeMdl @ 0x140349550
 * Callers:
 *     sub_140230618 @ 0x140230618 (sub_140230618.c)
 *     sub_140233930 @ 0x140233930 (sub_140233930.c)
 *     sub_140234D58 @ 0x140234D58 (sub_140234D58.c)
 *     sub_1402459E8 @ 0x1402459E8 (sub_1402459E8.c)
 *     CcPrepareMdlWrite @ 0x140253190 (CcPrepareMdlWrite.c)
 *     sub_1402581E0 @ 0x1402581E0 (sub_1402581E0.c)
 *     sub_14029BAD0 @ 0x14029BAD0 (sub_14029BAD0.c)
 *     sub_14029C34C @ 0x14029C34C (sub_14029C34C.c)
 *     sub_1402B59D0 @ 0x1402B59D0 (sub_1402B59D0.c)
 *     sub_1402BD970 @ 0x1402BD970 (sub_1402BD970.c)
 *     sub_14032A7D0 @ 0x14032A7D0 (sub_14032A7D0.c)
 *     sub_1403428E0 @ 0x1403428E0 (sub_1403428E0.c)
 *     sub_140347E10 @ 0x140347E10 (sub_140347E10.c)
 *     sub_140503D4C @ 0x140503D4C (sub_140503D4C.c)
 *     sub_140511220 @ 0x140511220 (sub_140511220.c)
 *     sub_140511A58 @ 0x140511A58 (sub_140511A58.c)
 *     sub_140513870 @ 0x140513870 (sub_140513870.c)
 *     sub_140516D80 @ 0x140516D80 (sub_140516D80.c)
 *     sub_140517000 @ 0x140517000 (sub_140517000.c)
 *     sub_14053A460 @ 0x14053A460 (sub_14053A460.c)
 *     CcMdlWriteAbort @ 0x14053BB80 (CcMdlWriteAbort.c)
 *     sub_140543148 @ 0x140543148 (sub_140543148.c)
 *     sub_1405570D0 @ 0x1405570D0 (sub_1405570D0.c)
 *     sub_1405A29F8 @ 0x1405A29F8 (sub_1405A29F8.c)
 *     sub_1405A3818 @ 0x1405A3818 (sub_1405A3818.c)
 *     sub_14060EEB0 @ 0x14060EEB0 (sub_14060EEB0.c)
 *     sub_140658670 @ 0x140658670 (sub_140658670.c)
 *     sub_1406C14E4 @ 0x1406C14E4 (sub_1406C14E4.c)
 *     sub_1406E0358 @ 0x1406E0358 (sub_1406E0358.c)
 *     sub_1406E9DE4 @ 0x1406E9DE4 (sub_1406E9DE4.c)
 *     sub_140705E1C @ 0x140705E1C (sub_140705E1C.c)
 *     CcMdlRead @ 0x1407085F0 (CcMdlRead.c)
 *     sub_1407E2434 @ 0x1407E2434 (sub_1407E2434.c)
 *     sub_1407F5914 @ 0x1407F5914 (sub_1407F5914.c)
 *     sub_1407F7C68 @ 0x1407F7C68 (sub_1407F7C68.c)
 *     sub_14092EF10 @ 0x14092EF10 (sub_14092EF10.c)
 *     sub_1409303C0 @ 0x1409303C0 (sub_1409303C0.c)
 *     sub_140930460 @ 0x140930460 (sub_140930460.c)
 *     sub_140931378 @ 0x140931378 (sub_140931378.c)
 *     sub_140933FE8 @ 0x140933FE8 (sub_140933FE8.c)
 *     sub_140935790 @ 0x140935790 (sub_140935790.c)
 *     sub_14093C640 @ 0x14093C640 (sub_14093C640.c)
 *     sub_14095212C @ 0x14095212C (sub_14095212C.c)
 *     sub_140970AB4 @ 0x140970AB4 (sub_140970AB4.c)
 *     sub_140970D2C @ 0x140970D2C (sub_140970D2C.c)
 *     sub_140971B68 @ 0x140971B68 (sub_140971B68.c)
 *     sub_140976140 @ 0x140976140 (sub_140976140.c)
 *     sub_1409778EC @ 0x1409778EC (sub_1409778EC.c)
 *     sub_14097D9E0 @ 0x14097D9E0 (sub_14097D9E0.c)
 *     sub_14098F634 @ 0x14098F634 (sub_14098F634.c)
 *     sub_140A07780 @ 0x140A07780 (sub_140A07780.c)
 *     sub_140A0EC90 @ 0x140A0EC90 (sub_140A0EC90.c)
 *     sub_140A872C8 @ 0x140A872C8 (sub_140A872C8.c)
 *     sub_140A880B0 @ 0x140A880B0 (sub_140A880B0.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __stdcall IoFreeMdl(PMDL Mdl)
{
  CSHORT MdlFlags; // ax
  __int64 v3; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 v5; // rcx

  MdlFlags = Mdl->MdlFlags;
  if ( (MdlFlags & 0x20) != 0 )
  {
    MmUnmapLockedPages(Mdl->MappedSystemVa, Mdl);
    MdlFlags = Mdl->MdlFlags;
  }
  if ( (MdlFlags & 8) != 0 )
  {
    v3 = *((unsigned __int16 *)&Mdl->MdlFlags + 1);
    if ( (unsigned int)v3 >= (unsigned int)dword_140D06884
      || (_mm_lfence(), (CurrentPrcb = (struct _KPRCB *)qword_140D088C0[v3]) == 0LL) )
    {
      CurrentPrcb = KeGetCurrentPrcb();
    }
    v5 = *((_QWORD *)CurrentPrcb + 262);
    ++*(_DWORD *)(v5 + 28);
    if ( *(_WORD *)v5 < *(_WORD *)(v5 + 16)
      || (++*(_DWORD *)(v5 + 32),
          v5 = *((_QWORD *)CurrentPrcb + 263),
          ++*(_DWORD *)(v5 + 28),
          *(_WORD *)v5 < *(_WORD *)(v5 + 16)) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v5, (PSLIST_ENTRY)Mdl);
    }
    else
    {
      ++*(_DWORD *)(v5 + 32);
      sub_14042A5E0(Mdl, CurrentPrcb);
    }
  }
  else
  {
    ExFreePoolWithTag(Mdl, 0);
  }
}
