/*
 * XREFs of LdrpUpdateStatistics @ 0x180011480
 * Callers:
 *     LdrpWorkCallback @ 0x180011390 (LdrpWorkCallback.c)
 *     LdrpDrainWorkQueue @ 0x18002A65C (LdrpDrainWorkQueue.c)
 * Callees:
 *     <none>
 */

struct _TEB *LdrpUpdateStatistics()
{
  int v0; // ecx
  struct _TEB *result; // rax

  v0 = LdrpStatistics;
  result = NtCurrentTeb();
  if ( LdrpStatistics < (unsigned int)LdrpWorkInProgress )
    v0 = LdrpWorkInProgress;
  LdrpStatistics = v0;
  if ( (result->SameTebFlags & 0x2000) != 0 )
    ++dword_180184244;
  else
    ++dword_180184248;
  return result;
}
