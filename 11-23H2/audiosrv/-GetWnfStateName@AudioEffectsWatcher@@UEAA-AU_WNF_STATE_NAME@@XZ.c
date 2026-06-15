/*
 * XREFs of ?GetWnfStateName@AudioEffectsWatcher@@UEAA?AU_WNF_STATE_NAME@@XZ @ 0x18004CB60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _WNF_STATE_NAME __fastcall AudioEffectsWatcher::GetWnfStateName(AudioEffectsWatcher *this, _QWORD *a2)
{
  *a2 = *(_QWORD *)((char *)this + 84);
  return (struct _WNF_STATE_NAME)a2;
}
