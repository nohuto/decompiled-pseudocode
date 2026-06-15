/*
 * XREFs of ?GetContext@CBtAudioResourceManagerBase@@UEAA?AU_GUID@@XZ @ 0x18004D6E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall CBtAudioResourceManagerBase::GetContext(
        CBtAudioResourceManagerBase *this,
        struct _GUID *__return_ptr retstr)
{
  struct _GUID *result; // rax

  result = retstr;
  *retstr = *(struct _GUID *)((char *)this + 24);
  return result;
}
