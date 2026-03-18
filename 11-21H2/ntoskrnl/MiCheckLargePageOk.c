/*
 * XREFs of MiCheckLargePageOk @ 0x140B21BAC
 * Callers:
 *     MiInitNucleus @ 0x140AF47DC (MiInitNucleus.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140281450 (RtlImageNtHeader.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402FDD20 (MI_IS_PHYSICAL_ADDRESS.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     MiCheckLargePageSystemImage @ 0x140B21CDC (MiCheckLargePageSystemImage.c)
 *     MiVerifyLargeSectionLayout @ 0x140B21E08 (MiVerifyLargeSectionLayout.c)
 */

__int64 __fastcall MiCheckLargePageOk(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // rdi
  ULONG_PTR v2; // rsi
  unsigned int i; // ebp
  unsigned __int64 v5; // r14
  int v6; // eax
  unsigned int v7; // ecx
  __int64 v8; // rax
  ULONG_PTR v9; // rdi
  ULONG_PTR v10; // rcx
  unsigned __int64 v11; // rdi
  int v13; // eax

  v1 = *(_QWORD *)(BugCheckParameter2 + 16);
  LODWORD(v2) = 0;
  for ( i = 0; i < 2; ++i )
  {
    v5 = *(_QWORD *)(v1 + 48);
    v6 = MI_IS_PHYSICAL_ADDRESS(v5);
    v7 = v2 + 1;
    if ( !v6 )
      v7 = v2;
    v8 = v5 + *(unsigned int *)(v1 + 64);
    v2 = v7;
    if ( i )
    {
      MxHalDataTableEntry = v1;
      PsHalImageBase = v5;
      PsHalImageEnd = v8;
    }
    else
    {
      qword_140D68718 = v1;
      PsNtosImageBase = v5;
      PsNtosImageEnd = v8;
    }
    v1 = *(_QWORD *)v1;
  }
  v9 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16) + 48LL);
  qword_140C4F4D0 = *(_QWORD *)(BugCheckParameter2 + 16);
  v10 = *(unsigned int *)(RtlImageNtHeader(v9) + 56);
  if ( (_DWORD)v10 != 4096 )
    KeBugCheckEx(0x1Au, 0x3030207uLL, BugCheckParameter2, v10, 0LL);
  MiVerifyLargeSectionLayout(v9);
  if ( !(_DWORD)v2 )
    return 0LL;
  if ( (_DWORD)v2 != 1 )
    KeBugCheckEx(0x1Au, 0x3030203uLL, BugCheckParameter2, v2, 0LL);
  v11 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16) + 48LL);
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(v11) != 1 )
  {
    v13 = MI_IS_PHYSICAL_ADDRESS(v11);
    KeBugCheckEx(0x1Au, 0x3030204uLL, BugCheckParameter2, v11, v13);
  }
  if ( ((v11 + 0x1FFFFF) & 0xFFFFFFFFFFE00000uLL) != v11 )
    KeBugCheckEx(0x1Au, 0x3030206uLL, BugCheckParameter2, v11, 0LL);
  MiCheckLargePageSystemImage(BugCheckParameter2);
  MiFlags |= 4u;
  return 1LL;
}
