/*
 * XREFs of MiUpdateVadBits @ 0x1406B2E58
 * Callers:
 *     MiExpandVadBitMap @ 0x1406B2EE0 (MiExpandVadBitMap.c)
 *     MiExpandVadBitMapDown @ 0x140A3C630 (MiExpandVadBitMapDown.c)
 * Callees:
 *     MiGetNextVad @ 0x1402150EC (MiGetNextVad.c)
 *     MiLocateLowestConflictingVad @ 0x140223334 (MiLocateLowestConflictingVad.c)
 *     MiSetVadBits @ 0x1406FAC30 (MiSetVadBits.c)
 */

unsigned __int64 __fastcall MiUpdateVadBits(unsigned __int64 a1, unsigned __int64 a2)
{
  bool v2; // cf
  struct _KTHREAD *CurrentThread; // rcx
  unsigned __int64 v5; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rbx
  __int64 v8; // rcx

  v2 = a2 < a1;
  CurrentThread = KeGetCurrentThread();
  v5 = 0x7FFFFFFEFFFFLL;
  if ( !v2 )
    v5 = a2;
  result = (unsigned __int64)MiLocateLowestConflictingVad((__int64)CurrentThread->ApcState.Process, a1, v5 - 1);
  v7 = result;
  if ( result )
  {
    do
    {
      MiSetVadBits(v7);
      result = MiGetNextVad(v7);
      v7 = result;
      if ( !result )
        break;
      v8 = *(unsigned __int8 *)(result + 32);
      result = *(unsigned int *)(result + 24);
    }
    while ( (result | (v8 << 32)) << 12 < v5 );
  }
  return result;
}
