/*
 * XREFs of MiGetNextDirectFixupProto @ 0x140A48180
 * Callers:
 *     MiWalkEntireImage @ 0x1402DAFE0 (MiWalkEntireImage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetNextDirectFixupProto(__int64 a1, unsigned int a2)
{
  return *(_QWORD *)(a1 + 8LL * a2);
}
