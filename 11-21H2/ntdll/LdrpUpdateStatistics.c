/*
 * XREFs of LdrpUpdateStatistics @ 0x1800512F4
 * Callers:
 *     LdrpWorkCallback @ 0x180051030 (LdrpWorkCallback.c)
 *     LdrpDrainWorkQueue @ 0x180051600 (LdrpDrainWorkQueue.c)
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
    ++dword_180179FF4;
  else
    ++dword_180179FF8;
  return result;
}
