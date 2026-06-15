/*
 * XREFs of ??_GCEndpointInstance@@QEAAPEAXI@Z @ 0x14005A598
 * Callers:
 *     ?CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140004CBC (-CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@.c)
 *     ??1CAPOEndpointProcessNode@@UEAA@XZ @ 0x14005A4B0 (--1CAPOEndpointProcessNode@@UEAA@XZ.c)
 *     ??1?$CAutoPtr@VCEndpointInstance@@@ATL@@QEAA@XZ @ 0x14005C798 (--1-$CAutoPtr@VCEndpointInstance@@@ATL@@QEAA@XZ.c)
 *     ??1?$unique_ptr@VCEndpointInstance@@U?$default_delete@VCEndpointInstance@@@wistd@@@wistd@@QEAA@XZ @ 0x14005C8E8 (--1-$unique_ptr@VCEndpointInstance@@U-$default_delete@VCEndpointInstance@@@wistd@@@wistd@@QEAA@X.c)
 * Callees:
 *     ??1CEndpointInstance@@QEAA@XZ @ 0x1400048CC (--1CEndpointInstance@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x14002FC18 (--3@YAXPEAX_K@Z.c)
 */

CEndpointInstance *__fastcall CEndpointInstance::`scalar deleting destructor'(CEndpointInstance *this)
{
  CEndpointInstance::~CEndpointInstance(this);
  operator delete(this);
  return this;
}
