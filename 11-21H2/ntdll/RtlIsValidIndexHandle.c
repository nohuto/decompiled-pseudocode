/*
 * XREFs of RtlIsValidIndexHandle @ 0x180062BB0
 * Callers:
 *     RtlpFreeHandleForAtom @ 0x1800624D8 (RtlpFreeHandleForAtom.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x180062B74 (RtlpAtomMapAtomToHandleEntry.c)
 * Callees:
 *     RtlIsValidHandle @ 0x180062BF0 (RtlIsValidHandle.c)
 */

char __fastcall RtlIsValidIndexHandle(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v4; // rbx

  v4 = *(_QWORD *)(a1 + 24) + (unsigned int)(a2 * *(_DWORD *)(a1 + 4));
  if ( !(unsigned __int8)RtlIsValidHandle(a1, v4) )
    return 0;
  *a3 = v4;
  return 1;
}
