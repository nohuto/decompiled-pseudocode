/*
 * XREFs of ?GetMMDevice@CEndpointCharacteristics@@QEAAXPEAPEAUIMMDevice@@@Z @ 0x18000FEF8
 * Callers:
 *     ?AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KPEA_K@Z @ 0x180065D10 (-AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEAVCEndpointCharacteristics@@U_G.c)
 * Callees:
 *     <none>
 */

void __fastcall CEndpointCharacteristics::GetMMDevice(CEndpointCharacteristics *this, struct IMMDevice **a2)
{
  struct IMMDevice *v2; // rcx

  v2 = (struct IMMDevice *)*((_QWORD *)this + 2);
  *a2 = v2;
  ((void (__fastcall *)(struct IMMDevice *))v2->lpVtbl->AddRef)(v2);
}
