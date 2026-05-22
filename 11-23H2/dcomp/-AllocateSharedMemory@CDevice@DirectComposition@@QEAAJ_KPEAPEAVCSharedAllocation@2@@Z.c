/*
 * XREFs of ?AllocateSharedMemory@CDevice@DirectComposition@@QEAAJ_KPEAPEAVCSharedAllocation@2@@Z @ 0x1800520F0
 * Callers:
 *     ?MarshalEffectDescription@CompositionEffectFactory@Composition@UI@Windows@@AEAAJXZ @ 0x18001A5B4 (-MarshalEffectDescription@CompositionEffectFactory@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?RebuildInternal@CPrimitiveGroup@DirectComposition@@MEAAJXZ @ 0x180031010 (-RebuildInternal@CPrimitiveGroup@DirectComposition@@MEAAJXZ.c)
 *     ?AddPrimitiveInternal@CAnimationBuilder@DirectComposition@@AEAAJAEBUDwmAnimationPrimitive@@@Z @ 0x18003463C (-AddPrimitiveInternal@CAnimationBuilder@DirectComposition@@AEAAJAEBUDwmAnimationPrimitive@@@Z.c)
 *     ?AttachConsumer@CompositionPath@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAPEAVCSharedAllocation@DirectComposition@@PEAI@Z @ 0x1800404C4 (-AttachConsumer@CompositionPath@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAPEAVCSharedAl.c)
 *     ?RuntimeClassInitialize@KeyFrameAnimator@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4DCOMPOSITION_EXPRESSION_TYPE@@PEAVKeyFrameAnimation@234@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@@Z @ 0x180050BA0 (-RuntimeClassInitialize@KeyFrameAnimator@Composition@UI@Windows@@QEAAJPEAVCompositor@234@W4DCOMP.c)
 *     ?GenerateInstance@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVCompositionAnimation@234@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@PEAPEAVExpressionAnimator@234@@Z @ 0x180054340 (-GenerateInstance@ExpressionAnimationBuilder@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEA.c)
 *     ?AddTipPoints@CGenericInk@DirectComposition@@UEAAJPEBEII@Z @ 0x1800F85F0 (-AddTipPoints@CGenericInk@DirectComposition@@UEAAJPEBEII@Z.c)
 *     ?CreatePerFrameDataQueue@CSynchronousSuperWetInk@DirectComposition@@AEAAJI@Z @ 0x1800FC4B4 (-CreatePerFrameDataQueue@CSynchronousSuperWetInk@DirectComposition@@AEAAJI@Z.c)
 *     ?CreateTipPointsQueue@CSynchronousSuperWetInk@DirectComposition@@AEAAJI@Z @ 0x1800FC750 (-CreateTipPointsQueue@CSynchronousSuperWetInk@DirectComposition@@AEAAJI@Z.c)
 *     ?AddTipPoints@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@QEAAJIIPEBE@Z @ 0x180184EB4 (-AddTipPoints@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@QEAAJIIPE.c)
 *     ?SetPropertiesForPresentCount@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Windows@@QEAAJI_NIPEBE@Z @ 0x1801853EC (-SetPropertiesForPresentCount@CompositionSynchronousSuperWetInkSource@Internal@Composition@UI@Wi.c)
 *     ?MarshalSharedData@SharedSectionWrapper@Composition@UI@Windows@@AEAAJPEAVCompositor@234@V?$span@E$0?0@gsl@@@Z @ 0x18018BE08 (-MarshalSharedData@SharedSectionWrapper@Composition@UI@Windows@@AEAAJPEAVCompositor@234@V-$span@.c)
 *     ?RuntimeClassInitialize@InjectionAnimator@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVInjectionAnimation@234@@Z @ 0x18019B838 (-RuntimeClassInitialize@InjectionAnimator@Composition@UI@Windows@@QEAAJPEAVCompositor@234@PEAVIn.c)
 * Callees:
 *     ?Create@CSharedSection@DirectComposition@@SAJPEAVCDevice@2@_N_KPEAPEAV12@@Z @ 0x18007E808 (-Create@CSharedSection@DirectComposition@@SAJPEAVCDevice@2@_N_KPEAPEAV12@@Z.c)
 *     ?Allocate@CSharedSection@DirectComposition@@QEAAPEAX_K@Z @ 0x180086240 (-Allocate@CSharedSection@DirectComposition@@QEAAPEAX_K@Z.c)
 *     ?OnBeforeSynchronizationStateUpdated@CCompositorSynchronizedObject@DirectComposition@@EEAAXW4State@12@@Z @ 0x18008EA00 (-OnBeforeSynchronizationStateUpdated@CCompositorSynchronizedObject@DirectComposition@@EEAAXW4Sta.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0xqqt_EventWriteTransfer @ 0x1800EC80C (McTemplateU0xqqt_EventWriteTransfer.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x18010084C (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall DirectComposition::CDevice::AllocateSharedMemory(
        DirectComposition::CDevice *this,
        unsigned __int64 a2,
        struct DirectComposition::CSharedAllocation **a3)
{
  __int64 v5; // rcx
  SIZE_T v6; // rbp
  char *v7; // r14
  int v8; // r15d
  char *v9; // rsi
  __int64 v10; // rdi
  void *v11; // rcx
  char *Heap; // rbx
  __int64 v14; // rdx
  char **v15; // rax
  char ***v16; // rcx
  char *v17; // rcx
  unsigned __int64 v18; // rcx
  bool v19; // al
  _QWORD *v20; // rsi
  DirectComposition::CSharedSection *v21; // rdi
  char *v22; // rax
  char **v23; // rdi
  _QWORD *v24; // rax
  __int64 v25; // rdx
  _QWORD *v26; // rcx
  int v27; // r9d
  char **v28; // rax
  char *v29; // rdi
  int v30; // eax
  int v31; // edi
  BOOL v32; // eax
  char v33; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  __int64 v36; // [rsp+60h] [rbp-58h]
  __int16 Response; // [rsp+C0h] [rbp+8h] BYREF
  struct DirectComposition::CSharedAllocation **v38; // [rsp+D0h] [rbp+18h]
  DirectComposition::CSharedSection *v39; // [rsp+D8h] [rbp+20h] BYREF

  v38 = a3;
  v5 = *((_QWORD *)this + 12);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5);
  v6 = a2 + 56;
  v39 = 0LL;
  if ( a2 + 56 < a2 )
    return (unsigned int)-2147024882;
  v7 = (char *)this + 520;
  v8 = 0;
  if ( v6 >= 0x1000 )
  {
    v19 = 0;
    v18 = a2 + 56;
    LOBYTE(Response) = 0;
    v36 = a2 + 56;
  }
  else
  {
    v9 = *(char **)v7;
    v36 = 0x4000LL;
    LOBYTE(Response) = 1;
    while ( v9 != v7 )
    {
      v10 = v9 ? (__int64)(v9 - 8) : 0LL;
      v11 = *(void **)(v10 + 64);
      v39 = (DirectComposition::CSharedSection *)v10;
      if ( !v11 )
        break;
      Heap = (char *)RtlAllocateHeap(v11, 0, v6);
      if ( Heap )
        ++*(_QWORD *)(v10 + 40);
      if ( (Microsoft_Windows_DirectCompositionEnableBits & 0x20) != 0 )
      {
        v27 = v6;
        if ( !Heap )
          v27 = 0;
        McTemplateU0xqqt_EventWriteTransfer(
          *(_DWORD *)(v10 + 72),
          0,
          v10,
          v27,
          *(_DWORD *)(v10 + 72),
          *(_QWORD *)(v10 + 64) != 0LL);
      }
      v9 = *(char **)v9;
      if ( Heap )
      {
        if ( *(char **)(v10 + 16) == v7 )
          goto LABEL_15;
        v14 = *(_QWORD *)(v10 + 8);
        v15 = (char **)(v10 + 8);
        if ( *(_QWORD *)(v14 + 8) == v10 + 8 )
        {
          v16 = *(char ****)(v10 + 16);
          if ( *v16 == v15 )
          {
            *v16 = (char **)v14;
            *(_QWORD *)(v14 + 8) = v16;
            v17 = *(char **)v7;
            if ( *(char **)(*(_QWORD *)v7 + 8LL) == v7 )
            {
              *v15 = v17;
              *(_QWORD *)(v10 + 16) = v7;
              *((_QWORD *)v17 + 1) = v15;
              *(_QWORD *)v7 = v15;
              goto LABEL_15;
            }
          }
        }
LABEL_39:
        __fastfail(3u);
      }
    }
    v18 = 0x4000LL;
    v19 = 1;
  }
  v20 = (_QWORD *)*((_QWORD *)this + 64);
  if ( v20 == (_QWORD *)((char *)this + 504) )
    goto LABEL_24;
  do
  {
    if ( v20 )
      v21 = (DirectComposition::CSharedSection *)(v20 - 1);
    else
      v21 = 0LL;
    v39 = v21;
    Heap = (char *)DirectComposition::CSharedSection::Allocate(v21, v6);
    if ( Heap )
    {
      if ( v21 )
        v24 = (_QWORD *)((char *)v21 + 8);
      else
        v24 = 0LL;
      v25 = *v24;
      if ( *(_QWORD **)(*v24 + 8LL) == v24 )
      {
        v26 = (_QWORD *)v24[1];
        if ( (_QWORD *)*v26 == v24 )
        {
          *v26 = v25;
          *(_QWORD *)(v25 + 8) = v26;
          *((_QWORD *)v21 + 6) = 0LL;
LABEL_26:
          if ( *((_QWORD *)v21 + 8) )
          {
            v22 = *(char **)v7;
            v23 = (char **)((char *)v21 + 8);
            if ( *(char **)(*(_QWORD *)v7 + 8LL) == v7 )
            {
              *v23 = v22;
              v23[1] = v7;
              *((_QWORD *)v22 + 1) = v23;
              *(_QWORD *)v7 = v23;
              goto LABEL_15;
            }
          }
          else
          {
            v28 = (char **)*((_QWORD *)this + 66);
            v29 = (char *)v21 + 8;
            if ( *v28 == v7 )
            {
              *(_QWORD *)v29 = v7;
              *((_QWORD *)v29 + 1) = v28;
              *v28 = v29;
              *((_QWORD *)this + 66) = v29;
              goto LABEL_15;
            }
          }
        }
      }
      goto LABEL_39;
    }
    v20 = (_QWORD *)v20[1];
  }
  while ( v20 != (_QWORD *)((char *)this + 504) );
  v19 = Response;
  v18 = v36;
LABEL_24:
  v8 = DirectComposition::CSharedSection::Create(this, v19, v18, &v39);
  if ( v8 < 0 )
    return (unsigned int)-2147024882;
  v21 = v39;
  Heap = (char *)DirectComposition::CSharedSection::Allocate(v39, v6);
  if ( Heap )
    goto LABEL_26;
LABEL_15:
  *((_QWORD *)Heap + 1) = 0LL;
  *((_QWORD *)Heap + 3) = 0LL;
  *((_QWORD *)Heap + 4) = 0LL;
  *((_QWORD *)Heap + 5) = 0LL;
  *(_QWORD *)Heap = &DirectComposition::CSharedAllocationBase::`vftable'{for `DirectComposition::CDelayedDestructionObject'};
  *((_QWORD *)Heap + 2) = &DirectComposition::CSharedAllocation::`vftable'{for `DirectComposition::CCompositorSynchronizedObject'};
  *((_QWORD *)Heap + 6) = v39;
  DirectComposition::CCompositorSynchronizedObject::OnBeforeSynchronizationStateUpdated(Heap + 16, 2LL);
  *((_DWORD *)Heap + 6) = 2;
  *(_QWORD *)Heap = &DirectComposition::CSharedAllocation::`vftable'{for `DirectComposition::CDelayedDestructionObject'};
  *((_QWORD *)Heap + 2) = &DirectComposition::CSharedAllocation::`vftable'{for `DirectComposition::CCompositorSynchronizedObject'};
  *v38 = (struct DirectComposition::CSharedAllocation *)Heap;
  if ( *((int *)Heap + 2) < 0 && (IsDebuggerPresent() || (unsigned int)IsKernelDebuggerPresent()) )
  {
    while ( 1 )
    {
      v30 = IsKernelDebuggerPresent();
      Response = 63;
      v31 = v30;
      if ( !v30 )
      {
        v32 = IsDebuggerPresent();
        v33 = Response;
        if ( v32 )
          v33 = 103;
        LOBYTE(Response) = v33;
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
      if ( v31 )
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
          goto LABEL_16;
        case 'G':
        case 'g':
          goto LABEL_16;
        case 'I':
        case 'i':
          DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
          continue;
        case 'P':
        case 'p':
          CurrentProcess = GetCurrentProcess();
          TerminateProcess(CurrentProcess, 0xC0000001);
          goto LABEL_62;
        case 'T':
        case 't':
          CurrentThread = GetCurrentThread();
          TerminateThread(CurrentThread, 0xC0000001);
          goto LABEL_62;
        default:
LABEL_62:
          DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
          break;
      }
    }
  }
LABEL_16:
  _InterlockedIncrement((volatile signed __int32 *)Heap + 2);
  return (unsigned int)v8;
}
