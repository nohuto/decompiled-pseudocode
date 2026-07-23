/*
 * XREFs of sub_140A73C60 @ 0x140A73C60
 * Callers:
 *     KdSystemDebugControl @ 0x14095F510 (KdSystemDebugControl.c)
 * Callees:
 *     sub_140A73A64 @ 0x140A73A64 (sub_140A73A64.c)
 */

__int64 __fastcall sub_140A73C60(int a1)
{
  if ( dword_140C3C3E8 )
    sub_140A73A64(a1);
  return 0LL;
}
