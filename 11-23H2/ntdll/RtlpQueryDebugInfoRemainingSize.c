/*
 * XREFs of RtlpQueryDebugInfoRemainingSize @ 0x18009EB3C
 * Callers:
 *     RtlQueryProcessModuleInformation @ 0x1800014C0 (RtlQueryProcessModuleInformation.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlpQueryDebugInfoRemainingSize(__int64 a1)
{
  unsigned __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 88);
  if ( v1 >= *(_QWORD *)(a1 + 72) )
    return v1 - *(_QWORD *)(a1 + 72);
  else
    return 0LL;
}
