/*
 * XREFs of RtlGetCurrentServiceSessionId @ 0x14025D8B0
 * Callers:
 *     sub_140696944 @ 0x140696944 (sub_140696944.c)
 *     sub_1409B9B50 @ 0x1409B9B50 (sub_1409B9B50.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x140347690 (PsGetThreadServerSilo.c)
 */

ULONG RtlGetCurrentServiceSessionId(void)
{
  __int64 ThreadServerSilo; // rax
  _DWORD **v1; // rax

  ThreadServerSilo = PsGetThreadServerSilo(KeGetCurrentThread());
  if ( ThreadServerSilo )
    v1 = *(_DWORD ***)(ThreadServerSilo + 1464);
  else
    v1 = (_DWORD **)&unk_140D32580;
  return *v1[165];
}
