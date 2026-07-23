/*
 * XREFs of PspAttachSession @ 0x1407C5EE0
 * Callers:
 *     PspAllocateProcess @ 0x1406B45D8 (PspAllocateProcess.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     MmGetSessionById @ 0x1402C20C0 (MmGetSessionById.c)
 *     MmAttachSession @ 0x1403564F0 (MmAttachSession.c)
 */

__int64 __fastcall PspAttachSession(unsigned int a1, __int64 a2, _KPROCESS **a3)
{
  _KPROCESS *SessionById; // rax
  _KPROCESS *v6; // rbx
  int v7; // edi

  SessionById = (_KPROCESS *)MmGetSessionById(a1);
  v6 = SessionById;
  if ( !SessionById )
    return 3221225738LL;
  *a3 = SessionById;
  v7 = MmAttachSession(SessionById, a2);
  if ( v7 < 0 )
    ObfDereferenceObject(v6);
  return (unsigned int)v7;
}
