/*
 * XREFs of ?CleanUpEUDC@@YAXXZ @ 0x1C00EF758
 * Callers:
 *     GdiMultiUserFontCleanup @ 0x1C00EE660 (GdiMultiUserFontCleanup.c)
 * Callees:
 *     bUnloadEudcFont @ 0x1C00119A4 (bUnloadEudcFont.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C0011B90 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     GreEnableEUDC @ 0x1C00991AC (GreEnableEUDC.c)
 */

void CleanUpEUDC(void)
{
  char v0; // al
  PFTOBJ *v1; // rcx
  unsigned int v2; // edi
  char *v3; // rbx

  if ( !gpPFTPublic || (v0 = 1, !ghsemPublicPFT) )
    v0 = 0;
  dword_1C0336380 |= 2u;
  if ( v0 )
    GreEnableEUDC(0);
  if ( qword_1C0335A58 )
  {
    Win32FreePool(qword_1C0335A58);
    qword_1C0335A58 = 0LL;
  }
  if ( qword_1C0337C90 )
  {
    Win32FreePool(qword_1C0337C90);
    qword_1C0337C90 = 0LL;
  }
  if ( bFinallyInitializeFontAssocDefault )
  {
    v2 = 0;
    v3 = (char *)&unk_1C032FE0C;
    do
    {
      if ( *((_DWORD *)v3 - 31) && *(_WORD *)v3 && *(_QWORD *)(v3 + 524) )
        bUnloadEudcFont((__int64)&unk_1C0330018 + 664 * v2);
      ++v2;
      v3 += 664;
    }
    while ( v2 < 7 );
  }
  v1 = pFontAssocSubs;
  if ( pFontAssocSubs )
  {
    Win32FreePool(pFontAssocSubs);
    pFontAssocSubs = 0LL;
  }
  if ( gbSystemDBCSFontEnabled )
    PFTOBJ::bUnloadEUDCFont(v1, &gawcSystemDBCSFontPath);
}
