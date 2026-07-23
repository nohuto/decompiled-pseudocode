/*
 * XREFs of sub_14058BA24 @ 0x14058BA24
 * Callers:
 *     sub_140393EC0 @ 0x140393EC0 (sub_140393EC0.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 */

KIRQL __fastcall sub_14058BA24(__int64 a1, struct _KEVENT *a2, __int64 a3)
{
  volatile LONG *v5; // rcx
  KIRQL v6; // di

  v5 = (volatile LONG *)(a3 + 1344);
  if ( (*(_BYTE *)(a1 + 79) & 4) != 0 )
  {
    _InterlockedExchange(&a2[3].Header.Lock, 0);
    return ExAcquireSpinLockExclusive(v5);
  }
  else
  {
    v6 = ExAcquireSpinLockExclusive(v5);
    if ( *(_QWORD *)(a1 + 80) )
    {
      a2[1].Header.WaitListHead.Blink = *(struct _LIST_ENTRY **)(a1 + 40);
      KeSetEvent(a2 + 2, 0, 0);
    }
  }
  return v6;
}
