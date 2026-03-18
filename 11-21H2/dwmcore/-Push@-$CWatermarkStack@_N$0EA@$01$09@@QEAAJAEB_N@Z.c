/*
 * XREFs of ?Push@?$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z @ 0x1800D66A4
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009FA80 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1801B5874 (-PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1801B5A64 (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800438FC (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     memcpy_0 @ 0x18010517F (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<bool,64,2,10>::Push(const void **a1, _BYTE *a2)
{
  void *v2; // rsi
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // ebx
  unsigned __int64 v9; // rsi
  int v10; // eax
  __int64 v11; // rcx
  void *v12; // rbx
  HANDLE ProcessHeap; // rax
  void *v14; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0LL;
  v14 = 0LL;
  v5 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 != *((_DWORD *)a1 + 1) )
    goto LABEL_2;
  v9 = 2LL * *((unsigned int *)a1 + 1);
  if ( v9 > 0xFFFFFFFF )
  {
    v7 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0LL, -2147024362, 0x64u);
    return v7;
  }
  if ( (unsigned int)v9 <= 0x40 )
    LODWORD(v9) = 64;
  v10 = HrMalloc(1uLL, (unsigned int)v9, &v14);
  v7 = v10;
  if ( v10 >= 0 )
  {
    v12 = v14;
    memcpy_0(v14, a1[2], *(unsigned int *)a1);
    DefaultHeap::Free((void *)a1[2]);
    v5 = *(_DWORD *)a1;
    *((_DWORD *)a1 + 1) = v9;
    v2 = 0LL;
    a1[2] = v12;
LABEL_2:
    *((_BYTE *)a1[2] + v5) = *a2;
    ++*(_DWORD *)a1;
    v6 = *((_DWORD *)a1 + 6);
    if ( v6 <= *(_DWORD *)a1 )
      v6 = *(_DWORD *)a1;
    v7 = 0;
    *((_DWORD *)a1 + 6) = v6;
    goto LABEL_5;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v10, 0x6Bu);
  v2 = v14;
LABEL_5:
  if ( v2 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v2);
  }
  return v7;
}
