/*
 * XREFs of ?GetInputSink@DWMInputTarget@@UEBAPEAXXZ @ 0x180100570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall DWMInputTarget::GetInputSink(DWMInputTarget *this)
{
  return DWMInputTarget::GetInputSinkHandle((DWMInputTarget *)((char *)this - 8));
}
