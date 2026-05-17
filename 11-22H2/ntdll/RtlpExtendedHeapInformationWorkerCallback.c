/*
 * XREFs of RtlpExtendedHeapInformationWorkerCallback @ 0x1800FECD0
 * Callers:
 *     <none>
 * Callees:
 *     ZwMapViewOfSection @ 0x18009F2F0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18009F330 (NtUnmapViewOfSection.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 */

__int64 __fastcall RtlpExtendedHeapInformationWorkerCallback(_QWORD *Src, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 result; // rax
  _QWORD *v6; // r15
  _QWORD *v7; // r14
  unsigned __int64 v8; // rdi
  __int64 v9; // rax

  v2 = Src[1];
  if ( v2 > 0x10000 )
    return 3221225701LL;
  *(_QWORD *)(a2 + 32) += v2;
  if ( *(_DWORD *)(a2 + 28) == -1073741789 )
    return 0LL;
  v6 = (_QWORD *)(a2 + 56);
  v7 = (_QWORD *)(a2 + 48);
  v8 = (*(_QWORD *)(a2 + 72) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  *(_QWORD *)(a2 + 72) = v8;
  if ( v8 + Src[1] <= *(_QWORD *)(a2 + 56) )
    goto LABEL_9;
  NtUnmapViewOfSection();
  *(_QWORD *)(a2 + 64) += *v6;
  v8 = 0LL;
  v9 = *(_QWORD *)(a2 + 64);
  *v7 = 0LL;
  if ( v9 < *(_QWORD *)(a2 + 8) )
  {
    result = ZwMapViewOfSection();
    if ( (int)result < 0 )
      return result;
    *(_QWORD *)(a2 + 72) = 0LL;
LABEL_9:
    memmove((void *)(v8 + *v7), Src, Src[1]);
    ++*(_DWORD *)(a2 + 40);
    *(_QWORD *)(a2 + 72) += Src[1];
    return 0LL;
  }
  *(_DWORD *)(a2 + 28) = -1073741789;
  return 0LL;
}
