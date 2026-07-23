/*
 * XREFs of RtlpHpMetadataHeapCreate @ 0x18008B890
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpHeapCreate @ 0x180054CB4 (RtlpHpHeapCreate.c)
 */

__int64 __fastcall RtlpHpMetadataHeapCreate(PRTL_RUN_ONCE a1, __int128 *a2, PVOID *a3)
{
  __int64 v4; // rdx
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v6 = *a2;
  v4 = RtlpHpHeapCreate(0, 0LL, 0LL, &v6);
  result = 0LL;
  if ( v4 )
  {
    a1[-1].Value = v4;
    return 1LL;
  }
  return result;
}
