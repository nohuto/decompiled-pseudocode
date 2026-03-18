/*
 * XREFs of KiSignalWaitDisconnectLock @ 0x14057A1FC
 * Callers:
 *     KiDisconnectInterruptCommon @ 0x14031F540 (KiDisconnectInterruptCommon.c)
 * Callees:
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 */

LONG __fastcall KiSignalWaitDisconnectLock(struct _KEVENT *a1, char a2)
{
  if ( a2 )
    return KeWaitForSingleObject(a1, Executive, 0, 0, 0LL);
  else
    return KeSetEvent(a1, 0, 0);
}
