/*
 * XREFs of xxxUnlockMenuState @ 0x1C013C950
 * Callers:
 *     xxxMNStartMenuState @ 0x1C020009C (xxxMNStartMenuState.c)
 * Callees:
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C01FF08C (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 */

__int64 __fastcall xxxUnlockMenuState(struct tagMENUSTATE *a1)
{
  return xxxUnlockMenuStateInternal(a1, 0);
}
