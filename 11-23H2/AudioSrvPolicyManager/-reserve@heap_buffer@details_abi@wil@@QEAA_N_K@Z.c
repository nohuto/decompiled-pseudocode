/*
 * XREFs of ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x18003A5D4
 * Callers:
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x18003A49C (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18000D330 (--3@YAXPEAX@Z.c)
 *     memcpy_s @ 0x18000D370 (memcpy_s.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x1800188B4 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x18001983C (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall wil::details_abi::heap_buffer::reserve(wil::details_abi::heap_buffer *this, unsigned __int64 a2)
{
  unsigned __int64 v4; // rdi
  char *v5; // rax
  char *v6; // rsi
  rsize_t v8; // r14
  void *v9; // rcx
  char v10; // [rsp+30h] [rbp+8h] BYREF
  DWORD LastError; // [rsp+34h] [rbp+Ch]

  if ( *((_QWORD *)this + 2) - *(_QWORD *)this < a2 )
  {
    v10 = 0;
    LastError = GetLastError();
    v4 = (a2 & 0xFFFFFFFFFFFFFFC0uLL) + 64;
    v5 = (char *)wil::details::ProcessHeapAlloc(0, v4);
    v6 = v5;
    if ( !v5 )
    {
      wil::last_error_context::~last_error_context((wil::last_error_context *)&v10);
      return 0;
    }
    v8 = *((_QWORD *)this + 1) - *(_QWORD *)this;
    memcpy_s(v5, v4, *(const void *const *)this, v8);
    v9 = (void *)*((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = v6;
    if ( v9 )
      operator delete(v9);
    *(_QWORD *)this = v6;
    *((_QWORD *)this + 1) = &v6[v8];
    *((_QWORD *)this + 2) = &v6[v4];
    wil::last_error_context::~last_error_context((wil::last_error_context *)&v10);
  }
  return 1;
}
