/*
 * XREFs of ?CreateWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180102A10
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18001EAE0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180023D44 (--0CWindowData@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x180107A88 (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::CreateWindow(CWindowList *this, struct IDwmWindow *a2)
{
  unsigned int v3; // edi
  int v4; // ebx
  BOOL v5; // eax
  char v6; // cl
  HANDLE CurrentThread; // rax
  HANDLE CurrentProcess; // rax
  CWindowData *v9; // rax
  CWindowData *v10; // rax
  CWindowData *v11; // rbx
  CWindowData *Response; // [rsp+88h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+90h] [rbp+18h] BYREF

  v14 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v3 = 0;
  if ( (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2)
    && (IsDebuggerPresent() || (unsigned int)IsKernelDebuggerPresent()) )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v4 = IsKernelDebuggerPresent();
        LOWORD(Response) = 63;
        if ( !v4 )
        {
          v5 = IsDebuggerPresent();
          v6 = (char)Response;
          if ( v5 )
            v6 = 103;
          LOBYTE(Response) = v6;
        }
        DbgPrintEx(
          0x65u,
          0,
          "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
          word_180118A5C,
          word_180118A5C,
          L"pwdData == nullptr",
          "Function: ",
          L"CWindowList::CreateWindow",
          ", ",
          L"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
          1927);
        if ( v4 )
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
        if ( (char)Response <= 98 )
          break;
        if ( (char)Response == 103 )
          goto LABEL_28;
        if ( (char)Response != 105 )
        {
          if ( (char)Response != 112 )
          {
            if ( (char)Response != 116 )
              goto LABEL_25;
LABEL_23:
            CurrentThread = GetCurrentThread();
            TerminateThread(CurrentThread, 0xC0000001);
            goto LABEL_25;
          }
LABEL_24:
          CurrentProcess = GetCurrentProcess();
          TerminateProcess(CurrentProcess, 0xC0000001);
          goto LABEL_25;
        }
LABEL_26:
        DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
      }
      switch ( (char)Response )
      {
        case 'b':
        case 'B':
          __debugbreak();
          goto LABEL_28;
        case 'G':
          goto LABEL_28;
        case 'I':
          goto LABEL_26;
        case 'P':
          goto LABEL_24;
        case 'T':
          goto LABEL_23;
      }
LABEL_25:
      DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
    }
  }
LABEL_28:
  v9 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                        WPF::g_pProcessHeap,
                        840LL);
  Response = v9;
  if ( v9 && (v10 = CWindowData::CWindowData(v9), (v11 = v10) != 0LL) )
  {
    *((_QWORD *)v10 + 3) = a2;
    (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v10);
    *((_QWORD *)v11 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x78Au);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v14);
  return v3;
}
