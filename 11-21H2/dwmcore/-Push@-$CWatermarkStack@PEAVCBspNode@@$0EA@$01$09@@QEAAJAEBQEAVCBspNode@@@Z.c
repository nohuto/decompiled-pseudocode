/*
 * XREFs of ?Push@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEAAJAEBQEAVCBspNode@@@Z @ 0x1801B5270
 * Callers:
 *     ?CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z @ 0x1801B4E34 (-CreatePolygonAndPushToBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N11@Z.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1801B5A64 (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800438FC (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     memcpy_0 @ 0x18010517F (memcpy_0.c)
 */

__int64 __fastcall CWatermarkStack<CBspNode *,64,2,10>::Push(unsigned int *a1, _QWORD *a2)
{
  unsigned int v2; // eax
  void *v3; // rsi
  unsigned __int64 v6; // rbp
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  unsigned __int64 v10; // rax
  void *v11; // rbx
  unsigned int v12; // eax
  void *v14; // [rsp+50h] [rbp+8h] BYREF

  v2 = *a1;
  v3 = 0LL;
  v14 = 0LL;
  if ( v2 != a1[1] )
    goto LABEL_8;
  v6 = 2LL * a1[1];
  if ( v6 > 0xFFFFFFFF )
  {
    v9 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0LL, -2147024362, 0x64u);
    goto LABEL_11;
  }
  if ( (unsigned int)v6 <= 0x40 )
    LODWORD(v6) = 64;
  v7 = HrMalloc(8uLL, (unsigned int)v6, &v14);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, v7, 0x6Bu);
    goto LABEL_14;
  }
  v10 = 8LL * *a1;
  if ( v10 > 0xFFFFFFFF )
  {
    v9 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, -2147024362, 0x6Du);
LABEL_14:
    v3 = v14;
    goto LABEL_11;
  }
  v11 = v14;
  memcpy_0(v14, *((const void **)a1 + 2), (unsigned int)v10);
  DefaultHeap::Free(*((void **)a1 + 2));
  v2 = *a1;
  *((_QWORD *)a1 + 2) = v11;
  a1[1] = v6;
LABEL_8:
  *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL * v2) = *a2;
  ++*a1;
  v12 = a1[6];
  if ( v12 <= *a1 )
    v12 = *a1;
  v9 = 0;
  a1[6] = v12;
LABEL_11:
  DefaultHeap::Free(v3);
  return v9;
}
