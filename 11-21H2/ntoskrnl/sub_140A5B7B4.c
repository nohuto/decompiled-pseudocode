/*
 * XREFs of sub_140A5B7B4 @ 0x140A5B7B4
 * Callers:
 *     sub_140A5B770 @ 0x140A5B770 (sub_140A5B770.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140348830 (KeQueryActiveProcessorCountEx.c)
 *     sub_140A5367C @ 0x140A5367C (sub_140A5367C.c)
 */

__int64 __fastcall sub_140A5B7B4(_DWORD *a1, _DWORD *a2)
{
  ULONG ActiveProcessorCount; // eax
  __int64 result; // rax

  if ( !a1[2] || sub_140A5367C() )
  {
    ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
    if ( a1[5] < ActiveProcessorCount )
      a1[5] = ActiveProcessorCount;
  }
  if ( a1[6] < 5u )
    a1[6] = 5;
  result = 0LL;
  *a2 = 372;
  return result;
}
