/*
 * XREFs of KiWaitSatisfyOther @ 0x1402F0AF8
 * Callers:
 *     KiWaitSatisfyAny @ 0x140217A2C (KiWaitSatisfyAny.c)
 *     KeRegisterObjectNotification @ 0x1402F0D90 (KeRegisterObjectNotification.c)
 *     KeRegisterObjectDpc @ 0x140565F08 (KeRegisterObjectDpc.c)
 * Callees:
 *     <none>
 */

char __fastcall KiWaitSatisfyOther(__int64 a1)
{
  char v1; // r8

  v1 = 1;
  if ( (*(_BYTE *)a1 & 7) == 1 )
  {
    *(_DWORD *)(a1 + 4) = 0;
  }
  else if ( (*(_BYTE *)a1 & 0x7F) == 5 )
  {
    --*(_DWORD *)(a1 + 4);
  }
  else
  {
    return 0;
  }
  return v1;
}
