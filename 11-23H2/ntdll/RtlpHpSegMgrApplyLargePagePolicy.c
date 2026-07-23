/*
 * XREFs of RtlpHpSegMgrApplyLargePagePolicy @ 0x180123874
 * Callers:
 *     RtlpHpSegMgrCommitInitiate @ 0x1801239AC (RtlpHpSegMgrCommitInitiate.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue32 @ 0x180041C90 (RtlpHeapGenerateRandomValue32.c)
 */

_BOOL8 __fastcall RtlpHpSegMgrApplyLargePagePolicy(__int64 a1)
{
  unsigned int v1; // eax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx

  v1 = *(_BYTE *)(a1 + 13) & 7;
  if ( v1 <= 1 )
  {
    v3 = a1 + *(__int16 *)(a1 + 22);
    v4 = *(_QWORD *)(v3 + 56) + *(_QWORD *)(v3 + 40);
    if ( v4 < *(_QWORD *)(v3 + 72) )
    {
      if ( v4 >= *(_QWORD *)(v3 + 64) )
        return *(_QWORD *)(v3 + 48) + *(_QWORD *)(v3 + 32) >= ((v4 * *(unsigned __int8 *)(v3 + 80)) << 9) / 0x64;
      return 1LL;
    }
  }
  else if ( v1 != 2 )
  {
    if ( v1 != 3 )
      return RtlpHeapGenerateRandomValue32() & 1;
    return 1LL;
  }
  return 0LL;
}
