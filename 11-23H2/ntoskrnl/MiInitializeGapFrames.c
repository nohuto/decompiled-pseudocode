/*
 * XREFs of MiInitializeGapFrames @ 0x140B41EF8
 * Callers:
 *     MiInitNucleus @ 0x140B41888 (MiInitNucleus.c)
 * Callees:
 *     MiGetPage @ 0x14026D5F0 (MiGetPage.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiReservePtes @ 0x14027D420 (MiReservePtes.c)
 *     MiReleasePtes @ 0x1402CBB70 (MiReleasePtes.c)
 *     MiMakeValidPte @ 0x1402CF540 (MiMakeValidPte.c)
 *     MiAcquireNonPagedResources @ 0x1402E45A4 (MiAcquireNonPagedResources.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 */

__int64 __fastcall MiInitializeGapFrames(__int64 a1, __int64 *a2)
{
  int v2; // ebp
  __int64 v4; // r14
  __int64 *v5; // r12
  unsigned int v6; // esi
  __int64 *v7; // r15
  __int64 Page; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // rbx
  unsigned __int64 ValidPte; // rdi
  BOOL v13; // eax
  __int64 v14; // r8
  __int64 v15; // r11
  __int64 v16; // rdi
  __int64 v17; // r8
  unsigned __int64 v18; // rax
  bool v20; // zf

  v2 = 0;
  if ( a1 )
  {
    if ( a1 != -1 )
      return 0LL;
    v4 = qword_140C696F8;
  }
  else
  {
    v4 = qword_140C69710;
  }
  v5 = (__int64 *)MiReservePtes((__int64)&qword_140C69940, 3u);
  if ( v5 && (int)MiAcquireNonPagedResources((unsigned __int64)MiSystemPartition, 3uLL, 0LL, 2u) >= 0 )
  {
    v6 = 0;
    v7 = a2;
    while ( !v6 )
    {
LABEL_17:
      *v7 = v4;
      ++v6;
      ++v7;
      if ( v6 >= 4 )
      {
        MiReleasePtes((__int64)&qword_140C69940, v5, 3u);
        return 1LL;
      }
    }
    Page = MiGetPage((__int64)MiSystemPartition, v6, 0x208u);
    v4 = Page;
    if ( Page == -1 )
      return 0LL;
    v9 = 48 * Page - 0x220000000000LL;
    *(_QWORD *)(v9 + 40) &= ~0x8000000000000000uLL;
    v10 = *(_QWORD *)(v9 + 24) & 0xC000000000000001uLL;
    *(_WORD *)(v9 + 32) = 1;
    *(_QWORD *)(v9 + 24) = v10 | 1;
    v11 = (__int64)&v5[v6 - 1];
    ValidPte = MiMakeValidPte((unsigned __int64)&v5[v6], v4, 2684354564LL);
    v13 = MiPteInShadowRange(v11);
    v15 = 0LL;
    if ( !v13 )
    {
LABEL_9:
      *(_QWORD *)v11 = ValidPte;
      if ( v2 )
        MiWritePteShadow(v11, ValidPte, v14);
      v16 = v11 << 25 >> 16;
      v17 = 536870913LL;
      if ( v6 != 1 )
      {
        v11 = v15;
        v17 = 2818572292LL;
      }
      v18 = MiMakeValidPte(v11, a2[v6 - 1], v17);
      if ( (MiFlags & 0x2000000) == 0 && ((unsigned __int8)(1 << (v6 - 1)) & (unsigned __int8)byte_140C65A8F) != 0 )
        v18 &= ~0x20uLL;
      v2 = 0;
      memset64((void *)v16, v18, 0x200uLL);
      goto LABEL_17;
    }
    if ( MiPteHasShadow() )
    {
      v2 = 1;
      if ( HIBYTE(word_140C66CFC) != (_BYTE)v15 )
        goto LABEL_9;
      v20 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_9;
      v20 = (ValidPte & 1) == 0;
    }
    if ( !v20 )
      ValidPte |= 0x8000000000000000uLL;
    goto LABEL_9;
  }
  return 0LL;
}
