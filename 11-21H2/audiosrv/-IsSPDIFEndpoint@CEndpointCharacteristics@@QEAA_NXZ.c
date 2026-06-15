/*
 * XREFs of ?IsSPDIFEndpoint@CEndpointCharacteristics@@QEAA_NXZ @ 0x18014B320
 * Callers:
 *     AudioServerIsFormatSupported @ 0x180021540 (AudioServerIsFormatSupported.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x18002C050 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180025C8C (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?FormFactor@CEndpointCharacteristics@@QEAA?AW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@XZ @ 0x180053BA4 (-FormFactor@CEndpointCharacteristics@@QEAA-AW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@XZ.c)
 *     _lambda_c21659d5a86b392c88a6b01fab095e1d_::operator() @ 0x180068E0C (_lambda_c21659d5a86b392c88a6b01fab095e1d_--operator().c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall CEndpointCharacteristics::IsSPDIFEndpoint(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rbx
  bool v3; // bl
  _BYTE *v5[3]; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+40h] [rbp+8h] BYREF
  PVOID Ptr; // [rsp+48h] [rbp+10h] BYREF
  RTL_SRWLOCK *v8; // [rsp+50h] [rbp+18h] BYREF

  v2 = this + 1217;
  AcquireSRWLockExclusive(this + 1217);
  v8 = v2;
  if ( !LODWORD(this[1218].Ptr) )
  {
    LODWORD(this[1218].Ptr) = 2;
    if ( (unsigned int)CEndpointCharacteristics::FormFactor((CEndpointCharacteristics *)this) - 7 <= 1
      || (Ptr = this[2].Ptr,
          v6 = 0,
          v5[0] = &Ptr,
          v5[1] = &v6,
          lambda_c21659d5a86b392c88a6b01fab095e1d_::operator()(v5),
          v6) )
    {
      LODWORD(this[1218].Ptr) = 1;
    }
  }
  v3 = LODWORD(this[1218].Ptr) == 1;
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v8);
  return v3;
}
