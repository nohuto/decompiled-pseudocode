/*
 * XREFs of __ft_array_insert @ 0x18009FA9C
 * Callers:
 *     __ft_marker_array_record_impression @ 0x18009FC74 (__ft_marker_array_record_impression.c)
 *     __ft_marker_array_set_flags @ 0x18009FD38 (__ft_marker_array_set_flags.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

PVOID __fastcall _ft_array_insert(const void **a1, __int64 *a2, __int64 *a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdi
  __int64 v7; // rax
  __int64 v11; // rbx
  PVOID result; // rax
  PVOID v13; // rbp
  __int64 v14; // rbx

  v5 = *a2;
  v7 = *a3;
  if ( *a2 < *a3 )
  {
LABEL_8:
    v14 = (__int64)*a1 + a5 * a4;
    if ( a5 < v5 )
      memmove((void *)(v14 + a4), (char *)*a1 + a5 * a4, a4 * (v5 - a5));
    result = (PVOID)v14;
    *a2 = v5 + 1;
    return result;
  }
  v11 = 2 * v7;
  if ( v7 <= 0 )
    v11 = 20LL;
  result = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, a4 * v11);
  v13 = result;
  if ( result )
  {
    if ( *a1 )
    {
      memmove(result, *a1, a4 * v5);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)*a1);
    }
    *a1 = v13;
    *a3 = v11;
    goto LABEL_8;
  }
  return result;
}
