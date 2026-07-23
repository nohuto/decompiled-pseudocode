/*
 * XREFs of IoClearFsTrackOffsetState @ 0x1405592A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14020B888 @ 0x14020B888 (sub_14020B888.c)
 *     sub_14020C0F0 @ 0x14020C0F0 (sub_14020C0F0.c)
 */

__int64 __fastcall IoClearFsTrackOffsetState(__int64 a1)
{
  int v1; // edx
  __int64 v2; // rcx

  if ( !sub_14020C0F0(a1, 5u) )
    return 3221226021LL;
  sub_14020B888(v2, v1, 0);
  return 0LL;
}
