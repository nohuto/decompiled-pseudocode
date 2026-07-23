/*
 * XREFs of ExInterlockedAddUlong @ 0x140386240
 * Callers:
 *     <none>
 * Callees:
 *     sub_140243164 @ 0x140243164 (sub_140243164.c)
 *     sub_14024319C @ 0x14024319C (sub_14024319C.c)
 */

ULONG __stdcall ExInterlockedAddUlong(PULONG Addend, ULONG Increment, PKSPIN_LOCK Lock)
{
  char v6; // al
  ULONG v7; // ebx

  v6 = sub_14024319C((volatile signed __int32 *)Lock);
  v7 = *Addend;
  *Addend += Increment;
  sub_140243164((volatile signed __int64 *)Lock, v6);
  return v7;
}
