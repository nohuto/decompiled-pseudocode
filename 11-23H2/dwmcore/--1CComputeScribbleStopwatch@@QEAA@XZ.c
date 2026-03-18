/*
 * XREFs of ??1CComputeScribbleStopwatch@@QEAA@XZ @ 0x1802024EC
 * Callers:
 *     ??1?$unique_ptr@VCComputeScribbleStopwatch@@U?$default_delete@VCComputeScribbleStopwatch@@@std@@@std@@QEAA@XZ @ 0x1802022E8 (--1-$unique_ptr@VCComputeScribbleStopwatch@@U-$default_delete@VCComputeScribbleStopwatch@@@std@@.c)
 *     ??1CComputeScribbleScheduler@@QEAA@XZ @ 0x1802023A8 (--1CComputeScribbleScheduler@@QEAA@XZ.c)
 *     ?Initialize@CComputeScribbleScheduler@@AEAAJPEAUIDXGIOutputDWM@@PEAUIDCompositionDirectInkCommunicationPartner@@@Z @ 0x180202F70 (-Initialize@CComputeScribbleScheduler@@AEAAJPEAUIDXGIOutputDWM@@PEAUIDCompositionDirectInkCommun.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800047F0 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CComputeScribbleStopwatch::~CComputeScribbleStopwatch(CComputeScribbleStopwatch *this)
{
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 5);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 4);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this);
}
