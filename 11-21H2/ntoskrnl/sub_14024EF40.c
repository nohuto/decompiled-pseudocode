/*
 * XREFs of sub_14024EF40 @ 0x14024EF40
 * Callers:
 *     sub_140230BA0 @ 0x140230BA0 (sub_140230BA0.c)
 *     sub_14024EDB0 @ 0x14024EDB0 (sub_14024EDB0.c)
 *     sub_140279590 @ 0x140279590 (sub_140279590.c)
 *     sub_1402AB9C0 @ 0x1402AB9C0 (sub_1402AB9C0.c)
 *     sub_14031E200 @ 0x14031E200 (sub_14031E200.c)
 *     sub_14031E900 @ 0x14031E900 (sub_14031E900.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_14024EF40(unsigned int a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 v3; // rcx
  unsigned __int64 v4; // rax
  _BOOL8 result; // rax

  v2 = *(_QWORD *)((char *)KeGetPcr()->NtTib.StackBase + 8 * a1 + 28);
  v3 = 24576LL;
  if ( byte_140E01840 )
    v3 = 464LL;
  result = 1;
  if ( a2 > v2 || a2 < v2 - v3 )
  {
    if ( !byte_140E01840 )
      return 0;
    v4 = *(_QWORD *)(v2 + 8);
    if ( a2 > v4 || a2 < v4 - 24544 )
      return 0;
  }
  return result;
}
