/*
 * XREFs of MiAllocateTopLevelPage @ 0x1407F1AF8
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x1407F17B4 (MmCreateProcessAddressSpace.c)
 *     MiAllocateProcessShadow @ 0x1407F1A10 (MiAllocateProcessShadow.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiInitializePfnForOtherProcess @ 0x14027CCE4 (MiInitializePfnForOtherProcess.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MiGetNextPageColor @ 0x1402EB3DC (MiGetNextPageColor.c)
 *     MiSetPfnLink @ 0x140313D14 (MiSetPfnLink.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiGetPage @ 0x1403250B0 (MiGetPage.c)
 *     MiGetProcessPartition @ 0x14032A72C (MiGetProcessPartition.c)
 *     MiInitializePageColorBase @ 0x140339C20 (MiInitializePageColorBase.c)
 *     MiSetPfnPteFrame @ 0x14033C3E0 (MiSetPfnPteFrame.c)
 *     MiSetPageTablePfnBuddy @ 0x14036C868 (MiSetPageTablePfnBuddy.c)
 *     MiWaitForFreePage @ 0x1405B8348 (MiWaitForFreePage.c)
 */

__int64 __fastcall MiAllocateTopLevelPage(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rcx
  _QWORD *ProcessPartition; // rbx
  int v6; // r9d
  unsigned int NextPageColor; // edi
  unsigned int i; // edx
  __int64 Page; // rax
  __int64 v10; // r14
  _QWORD *v11; // rdi
  unsigned __int64 v12; // rbx
  __int64 v13; // rcx
  unsigned __int64 ValidPte; // rdi
  int v15; // ebp
  unsigned __int64 *v16; // rdi
  int v17; // esi
  bool v19; // zf
  bool v20; // zf
  _OWORD v21[2]; // [rsp+20h] [rbp-28h] BYREF

  v21[0] = 0LL;
  ProcessPartition = (_QWORD *)MiGetProcessPartition(a1);
  MiInitializePageColorBase(v4 + 1664, v6, (__int64)v21);
  NextPageColor = MiGetNextPageColor((__int64)v21);
  for ( i = NextPageColor; ; i = NextPageColor )
  {
    Page = MiGetPage((__int64)ProcessPartition, i, 0x302u);
    v10 = Page;
    if ( Page != -1 )
      break;
    MiWaitForFreePage(ProcessPartition);
  }
  v11 = (_QWORD *)(48 * Page - 0x220000000000LL);
  MiSetPfnLink(v11, 0LL);
  v12 = MiMakeValidPte(0LL, v10, -1879048186) & 0xFFFFFFFFFFFFFEFFuLL;
  MiSetPfnPteFrame((__int64)v11, v10);
  *v11 = 0LL;
  MiSetPageTablePfnBuddy(v13, a1, 0);
  MiInitializePfnForOtherProcess(v10, 0xFFFFF6FB7DBEDF68uLL, v10, 512);
  ValidPte = MiMakeValidPte(0LL, v10, -1610612732);
  v15 = 0;
  if ( MiPteInShadowRange(a2) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v15 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_4;
      v19 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_4;
      v19 = (ValidPte & 1) == 0;
    }
    if ( !v19 )
      ValidPte |= 0x8000000000000000uLL;
  }
LABEL_4:
  *(_QWORD *)a2 = ValidPte;
  if ( v15 )
    MiWritePteShadow(a2, ValidPte);
  v16 = (unsigned __int64 *)(((__int64)(a2 << 25) >> 16) + 3944);
  v17 = 0;
  if ( MiPteInShadowRange((unsigned __int64)v16) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v17 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_7;
      v20 = (v12 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_7;
      v20 = (v12 & 1) == 0;
    }
    if ( !v20 )
      v12 |= 0x8000000000000000uLL;
  }
LABEL_7:
  *v16 = v12;
  if ( v17 )
    MiWritePteShadow((__int64)v16, v12);
  return v10;
}
