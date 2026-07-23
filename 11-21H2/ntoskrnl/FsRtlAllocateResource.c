/*
 * XREFs of FsRtlAllocateResource @ 0x14092CFE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PERESOURCE FsRtlAllocateResource(void)
{
  __int64 v0; // rax

  v0 = 104LL * (dword_140D3B294++ & 0xF);
  return (PERESOURCE)(qword_140C48BA8 + v0);
}
