/*
 * XREFs of EmonReleaseProfileResourcesInternal @ 0x14051E680
 * Callers:
 *     EmonAllocateResources @ 0x14051D2CC (EmonAllocateResources.c)
 *     EmonReleaseProfileResources @ 0x14051E5A0 (EmonReleaseProfileResources.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140222050 (KeQueryActiveProcessorCountEx.c)
 *     KeIsEmptyAffinityEx @ 0x140255230 (KeIsEmptyAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x140257460 (KeAddProcessorAffinityEx.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     HalpPmuReservedResourcesProcessorCallback @ 0x140507E88 (HalpPmuReservedResourcesProcessorCallback.c)
 */

__int64 __fastcall EmonReleaseProfileResourcesInternal(__int64 a1)
{
  unsigned int v2; // ebx
  ULONG ActiveProcessorCount; // r14d
  unsigned int v4; // edi
  _BYTE *v5; // rsi
  _DWORD v7[68]; // [rsp+20h] [rbp-138h] BYREF

  v2 = 0;
  v7[0] = 2097153;
  memset(&v7[1], 0, 0x104uLL);
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v4 = 0;
  if ( ActiveProcessorCount )
  {
    v5 = (_BYTE *)(a1 + 40);
    do
    {
      if ( *v5 )
        KeAddProcessorAffinityEx((unsigned __int16 *)v7, v4);
      ++v4;
      v5 += 80;
    }
    while ( v4 < ActiveProcessorCount );
  }
  if ( !(unsigned int)KeIsEmptyAffinityEx(v7) )
    return (unsigned int)HalpPmuReservedResourcesProcessorCallback(
                           (__int64)v7,
                           (__int64 (__fastcall *)(__int64))EmonReleaseReservedCounters,
                           a1,
                           a1);
  return v2;
}
