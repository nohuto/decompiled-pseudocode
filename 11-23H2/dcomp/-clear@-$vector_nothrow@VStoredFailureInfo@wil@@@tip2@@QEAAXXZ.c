/*
 * XREFs of ?clear@?$vector_nothrow@VStoredFailureInfo@wil@@@tip2@@QEAAXXZ @ 0x18009DC4C
 * Callers:
 *     ??1test_state@tip2@@QEAA@XZ @ 0x18009DA2C (--1test_state@tip2@@QEAA@XZ.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x1800FEA48 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 */

void __fastcall tip2::vector_nothrow<wil::StoredFailureInfo>::clear(_QWORD *a1)
{
  unsigned __int64 *v1; // rdi
  unsigned __int64 v3; // rbp
  __int64 v4; // rbx
  void *v5; // rbx
  HANDLE ProcessHeap; // rax

  v1 = a1 + 2;
  if ( *a1 )
  {
    v3 = 0LL;
    if ( *v1 )
    {
      v4 = 0LL;
      do
      {
        wil::details::shared_buffer::reset((wil::details::shared_buffer *)(v4 + *a1 + 152LL));
        ++v3;
        v4 += 168LL;
      }
      while ( v3 < *v1 );
    }
    v5 = (void *)*a1;
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v5);
    *a1 = 0LL;
  }
  a1[1] = 0LL;
  *v1 = 0LL;
}
