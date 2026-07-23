/*
 * XREFs of RtlpExtendedHeapInformationWorkerCallback @ 0x1801000E0
 * Callers:
 *     <none>
 * Callees:
 *     ZwMapViewOfSection @ 0x1800A13B0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A13F0 (NtUnmapViewOfSection.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

NTSTATUS __fastcall RtlpExtendedHeapInformationWorkerCallback(_QWORD *Src, __int64 a2)
{
  unsigned __int64 v2; // rax
  NTSTATUS result; // eax
  ULONG_PTR *ViewSize; // r15
  PVOID *v7; // r14
  unsigned __int64 v8; // rdi
  SIZE_T CommitSize; // rdx
  __int64 v10; // rax

  v2 = Src[1];
  if ( v2 > 0x10000 )
    return -1073741595;
  *(_QWORD *)(a2 + 32) += v2;
  if ( *(_DWORD *)(a2 + 28) == -1073741789 )
    return 0;
  ViewSize = (ULONG_PTR *)(a2 + 56);
  v7 = (PVOID *)(a2 + 48);
  v8 = (*(_QWORD *)(a2 + 72) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  *(_QWORD *)(a2 + 72) = v8;
  if ( v8 + Src[1] <= *(_QWORD *)(a2 + 56) )
    goto LABEL_9;
  NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, *v7);
  CommitSize = *ViewSize;
  *(_QWORD *)(a2 + 64) += *ViewSize;
  v8 = 0LL;
  v10 = *(_QWORD *)(a2 + 64);
  *v7 = 0LL;
  if ( v10 < *(_QWORD *)(a2 + 8) )
  {
    result = ZwMapViewOfSection(
               *(HANDLE *)a2,
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               v7,
               0LL,
               CommitSize,
               (PLARGE_INTEGER)(a2 + 64),
               ViewSize,
               ViewUnmap,
               0,
               4u);
    if ( result < 0 )
      return result;
    *(_QWORD *)(a2 + 72) = 0LL;
LABEL_9:
    memmove((char *)*v7 + v8, Src, Src[1]);
    ++*(_DWORD *)(a2 + 40);
    *(_QWORD *)(a2 + 72) += Src[1];
    return 0;
  }
  *(_DWORD *)(a2 + 28) = -1073741789;
  return 0;
}
