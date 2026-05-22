/*
 * XREFs of ?Release@SystemButtonProcessor@@UEAAKXZ @ 0x18004C8C0
 * Callers:
 *     ?Release@ComboButtonProcessor@@W7EAAKXZ @ 0x180079550 (-Release@ComboButtonProcessor@@W7EAAKXZ.c)
 *     ?Release@MPCFocusTarget@@WFA@EAAKXZ @ 0x18007AB50 (-Release@MPCFocusTarget@@WFA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall SystemButtonProcessor::Release(SystemButtonProcessor *this)
{
  return RefCountedObject::Release((SystemButtonProcessor *)((char *)this + 8));
}
