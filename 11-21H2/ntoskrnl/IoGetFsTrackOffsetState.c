/*
 * XREFs of IoGetFsTrackOffsetState @ 0x14020BDF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14020C0F0 @ 0x14020C0F0 (sub_14020C0F0.c)
 */

__int64 __fastcall IoGetFsTrackOffsetState(__int64 a1)
{
  __int64 v1; // rcx
  _QWORD *v2; // r8
  _QWORD *v3; // r9
  __int64 v5; // rcx

  if ( !(unsigned __int8)sub_14020C0F0(a1, 5LL) )
    return 3221226021LL;
  v5 = *(_QWORD *)(v1 + 200);
  *v3 = *(_QWORD *)(v5 + 40);
  *v2 = *(_QWORD *)(v5 + 48);
  return 0LL;
}
