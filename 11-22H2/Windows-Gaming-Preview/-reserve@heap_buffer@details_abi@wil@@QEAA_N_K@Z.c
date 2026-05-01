/*
 * XREFs of ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180004C28
 * Callers:
 *     ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x180004D24 (-push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z.c)
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x180005480 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 *     ?RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z @ 0x18000688C (-RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z.c)
 * Callees:
 *     memcpy_s @ 0x180001930 (memcpy_s.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x180001F10 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall wil::details_abi::heap_buffer::reserve(wil::details_abi::heap_buffer *this, unsigned __int64 a2)
{
  DWORD LastError; // ebp
  unsigned __int64 v5; // rdi
  char *v6; // rax
  char *v7; // rsi
  rsize_t v9; // r14
  void *v10; // r15
  HANDLE ProcessHeap; // rax

  if ( *((_QWORD *)this + 2) - *(_QWORD *)this < a2 )
  {
    LastError = GetLastError();
    v5 = (a2 & 0xFFFFFFFFFFFFFFC0uLL) + 64;
    v6 = (char *)wil::details::ProcessHeapAlloc(0, v5);
    v7 = v6;
    if ( !v6 )
    {
      SetLastError(LastError);
      return 0;
    }
    v9 = *((_QWORD *)this + 1) - *(_QWORD *)this;
    memcpy_s(v6, v5, *(const void *const *)this, v9);
    v10 = (void *)*((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = v7;
    if ( v10 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v10);
    }
    *(_QWORD *)this = v7;
    *((_QWORD *)this + 1) = &v7[v9];
    *((_QWORD *)this + 2) = &v7[v5];
    SetLastError(LastError);
  }
  return 1;
}
