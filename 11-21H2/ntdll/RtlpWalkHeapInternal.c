/*
 * XREFs of RtlpWalkHeapInternal @ 0x180057468
 * Callers:
 *     RtlpHpTagDestroyHeap @ 0x1800573DC (RtlpHpTagDestroyHeap.c)
 *     RtlpQueryExtendedInformationHeap @ 0x1800833B0 (RtlpQueryExtendedInformationHeap.c)
 *     RtlWalkHeap @ 0x1800B0F00 (RtlWalkHeap.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x180116020 (RtlpHpStackTraceHeapSerialize.c)
 * Callees:
 *     RtlpHpHeapWalk @ 0x1800574B8 (RtlpHpHeapWalk.c)
 *     RtlpWalkHeap @ 0x18010055C (RtlpWalkHeap.c)
 */

__int64 __fastcall RtlpWalkHeapInternal(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 *v5; // rcx
  char *v6; // rdx

  if ( *(_DWORD *)(a1 + 16) != -571548178 )
    return RtlpWalkHeap();
  v3 = 0LL;
  if ( (RtlpHpAppCompatFlags & 2) != 0 && *(_QWORD *)a2 && (*(_BYTE *)(a2 + 18) & 1) != 0 )
    *(_QWORD *)a2 -= *(_QWORD *)(*(_QWORD *)a2 - 16LL);
  result = RtlpHpHeapWalk();
  if ( (RtlpHpAppCompatFlags & 2) != 0 && (_DWORD)result != -2147483622 && (*(_BYTE *)(a2 + 18) & 1) != 0 )
  {
    v5 = *(__int64 **)a2;
    if ( *(_QWORD *)a2 )
    {
      v3 = *v5;
      v6 = (char *)v5 + *v5;
    }
    else
    {
      v6 = 0LL;
    }
    *(_QWORD *)(a2 + 8) -= v3;
    *(_QWORD *)a2 = v6;
  }
  return result;
}
