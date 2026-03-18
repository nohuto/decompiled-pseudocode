/*
 * XREFs of MiInitializeSystemPteTracker @ 0x140B6FC30
 * Callers:
 *     MiInitNucleus @ 0x140B44F88 (MiInitNucleus.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1403215D0 (RtlRaiseStatus.c)
 */

_QWORD *MiInitializeSystemPteTracker()
{
  _QWORD *result; // rax
  __int64 v1; // rcx

  if ( ((unsigned __int8)&stru_140C68480 & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  qword_140C68490 = 0LL;
  result = &unk_140C6A330;
  v1 = 16LL;
  stru_140C68480 = 0LL;
  do
  {
    result[1] = result;
    *result = result;
    result += 2;
    --v1;
  }
  while ( v1 );
  return result;
}
