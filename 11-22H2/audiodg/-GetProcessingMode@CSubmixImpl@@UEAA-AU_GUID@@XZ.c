/*
 * XREFs of ?GetProcessingMode@CSubmixImpl@@UEAA?AU_GUID@@XZ @ 0x1400265B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall CSubmixImpl::GetProcessingMode(struct _GUID *this, struct _GUID *__return_ptr retstr)
{
  struct _GUID *result; // rax

  result = retstr;
  *retstr = this[15];
  return result;
}
