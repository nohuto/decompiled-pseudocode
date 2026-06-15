/*
 * XREFs of ?GetProcessingMode@CStreamInstance@@UEAA?AU_GUID@@XZ @ 0x140026440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall CStreamInstance::GetProcessingMode(struct _GUID *this, struct _GUID *__return_ptr retstr)
{
  struct _GUID *result; // rax

  result = retstr;
  *retstr = this[12];
  return result;
}
