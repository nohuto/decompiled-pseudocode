/*
 * XREFs of verifySingleNb @ 0x1C006D9FC
 * Callers:
 *     verifySingleRxNbl @ 0x1C006DBF4 (verifySingleRxNbl.c)
 *     verifySingleTxNbl @ 0x1C006DC28 (verifySingleTxNbl.c)
 * Callees:
 *     datapathVerifierReportProblem @ 0x1C006D1B0 (datapathVerifierReportProblem.c)
 *     validateMemoryPages @ 0x1C006D910 (validateMemoryPages.c)
 *     verifySingleMdl @ 0x1C006D9A0 (verifySingleMdl.c)
 */

void __fastcall verifySingleNb(ULONG_PTR BugCheckParameter4, ULONG_PTR BugCheckParameter3)
{
  ULONG_PTR v4; // rdi
  char v5; // r14
  unsigned int v6; // ebp
  unsigned int v7; // r15d
  unsigned int v8; // eax
  unsigned int v9; // r8d
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // edx

  if ( *(_WORD *)(BugCheckParameter4 + 50) )
    datapathVerifierReportProblem(0x41uLL, BugCheckParameter3, BugCheckParameter4);
  v4 = *(_QWORD *)(BugCheckParameter4 + 32);
  if ( !v4 )
  {
    datapathVerifierReportProblem(0x50uLL, BugCheckParameter3, BugCheckParameter4);
    v4 = *(_QWORD *)(BugCheckParameter4 + 32);
  }
  v5 = 0;
  v6 = 0;
  while ( v4 )
  {
    verifySingleMdl(v4, BugCheckParameter3);
    v7 = *(_DWORD *)(v4 + 40);
    if ( v4 == *(_QWORD *)(BugCheckParameter4 + 8) )
    {
      v8 = *(_DWORD *)(BugCheckParameter4 + 16);
      v5 = 1;
      if ( v8 > v7 )
      {
        datapathVerifierReportProblem(0x52uLL, BugCheckParameter3, BugCheckParameter4);
        v8 = *(_DWORD *)(BugCheckParameter4 + 16);
      }
      if ( v6 + v8 != *(_DWORD *)(BugCheckParameter4 + 40) )
        datapathVerifierReportProblem(0x53uLL, BugCheckParameter3, BugCheckParameter4);
    }
    v9 = *(_DWORD *)(BugCheckParameter4 + 24);
    v10 = *(_DWORD *)(BugCheckParameter4 + 40);
    if ( (*(_BYTE *)(v4 + 10) & 5) != 0 )
    {
      if ( v6 > v10 )
      {
        if ( v6 - v10 >= v9 )
          goto LABEL_18;
        v9 -= v6 - v10;
        v12 = 0;
      }
      else
      {
        v11 = v10 - v6;
        if ( v11 >= *(_DWORD *)(v4 + 40) )
          goto LABEL_18;
        v12 = v11;
      }
      validateMemoryPages(v4, v12, v9);
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
