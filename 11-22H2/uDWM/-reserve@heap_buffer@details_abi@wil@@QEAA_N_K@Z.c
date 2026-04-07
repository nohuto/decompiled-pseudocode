/*
 * XREFs of ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180016954
 * Callers:
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180016C3C (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 * Callees:
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x180016A14 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     memcpy_s @ 0x180016BE0 (memcpy_s.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x1800580D8 (-MemoryFree@@YAXPEAX@Z.c)
 *     ??0last_error_context@wil@@QEAA@XZ @ 0x18009AA5C (--0last_error_context@wil@@QEAA@XZ.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x18009AF70 (--1last_error_context@wil@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall wil::details_abi::heap_buffer::reserve(wil::details_abi::heap_buffer *this, unsigned __int64 a2)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // r8
  char *v6; // rax
  char *v7; // rsi
  rsize_t v9; // r14
  void *v10; // rcx
  char v11; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 2) - *(_QWORD *)this < a2 )
  {
    wil::last_error_context::last_error_context((wil::last_error_context *)&v11);
    v4 = (a2 & 0xFFFFFFFFFFFFFFC0uLL) + 64;
    v6 = (char *)wil::details::ProcessHeapAlloc(0, v4, v5);
    v7 = v6;
    if ( !v6 )
    {
      wil::last_error_context::~last_error_context((wil::last_error_context *)&v11);
      return 0;
    }
    v9 = *((_QWORD *)this + 1) - *(_QWORD *)this;
    memcpy_s(v6, v4, *(const void *const *)this, v9);
    v10 = (void *)*((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = v7;
    if ( v10 )
      MemoryFree(v10);
    *(_QWORD *)this = v7;
    *((_QWORD *)this + 1) = &v7[v9];
    *((_QWORD *)this + 2) = &v7[v4];
    wil::last_error_context::~last_error_context((wil::last_error_context *)&v11);
  }
  return 1;
}
