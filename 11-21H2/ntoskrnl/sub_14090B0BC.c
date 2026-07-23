/*
 * XREFs of sub_14090B0BC @ 0x14090B0BC
 * Callers:
 *     sub_14090B130 @ 0x14090B130 (sub_14090B130.c)
 *     sub_14090B170 @ 0x14090B170 (sub_14090B170.c)
 *     sub_14090B220 @ 0x14090B220 (sub_14090B220.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     KeIpiGenericCall @ 0x1403B4600 (KeIpiGenericCall.c)
 */

__int64 __fastcall sub_14090B0BC(int a1, unsigned __int8 a2)
{
  unsigned int v3; // edi
  int v4; // r8d
  __int64 result; // rax

  v3 = a2;
  dword_140C49FFC = KeQueryActiveProcessorCountEx(0xFFFFu);
  v4 = a1 | 0x1C4;
  if ( (a1 & 0x200) == 0 )
    v4 = a1;
  dword_140C49FEC = v4;
  KeIpiGenericCall((PKIPI_BROADCAST_WORKER)sub_14052ADC0, v3);
  while ( 1 )
  {
    result = (unsigned int)dword_140C49FFC;
    if ( dword_140C49FFC <= 0 )
      break;
    _mm_pause();
  }
  return result;
}
