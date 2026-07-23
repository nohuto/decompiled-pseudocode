/*
 * XREFs of RtlpHpMetadataHeapCreate @ 0x180065BA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpHeapCreate @ 0x180066018 (RtlpHpHeapCreate.c)
 */

__int64 __fastcall RtlpHpMetadataHeapCreate(PRTL_RUN_ONCE a1, __int128 *a2, PVOID *a3)
{
  _RTL_RUN_ONCE v4; // rdx
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v6 = *a2;
  v4.Value = RtlpHpHeapCreate(0LL, 0LL, 0LL, &v6);
  result = 0LL;
  if ( v4.Value )
  {
    a1[-1].Ptr = v4.Ptr;
    return 1LL;
  }
  return result;
}
