/*
 * XREFs of IoSetFsTrackOffsetState @ 0x1405593B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14020C420 @ 0x14020C420 (sub_14020C420.c)
 *     sub_140459D9C @ 0x140459D9C (sub_140459D9C.c)
 */

__int64 __fastcall IoSetFsTrackOffsetState(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  _WORD *v9; // rax

  if ( !sub_140459D9C(a1, 5LL, a3) )
    return 3221225659LL;
  v9 = sub_14020C420(a1, 5, v6, v7);
  if ( !v9 )
    return 3221225626LL;
  *((_QWORD *)v9 + 5) = a2;
  *((_QWORD *)v9 + 6) = a3;
  return 0LL;
}
