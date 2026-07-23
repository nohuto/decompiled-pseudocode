/*
 * XREFs of sub_1402FD820 @ 0x1402FD820
 * Callers:
 *     MmUnlockPagableImageSection @ 0x140241620 (MmUnlockPagableImageSection.c)
 *     sub_1402D3980 @ 0x1402D3980 (sub_1402D3980.c)
 *     sub_1403B60E0 @ 0x1403B60E0 (sub_1403B60E0.c)
 *     sub_14055C23C @ 0x14055C23C (sub_14055C23C.c)
 *     sub_1406178F0 @ 0x1406178F0 (sub_1406178F0.c)
 *     MmLockPagableSectionByHandle @ 0x1406BC300 (MmLockPagableSectionByHandle.c)
 *     MmLockPagableImageSection @ 0x1406F5E50 (MmLockPagableImageSection.c)
 *     sub_14093CC0C @ 0x14093CC0C (sub_14093CC0C.c)
 *     sub_140952A20 @ 0x140952A20 (sub_140952A20.c)
 *     sub_14096029C @ 0x14096029C (sub_14096029C.c)
 *     sub_140971B68 @ 0x140971B68 (sub_140971B68.c)
 *     sub_14098C0DC @ 0x14098C0DC (sub_14098C0DC.c)
 *     sub_140B07C00 @ 0x140B07C00 (sub_140B07C00.c)
 *     sub_140B0872C @ 0x140B0872C (sub_140B0872C.c)
 *     sub_140B1A508 @ 0x140B1A508 (sub_140B1A508.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x1402FD9C0 (RtlImageNtHeaderEx.c)
 *     sub_1402FDA80 @ 0x1402FDA80 (sub_1402FDA80.c)
 *     sub_1402FDD20 @ 0x1402FDD20 (sub_1402FDD20.c)
 *     sub_140369180 @ 0x140369180 (sub_140369180.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1407EDA2C @ 0x1407EDA2C (sub_1407EDA2C.c)
 */

void __fastcall sub_1402FD820(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v2; // rsi
  __int64 v4; // rax
  __int64 v5; // rdi
  char *v6; // rbp
  unsigned __int64 v7; // rcx
  __int64 v8; // r9
  unsigned int v9; // ecx
  __int64 v10; // r11
  unsigned __int64 v11; // r9
  unsigned __int64 SectionAlignment; // r8
  __int64 v13; // r10
  unsigned __int64 v14; // rcx
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+50h] [rbp+8h] BYREF

  if ( BugCheckParameter2 != 1 )
  {
    v2 = (unsigned int)BugCheckParameter3;
    if ( !(unsigned int)sub_1402FDD20(BugCheckParameter2)
      && (BugCheckParameter2 < 0xFFFF800000000000uLL || byte_140C53F50[((BugCheckParameter2 >> 39) & 0x1FF) - 256] != 1) )
    {
      v4 = sub_1402FDA80(BugCheckParameter2, 2LL);
      v5 = v4;
      if ( !v4 )
        KeBugCheckEx(0x1Au, 0x1012uLL, BugCheckParameter2, v2, 0LL);
      v6 = *(char **)(v4 + 48);
      OutHeaders = 0LL;
      RtlImageNtHeaderEx(1u, v6, 0LL, &OutHeaders);
      v7 = 0xCCCCCCCCCCCCCCCDuLL
         * ((__int64)(BugCheckParameter2 - OutHeaders->FileHeader.SizeOfOptionalHeader - (_QWORD)OutHeaders - 24) >> 3);
      v8 = (unsigned int)v7;
      if ( (unsigned int)v7 >= OutHeaders->FileHeader.NumberOfSections )
        KeBugCheckEx(
          0x1Au,
          0x1013uLL,
          BugCheckParameter2 | v2,
          (unsigned int)v7,
          OutHeaders->FileHeader.NumberOfSections);
      v9 = *(_DWORD *)(BugCheckParameter2 + 16);
      v10 = *(_QWORD *)(v5 + 224) + 4 * v8;
      if ( v9 < *(_DWORD *)(BugCheckParameter2 + 8) )
        v9 = *(_DWORD *)(BugCheckParameter2 + 8);
      v11 = (unsigned __int64)&v6[*(unsigned int *)(BugCheckParameter2 + 12)];
      SectionAlignment = OutHeaders->OptionalHeader.SectionAlignment;
      v13 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( SectionAlignment > 0x1000 )
        SectionAlignment = 4096LL;
      v14 = (((~(SectionAlignment - 1) & (SectionAlignment + v9 + v11 - 1)) + 4095) >> 9) & 0x7FFFFFFFF8LL;
      if ( (_DWORD)v2 == 1 )
        sub_1407EDA2C(v5, v10, v13, v14 - 0x98000000008LL);
      else
        sub_140369180(v10, v13, v14 - 0x98000000008LL, BugCheckParameter2);
    }
  }
}
