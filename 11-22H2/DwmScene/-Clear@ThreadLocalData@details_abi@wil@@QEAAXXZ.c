/*
 * XREFs of ?Clear@ThreadLocalData@details_abi@wil@@QEAAXXZ @ 0x18000D89C
 * Callers:
 *     ??1?$ThreadLocalStorage@UThreadLocalData@details_abi@wil@@@details_abi@wil@@QEAA@XZ @ 0x18000D508 (--1-$ThreadLocalStorage@UThreadLocalData@details_abi@wil@@@details_abi@wil@@QEAA@XZ.c)
 * Callees:
 *     ??$make_range@PEAUThreadLocalFailureInfo@details_abi@wil@@@wil@@YA?AV?$pointer_range@PEAUThreadLocalFailureInfo@details_abi@wil@@@details@0@PEAUThreadLocalFailureInfo@details_abi@0@_K@Z @ 0x18000D308 (--$make_range@PEAUThreadLocalFailureInfo@details_abi@wil@@@wil@@YA-AV-$pointer_range@PEAUThreadL.c)
 */

void __fastcall wil::details_abi::ThreadLocalData::Clear(wil::details_abi::ThreadLocalData *this)
{
  __int64 v2; // rdi
  void *v3; // rbx
  HANDLE ProcessHeap; // rax
  void *v5; // rbx
  HANDLE v6; // rax
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  wil::make_range<wil::details_abi::ThreadLocalFailureInfo *>(
    &v7,
    *((_QWORD *)this + 3),
    *((unsigned __int16 *)this + 16));
  if ( v7 != v8 )
  {
    v2 = v7 + 64;
    do
    {
      v3 = *(void **)v2;
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v3);
      *(_QWORD *)v2 = 0LL;
      *(_QWORD *)(v2 + 8) = 0LL;
      v2 += 80LL;
    }
    while ( v2 - 64 != v8 );
  }
  v5 = (void *)*((_QWORD *)this + 3);
  v6 = GetProcessHeap();
  HeapFree(v6, 0, v5);
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 3) = 0LL;
}
