/*
 * XREFs of sub_140233AA0 @ 0x140233AA0
 * Callers:
 *     sub_140233A4C @ 0x140233A4C (sub_140233A4C.c)
 *     sub_14030C260 @ 0x14030C260 (sub_14030C260.c)
 *     sub_140334400 @ 0x140334400 (sub_140334400.c)
 *     sub_1403760B4 @ 0x1403760B4 (sub_1403760B4.c)
 *     sub_1406AC9A4 @ 0x1406AC9A4 (sub_1406AC9A4.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     sub_14035FA80 @ 0x14035FA80 (sub_14035FA80.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 */

__int64 __fastcall sub_140233AA0(_SLIST_ENTRY *P)
{
  unsigned int Alignment_low; // ebx
  int v3; // ebx
  __int64 result; // rax

  *((_QWORD *)&P[1].Next + 1) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)&P->Next + 3) = dword_140CF5E50;
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
    if ( Alignment_low >= 8 && !stru_140CF5E10.Header.SignalState )
      KeSetEvent(&stru_140CF5E10, 0, 0);
    v3 = 1;
  }
  result = sub_1402AD030(&stru_140CF5E08);
  if ( !v3 )
    return sub_14035FA80(P);
  return result;
}
