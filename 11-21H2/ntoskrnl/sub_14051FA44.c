/*
 * XREFs of sub_14051FA44 @ 0x14051FA44
 * Callers:
 *     sub_14051F9A8 @ 0x14051F9A8 (sub_14051F9A8.c)
 * Callees:
 *     HalSendNMI @ 0x1402DA8E0 (HalSendNMI.c)
 *     KeRemoveProcessorAffinityEx @ 0x1402F4410 (KeRemoveProcessorAffinityEx.c)
 *     sub_140300030 @ 0x140300030 (sub_140300030.c)
 *     KeStallExecutionProcessor @ 0x140303560 (KeStallExecutionProcessor.c)
 *     sub_1403B37F0 @ 0x1403B37F0 (sub_1403B37F0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14051F5B0 @ 0x14051F5B0 (sub_14051F5B0.c)
 */

__int64 sub_14051FA44()
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 result; // rax
  int v2; // edi
  _DWORD v3[68]; // [rsp+20h] [rbp-128h] BYREF

  memset(&v3[2], 0, 0x100uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  result = *((_WORD *)CurrentPrcb + 33) & 0xFF00;
  if ( ((unsigned int)result | (*((unsigned __int8 *)CurrentPrcb + 64) << 16)) > 0x50100 )
  {
    v2 = dword_140C0BB30;
    v3[0] = 2097153;
    byte_140C4A468 = 1;
    memset(&v3[1], 0, 0x104uLL);
    sub_140300030((__int64)v3, 0x20u, (unsigned __int16 *)dword_140D06E40);
    KeRemoveProcessorAffinityEx((unsigned __int16 *)v3, *((_DWORD *)CurrentPrcb + 9));
    HalSendNMI((unsigned __int16 *)v3);
    KeStallExecutionProcessor(0x1F4u);
    if ( sub_1403B37F0() )
    {
      while ( dword_140C0BB30 > 1 )
        _mm_pause();
    }
    result = (unsigned int)dword_140C0BB30;
    if ( dword_140C0BB30 != v2 )
      sub_14051F5B0();
  }
  return result;
}
