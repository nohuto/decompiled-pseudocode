/*
 * XREFs of BgDisplayFade @ 0x140AEF4BC
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x1403ADB80 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkDisplayStringEx @ 0x14054EDA4 (BgkDisplayStringEx.c)
 *     PoBroadcastSystemState @ 0x140AA6A68 (PoBroadcastSystemState.c)
 *     BgkDisplayCharacter @ 0x140AF0F70 (BgkDisplayCharacter.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140385660 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1403856B0 (BgpFwAcquireLock.c)
 *     AnFwDisplayFade @ 0x140AEC9E8 (AnFwDisplayFade.c)
 */

__int64 BgDisplayFade()
{
  unsigned int v0; // ebx

  if ( KeGetCurrentIrql() > 2u )
    return 3221225473LL;
  BgpFwAcquireLock();
  if ( (dword_140C0E4B0 & 1) != 0 )
    v0 = AnFwDisplayFade();
  else
    v0 = -1073741823;
  BgpFwReleaseLock();
  return v0;
}
