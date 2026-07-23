/*
 * XREFs of MiCheckLargePageOk @ 0x140B47240
 * Callers:
 *     MiInitNucleus @ 0x140B44F88 (MiInitNucleus.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140214B50 (RtlImageNtHeader.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140284790 (MI_IS_PHYSICAL_ADDRESS.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     MiCheckLargePageSystemImage @ 0x140B64A90 (MiCheckLargePageSystemImage.c)
 *     MiVerifyLargeSectionLayout @ 0x140B67F7C (MiVerifyLargeSectionLayout.c)
 */

__int64 __fastcall MiCheckLargePageOk(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // rdi
  unsigned int v2; // ebp
  unsigned int v3; // esi
  void *v5; // r14
  int v6; // eax
  unsigned int v7; // ecx
  __int64 v8; // rax
  ULONG_PTR v9; // r15
  __int64 *v10; // r14
  _QWORD *v11; // rdi
  int v12; // esi
  void *v13; // rbp
  ULONG_PTR SectionAlignment; // rdx
  _QWORD *v15; // rsi
  int v16; // ebp
  unsigned __int64 v17; // rdi
  int v19; // eax

  v1 = *(_QWORD *)(BugCheckParameter2 + 16);
  v2 = 0;
  v3 = 0;
  do
  {
    while ( 1 )
    {
      v5 = *(void **)(v1 + 48);
      v6 = MI_IS_PHYSICAL_ADDRESS((unsigned __int64)v5);
      v7 = v2 + 1;
      if ( !v6 )
        v7 = v2;
      v8 = (__int64)v5 + *(unsigned int *)(v1 + 64);
      v2 = v7;
      v9 = v7;
      if ( v3 )
        break;
      qword_140D81720 = v1;
      v3 = 1;
      PsNtosImageBase = v5;
      v1 = *(_QWORD *)v1;
      PsNtosImageEnd = v8;
    }
    ++v3;
    MxHalDataTableEntry = v1;
    PsHalImageBase = v5;
    v1 = *(_QWORD *)v1;
    PsHalImageEnd = v8;
  }
  while ( v3 < 2 );
  v10 = &qword_140C65A18;
  v11 = *(_QWORD **)(BugCheckParameter2 + 16);
  v12 = 0;
  do
  {
    v13 = (void *)v11[6];
    *v10 = (__int64)v11;
    SectionAlignment = RtlImageNtHeader(v13)->OptionalHeader.SectionAlignment;
    if ( (_DWORD)SectionAlignment != 4096 )
      KeBugCheckEx(0x1Au, 0x3030207uLL, BugCheckParameter2, SectionAlignment, 0LL);
    MiVerifyLargeSectionLayout((ULONG_PTR)v13);
    v11 = (_QWORD *)*v11;
    ++v12;
    ++v10;
  }
  while ( !v12 );
  if ( !(_DWORD)v9 )
    return 0LL;
  if ( (_DWORD)v9 != 1 )
    KeBugCheckEx(0x1Au, 0x3030203uLL, BugCheckParameter2, v9, 0LL);
  v15 = *(_QWORD **)(BugCheckParameter2 + 16);
  v16 = 0;
  do
  {
    v17 = v15[6];
    if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v17) != 1 )
    {
      v19 = MI_IS_PHYSICAL_ADDRESS(v17);
      KeBugCheckEx(0x1Au, 0x3030204uLL, BugCheckParameter2, v17, v19);
    }
    if ( ((v17 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL) != v17 )
      KeBugCheckEx(0x1Au, 0x3030206uLL, BugCheckParameter2, v17, 0LL);
    MiCheckLargePageSystemImage(BugCheckParameter2);
    v15 = (_QWORD *)*v15;
    ++v16;
  }
  while ( !v16 );
  LODWORD(MiFlags) = MiFlags | 4;
  return 1LL;
}
