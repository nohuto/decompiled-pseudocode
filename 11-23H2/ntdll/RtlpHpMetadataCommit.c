/*
 * XREFs of RtlpHpMetadataCommit @ 0x18006598C
 * Callers:
 *     RtlpHpHeapExtendContext @ 0x180063FE0 (RtlpHpHeapExtendContext.c)
 *     RtlpHpHeapAllocate @ 0x1800663EC (RtlpHpHeapAllocate.c)
 * Callees:
 *     RtlpHpSegDescriptorValidate @ 0x180042104 (RtlpHpSegDescriptorValidate.c)
 *     RtlpHpSegPageRangeCommit @ 0x180046CB0 (RtlpHpSegPageRangeCommit.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x180063E58 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x1800666B0 (RtlpHpMetadataHeapCtxGet.c)
 */

__int64 __fastcall RtlpHpMetadataCommit(unsigned __int64 a1, __int64 a2, unsigned __int64 a3, __int128 *a4, int a5)
{
  int v7; // esi
  _QWORD *v8; // rbx
  int v9; // eax
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned __int64 v12; // rbp
  int v13; // r9d
  __int64 v15; // rax
  __int128 v16; // [rsp+30h] [rbp-18h] BYREF

  v16 = *a4;
  v7 = a2;
  v8 = (_QWORD *)RtlpHpMetadataHeapCtxGet(&v16, a2);
  if ( (_WORD)a1 )
  {
    v9 = 0;
  }
  else
  {
    v15 = RtlCSparseBitmapBitmaskRead((__int64)&BaseAddress, 2 * ((a1 - qword_180188A88) >> 20));
    if ( v15 )
      v9 = v15 - 1;
    else
      v9 = 2;
  }
  v10 = 192LL * v9 + *v8;
  v11 = RtlpHpSegDescriptorValidate(v10 + 320, a1);
  v12 = a3 >> 12;
  v13 = -(int)v12;
  if ( a5 )
    v13 = v12;
  return RtlpHpSegPageRangeCommit(v10 + 320, v11, (unsigned int)(v7 - a1) >> 12, v13, 0, 0LL);
}
