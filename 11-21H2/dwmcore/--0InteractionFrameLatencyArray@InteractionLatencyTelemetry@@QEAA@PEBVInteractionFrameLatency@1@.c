/*
 * XREFs of ??0InteractionFrameLatencyArray@InteractionLatencyTelemetry@@QEAA@PEBVInteractionFrameLatency@1@_K@Z @ 0x1801E1BB8
 * Callers:
 *     ?InteractionSummary@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUInteractionSummaryInfo@2@_KQEBI@Z @ 0x1801D4104 (-InteractionSummary@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUInteractionSumm.c)
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??$?4U?$default_delete@$$BY0A@I@std@@$0A@@?$unique_ptr@$$BY0A@IU?$default_delete@$$BY0A@I@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801E1AC8 (--$-4U-$default_delete@$$BY0A@I@std@@$0A@@-$unique_ptr@$$BY0A@IU-$default_delete@$$BY0A@I@std@@@.c)
 *     ??$make_unique@$$BY0A@I$0A@@std@@YA?AV?$unique_ptr@$$BY0A@IU?$default_delete@$$BY0A@I@std@@@0@_K@Z @ 0x1801E1B00 (--$make_unique@$$BY0A@I$0A@@std@@YA-AV-$unique_ptr@$$BY0A@IU-$default_delete@$$BY0A@I@std@@@0@_K.c)
 */

InteractionLatencyTelemetry::InteractionFrameLatencyArray *__fastcall InteractionLatencyTelemetry::InteractionFrameLatencyArray::InteractionFrameLatencyArray(
        InteractionLatencyTelemetry::InteractionFrameLatencyArray *this,
        const struct InteractionLatencyTelemetry::InteractionFrameLatency *a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx
  void **v4; // r14
  void **v7; // rax
  void **v8; // rax
  void **v9; // rax
  void **v10; // rax
  void **v11; // rax
  void **v12; // rax
  void **v13; // rax
  void **v14; // rax
  void **v15; // rax
  void **v16; // rax
  void **v17; // rax
  void **v18; // rax
  void **v19; // rax
  void **v20; // rax
  void **v21; // rax
  void **v22; // rax
  void **v23; // rax
  void **v24; // rax
  void **v25; // rax
  void **v26; // rax
  void **v27; // rax
  void **v28; // rax
  void **v29; // rax
  void **v30; // rax
  void **v31; // rax
  void **v32; // rax
  void **v33; // rax
  void **v34; // rax
  _DWORD *v35; // rdx
  int v36; // eax
  void *v38; // [rsp+60h] [rbp+40h] BYREF
  const struct InteractionLatencyTelemetry::InteractionFrameLatency *v39; // [rsp+68h] [rbp+48h]

  v39 = a2;
  v3 = 0LL;
  v4 = (void **)((char *)this + 112);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *(_QWORD *)this = a3;
  v7 = (void **)std::make_unique<unsigned int [0],0>(&v38, a3);
  std::unique_ptr<unsigned int [0]>::operator=<std::default_delete<unsigned int [0]>,0>((void **)this + 1, v7);
  if ( v38 )
    DefaultHeap::Free(v38);
  v8 = (void **)std::make_unique<unsigned int [0],0>(&v38, a3);
  std::unique_ptr<unsigned int [0]>::operator=<std::default_delete<unsigned int [0]>,0>((void **)this + 2, v8);
  if ( v38 )
    DefaultHeap::Free(v38);
  v9 = (void **)std::make_unique<unsigned int [0],0>(&v38, a3);
  std::unique_ptr<unsigned int [0]>::operator=<std::default_delete<unsigned int [0]>,0>((void **)this + 3, v9);
  if ( v38 )
    DefaultHeap::Free(v38);
  v10 = (void **)std::make_unique<unsigned int [0],0>(&v38, a3);
  std::unique_ptr<unsigned int [0]>::operator=<std::default_delete<unsigned int [0]>,0>((void **)this + 4, v10);
  if ( v38 )
    DefaultHeap::Free(v38);
  v11 = (void **)std::make_unique<unsigned int [0],0>(&v38, a3);
  std::unique_ptr<unsigned int [0]>::operator=<std::default_delete<unsigned int [0]>,0>((void **)this + 5, v11);
  if ( v38 )
    DefaultHeap::Free(v38);
  v12 = (void **)std::make_unique<unsigned int [0],0>(&v38, a3);
  std::unique_ptr<unsigned int [0]>::operator=<std::default_delete<unsigned int [0]>,0>((void **)this + 6, v12);
  if ( v38 )
    DefaultHeap::Free(v38);
  v13 = (void **)std::make_unique<unsigned int [0],0>(&v38, a3);
  std::unique_ptr<unsigned int [0]>::operator=<std::default_delete<unsigned int [0]>,0>((void **)this + 7, v13);
  if ( v38 )
    DefaultHeap::Free(v38);
  v14 = (void **)std::make_unique<unsigned int [0],0>(&v38, a3);
  std::unique_ptr<unsigned int [0]>::operator=<std::default_delete<unsigned int [0]>,0>((void **)this + 8, v14);
  if ( v38 )
    DefaultHeap::Free(v38);
  v15 = (void **)std::make_unique<unsigned int [0],0>(&v38, a3);
  std::unique_ptr<unsigned int [0]>::operator=<std::default_delete<unsigned int [0]>,0>((void **)this + 9, v15);
  if ( v38 )
    DefaultHeap::Free(v38);
  v16 = (void **)std::make_unique<unsigned int [0],0>(&v38, a3);
  std::unique_ptr<unsigned int [0]>::operator=<std::default_delete<unsigned int [0]>,0>((void **)this + 10, v16);
  if ( v38 )
    DefaultHeap::Free(v38);
  v17 = (void **)std::make_unique<unsigned int [0],0>(&v38, a3);
  std::unique_ptr<unsigned int [0]>::operator=<std::default_delete<unsigned int [0]>,0>((void **)this + 11, v17);
  if ( v38 )
    DefaultHeap::Free(v38);
  v18 = (void **)std::make_unique<unsigned int [0],0>(&v38, a3);
  std::unique_ptr<unsigned int [0]>::operator=<std::default_delete<unsigned int [0]>,0>((void **)this + 12, v18);
  if ( v38 )
    DefaultHeap::Free(v38);
  v19 = (void **)std::make_unique<unsigned int [0],0>(&v38, a3);
  std::unique_ptr<unsigned int [0]>::operator=<std::default_delete<unsigned int [0]>,0>((void **)this + 13, v19);
  if ( v38 )
    DefaultHeap::Free(v38);
  v20 = (void **)std::make_unique<unsigned int [0],0>(&v38, a3);
  std::unique_ptr<unsigned int [0]>::operator=<std::default_delete<unsigned int [0]>,0>(v4, v20);
  if ( v38 )
    DefaultHeap::Free(v38);
  v21 = (void **)std::make_unique<unsigned int [0],0>(&v38, a3);
  std::unique_ptr<unsigned int [0]>::operator=<std::default_delete<unsigned int [0]>,0>((void **)this + 15, v21);
  if ( v38 )
    DefaultHeap::Free(v38);
  v22 = (void **)std::make_unique<unsigned int [0],0>(&v38, a3);
  std::unique_ptr<unsigned int [0]>::operator=<std::default_delete<unsigned int [0]>,0>((void **)this + 16, v22);
  if ( v38 )
    DefaultHeap::Free(v38);
  v23 = (void **)std::make_unique<unsigned int [0],0>(&v38, a3);
  std::unique_ptr<unsigned int [0]>::operator=<std::default_delete<unsigned int [0]>,0>((void **)this + 17, v23);
  if ( v38 )
    DefaultHeap::Free(v38);
  v24 = (void **)std::make_unique<unsigned int [0],0>(&v38, a3);
  std::unique_ptr<unsigned int [0]>::operator=<std::default_delete<unsigned int [0]>,0>((void **)this + 18, v24);
  if ( v38 )
    DefaultHeap::Free(v38);
  v25 = (void **)std::make_unique<unsigned int [0],0>(&v38, a3);
  std::unique_ptr<unsigned int [0]>::operator=<std::default_delete<unsigned int [0]>,0>((void **)this + 19, v25);
  if ( v38 )
    DefaultHeap::Free(v38);
  v26 = (void **)std::make_unique<unsigned int [0],0>(&v38, a3);
  std::unique_ptr<unsigned int [0]>::operator=<std::default_delete<unsigned int [0]>,0>((void **)this + 20, v26);
  if ( v38 )
    DefaultHeap::Free(v38);
  v27 = (void **)std::make_unique<unsigned int [0],0>(&v38, a3);
  std::unique_ptr<unsigned int [0]>::operator=<std::default_delete<unsigned int [0]>,0>((void **)this + 21, v27);
  if ( v38 )
    DefaultHeap::Free(v38);
  v28 = (void **)std::make_unique<unsigned int [0],0>(&v38, a3);
  std::unique_ptr<unsigned int [0]>::operator=<std::default_delete<unsigned int [0]>,0>((void **)this + 22, v28);
  if ( v38 )
    DefaultHeap::Free(v38);
  v29 = (void **)std::make_unique<unsigned int [0],0>(&v38, a3);
  std::unique_ptr<unsigned int [0]>::operator=<std::default_delete<unsigned int [0]>,0>((void **)this + 23, v29);
  if ( v38 )
    DefaultHeap::Free(v38);
  v30 = (void **)std::make_unique<unsigned int [0],0>(&v38, a3);
  std::unique_ptr<unsigned int [0]>::operator=<std::default_delete<unsigned int [0]>,0>((void **)this + 24, v30);
  if ( v38 )
    DefaultHeap::Free(v38);
  v31 = (void **)std::make_unique<unsigned int [0],0>(&v38, a3);
  std::unique_ptr<unsigned int [0]>::operator=<std::default_delete<unsigned int [0]>,0>((void **)this + 25, v31);
  if ( v38 )
    DefaultHeap::Free(v38);
  v32 = (void **)std::make_unique<unsigned int [0],0>(&v38, a3);
  std::unique_ptr<unsigned int [0]>::operator=<std::default_delete<unsigned int [0]>,0>((void **)this + 26, v32);
  if ( v38 )
    DefaultHeap::Free(v38);
  v33 = (void **)std::make_unique<unsigned int [0],0>(&v38, a3);
  std::unique_ptr<unsigned int [0]>::operator=<std::default_delete<unsigned int [0]>,0>((void **)this + 27, v33);
  if ( v38 )
    DefaultHeap::Free(v38);
  v34 = (void **)std::make_unique<unsigned int [0],0>(&v38, a3);
  std::unique_ptr<unsigned int [0]>::operator=<std::default_delete<unsigned int [0]>,0>((void **)this + 28, v34);
  if ( v38 )
    DefaultHeap::Free(v38);
  if ( a3 )
  {
    v35 = (_DWORD *)((char *)v39 + 8);
    do
    {
      *(_DWORD *)(*((_QWORD *)this + 1) + 4 * v3) = *(v35 - 2);
      *(_DWORD *)(*((_QWORD *)this + 2) + 4 * v3) = *(v35 - 1);
      *(_DWORD *)(*((_QWORD *)this + 3) + 4 * v3) = *v35;
      *(_DWORD *)(*((_QWORD *)this + 4) + 4 * v3) = v35[1];
      *(_DWORD *)(*((_QWORD *)this + 5) + 4 * v3) = v35[2];
      *(_DWORD *)(*((_QWORD *)this + 6) + 4 * v3) = v35[3];
      *(_DWORD *)(*((_QWORD *)this + 7) + 4 * v3) = v35[4];
      *(_DWORD *)(*((_QWORD *)this + 8) + 4 * v3) = v35[5];
      *(_DWORD *)(*((_QWORD *)this + 9) + 4 * v3) = v35[6];
      *(_DWORD *)(*((_QWORD *)this + 10) + 4 * v3) = v35[7];
      *(_DWORD *)(*((_QWORD *)this + 11) + 4 * v3) = v35[8];
      *(_DWORD *)(*((_QWORD *)this + 12) + 4 * v3) = v35[9];
      *(_DWORD *)(*((_QWORD *)this + 13) + 4 * v3) = v35[10];
      *((_DWORD *)*v4 + v3) = v35[11];
      *(_DWORD *)(*((_QWORD *)this + 15) + 4 * v3) = v35[12];
      *(_DWORD *)(*((_QWORD *)this + 16) + 4 * v3) = v35[13];
      *(_DWORD *)(*((_QWORD *)this + 17) + 4 * v3) = v35[14];
      *(_DWORD *)(*((_QWORD *)this + 18) + 4 * v3) = v35[15];
      *(_DWORD *)(*((_QWORD *)this + 19) + 4 * v3) = v35[16];
      *(_DWORD *)(*((_QWORD *)this + 20) + 4 * v3) = v35[17];
      *(_DWORD *)(*((_QWORD *)this + 21) + 4 * v3) = v35[18];
      *(_DWORD *)(*((_QWORD *)this + 22) + 4 * v3) = v35[19];
      *(_DWORD *)(*((_QWORD *)this + 23) + 4 * v3) = v35[20];
      *(_DWORD *)(*((_QWORD *)this + 24) + 4 * v3) = v35[21];
      *(_DWORD *)(*((_QWORD *)this + 25) + 4 * v3) = v35[22];
      *(_DWORD *)(*((_QWORD *)this + 26) + 4 * v3) = v35[23];
      *(_DWORD *)(*((_QWORD *)this + 27) + 4 * v3) = v35[24];
      v36 = v35[25];
      v35 += 28;
      *(_DWORD *)(*((_QWORD *)this + 28) + 4 * v3++) = v36;
    }
    while ( v3 < a3 );
  }
  return this;
}
