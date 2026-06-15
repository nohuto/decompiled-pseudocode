/*
 * XREFs of ?GetActivityId@AudioEffectsWatcher@@UEAA?AU_GUID@@XZ @ 0x18003A9D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall AudioEffectsWatcher::GetActivityId(struct _GUID *this, struct _GUID *__return_ptr retstr)
{
  struct _GUID *result; // rax

  result = retstr;
  *retstr = this[2];
  return result;
}
