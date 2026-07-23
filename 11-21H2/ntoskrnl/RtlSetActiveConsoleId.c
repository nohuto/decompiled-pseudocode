/*
 * XREFs of RtlSetActiveConsoleId @ 0x1406EBA40
 * Callers:
 *     <none>
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 */

unsigned __int64 __fastcall RtlSetActiveConsoleId(unsigned int a1)
{
  unsigned __int64 result; // rax

  if ( PsIsCurrentThreadInServerSilo() )
  {
    result = (unsigned __int64)sub_140347DB0();
    *(_DWORD *)(*(_QWORD *)(result + 1320) + 4LL) = a1;
  }
  else
  {
    result = a1;
    MEMORY[0xFFFFF780000002D8] = a1;
  }
  return result;
}
