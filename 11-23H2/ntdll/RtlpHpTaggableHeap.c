/*
 * XREFs of RtlpHpTaggableHeap @ 0x180065DA4
 * Callers:
 *     RtlpHpTagDestroyHeap @ 0x180063A04 (RtlpHpTagDestroyHeap.c)
 *     RtlpHpTagAllocateHeap @ 0x180065D30 (RtlpHpTagAllocateHeap.c)
 * Callees:
 *     RtlpHpMetadataHeapCtxGet @ 0x1800666B0 (RtlpHpMetadataHeapCtxGet.c)
 */

_BOOL8 __fastcall RtlpHpTaggableHeap(__int64 a1)
{
  bool v1; // zf
  _BOOL8 result; // rax
  _QWORD *v3; // rax
  __int64 v4; // rdx
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_DWORD *)(a1 + 16) == -571548178;
  v5 = RtlpHpEnvHandle;
  result = 0;
  if ( v1 )
  {
    v3 = (_QWORD *)RtlpHpMetadataHeapCtxGet(&v5, a1);
    if ( v4 != *v3 )
      return 1;
  }
  return result;
}
