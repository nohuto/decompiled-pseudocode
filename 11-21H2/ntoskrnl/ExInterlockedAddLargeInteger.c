/*
 * XREFs of ExInterlockedAddLargeInteger @ 0x14063F230
 * Callers:
 *     <none>
 * Callees:
 *     sub_140243164 @ 0x140243164 (sub_140243164.c)
 *     sub_14024319C @ 0x14024319C (sub_14024319C.c)
 */

LARGE_INTEGER __stdcall ExInterlockedAddLargeInteger(PLARGE_INTEGER Addend, LARGE_INTEGER Increment, PKSPIN_LOCK Lock)
{
  char v6; // al
  LARGE_INTEGER v7; // rbx

  v6 = sub_14024319C((volatile signed __int32 *)Lock);
  v7 = *Addend;
  Addend->QuadPart += Increment.QuadPart;
  sub_140243164((volatile signed __int64 *)Lock, v6);
  return v7;
}
