/*
 * XREFs of sub_18010DAF0 @ 0x18010DAF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 */

__int64 sub_18010DAF0()
{
  __int64 result; // rax
  __int64 v1; // rbx

  result = (__int64)NtCurrentTeb()->ThreadLocalStoragePointer;
  v1 = *(_QWORD *)(result + 8LL * (unsigned int)TlsIndex) + 312LL;
  if ( *(_QWORD *)v1 )
  {
    result = sub_180010884(
               *(char **)v1,
               (*(_QWORD *)(*(_QWORD *)(result + 8LL * (unsigned int)TlsIndex) + 328LL) - *(_QWORD *)v1) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)v1 = 0LL;
    *(_QWORD *)(v1 + 8) = 0LL;
    *(_QWORD *)(v1 + 16) = 0LL;
  }
  return result;
}
