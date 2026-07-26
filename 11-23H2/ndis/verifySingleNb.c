/*
 * XREFs of verifySingleNb @ 0x1C0072DBC
 * Callers:
 *     verifySingleRxNbl @ 0x1C0072FAC (verifySingleRxNbl.c)
 *     verifySingleTxNbl @ 0x1C0072FE0 (verifySingleTxNbl.c)
 * Callees:
 *     datapathVerifierReportProblem @ 0x1C0072570 (datapathVerifierReportProblem.c)
 *     validateMemoryPages @ 0x1C0072CD0 (validateMemoryPages.c)
 *     verifySingleMdl @ 0x1C0072D60 (verifySingleMdl.c)
 */

void __fastcall verifySingleNb(ULONG_PTR BugCheckParameter4, ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v4; // rdi
  char v5; // bp
  unsigned int v6; // r14d
  unsigned int v7; // r15d
  unsigned int v8; // r8d
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // edx

  if ( *(_WORD *)(BugCheckParameter4 + 50) )
    datapathVerifierReportProblem(0x41uLL, BugCheckParameter3, BugCheckParameter4);
  if ( !*(_QWORD *)(BugCheckParameter4 + 32) )
    datapathVerifierReportProblem(0x50uLL, BugCheckParameter3, BugCheckParameter4);
  v4 = *(_QWORD *)(BugCheckParameter4 + 32);
  v5 = 0;
  v6 = 0;
  while ( v4 )
  {
    verifySingleMdl(v4, BugCheckParameter3);
    v7 = *(_DWORD *)(v4 + 40);
    if ( v4 == *(_QWORD *)(BugCheckParameter4 + 8) )
    {
      v5 = 1;
      if ( *(_DWORD *)(BugCheckParameter4 + 16) > v7 )
        datapathVerifierReportProblem(0x52uLL, BugCheckParameter3, BugCheckParameter4);
      if ( v6 + *(_DWORD *)(BugCheckParameter4 + 16) != *(_DWORD *)(BugCheckParameter4 + 40) )
        datapathVerifierReportProblem(0x53uLL, BugCheckParameter3, BugCheckParameter4);
    }
    v8 = *(_DWORD *)(BugCheckParameter4 + 24);
    v9 = *(_DWORD *)(BugCheckParameter4 + 40);
    if ( (*(_BYTE *)(v4 + 10) & 5) != 0 )
    {
      if ( v6 > v9 )
      {
        if ( v6 - v9 >= v8 )
          goto LABEL_18;
        v8 -= v6 - v9;
        v11 = 0;
      }
      else
      {
        v10 = v9 - v6;
        if ( v10 >= *(_DWORD *)(v4 + 40) )
          goto LABEL_18;
        v11 = v10;
      }
      validateMemoryPages(v4, v11, v8);
    }
LABEL_18:
    v4 = *(_QWORD *)v4;
    v6 += v7;
  }
  if ( *(_DWORD *)(BugCheckParameter4 + 24) + *(_DWORD *)(BugCheckParameter4 + 40) > v6 )
    datapathVerifierReportProblem(0x40uLL, BugCheckParameter3, BugCheckParameter4);
  if ( !v5 )
    datapathVerifierReportProblem(0x51uLL, BugCheckParameter3, BugCheckParameter4);
}
