/*
 * XREFs of sub_1402009E4 @ 0x1402009E4
 * Callers:
 *     sub_1407D9F00 @ 0x1407D9F00 (sub_1407D9F00.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     sub_14035FA80 @ 0x14035FA80 (sub_14035FA80.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 */

__int64 __fastcall sub_1402009E4(_SLIST_ENTRY *P)
{
  unsigned int Alignment_low; // ebx
  int v3; // ebx
  __int64 result; // rax

  if ( !(unsigned __int8)sub_140347810(&stru_140CF5E08) )
    return sub_14035FA80(P);
  Alignment_low = LOWORD(ListHead.Alignment);
  if ( LOWORD(ListHead.Alignment) >= (unsigned int)dword_140CF5E28 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&xmmword_140C4EC70, 0x64u);
    v3 = 0;
  }
  else
  {
    ExpInterlockedPushEntrySList(&ListHead, P);
    if ( !stru_140CF5E10.Header.SignalState && Alignment_low >= 8 )
      KeSetEvent(&stru_140CF5E10, 0, 0);
    v3 = 1;
  }
  result = sub_1402AD030(&stru_140CF5E08);
  if ( !v3 )
    return sub_14035FA80(P);
  return result;
}
