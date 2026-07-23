/*
 * XREFs of MiStoreDecrementOutstandingWrites @ 0x14065C550
 * Callers:
 *     MiWriteComplete @ 0x1402F45B0 (MiWriteComplete.c)
 *     MiStoreWriteModifiedPages @ 0x14046DEAA (MiStoreWriteModifiedPages.c)
 *     MiStoreRundownWritesApc @ 0x14065CE30 (MiStoreRundownWritesApc.c)
 * Callees:
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 */

LONG __fastcall MiStoreDecrementOutstandingWrites(__int64 a1)
{
  LONG result; // eax
  struct _KEVENT *v2; // rcx

  result = *(_DWORD *)(a1 + 1212) - 1;
  *(_DWORD *)(a1 + 1212) = result;
  v2 = *(struct _KEVENT **)(a1 + 1216);
  if ( v2 )
  {
    if ( !result )
      return KeSetEvent(v2, 0, 0);
  }
  return result;
}
