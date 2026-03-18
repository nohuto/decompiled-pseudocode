/*
 * XREFs of ?Render@CDrawListEntryBatch@@UEAAJXZ @ 0x1800B4BB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180014EBC (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCBatchCommand@@$0A@@@QEAAJPEFBQEAVCBatchCommand@@I@Z @ 0x18007E980 (-AddMultipleAndSet@-$DynArray@PEAVCBatchCommand@@$0A@@@QEAAJPEFBQEAVCBatchCommand@@I@Z.c)
 *     ?Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z @ 0x1800B5558 (-Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z.c)
 *     ?StartExecution@CD3DBatchExecutionContext@@QEAAXAEBUWorldToClipSpace@@PEBVClipPlaneInfoRef@@@Z @ 0x1800B5638 (-StartExecution@CD3DBatchExecutionContext@@QEAAXAEBUWorldToClipSpace@@PEBVClipPlaneInfoRef@@@Z.c)
 *     ?ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ @ 0x1800B57A0 (-ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800CB358 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?_Tidy@?$deque@VCMegaRect@@V?$allocator@VCMegaRect@@@std@@@std@@AEAAXXZ @ 0x1800D009C (-_Tidy@-$deque@VCMegaRect@@V-$allocator@VCMegaRect@@@std@@@std@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z @ 0x1801F0ECC (--$RenderLoop@$0A@@CDrawListEntryBatch@@AEAAJAEAVCD3DBatchExecutionContext@@@Z.c)
 *     ?EndAppend@CD3DDynamicAppendBuffer@@QEAAXXZ @ 0x1801F1630 (-EndAppend@CD3DDynamicAppendBuffer@@QEAAXXZ.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x18026C098 (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CDrawListEntryBatch::Render(CDrawListEntryBatch *this)
{
  __int64 v1; // rax
  __int64 v3; // rcx
  int v4; // eax
  int v5; // eax
  __int64 v6; // rcx
  int v7; // r12d
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rbx
  unsigned int **v11; // r13
  __int64 v12; // rcx
  unsigned int *v13; // r14
  __int64 *v14; // rdi
  _DWORD *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rsi
  int v20; // eax
  __int64 v21; // rcx
  int v22; // esi
  __int64 v23; // rsi
  int v24; // edx
  _DWORD *v25; // rsi
  int v26; // eax
  _QWORD *v27; // rax
  __int64 v28; // rcx
  int v29; // ecx
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rsi
  unsigned int v33; // eax
  unsigned int v34; // edx
  unsigned int v35; // r14d
  unsigned int v36; // edi
  int *v37; // rbx
  int v38; // ecx
  void (__fastcall ***v39)(_QWORD, __int64); // rcx
  __int64 v40; // rcx
  int v41; // eax
  __int64 result; // rax
  __int64 v44; // r9
  __int64 v45; // r8
  int v46; // ecx
  int v47; // ecx
  unsigned int v48; // edi
  int v49; // eax
  __int64 v50; // rax
  unsigned int v51; // eax
  unsigned int v52; // eax
  unsigned int v53; // ecx
  int v54; // eax
  __int64 v55; // rcx
  unsigned int v56; // ebx
  __int64 v57; // rcx
  __int64 v58; // rcx
  int v59; // eax
  int v60; // ebx
  BOOL v61; // eax
  char v62; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  unsigned int v65; // [rsp+28h] [rbp-E0h]
  void *v66; // [rsp+30h] [rbp-D8h]
  void **v67; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v68; // [rsp+70h] [rbp-98h]
  __int64 v69; // [rsp+78h] [rbp-90h]
  __int64 v70; // [rsp+80h] [rbp-88h]
  __int64 v71; // [rsp+88h] [rbp-80h]
  int v72; // [rsp+90h] [rbp-78h]
  __int128 v73; // [rsp+98h] [rbp-70h]
  int v74; // [rsp+A8h] [rbp-60h]
  int v75; // [rsp+ACh] [rbp-5Ch] BYREF
  unsigned __int64 v76; // [rsp+B0h] [rbp-58h]
  __int16 v77; // [rsp+B8h] [rbp-50h]
  char v78; // [rsp+BAh] [rbp-4Eh]
  __int64 v79; // [rsp+BCh] [rbp-4Ch]
  __int128 v80; // [rsp+C4h] [rbp-44h]
  char *v81; // [rsp+D8h] [rbp-30h]
  int v82; // [rsp+E0h] [rbp-28h]
  int v83; // [rsp+E4h] [rbp-24h]
  CDrawListEntryBatch *v84; // [rsp+E8h] [rbp-20h] BYREF
  void *retaddr; // [rsp+140h] [rbp+38h]
  unsigned __int64 Response; // [rsp+148h] [rbp+40h] BYREF
  unsigned __int64 v87; // [rsp+150h] [rbp+48h]
  __int64 v88; // [rsp+158h] [rbp+50h] BYREF
  __int64 v89; // [rsp+160h] [rbp+58h] BYREF

  v1 = *((_QWORD *)this + 3);
  if ( *(_QWORD *)(v1 + 168) )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  *(_QWORD *)(v1 + 168) = this;
  v3 = *((_QWORD *)this + 3);
  v67 = &CD3DBatchExecutionContext::`vftable';
  v68 = v3;
  v69 = *(_QWORD *)(v3 + 560);
  v70 = *(_QWORD *)(v3 + 568);
  v71 = *((_QWORD *)this + 13);
  LOWORD(Response) = 0;
  HIDWORD(Response) = -1;
  v76 = Response;
  v81 = (char *)this + 72;
  v4 = *((_DWORD *)this + 24);
  ++dword_1803D3118;
  v72 = 0;
  v73 = 0LL;
  v74 = 24;
  v75 = 0x80000000;
  v77 = 0;
  v78 = 3;
  v79 = 0LL;
  v80 = 0uLL;
  v82 = v4;
  v83 = 0;
  if ( CCommonRegistryData::EnableMegaRects )
  {
    v5 = CMegaRectCollection::ReplaceMegaRectsWithClippedRects((CDrawListEntryBatch *)((char *)this + 112));
    v7 = v5;
    if ( v5 < 0 )
    {
      v65 = 240;
LABEL_139:
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0LL, v5, v65);
      goto LABEL_47;
    }
  }
  CD3DBatchExecutionContext::StartExecution(
    (CD3DBatchExecutionContext *)&v67,
    (CDrawListEntryBatch *)((char *)this + 56),
    *((const struct ClipPlaneInfoRef **)this + 4));
  v8 = *((_QWORD *)this + 3);
  if ( !*(_QWORD *)(v8 + 160) )
  {
    v5 = CDrawListEntryBatch::RenderLoop<0>(this, &v67);
    v7 = v5;
    if ( v5 >= 0 )
      goto LABEL_46;
    v65 = 251;
    goto LABEL_139;
  }
  v9 = *(_QWORD *)(v8 + 24);
  v7 = 0;
  v10 = 0LL;
  v11 = (unsigned int **)(v9 + 8LL * *((unsigned int *)this + 12));
  v12 = v9 + 8LL * *((unsigned int *)this + 13);
  v84 = (CDrawListEntryBatch *)v12;
  if ( v11 == (unsigned int **)v12 )
    goto LABEL_45;
  while ( 1 )
  {
    v13 = *v11;
    v12 = **v11;
    if ( (_DWORD)v12 == 1 )
    {
      v14 = (__int64 *)(v13 + 2);
      if ( !*((_BYTE *)v13 + 100) )
      {
        v15 = (_DWORD *)*((_QWORD *)v13 + 2);
        if ( !v15 )
          v15 = *(_DWORD **)(*v14 + 64);
        if ( !v15[2] )
          goto LABEL_42;
        ((void (__fastcall *)(void ***, _QWORD))v67[1])(&v67, v13[23]);
        if ( v15[6] )
        {
          LOBYTE(v16) = 2;
        }
        else if ( v15[5] )
        {
          v16 = 0LL;
        }
        else
        {
          LOBYTE(v16) = 1;
        }
        ((void (__fastcall *)(void ***, __int64))v67[3])(&v67, v16);
      }
    }
    else
    {
      v46 = v12 - 2;
      if ( !v46 )
      {
        ((void (__fastcall *)(void ***, _QWORD))*v67)(&v67, *((_QWORD *)v13 + 1));
        goto LABEL_42;
      }
      if ( v46 != 1 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
      v14 = (__int64 *)(v13 + 2);
      if ( v13[4] != 24 )
        ((void (__fastcall *)(void ***))v67[1])(&v67);
      if ( *((_BYTE *)v13 + 20) != 3 )
        ((void (__fastcall *)(void ***))v67[3])(&v67);
      ((void (__fastcall *)(void ***, unsigned int *))v67[2])(&v67, v13 + 2);
    }
    v17 = v71;
    v72 |= 0x80000000;
    if ( *(_QWORD *)(v71 + 40) )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v71 + 16) + 560LL) + 120LL))(
        *(_QWORD *)(*(_QWORD *)(v71 + 16) + 560LL),
        *(_QWORD *)(v71 + 24),
        0LL);
      *(_QWORD *)(v17 + 40) = 0LL;
      *(_DWORD *)(v17 + 48) = 0;
      if ( v78 )
      {
        if ( v78 == 2 )
        {
          CD3DDynamicAppendBuffer::EndAppend((CD3DDynamicAppendBuffer *)(v71 + 112));
          CD3DDynamicAppendBuffer::EndAppend((CD3DDynamicAppendBuffer *)(v17 + 64));
          LODWORD(v66) = v80;
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, void *))(*(_QWORD *)v69 + 160LL))(
            v69,
            DWORD2(v80),
            HIDWORD(v80),
            HIDWORD(v79),
            0,
            v66);
        }
        else
        {
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v69 + 104LL))(
            v69,
            DWORD1(v80),
            (unsigned int)v79);
        }
      }
      else
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v17 + 64) + 560LL) + 120LL))(
          *(_QWORD *)(*(_QWORD *)(v17 + 64) + 560LL),
          *(_QWORD *)(v17 + 72),
          0LL);
        *(_QWORD *)(v17 + 88) = 0LL;
        *(_DWORD *)(v17 + 96) = 0;
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v69 + 96LL))(
          v69,
          DWORD2(v80),
          HIDWORD(v79),
          0LL);
      }
      ++v83;
      *(_QWORD *)((char *)&v80 + 4) = 0LL;
      HIDWORD(v80) = 0;
    }
    switch ( *v13 )
    {
      case 1u:
        v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v14 + 40LL))(*v14);
        break;
      case 2u:
        v19 = v10;
        v18 = 0LL;
        v10 = 0LL;
        goto LABEL_20;
      case 3u:
        v18 = *v14;
        break;
      default:
        ModuleFailFastForHRESULT(2147549183LL, retaddr);
    }
    v19 = v10;
    v10 = v18;
    if ( v18 )
      (**(void (__fastcall ***)(__int64))v18)(v18);
LABEL_20:
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
    if ( (_QWORD)v73 && !(_BYTE)v77 )
    {
      v88 = *(_QWORD *)(v71 + 416);
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v69 + 56LL))(v69, 2LL, 1LL, &v88);
      v89 = *(_QWORD *)(v71 + 704);
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v69 + 128LL))(v69, 1LL, 1LL, &v89);
      LOBYTE(v77) = 1;
    }
    v20 = (*(__int64 (__fastcall **)(__int64, void ***, int *))(*(_QWORD *)v18 + 32LL))(v18, &v67, &v75);
    v22 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0LL, v20, 0x1BFu);
      HIDWORD(v66) = 0;
      MilInstrumentationCheckHR_MaybeFailFast(v58, 0LL, 0LL, v22, 0x137u);
      v7 = 0;
    }
    else
    {
      v23 = v71;
      if ( *(_BYTE *)(v71 + 168) )
      {
        LODWORD(v66) = 0;
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, void *, _DWORD))(**(_QWORD **)(v68 + 560)
                                                                                        + 384LL))(
          *(_QWORD *)(v68 + 560),
          *(_QWORD *)(v71 + 160),
          0LL,
          0LL,
          v71 + 176,
          v66,
          0);
        *(_BYTE *)(v23 + 168) = 0;
      }
      v12 = (unsigned int)v75;
      if ( v75 >= 0 )
      {
        Response = 0LL;
        v24 = v75 & 4;
        LOBYTE(Response) = (v75 & 4) != 0 ? 1 : v75 & 4;
        BYTE1(Response) = (v75 & 8) != 0;
        BYTE2(Response) = (v75 & 2) != 0;
        HIDWORD(Response) = (v75 & 1) != 0 ? 4 : 2;
        BYTE3(Response) = (v75 & 0x10) != 0;
        LOBYTE(v87) = v24 != 0;
        v12 = HIDWORD(Response);
        HIDWORD(v87) = HIDWORD(Response);
        BYTE1(v87) = BYTE3(Response);
        if ( HIDWORD(Response) != HIDWORD(v76) || (v24 != 0) != (_BYTE)v76 || BYTE3(Response) != BYTE1(v76) )
        {
          v44 = 199LL;
          if ( BYTE3(Response) )
            v44 = 203LL;
          if ( HIDWORD(Response) == 2 )
          {
            v45 = 0LL;
            if ( (v75 & 4) != 0 )
              v45 = 2LL;
          }
          else if ( HIDWORD(Response) == 4 )
          {
            if ( (v75 & 4) != 0 )
              v45 = 3LL;
            else
              v45 = 1LL;
          }
          else
          {
            v45 = 4LL;
          }
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v69 + 136LL))(v69, *(_QWORD *)(v68 + 8 * (v44 + v45)));
          v76 = v87;
          HIBYTE(v77) = 1;
        }
      }
      v7 = 0;
      if ( v18 )
      {
        v25 = (_DWORD *)*((_QWORD *)&v73 + 1);
        if ( *((_QWORD *)&v73 + 1) )
        {
          v48 = 0;
          if ( *(_DWORD *)(*((_QWORD *)&v73 + 1) + 16LL) )
          {
            while ( 1 )
            {
              v49 = (*(__int64 (__fastcall **)(_QWORD, void ***, unsigned int *))(**(_QWORD **)v25 + 40LL))(
                      *(_QWORD *)v25,
                      &v67,
                      v11[v48 + 1] + 2);
              v7 = v49;
              if ( v49 < 0 )
                break;
              if ( ++v48 >= v25[4] )
                goto LABEL_38;
            }
            MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, v49, 0x52u);
            HIDWORD(v66) = 0;
            MilInstrumentationCheckHR_MaybeFailFast(v57, 0LL, 0LL, v7, 0x1EAu);
          }
        }
        else
        {
          v26 = (*(__int64 (__fastcall **)(__int64, void ***, unsigned int *))(*(_QWORD *)v18 + 40LL))(
                  v18,
                  &v67,
                  *v11 + 2);
          v7 = v26;
          if ( v26 < 0 )
          {
            HIDWORD(v66) = 0;
            MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, v26, 0x1EFu);
          }
        }
      }
    }
LABEL_38:
    if ( *((_QWORD *)&v73 + 1) )
    {
      v50 = *(unsigned int *)(*((_QWORD *)&v73 + 1) + 16LL);
      ++dword_1803D3120;
      dword_1803D3124 += v50;
      *((_QWORD *)&v73 + 1) = 0LL;
      v11 += v50;
    }
    if ( v7 < 0 )
      break;
    v72 = 0;
LABEL_42:
    if ( ++v11 == (unsigned int **)v84 )
      goto LABEL_43;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, v7, 0x167u);
LABEL_43:
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
LABEL_45:
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, v7, 0xF7u);
  else
LABEL_46:
    CD3DBatchExecutionContext::Flush(&v67, 0x2000LL);
LABEL_47:
  if ( v83 )
    dword_1803D3230 += v83;
  v27 = (_QWORD *)v71;
  if ( *(_QWORD *)(v71 + 40) )
  {
    CD3DDynamicAppendBuffer::EndAppend((CD3DDynamicAppendBuffer *)(v71 + 16));
    v27 = (_QWORD *)v71;
  }
  if ( v27[11] )
  {
    CD3DDynamicAppendBuffer::EndAppend((CD3DDynamicAppendBuffer *)(v27 + 8));
    v27 = (_QWORD *)v71;
  }
  if ( v27[17] )
    CD3DDynamicAppendBuffer::EndAppend((CD3DDynamicAppendBuffer *)(v27 + 14));
  v28 = *((_QWORD *)this + 4);
  if ( v28 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
  }
  v29 = *((_DWORD *)this + 12);
  v30 = *((_DWORD *)this + 13);
  if ( v29 != v30 )
    dword_1803D311C += v30 - v29;
  dword_1803D323C += *((_DWORD *)this + 36);
  std::deque<CMegaRect>::_Tidy((char *)this + 112);
  v32 = *((_QWORD *)this + 3);
  if ( *(CDrawListEntryBatch **)(v32 + 168) != this )
    ModuleFailFastForHRESULT(2147549183LL, retaddr);
  *(_QWORD *)(v32 + 168) = 0LL;
  v33 = *(_DWORD *)(v32 + 128);
  v84 = this;
  v34 = v33 + 1;
  if ( v33 + 1 < v33 )
  {
    v56 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0LL, -2147024362, 0xB5u);
    goto LABEL_142;
  }
  if ( v34 > *(_DWORD *)(v32 + 124) )
  {
    v54 = DynArrayImpl<0>::AddMultipleAndSet(v32 + 104, 8LL, 1LL, &v84);
    v56 = v54;
    if ( v54 >= 0 )
      goto LABEL_63;
    MilInstrumentationCheckHR_MaybeFailFast(v55, 0LL, 0LL, v54, 0xC0u);
LABEL_142:
    ModuleFailFastForHRESULT(v56, retaddr);
  }
  *(_QWORD *)(*(_QWORD *)(v32 + 104) + 8LL * v33) = this;
  *(_DWORD *)(v32 + 128) = v34;
LABEL_63:
  if ( *((int *)this + 4) < 0 && (IsDebuggerPresent() || (unsigned int)IsKernelDebuggerPresent()) )
  {
    while ( 1 )
    {
      v59 = IsKernelDebuggerPresent();
      LOWORD(Response) = 63;
      v60 = v59;
      if ( !v59 )
      {
        v61 = IsDebuggerPresent();
        v62 = Response;
        if ( v61 )
          v62 = 103;
        LOBYTE(Response) = v62;
      }
      DbgPrintEx(
        0x65u,
        0,
        "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
        L"Tried to AddRef an object which has previously been freed (refcount went to 0).",
        word_18032C468,
        word_18032C468,
        "Function: ",
        L"CMILRefCountImpl::AddReference",
        ", ",
        L"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        23);
      if ( v60 )
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
      switch ( (char)Response )
      {
        case 'B':
        case 'b':
          __debugbreak();
          goto LABEL_64;
        case 'G':
        case 'g':
          goto LABEL_64;
        case 'I':
        case 'i':
          DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
          continue;
        case 'P':
        case 'p':
          CurrentProcess = GetCurrentProcess();
          TerminateProcess(CurrentProcess, 0xC0000001);
          goto LABEL_156;
        case 'T':
        case 't':
          CurrentThread = GetCurrentThread();
          TerminateThread(CurrentThread, 0xC0000001);
          goto LABEL_156;
        default:
LABEL_156:
          DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
          break;
      }
    }
  }
LABEL_64:
  _InterlockedIncrement((volatile signed __int32 *)this + 4);
  v35 = *((_DWORD *)this + 13);
  v36 = *((_DWORD *)this + 12);
  if ( v36 < v35 )
  {
    while ( 2 )
    {
      v37 = *(int **)(*(_QWORD *)(v32 + 24) + 8LL * v36);
      v38 = *v37;
      if ( *v37 == 1 )
      {
        v39 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)v37 + 2);
        if ( v39 )
          (**v39)(v39, 1LL);
        v40 = *((_QWORD *)v37 + 1);
        if ( v40 )
          goto LABEL_69;
      }
      else if ( v38 )
      {
        v47 = v38 - 2;
        if ( v47 )
        {
          if ( v47 != 1 )
            ModuleFailFastForHRESULT(2147549183LL, retaddr);
          v40 = *((_QWORD *)v37 + 1);
          if ( v40 )
LABEL_69:
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 8LL))(v40);
        }
        else
        {
          wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>((__int64 *)v37 + 1);
        }
      }
      *v37 = 0;
      Response = (unsigned __int64)v37;
      v41 = DynArray<CBatchCommand *,0>::AddMultipleAndSet(v32 + 64, &Response, 1LL);
      if ( v41 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v41, retaddr);
      if ( ++v36 >= v35 )
        break;
      continue;
    }
  }
  if ( (*(_DWORD *)(v32 + 176))-- == 1 )
  {
    v51 = *(_DWORD *)(v32 + 60);
    if ( v51 <= *(_DWORD *)(v32 + 48) - *(_DWORD *)(v32 + 56) )
      v51 = *(_DWORD *)(v32 + 48) - *(_DWORD *)(v32 + 56);
    *(_DWORD *)(v32 + 60) = v51;
    v52 = *(_DWORD *)(v32 + 100);
    if ( v52 <= *(_DWORD *)(v32 + 88) - *(_DWORD *)(v32 + 96) )
      v52 = *(_DWORD *)(v32 + 88) - *(_DWORD *)(v32 + 96);
    *(_DWORD *)(v32 + 100) = v52;
    v53 = *(_DWORD *)(v32 + 140);
    if ( v53 <= *(_DWORD *)(v32 + 128) - *(_DWORD *)(v32 + 136) )
      v53 = *(_DWORD *)(v32 + 128) - *(_DWORD *)(v32 + 136);
    *(_DWORD *)(v32 + 140) = v53;
    *(_DWORD *)(v32 + 48) = 0;
    *(_DWORD *)(v32 + 56) = 0;
  }
  result = (unsigned int)v7;
  *((_QWORD *)this + 6) = -1LL;
  return result;
}
