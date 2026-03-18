/*
 * XREFs of ?Push@?$CWatermarkStack@UCFrame@?$CGraphWalker@VCVectorShape@@@@$0EA@$01$09@@QEAAJAEBUCFrame@?$CGraphWalker@VCVectorShape@@@@@Z @ 0x1800955B4
 * Callers:
 *     ??$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingContext@@@Z @ 0x180096A60 (--$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingCont.c)
 *     ?GotoFirstChild@?$CGraphWalker@VCVectorShape@@@@QEAAJPEAPEAVCVectorShape@@PEAV?$vector@PEAVCVectorShape@@V?$allocator@PEAVCVectorShape@@@std@@@std@@@Z @ 0x1800DB238 (-GotoFirstChild@-$CGraphWalker@VCVectorShape@@@@QEAAJPEAPEAVCVectorShape@@PEAV-$vector@PEAVCVect.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x18010517F (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<CGraphWalker<CVectorShape>::CFrame,64,2,10>::Push(unsigned int *a1, _OWORD *a2)
{
  unsigned int v2; // eax
  unsigned int v5; // eax
  unsigned int v6; // ebx
  unsigned __int64 v8; // rsi
  HANDLE ProcessHeap; // rax
  void *v10; // rdi
  unsigned __int64 v11; // rax
  void *v12; // rbp
  int v13; // r9d
  HANDLE v14; // rax
  HANDLE v15; // rax

  v2 = *a1;
  if ( *a1 == a1[1] )
  {
    v8 = 2LL * a1[1];
    if ( v8 > 0xFFFFFFFF )
    {
      v6 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0LL, -2147024362, 0x64u);
      return v6;
    }
    if ( (unsigned int)v8 <= 0x40 )
      LODWORD(v8) = 64;
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v8 <= 0x10 )
    {
      v13 = -2147024809;
    }
    else
    {
      ProcessHeap = GetProcessHeap();
      v10 = HeapAlloc(ProcessHeap, 0, 16LL * (unsigned int)v8);
      if ( v10 )
      {
        v11 = 16LL * *a1;
        if ( v11 > 0xFFFFFFFF )
        {
          v6 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0LL, -2147024362, 0x6Du);
          v15 = GetProcessHeap();
          HeapFree(v15, 0, v10);
          return v6;
        }
        memcpy_0(v10, *((const void **)a1 + 2), (unsigned int)v11);
        v12 = (void *)*((_QWORD *)a1 + 2);
        if ( v12 )
        {
          v14 = GetProcessHeap();
          HeapFree(v14, 0, v12);
        }
        v2 = *a1;
        *((_QWORD *)a1 + 2) = v10;
        a1[1] = v8;
        goto LABEL_2;
      }
      v13 = -2147024882;
    }
    v6 = v13;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0LL, v13, 0x6Bu);
    return v6;
  }
LABEL_2:
  *(_OWORD *)(*((_QWORD *)a1 + 2) + 16LL * v2) = *a2;
  v5 = a1[6];
  if ( v5 <= ++*a1 )
    v5 = *a1;
  a1[6] = v5;
  return 0;
}
