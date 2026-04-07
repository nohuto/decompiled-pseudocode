/*
 * XREFs of ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180040CFC
 * Callers:
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180041F38 (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 * Callees:
 *     ?MemoryFree@@YAXPEAX@Z @ 0x18001398C (-MemoryFree@@YAXPEAX@Z.c)
 *     memcpy_s @ 0x180041E60 (memcpy_s.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x180041F98 (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 */

bool __fastcall wil::details_abi::heap_buffer::reserve(
        wil::details_abi::heap_buffer *this,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v4; // rdi
  char *v5; // rax
  char *v6; // rsi
  rsize_t v7; // r14
  void *v8; // rcx

  if ( *((_QWORD *)this + 2) - *(_QWORD *)this >= a2 )
  {
LABEL_6:
    LOBYTE(v5) = 1;
    return (char)v5;
  }
  v4 = (a2 & 0xFFFFFFFFFFFFFFC0uLL) + 64;
  v5 = (char *)wil::details::ProcessHeapAlloc(0, v4, a3);
  v6 = v5;
  if ( v5 )
  {
    v7 = *((_QWORD *)this + 1) - *(_QWORD *)this;
    memcpy_s(v5, v4, *(const void *const *)this, v7);
    v8 = (void *)*((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = v6;
    if ( v8 )
      MemoryFree(v8);
    *(_QWORD *)this = v6;
    *((_QWORD *)this + 1) = &v6[v7];
    *((_QWORD *)this + 2) = &v6[v4];
    goto LABEL_6;
  }
  return (char)v5;
}
