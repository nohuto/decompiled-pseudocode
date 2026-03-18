/*
 * XREFs of FreeMessageList @ 0x1C00F60B0
 * Callers:
 *     <none>
 * Callees:
 *     FreeQEntry @ 0x1C0002D54 (FreeQEntry.c)
 *     ?RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x1C0002FC8 (-RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z.c)
 *     DelQEntry @ 0x1C005BE3C (DelQEntry.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00F6110 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 */

__int64 __fastcall FreeMessageList(struct tagQMSG **a1)
{
  struct tagQMSG *i; // rbx
  struct tagQMSG *v3; // rsi
  __int64 result; // rax
  struct tagQMSG *v5; // rbx

  for ( i = *a1; i; i = *a1 )
  {
    CleanEventMessage(i);
    result = DelQEntry((__int64)a1, (__int64)i, 1);
  }
  v3 = a1[3];
  if ( v3 )
  {
    do
    {
      v5 = (struct tagQMSG *)*((_QWORD *)v3 + 1);
      RemoveQMsgFromDeferList((struct tagMLIST *)a1, v3);
      CleanEventMessage(v3);
      result = FreeQEntry((unsigned int *)v3);
      v3 = v5;
    }
    while ( v5 );
  }
  return result;
}
