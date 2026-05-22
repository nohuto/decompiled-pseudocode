/*
 * XREFs of ?CollectDead@CAtlasNode@DirectComposition@@QEAAXXZ @ 0x180027480
 * Callers:
 *     ?CollectDeadSurfaces@CDynamicPoolSet@DirectComposition@@QEAAXXZ @ 0x180024398 (-CollectDeadSurfaces@CDynamicPoolSet@DirectComposition@@QEAAXXZ.c)
 *     ?Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z @ 0x180025130 (-Commit@CDevice@DirectComposition@@QEAAJ_NPEAX@Z.c)
 *     ?CollectDead@CAtlasNode@DirectComposition@@QEAAXXZ @ 0x180027480 (-CollectDead@CAtlasNode@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     ?CollectDead@CAtlasNode@DirectComposition@@QEAAXXZ @ 0x180027480 (-CollectDead@CAtlasNode@DirectComposition@@QEAAXXZ.c)
 *     ??1CAtlasNode@DirectComposition@@QEAA@XZ @ 0x180027EE8 (--1CAtlasNode@DirectComposition@@QEAA@XZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18002AEB8 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     ??_GCAtlasNode@DirectComposition@@QEAAPEAXI@Z @ 0x180085A18 (--_GCAtlasNode@DirectComposition@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0xqqqqx_EventWriteTransfer @ 0x1800E93DC (McTemplateU0xqqqqx_EventWriteTransfer.c)
 *     McTemplateU0xqqqf_EventWriteTransfer @ 0x1800EA3A8 (McTemplateU0xqqqf_EventWriteTransfer.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x18010084C (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

void __fastcall DirectComposition::CAtlasNode::CollectDead(DirectComposition::CAtlasNode *this, unsigned int a2)
{
  DirectComposition::CAtlasNode *v3; // rcx
  DirectComposition::CAtlasNode *v4; // rcx
  DirectComposition::CAtlasNode *v5; // rcx
  unsigned int v6; // esi
  __int64 v7; // rax
  __int64 *v8; // rbx
  int v9; // r10d
  unsigned int v10; // r8d
  unsigned int v11; // r9d
  _DWORD *v12; // rax
  unsigned int v13; // r10d
  unsigned int v14; // ecx
  _DWORD *v15; // rax
  unsigned int v16; // edx
  unsigned int v17; // ecx
  _DWORD *v18; // rax
  __int64 v19; // rbx
  __int64 v20; // r8
  DirectComposition::CAtlasNode *v21; // rbx
  int v22; // r10d
  __int64 v23; // rbx
  __int64 v24; // rbp
  __int64 v25; // rax
  __int64 v26; // rbp
  __int64 v27; // rbx
  __int64 v28; // rbx
  __int64 v29; // r8
  __int64 i; // rcx
  char v31; // al
  volatile signed __int32 *v32; // rbx
  __int64 v33; // rbx
  __int64 v34; // rax
  __int64 v35; // rcx
  DirectComposition::CAtlasNode *v36; // rcx
  __int64 v37; // rcx
  int v38; // edx
  int v39; // r9d
  float v40; // xmm1_4
  __int64 v41; // rax
  float v42; // xmm1_4
  char v43; // al
  float v44; // xmm1_4
  int v45; // eax
  int v46; // r14d
  BOOL v47; // eax
  char v48; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  __int16 Response; // [rsp+A0h] [rbp+8h] BYREF

  v3 = (DirectComposition::CAtlasNode *)*((_QWORD *)this + 3);
  if ( v3 )
    DirectComposition::CAtlasNode::CollectDead(v3);
  v4 = (DirectComposition::CAtlasNode *)*((_QWORD *)this + 4);
  if ( v4 )
    DirectComposition::CAtlasNode::CollectDead(v4);
  v5 = (DirectComposition::CAtlasNode *)*((_QWORD *)this + 5);
  v6 = 0;
  if ( v5 )
  {
    DirectComposition::CAtlasNode::CollectDead(v5);
    v23 = *((_QWORD *)this + 5);
    if ( (!*(_DWORD *)(v23 + 56) || !*(_DWORD *)(v23 + 60))
      && !*(_QWORD *)(v23 + 24)
      && !*(_QWORD *)(v23 + 32)
      && !*(_QWORD *)(v23 + 40) )
    {
      if ( v23 )
      {
        DirectComposition::CAtlasNode::~CAtlasNode(*((DirectComposition::CAtlasNode **)this + 5));
        operator delete((void *)v23, 0x50uLL);
      }
      *((_QWORD *)this + 5) = 0LL;
    }
  }
  v7 = *((_QWORD *)this + 2);
  if ( v7 )
  {
    v8 = (__int64 *)(v7 + 16);
    if ( *(_DWORD *)(v7 + 24) == 4
      && *(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v7 + 16) + 48LL))(v7 + 16) + 420) >= *(_DWORD *)(v7 + 28) )
    {
      v25 = *v8;
      *((_DWORD *)v8 + 3) = 0;
      (*(void (__fastcall **)(__int64 *, __int64))(v25 + 40))(v8, 1LL);
      *((_DWORD *)v8 + 2) = 1;
    }
    else if ( *((_DWORD *)v8 + 2) != 1 )
    {
      goto LABEL_9;
    }
    v26 = *((_QWORD *)this + 2);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v26 + 16) + 40LL))(v26 + 16, 5LL);
    *(_DWORD *)(v26 + 24) = 5;
    v27 = *(_QWORD *)(v26 + 64);
    if ( (*(_BYTE *)(v27 + 172) & 2) != 0 )
    {
      if ( (Microsoft_Windows_DirectCompositionEnableBits & 8) != 0 )
      {
        v37 = *(_QWORD *)(v27 + 184);
        v38 = *(_DWORD *)(v27 + 156);
        v39 = *(_DWORD *)(v27 + 152);
        if ( v37 < 0 )
        {
          v41 = *(_QWORD *)(v27 + 184) & 1LL | (*(_QWORD *)(v27 + 184) >> 1);
          v40 = (float)(int)v41 + (float)(int)v41;
        }
        else
        {
          v40 = (float)(int)v37;
        }
        v42 = v40 * 100.0;
        v43 = 64;
        if ( *(_DWORD *)(v27 + 160) != 10 )
          v43 = 32;
        v44 = v42 / (float)(v38 * v39);
        McTemplateU0xqqqf_EventWriteTransfer(32, v38, *(_QWORD *)(v26 + 64), v39, v38, v43, SLOBYTE(v44));
      }
      *(_BYTE *)(v27 + 172) &= ~2u;
      v27 = *(_QWORD *)(v26 + 64);
    }
    if ( (Microsoft_Windows_DirectCompositionEnableBits & 8) != 0 )
      McTemplateU0xqqqqx_EventWriteTransfer(
        *(_DWORD *)(v26 + 88) & 1,
        (unsigned int)&DCOMPEVENT_ATLAS_ENTRY_FREE,
        v27,
        *(_DWORD *)(v26 + 72),
        *(_DWORD *)(v26 + 76),
        *(_BYTE *)(v26 + 80) + (*(_DWORD *)(v26 + 88) & 1) + ((*(_DWORD *)(v26 + 88) & 2) != 0),
        *(_BYTE *)(v26 + 84) + ((*(_DWORD *)(v26 + 88) & 4) != 0) + ((*(_DWORD *)(v26 + 88) & 8) != 0),
        v26);
    v28 = *(_QWORD *)(v26 + 64);
    if ( *(_QWORD *)(v28 + 200) != v26 )
    {
      a2 = *(_DWORD *)(v28 + 136);
      v29 = *(_QWORD *)(v28 + 112);
      for ( i = 0LL; (unsigned int)i < a2; i = (unsigned int)(i + 1) )
      {
        if ( v26 == *(_QWORD *)(v29 + 8 * i) )
          break;
      }
      if ( (unsigned int)i < a2 )
      {
        for ( ; (unsigned int)i < a2 - 1; a2 = *(_DWORD *)(v28 + 136) )
        {
          *(_QWORD *)(v29 + 8 * i) = *(_QWORD *)(v29 + 8LL * (unsigned int)(i + 1));
          i = (unsigned int)(i + 1);
        }
        *(_DWORD *)(v28 + 136) = a2 - 1;
      }
      if ( !*(_DWORD *)(v28 + 136) && (*(_BYTE *)(v28 + 172) & 1) == 0 )
        *(_DWORD *)(v28 + 168) = GetTickCount();
      v31 = *(_BYTE *)(v28 + 172);
      if ( (v31 & 1) != 0 && !*(_DWORD *)(v28 + 136) && (v31 & 0x40) == 0 )
        CMILRefCountBaseT<IUnknown>::InternalRelease(v28);
    }
    *(_QWORD *)(v26 + 64) = 0LL;
    *(_QWORD *)(v26 + 96) = 0LL;
    v32 = (volatile signed __int32 *)*((_QWORD *)this + 2);
    if ( v32 )
    {
      if ( _InterlockedExchangeAdd(v32 + 2, 0xFFFFFFFF) == 1 )
      {
        if ( *((int *)v32 + 2) < 0 && (IsDebuggerPresent() || (unsigned int)IsKernelDebuggerPresent()) )
        {
          while ( 1 )
          {
            v45 = IsKernelDebuggerPresent();
            Response = 63;
            v46 = v45;
            if ( !v45 )
            {
              v47 = IsDebuggerPresent();
              v48 = Response;
              if ( v47 )
                v48 = 103;
              LOBYTE(Response) = v48;
            }
            DbgPrintEx(
              0x65u,
              0,
              "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
              L"Tried to AddRef an object which has previously been freed (refcount went to 0).",
              word_1801E5750,
              word_1801E5750,
              "Function: ",
              L"CMILRefCountImpl::AddReference",
              ", ",
              L"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
              23);
            if ( v46 )
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
                goto LABEL_101;
              case 'G':
              case 'g':
                goto LABEL_101;
              case 'I':
              case 'i':
                DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
                continue;
              case 'P':
              case 'p':
                CurrentProcess = GetCurrentProcess();
                TerminateProcess(CurrentProcess, 0xC0000001);
                goto LABEL_167;
              case 'T':
              case 't':
                CurrentThread = GetCurrentThread();
                TerminateThread(CurrentThread, 0xC0000001);
                goto LABEL_167;
              default:
LABEL_167:
                DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
                break;
            }
          }
        }
LABEL_101:
        _InterlockedIncrement(v32 + 2);
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 32LL))(v32);
        if ( _InterlockedExchangeAdd(v32 + 2, 0xFFFFFFFF) == 1 )
        {
          --*((_DWORD *)v32 + 2);
          (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v32 + 24LL))(v32, 1LL);
        }
      }
      *((_QWORD *)this + 2) = 0LL;
    }
  }
LABEL_9:
  if ( *((_QWORD *)this + 2) )
    goto LABEL_10;
  *((_QWORD *)this + 7) = 0LL;
  if ( *((_QWORD *)this + 5) )
    goto LABEL_10;
  v19 = *((_QWORD *)this + 3);
  if ( v19
    && (*(_DWORD *)(v19 + 56) && *(_DWORD *)(v19 + 60)
     || *(_QWORD *)(v19 + 24)
     || *(_QWORD *)(v19 + 32)
     || *(_QWORD *)(v19 + 40)) )
  {
    v24 = *((_QWORD *)this + 4);
  }
  else
  {
    v20 = *((_QWORD *)this + 4);
    if ( !v20
      || (!*(_DWORD *)(v20 + 56) || !*(_DWORD *)(v20 + 60))
      && !*(_QWORD *)(v20 + 24)
      && !*(_QWORD *)(v20 + 32)
      && !*(_QWORD *)(v20 + 40) )
    {
      if ( v19 )
      {
        DirectComposition::CAtlasNode::~CAtlasNode(*((DirectComposition::CAtlasNode **)this + 3));
        operator delete((void *)v19, 0x50uLL);
      }
      v21 = (DirectComposition::CAtlasNode *)*((_QWORD *)this + 4);
      *((_QWORD *)this + 3) = 0LL;
      if ( v21 )
      {
        DirectComposition::CAtlasNode::~CAtlasNode(v21);
        operator delete(v21, 0x50uLL);
      }
      *((_QWORD *)this + 4) = 0LL;
      *((_DWORD *)this + 12) = *((_DWORD *)this + 2) - *(_DWORD *)this;
      *((_DWORD *)this + 13) = *((_DWORD *)this + 3) - *((_DWORD *)this + 1);
      goto LABEL_112;
    }
    v24 = *((_QWORD *)this + 4);
    if ( !v19 )
      goto LABEL_107;
  }
  if ( *(_DWORD *)(v19 + 56) && *(_DWORD *)(v19 + 60)
    || *(_QWORD *)(v19 + 24)
    || *(_QWORD *)(v19 + 32)
    || *(_QWORD *)(v19 + 40) )
  {
    goto LABEL_76;
  }
  v20 = *((_QWORD *)this + 4);
LABEL_107:
  v24 = v20;
  if ( *(_DWORD *)(v20 + 8) - *(_DWORD *)v20 == *((_DWORD *)this + 2) - *(_DWORD *)this )
  {
    if ( v19 )
    {
      DirectComposition::CAtlasNode::`scalar deleting destructor'(*((DirectComposition::CAtlasNode **)this + 3), a2);
      v20 = *((_QWORD *)this + 4);
    }
    *((_QWORD *)this + 3) = 0LL;
    *((_DWORD *)this + 12) = *((_DWORD *)this + 2) - *(_DWORD *)this;
    goto LABEL_111;
  }
LABEL_76:
  v20 = v24;
  if ( v24
    && (*(_DWORD *)(v24 + 56) && *(_DWORD *)(v24 + 60)
     || *(_QWORD *)(v24 + 24)
     || *(_QWORD *)(v24 + 32)
     || *(_QWORD *)(v24 + 40)) )
  {
    goto LABEL_126;
  }
  a2 = *(_DWORD *)(v19 + 12) - *(_DWORD *)(v19 + 4);
  if ( a2 == *((_DWORD *)this + 3) - *((_DWORD *)this + 1) )
  {
    if ( v24 )
    {
      DirectComposition::CAtlasNode::~CAtlasNode((DirectComposition::CAtlasNode *)v24);
      operator delete((void *)v24, 0x50uLL);
    }
    *((_QWORD *)this + 4) = 0LL;
    *((_DWORD *)this + 13) = *((_DWORD *)this + 3) - *((_DWORD *)this + 1);
    goto LABEL_112;
  }
LABEL_111:
  if ( !v20 )
  {
LABEL_112:
    v33 = *((_QWORD *)this + 3);
    if ( v33 && !*(_QWORD *)(v33 + 16) && !*(_QWORD *)(v33 + 40) && !*(_QWORD *)(v33 + 32) )
    {
      v36 = (DirectComposition::CAtlasNode *)*((_QWORD *)this + 3);
      *((_DWORD *)this + 12) += *(_DWORD *)(v33 + 48);
      *((_QWORD *)this + 3) = *(_QWORD *)(v33 + 24);
      *(_QWORD *)(v33 + 24) = 0LL;
      DirectComposition::CAtlasNode::~CAtlasNode(v36);
      operator delete((void *)v33, 0x50uLL);
    }
    goto LABEL_113;
  }
LABEL_126:
  if ( *(_DWORD *)(v20 + 8) - *(_DWORD *)v20 == *((_DWORD *)this + 2) - *(_DWORD *)this )
    goto LABEL_112;
LABEL_113:
  v34 = *((_QWORD *)this + 3);
  if ( !v34 || *(_DWORD *)(v34 + 12) - *(_DWORD *)(v34 + 4) == *((_DWORD *)this + 3) - *((_DWORD *)this + 1) )
  {
    v35 = *((_QWORD *)this + 4);
    if ( v35 )
    {
      if ( !*(_QWORD *)(v35 + 16) && !*(_QWORD *)(v35 + 40) && !*(_QWORD *)(v35 + 24) )
      {
        *((_DWORD *)this + 13) += *(_DWORD *)(v35 + 52);
        *((_QWORD *)this + 4) = *(_QWORD *)(v35 + 32);
        *(_QWORD *)(v35 + 32) = 0LL;
        DirectComposition::CAtlasNode::`scalar deleting destructor'((DirectComposition::CAtlasNode *)v35, a2);
      }
    }
  }
LABEL_10:
  v9 = *((_DWORD *)this + 14);
  v10 = 0;
  v11 = 0;
  if ( v9 && *((_DWORD *)this + 15) || *((_QWORD *)this + 3) || *((_QWORD *)this + 4) || *((_QWORD *)this + 5) )
  {
    v12 = (_DWORD *)*((_QWORD *)this + 3);
    if ( v12 || *((_QWORD *)this + 4) || *((_QWORD *)this + 5) )
    {
      if ( !v9 || !*((_DWORD *)this + 15) )
      {
        v22 = *((_DWORD *)this + 12);
        if ( v22 )
          v6 = *((_DWORD *)this + 12);
        if ( *((_DWORD *)this + 13) )
          v10 = *((_DWORD *)this + 13);
        if ( v22 * *((_DWORD *)this + 13) )
          v11 = v22 * *((_DWORD *)this + 13);
      }
      v13 = v10;
      if ( v12 )
      {
        v14 = v12[16];
        v10 = v12[17];
        if ( v14 <= v6 )
          v14 = v6;
        v6 = v14;
        if ( v10 <= v13 )
          v10 = v13;
        if ( v12[18] > v11 )
          v11 = v12[18];
      }
      v15 = (_DWORD *)*((_QWORD *)this + 4);
      v16 = v10;
      if ( v15 )
      {
        v17 = v15[16];
        v10 = v15[17];
        if ( v17 <= v6 )
          v17 = v6;
        v6 = v17;
        if ( v10 <= v16 )
          v10 = v16;
        if ( v15[18] > v11 )
          v11 = v15[18];
      }
      v18 = (_DWORD *)*((_QWORD *)this + 5);
      if ( v18 )
      {
        if ( v18[16] > v6 )
          v6 = v18[16];
        if ( v18[17] > v10 )
          v10 = v18[17];
        if ( v18[18] > v11 )
          v11 = v18[18];
      }
    }
    else
    {
      v6 = *((_DWORD *)this + 2) - *(_DWORD *)this;
      v10 = *((_DWORD *)this + 3) - *((_DWORD *)this + 1);
      v11 = v10 * (*((_DWORD *)this + 2) - v9 - *(_DWORD *)this);
      if ( v6 * (v10 - *((_DWORD *)this + 15)) > v11 )
        v11 = v6 * (*((_DWORD *)this + 3) - *((_DWORD *)this + 1) - *((_DWORD *)this + 15));
    }
  }
  else
  {
    v10 = *((_DWORD *)this + 3) - *((_DWORD *)this + 1);
    v11 = (*((_DWORD *)this + 2) - *(_DWORD *)this) * v10;
    v6 = *((_DWORD *)this + 2) - *(_DWORD *)this;
  }
  *((_DWORD *)this + 16) = v6;
  *((_DWORD *)this + 17) = v10;
  *((_DWORD *)this + 18) = v11;
}
