/*
 * XREFs of InbvNotifyDisplayOwnershipChange @ 0x1403B6D00
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall InbvNotifyDisplayOwnershipChange(__int64 a1, __int64 a2)
{
  if ( qword_140C54D10 && *(_QWORD *)(qword_140C54D10 + 16) )
    return sub_14042A5E0(a1, a2);
  else
    return 3221225474LL;
}
