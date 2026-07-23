/*
 * XREFs of sub_140663C48 @ 0x140663C48
 * Callers:
 *     NtRequestWaitReplyPort @ 0x140663B40 (NtRequestWaitReplyPort.c)
 *     sub_140667A4C @ 0x140667A4C (sub_140667A4C.c)
 *     sub_140966120 @ 0x140966120 (sub_140966120.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

char __fastcall sub_140663C48(unsigned __int64 a1, int a2)
{
  __int64 v2; // rdx
  char result; // al
  __int64 v4; // rdx

  if ( (a2 & 0xC0000000) != 0x80000000 )
  {
    if ( (a1 & 3) == 0 )
    {
      v2 = 0x7FFFFFFF0000LL;
      if ( a1 < 0x7FFFFFFF0000LL )
        v2 = a1;
      *(_BYTE *)v2 = *(_BYTE *)v2;
      result = *(_BYTE *)(v2 + 39);
      *(_BYTE *)(v2 + 39) = result;
      return result;
    }
LABEL_10:
    ExRaiseDatatypeMisalignment();
  }
  if ( (a1 & 3) != 0 )
    goto LABEL_10;
  v4 = 0x7FFFFFFF0000LL;
  if ( a1 < 0x7FFFFFFF0000LL )
    v4 = a1;
  *(_BYTE *)v4 = *(_BYTE *)v4;
  result = *(_BYTE *)(v4 + 23);
  *(_BYTE *)(v4 + 23) = result;
  return result;
}
