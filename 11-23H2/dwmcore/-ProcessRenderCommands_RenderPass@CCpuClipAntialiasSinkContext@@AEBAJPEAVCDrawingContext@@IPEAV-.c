/*
 * XREFs of ?ProcessRenderCommands_RenderPass@CCpuClipAntialiasSinkContext@@AEBAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@@Z @ 0x180032E34
 * Callers:
 *     ?FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z @ 0x180032C5C (-FlushDrawList@CCpuClipAntialiasSinkContext@@QEAAJPEAVCDrawingContext@@I@Z.c)
 * Callees:
 *     ?InitializeForRendering@CBatchCommand@@QEAAXPEAVCDrawListEntry@@W4Enum@BlendMode@@MAEBVCMILMatrix@@@Z @ 0x180033AFC (-InitializeForRendering@CBatchCommand@@QEAAXPEAVCDrawListEntry@@W4Enum@BlendMode@@MAEBVCMILMatri.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18006D350 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ??$TakeItemFromCache@VCBatchCommand@@@CDrawListBatchManager@@CAJPEAV?$ShrinkableArray@PEAVCBatchCommand@@U?$UniqueLifetime@PEAVCBatchCommand@@@@@@PEAPEAVCBatchCommand@@@Z @ 0x1800756BC (--$TakeItemFromCache@VCBatchCommand@@@CDrawListBatchManager@@CAJPEAV-$ShrinkableArray@PEAVCBatch.c)
 *     ?SubmitRenderCommand@CD2DContext@@QEAAJ$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@PEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x180077728 (-SubmitRenderCommand@CD2DContext@@QEAAJ$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_delete@VCBa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D7370 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_GCBatchCommand@@QEAAPEAXI@Z @ 0x1801FED68 (--_GCBatchCommand@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CCpuClipAntialiasSinkContext::ProcessRenderCommands_RenderPass(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 **a4)
{
  __int64 v4; // rdi
  __int64 v8; // r15
  int v9; // eax
  unsigned int v10; // ebx
  __int64 *v11; // rbx
  _BYTE *v12; // r12
  __int64 v13; // rax
  int v14; // edi
  unsigned int v15; // edx
  __int64 v17; // rdx
  unsigned int v18; // edx
  int v19; // [rsp+20h] [rbp-30h]
  __int64 v20; // [rsp+30h] [rbp-20h]
  unsigned int v21[2]; // [rsp+40h] [rbp-10h] BYREF
  char v22; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  CBatchCommand *v24; // [rsp+90h] [rbp+40h]
  __int64 v25; // [rsp+98h] [rbp+48h]
  __int64 v26; // [rsp+A8h] [rbp+58h]

  v4 = *(_QWORD *)(a2 + 40);
  v25 = v4;
  v8 = *(_QWORD *)(a1 + 16) + 432LL * a3;
  if ( !a4[1] )
    return 0LL;
  v9 = CDrawingContext::ApplyRenderStateInternal((CDrawingContext *)a2, 1);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v11 = *a4;
    while ( 1 )
    {
      do
      {
        v11 = (__int64 *)*v11;
        if ( v11 == *a4 )
          return 0LL;
        v20 = *(_QWORD *)(v8 + 8);
        v12 = *(_BYTE **)(v20 + 40LL * *((unsigned int *)v11 + 4));
        v26 = 5LL * *((unsigned int *)v11 + 4);
        v13 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v12 + 40LL))(v12);
      }
      while ( (*(int (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 48LL))(v13, a2) < 0 );
      if ( (v12[48] & 4) != 0 )
        *(_BYTE *)(a2 + 8095) = 1;
      v24 = 0LL;
      *(_QWORD *)v21 = 0LL;
      v22 = 1;
      v14 = CDrawListBatchManager::TakeItemFromCache<CBatchCommand>(v4 + 64, v21);
      if ( v22 )
        v24 = *(CBatchCommand **)v21;
      if ( v14 < 0 )
        break;
      v19 = a1 + 904;
      CBatchCommand::InitializeForRendering(v24, v12, *(unsigned int *)(v20 + 8 * v26 + 12));
      *((_DWORD *)v24 + 24) = 0;
      *(_QWORD *)((char *)v24 + 100) = *(__int64 *)((char *)v11 + 20);
      *((_DWORD *)v24 + 27) = *((_DWORD *)v11 + 7);
      *((_OWORD *)v24 + 7) = *(_OWORD *)(a1 + 904);
      *((_OWORD *)v24 + 8) = *(_OWORD *)(a1 + 920);
      *((_OWORD *)v24 + 9) = *(_OWORD *)(a1 + 936);
      *((_OWORD *)v24 + 10) = *(_OWORD *)(a1 + 952);
      *((_DWORD *)v24 + 44) = *(_DWORD *)(a1 + 968);
      v14 = CD2DContext::SubmitRenderCommand((CD2DContext *)(v25 + 16));
      if ( v14 < 0 )
      {
        v17 = 549LL;
LABEL_19:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v17,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
          (const char *)(unsigned int)v14,
          v19);
        if ( v24 )
          CBatchCommand::`scalar deleting destructor'(v24, v18);
        return (unsigned int)v14;
      }
      if ( v24 )
        CBatchCommand::`scalar deleting destructor'(v24, v15);
      v4 = v25;
    }
    v17 = 533LL;
    goto LABEL_19;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1FB,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiassinkcontext.cpp",
    (const char *)(unsigned int)v9,
    v19);
  return v10;
}
