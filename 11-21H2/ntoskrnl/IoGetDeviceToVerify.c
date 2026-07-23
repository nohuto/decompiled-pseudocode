/*
 * XREFs of IoGetDeviceToVerify @ 0x140417C70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PDEVICE_OBJECT __stdcall IoGetDeviceToVerify(PETHREAD Thread)
{
  return (PDEVICE_OBJECT)*((_QWORD *)Thread + 163);
}
