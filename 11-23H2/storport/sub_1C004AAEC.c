/*
 * XREFs of sub_1C004AAEC @ 0x1C004AAEC
 * Callers:
 *     StorPortGetDeviceBase @ 0x1C0046480 (StorPortGetDeviceBase.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1C004AAEC(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdx

  if ( a5 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( *(_BYTE *)(a5 + v5) );
  }
  return ((__int64 (__fastcall *)(__int64, __int64, void *))qword_1C0093C08)(a1, 43LL, &unk_1C0083380);
}
