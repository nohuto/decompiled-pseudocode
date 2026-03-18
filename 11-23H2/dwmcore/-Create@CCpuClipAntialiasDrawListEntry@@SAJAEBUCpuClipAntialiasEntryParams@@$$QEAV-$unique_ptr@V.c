/*
 * XREFs of ?Create@CCpuClipAntialiasDrawListEntry@@SAJAEBUCpuClipAntialiasEntryParams@@$$QEAV?$unique_ptr@VUVData@CCpuClipAntialiasSink@@U?$default_delete@VUVData@CCpuClipAntialiasSink@@@std@@@std@@PEAPEAV1@@Z @ 0x180037EBC
 * Callers:
 *     ?ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContext@@IPEAV?$list@USinkRenderCommand@CCpuClipAntialiasSinkContext@@V?$allocator@USinkRenderCommand@CCpuClipAntialiasSinkContext@@@std@@@std@@PEBV?$vector_facade@UBounds@CCpuClipAntialiasSink@@V?$buffer_impl@UBounds@CCpuClipAntialiasSink@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180033020 (-ProcessRenderCommands_OffscreenRenderPass@CCpuClipAntialiasSinkContext@@AEAAJPEAVCDrawingContex.c)
 *     ?AppendCpuClipAntialiasHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@_N2PEA_N@Z @ 0x180036350 (-AppendCpuClipAntialiasHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUMeshDesc@Mesh@@PEBUPrimitiveV.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18002E72C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCpuClipAntialiasDrawListEntry@@@Z @ 0x1800380FC (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCCpuClipAntialiasDrawListEntry@@@Z.c)
 *     ?AlignVertexCount@@YAXPEAUGeometryCounts@CDrawListPrimitive@@@Z @ 0x180038130 (-AlignVertexCount@@YAXPEAUGeometryCounts@CDrawListPrimitive@@@Z.c)
 *     ?CalcBoundingRect@CCpuClipAntialiasSink@@QEBAXW4TemplateID@1@AEBUBounds@1@PEAUD2D_RECT_F@@@Z @ 0x180038148 (-CalcBoundingRect@CCpuClipAntialiasSink@@QEBAXW4TemplateID@1@AEBUBounds@1@PEAUD2D_RECT_F@@@Z.c)
 *     PrimitiveStorage::Alloc_16_ @ 0x18006FD40 (PrimitiveStorage--Alloc_16_.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D7370 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@VCDrawListPrimitive@@U?$default_delete@VCDrawListPrimitive@@@std@@@std@@QEAA@XZ @ 0x1800E5E10 (--1-$unique_ptr@VCDrawListPrimitive@@U-$default_delete@VCDrawListPrimitive@@@std@@@std@@QEAA@XZ.c)
 *     ??R?$default_delete@VCDrawListPrimitive@@@std@@QEBAXPEAVCDrawListPrimitive@@@Z @ 0x1800E5E30 (--R-$default_delete@VCDrawListPrimitive@@@std@@QEBAXPEAVCDrawListPrimitive@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801D70F4 (--1-$com_ptr_t@VCComputeScribbleFramebuffer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x18027C158 (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CCpuClipAntialiasDrawListEntry::Create(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 v5; // rax
  char v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rbx
  char v9; // r15
  __int64 v10; // rax
  struct CCpuClipAntialiasDrawListEntry *v11; // rcx
  __int128 v12; // xmm0
  int v13; // ebx
  __int64 v14; // rdx
  struct CObjectCache *ObjectCache; // rax
  char *v16; // rbx
  int v17; // edx
  __int64 v18; // rsi
  __int64 v19; // rcx
  _OWORD *v20; // rax
  __int64 *v21; // rax
  void (__fastcall ***v22)(_QWORD); // rcx
  void (__fastcall ***v23)(_QWORD); // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v27; // xmm0_8
  int v28; // eax
  int v29; // edi
  BOOL v30; // eax
  char v31; // cl
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  int v34; // [rsp+20h] [rbp-49h]
  char *v35; // [rsp+60h] [rbp-9h] BYREF
  __int128 v36; // [rsp+68h] [rbp-1h] BYREF
  __int64 v37; // [rsp+78h] [rbp+Fh] BYREF
  int v38; // [rsp+80h] [rbp+17h]
  __int64 v39; // [rsp+84h] [rbp+1Bh]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  __int16 Response; // [rsp+D0h] [rbp+67h] BYREF
  _QWORD *v42; // [rsp+E0h] [rbp+77h]
  __int64 v43; // [rsp+E8h] [rbp+7Fh] BYREF

  v42 = a3;
  CCpuClipAntialiasSink::CalcBoundingRect(*(_QWORD *)(a1 + 48), 0LL, a1 + 56, &v36);
  v5 = *(_QWORD *)(a1 + 48);
  v6 = *(_BYTE *)(a1 + 80);
  v7 = 0LL;
  v37 = 0LL;
  v39 = 0LL;
  v8 = *(_QWORD *)(v5 + 40);
  LODWORD(v5) = *(_DWORD *)(a1 + 72);
  v43 = 0LL;
  v38 = v5;
  v9 = *(_BYTE *)(v8 + 72);
  AlignVertexCount((struct CDrawListPrimitive::GeometryCounts *)&v37);
  v10 = PrimitiveStorage::Alloc_16_((struct CDrawListPrimitive::GeometryCounts *)&v37);
  if ( v10 )
  {
    v12 = v36;
    *(_BYTE *)(v10 + 72) = v9;
    v7 = v10;
    *(_BYTE *)(v10 + 104) = v6;
    *(_OWORD *)(v10 + 76) = v12;
    *(_QWORD *)(v10 + 92) = *(_QWORD *)(v8 + 92);
    v13 = 0;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v11, 0LL, 0, -2147024882, 0x6Eu, 0LL);
    v13 = -2147024882;
  }
  v14 = v43;
  v43 = v7;
  if ( v14 )
    std::default_delete<CDrawListPrimitive>::operator()();
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiasdrawlistentry.cpp",
      (const char *)(unsigned int)v13,
      v34);
    goto LABEL_53;
  }
  ObjectCache = CThreadContext::GetObjectCache(v11);
  v16 = 0LL;
  v17 = *((_DWORD *)ObjectCache + 1);
  if ( v17 )
  {
    v16 = (char *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v16;
    *((_DWORD *)ObjectCache + 1) = v17 - 1;
  }
  if ( !v16 )
  {
    v16 = (char *)DefaultHeap::Alloc(0x78uLL);
    if ( !v16 )
    {
      v35 = 0LL;
      v13 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x21,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\cpuclipantialiasdrawlistentry.cpp",
        (const char *)0x8007000ELL,
        v34);
      wil::com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>::~com_ptr_t<CComputeScribbleFramebuffer,wil::err_returncode_policy>(&v35);
LABEL_53:
      std::unique_ptr<CDrawListPrimitive>::~unique_ptr<CDrawListPrimitive>(&v43);
      return (unsigned int)v13;
    }
  }
  v18 = v43;
  v43 = 0LL;
  *((_DWORD *)v16 + 2) = 0;
  *((_QWORD *)v16 + 2) = *(_QWORD *)(a1 + 16);
  *((_DWORD *)v16 + 6) = 1065353216;
  *((_DWORD *)v16 + 7) = 1065353216;
  *((_DWORD *)v16 + 8) = 1065353216;
  *((_DWORD *)v16 + 9) = 1065353216;
  *((_DWORD *)v16 + 12) = *(_DWORD *)a1;
  v19 = *(_QWORD *)(a1 + 8);
  *((_QWORD *)v16 + 7) = v19;
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
  v20 = *(_OWORD **)(a1 + 24);
  if ( v20 )
    *(_OWORD *)(v16 + 24) = *v20;
  v21 = *(__int64 **)(a1 + 32);
  if ( v21 )
  {
    v27 = *v21;
    *((_DWORD *)v16 + 12) |= 0x400u;
    *((_QWORD *)v16 + 5) = v27;
  }
  *(_QWORD *)v16 = &CHWDrawListEntry::`vftable';
  *((_QWORD *)v16 + 8) = v18;
  v22 = *(void (__fastcall ****)(_QWORD))(a1 + 40);
  *((_QWORD *)v16 + 9) = v22;
  if ( v22 )
    (**v22)(v22);
  ++CHWDrawListEngineMetrics::s_cDrawListEntries;
  *(_QWORD *)v16 = &CCpuClipAntialiasDrawListEntry::`vftable';
  v23 = *(void (__fastcall ****)(_QWORD))(a1 + 48);
  *((_QWORD *)v16 + 10) = v23;
  if ( v23 )
    (**v23)(v23);
  *((_QWORD *)v16 + 11) = *(_QWORD *)(a1 + 56);
  *((_DWORD *)v16 + 24) = *(_DWORD *)(a1 + 64);
  v24 = *a2;
  *a2 = 0LL;
  *((_QWORD *)v16 + 13) = v24;
  v16[112] = *(_BYTE *)(a1 + 81);
  v16[113] = *(_BYTE *)(a1 + 82);
  v35 = v16;
  if ( *((int *)v16 + 2) < 0 && (IsDebuggerPresent() || (unsigned int)IsKernelDebuggerPresent()) )
  {
    while ( 1 )
    {
      v28 = IsKernelDebuggerPresent();
      Response = 63;
      v29 = v28;
      if ( !v28 )
      {
        v30 = IsDebuggerPresent();
        v31 = Response;
        if ( v30 )
          v31 = 103;
        LOBYTE(Response) = v31;
      }
      DbgPrintEx(
        0x65u,
        0,
        "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
        L"Tried to AddRef an object which has previously been freed (refcount went to 0).",
        word_18033BF30,
        word_18033BF30,
        "Function: ",
        L"CMILRefCountImpl::AddReference",
        ", ",
        L"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        23);
      if ( v29 )
      {
        DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", (PCH)&Response, 2u);
      }
      else
      {
        DbgPrintEx(
          0x65u,
          0,
          "(No kernel debugger is present.) Respond with:\n"
          "  g                    -- Go (continue)\n"
          "  eb 0x%p 'p';g  -- terminate Process\n"
          "  eb 0x%p 't';g  -- terminate Thread\n"
          " or regular debugging.\n",
          &Response,
          &Response);
        __debugbreak();
      }
      if ( (char)Response > 98 )
      {
        if ( (char)Response == 103 )
          break;
        if ( (char)Response == 105 )
          goto LABEL_51;
        if ( (char)Response != 112 )
        {
          if ( (char)Response != 116 )
            goto LABEL_50;
          goto LABEL_48;
        }
LABEL_49:
        CurrentProcess = GetCurrentProcess();
        TerminateProcess(CurrentProcess, 0xC0000001);
LABEL_50:
        DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
      }
      else
      {
        if ( (char)Response == 98 || (char)Response == 66 )
        {
          __debugbreak();
          break;
        }
        if ( (char)Response == 71 )
          break;
        if ( (char)Response != 73 )
        {
          if ( (char)Response != 80 )
          {
            if ( (char)Response != 84 )
              goto LABEL_50;
LABEL_48:
            CurrentThread = GetCurrentThread();
            TerminateThread(CurrentThread, 0xC0000001);
            goto LABEL_50;
          }
          goto LABEL_49;
        }
LABEL_51:
        DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
      }
    }
  }
  _InterlockedIncrement((volatile signed __int32 *)v16 + 2);
  v25 = v43;
  *v42 = v35;
  if ( v25 )
    std::default_delete<CDrawListPrimitive>::operator()();
  return 0LL;
}
