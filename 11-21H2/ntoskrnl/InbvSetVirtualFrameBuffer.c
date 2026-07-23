/*
 * XREFs of InbvSetVirtualFrameBuffer @ 0x1403DF430
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall InbvSetVirtualFrameBuffer(__int64 a1, __int64 a2)
{
  if ( qword_140C54D10 && *(_QWORD *)(qword_140C54D10 + 176) )
    return sub_14042A5E0(a1, a2);
  else
    return 3221225474LL;
}
