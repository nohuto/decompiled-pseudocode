/*
 * XREFs of ?Set@ThreadLocalFailureInfo@details_abi@wil@@QAEXABUFailureInfo@3@I@Z @ 0x100037C8
 * Callers:
 *     ?SetLastError@ThreadLocalData@details_abi@wil@@QAEXABUFailureInfo@3@@Z @ 0x1000392D (-SetLastError@ThreadLocalData@details_abi@wil@@QAEXABUFailureInfo@3@@Z.c)
 * Callees:
 *     ?ProcessHeapAlloc@details@wil@@YGPAXKI@Z @ 0x10002645 (-ProcessHeapAlloc@details@wil@@YGPAXKI@Z.c)
 *     ?ResultStringSize@details@wil@@YGIPBD@Z @ 0x10002BF9 (-ResultStringSize@details@wil@@YGIPBD@Z.c)
 *     ?ResultStringSize@details@wil@@YGIPB_W@Z @ 0x10002C17 (-ResultStringSize@details@wil@@YGIPB_W@Z.c)
 *     ??$WriteResultString@PB_W@details@wil@@YGPAEPAE0PB_WPAPB_W@Z @ 0x10004576 (--$WriteResultString@PB_W@details@wil@@YGPAEPAE0PB_WPAPB_W@Z.c)
 *     ??$WriteResultString@PBD@details@wil@@YGPAEPAE0PBDPAPBD@Z @ 0x100045E6 (--$WriteResultString@PBD@details@wil@@YGPAEPAE0PBDPAPBD@Z.c)
 *     _memset @ 0x10007471 (_memset.c)
 */

void __thiscall wil::details_abi::ThreadLocalFailureInfo::Set(
        wil::details_abi::ThreadLocalFailureInfo *this,
        const struct wil::FailureInfo *a2,
        unsigned int a3)
{
  int v4; // ebx
  unsigned int v5; // ebx
  SIZE_T v6; // ebx
  void *v7; // esi
  HANDLE ProcessHeap; // eax
  char *v9; // ecx
  char *v10; // esi
  void *v11; // eax
  void *v12; // eax
  void *v13; // eax
  char *v14; // [esp+Ch] [ebp-Ch]
  char *v15; // [esp+10h] [ebp-8h]
  LPVOID v16; // [esp+14h] [ebp-4h]

  *((_DWORD *)this + 1) = a3;
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 3) = 0;
  *((_WORD *)this + 8) = *((_WORD *)a2 + 20);
  *((_BYTE *)this + 18) = *(_BYTE *)a2;
  *((_DWORD *)this + 5) = 0;
  v15 = (char *)this + 20;
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 20);
  *((_DWORD *)this + 7) = *((_DWORD *)a2 + 21);
  *((_DWORD *)this + 8) = 0;
  v14 = (char *)this + 32;
  v4 = wil::details::ResultStringSize(*((_WORD **)a2 + 5));
  v5 = wil::details::ResultStringSize(*((const char **)a2 + 9)) + v4;
  v6 = wil::details::ResultStringSize(*((const char **)a2 + 19)) + v5;
  if ( !*((_DWORD *)this + 9) || *((_DWORD *)this + 10) < v6 )
  {
    v16 = wil::details::ProcessHeapAlloc(8u, v6);
    if ( v16 )
    {
      v7 = (void *)*((_DWORD *)this + 9);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v7);
      *((_DWORD *)this + 9) = v16;
      *((_DWORD *)this + 10) = v6;
    }
  }
  v9 = (char *)*((_DWORD *)this + 9);
  if ( v9 )
  {
    v10 = &v9[*((_DWORD *)this + 10)];
    v11 = (void *)wil::details::WriteResultString<char const *>(v9, *((void **)a2 + 9), (int)this + 12);
    v12 = (void *)wil::details::WriteResultString<char const *>(v11, *((void **)a2 + 19), (int)v15);
    v13 = (void *)wil::details::WriteResultString<wchar_t const *>(v12, *((void **)a2 + 5), (int)v14);
    memset(v13, 0, v10 - (_BYTE *)v13);
  }
}
