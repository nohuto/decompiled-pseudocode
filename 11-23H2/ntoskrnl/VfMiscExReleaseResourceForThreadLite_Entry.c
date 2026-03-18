/*
 * XREFs of VfMiscExReleaseResourceForThreadLite_Entry @ 0x140ADFC80
 * Callers:
 *     <none>
 * Callees:
 *     ViMiscCheckResourceRelease @ 0x140AE14EC (ViMiscCheckResourceRelease.c)
 */

__int64 __fastcall VfMiscExReleaseResourceForThreadLite_Entry(__int64 a1)
{
  return ViMiscCheckResourceRelease(*(_QWORD *)(a1 + 16));
}
