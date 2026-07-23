/*
 * XREFs of RtlpHpMetadataHeapCreate @ 0x1403887A0
 * Callers:
 *     RtlHpHeapManagerStart @ 0x1403886FC (RtlHpHeapManagerStart.c)
 * Callees:
 *     RtlpHpHeapCreate @ 0x140388E98 (RtlpHpHeapCreate.c)
 */

__int64 __fastcall RtlpHpMetadataHeapCreate(PRTL_RUN_ONCE a1, __int128 *a2, PVOID *a3)
{
  _RTL_RUN_ONCE v4; // rdx
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v6 = *a2;
  v4.Value = ((__int64 (__fastcall *)(_QWORD, __int128 *, PVOID *, __int128 *))RtlpHpHeapCreate)(0LL, a2, a3, &v6);
  result = 0LL;
  if ( v4.Value )
  {
    a1[-1].Ptr = v4.Ptr;
    return 1LL;
  }
  return result;
}
