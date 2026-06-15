/*
 * XREFs of ?IsSPDIFEndpoint@CEndpointCharacteristics@@QEAA_NXZ @ 0x18014E44C
 * Callers:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18000D804 (-DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_.c)
 *     AudioServerIsFormatSupported @ 0x180123880 (AudioServerIsFormatSupported.c)
 * Callees:
 *     ?FormFactor@CEndpointCharacteristics@@QEAA?AW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@XZ @ 0x18001FE84 (-FormFactor@CEndpointCharacteristics@@QEAA-AW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@XZ.c)
 *     _lambda_a577178607fbfad5bb71ec56cdb50569_::operator() @ 0x18007494C (_lambda_a577178607fbfad5bb71ec56cdb50569_--operator().c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall CEndpointCharacteristics::IsSPDIFEndpoint(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rdi
  bool v3; // bl
  _BYTE *v5[3]; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+40h] [rbp+8h] BYREF
  PVOID Ptr; // [rsp+48h] [rbp+10h] BYREF
  RTL_SRWLOCK *v8; // [rsp+50h] [rbp+18h]

  v2 = this + 1030;
  AcquireSRWLockExclusive(this + 1030);
  v8 = v2;
  if ( !LODWORD(this[1031].Ptr) )
  {
    LODWORD(this[1031].Ptr) = 2;
    if ( (unsigned int)CEndpointCharacteristics::FormFactor((CEndpointCharacteristics *)this) - 7 <= 1
      || (Ptr = this[5].Ptr,
          v6 = 0,
          v5[0] = &Ptr,
          v5[1] = &v6,
          lambda_a577178607fbfad5bb71ec56cdb50569_::operator()(v5),
          v6) )
    {
      LODWORD(this[1031].Ptr) = 1;
    }
  }
  v3 = LODWORD(this[1031].Ptr) == 1;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return v3;
}
