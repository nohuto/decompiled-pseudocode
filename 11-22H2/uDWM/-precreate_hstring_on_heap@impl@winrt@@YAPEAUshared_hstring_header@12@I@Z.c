/*
 * XREFs of ?precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z @ 0x180016B64
 * Callers:
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x180016AF4 (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z @ 0x18009E3E8 (-create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z.c)
 *     ??$to_hstring@PEBD$0A@@winrt@@YA?AUhstring@0@AEBQEBD@Z @ 0x1800ECF20 (--$to_hstring@PEBD$0A@@winrt@@YA-AUhstring@0@AEBQEBD@Z.c)
 * Callees:
 *     WINRT_IMPL_HeapAlloc @ 0x18005D4BA (WINRT_IMPL_HeapAlloc.c)
 *     WINRT_IMPL_GetProcessHeap @ 0x18005D4D2 (WINRT_IMPL_GetProcessHeap.c)
 *     _CxxThrowException_0 @ 0x180066340 (_CxxThrowException_0.c)
 */

struct winrt::impl::shared_hstring_header *__fastcall winrt::impl::precreate_hstring_on_heap(winrt::impl *this)
{
  __int64 v1; // rbx
  SIZE_T v2; // rsi
  HANDLE ProcessHeap; // rax
  struct winrt::impl::shared_hstring_header *result; // rax
  void **pExceptionObject; // [rsp+20h] [rbp-18h] BYREF
  const char *v6; // [rsp+28h] [rbp-10h]

  v1 = (unsigned int)this;
  v2 = 2LL * (unsigned int)this + 32;
  if ( v2 > 0xFFFFFFFF )
  {
    v6 = "length";
    pExceptionObject = &stdext::bad_alloc::`vftable';
    throw (std::invalid_argument *)&pExceptionObject;
  }
  ProcessHeap = WINRT_IMPL_GetProcessHeap();
  result = (struct winrt::impl::shared_hstring_header *)WINRT_IMPL_HeapAlloc(ProcessHeap, 0, v2);
  if ( !result )
  {
    v6 = "bad allocation";
    pExceptionObject = &stdext::bad_alloc::`vftable';
    throw (stdext::bad_alloc *)&pExceptionObject;
  }
  *((_DWORD *)result + 1) = v1;
  *(_DWORD *)result = 0;
  *((_QWORD *)result + 2) = (char *)result + 28;
  _InterlockedExchange((volatile __int32 *)result + 6, 1);
  *((_WORD *)result + v1 + 14) = 0;
  return result;
}
