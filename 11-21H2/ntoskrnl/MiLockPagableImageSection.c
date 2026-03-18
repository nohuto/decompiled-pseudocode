/*
 * XREFs of MiLockPagableImageSection @ 0x1402FD820
 * Callers:
 *     MmUnlockPagableImageSection @ 0x140241620 (MmUnlockPagableImageSection.c)
 *     PoRunDownDeviceObject @ 0x1402D3980 (PoRunDownDeviceObject.c)
 *     HalpPowerStateCallback @ 0x1403B60E0 (HalpPowerStateCallback.c)
 *     IopLiveDumpUnLockPages @ 0x14055C23C (IopLiveDumpUnLockPages.c)
 *     DifMmUnlockPagableImageSectionWrapper @ 0x1406178F0 (DifMmUnlockPagableImageSectionWrapper.c)
 *     MmLockPagableSectionByHandle @ 0x1406BC300 (MmLockPagableSectionByHandle.c)
 *     MmLockPagableDataSection @ 0x1406F5E50 (MmLockPagableDataSection.c)
 *     IopLiveDumpLockPages @ 0x14093CC0C (IopLiveDumpLockPages.c)
 *     PnprLockPagesForReplace @ 0x140952A20 (PnprLockPagesForReplace.c)
 *     KiStartDynamicProcessor @ 0x14096029C (KiStartDynamicProcessor.c)
 *     MiApplyImageHotPatch @ 0x140971B68 (MiApplyImageHotPatch.c)
 *     PopDirectedDripsNotifyAppsAndServices @ 0x14098C0DC (PopDirectedDripsNotifyAppsAndServices.c)
 *     MiInitSystem @ 0x140B07C00 (MiInitSystem.c)
 *     MiLockPagableSections @ 0x140B0872C (MiLockPagableSections.c)
 *     KiInitializeMTRR @ 0x140B1A508 (KiInitializeMTRR.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x1402FD9C0 (RtlImageNtHeaderEx.c)
 *     MiLookupDataTableEntry @ 0x1402FDA80 (MiLookupDataTableEntry.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402FDD20 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiUnlockImageSection @ 0x140369180 (MiUnlockImageSection.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     MiLockImageSection @ 0x1407EDA2C (MiLockImageSection.c)
 */

void __fastcall MiLockPagableImageSection(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v2; // rsi
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rbp
  unsigned __int64 v7; // rcx
  __int64 v8; // r9
  unsigned int v9; // ecx
  __int64 v10; // r11
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // r8
  __int64 v13; // r10
  unsigned __int64 v14; // rcx
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  if ( BugCheckParameter2 != 1 )
  {
    v2 = (unsigned int)BugCheckParameter3;
    if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS(BugCheckParameter2)
      && (BugCheckParameter2 < 0xFFFF800000000000uLL || byte_140C53F50[((BugCheckParameter2 >> 39) & 0x1FF) - 256] != 1) )
    {
      v4 = MiLookupDataTableEntry(BugCheckParameter2, 2LL);
      v5 = v4;
      if ( !v4 )
        KeBugCheckEx(0x1Au, 0x1012uLL, BugCheckParameter2, v2, 0LL);
      v6 = *(_QWORD *)(v4 + 48);
      v15 = 0LL;
      RtlImageNtHeaderEx(1LL, v6, 0LL, &v15);
      v7 = 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(BugCheckParameter2 - *(unsigned __int16 *)(v15 + 20) - v15 - 24) >> 3);
      v8 = (unsigned int)v7;
      if ( (unsigned int)v7 >= *(unsigned __int16 *)(v15 + 6) )
        KeBugCheckEx(0x1Au, 0x1013uLL, BugCheckParameter2 | v2, (unsigned int)v7, *(unsigned __int16 *)(v15 + 6));
      v9 = *(_DWORD *)(BugCheckParameter2 + 16);
      v10 = *(_QWORD *)(v5 + 224) + 4 * v8;
      if ( v9 < *(_DWORD *)(BugCheckParameter2 + 8) )
        v9 = *(_DWORD *)(BugCheckParameter2 + 8);
      v11 = v6 + *(unsigned int *)(BugCheckParameter2 + 12);
      v12 = *(unsigned int *)(v15 + 56);
      v13 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v12 > 0x1000 )
        v12 = 4096LL;
      v14 = (((~(v12 - 1) & (v12 + v9 + v11 - 1)) + 4095) >> 9) & 0x7FFFFFFFF8LL;
      if ( (_DWORD)v2 == 1 )
        MiLockImageSection(v5, v10, v13, v14 - 0x98000000008LL);
      else
        MiUnlockImageSection(v10, v13, v14 - 0x98000000008LL, BugCheckParameter2);
    }
  }
}
