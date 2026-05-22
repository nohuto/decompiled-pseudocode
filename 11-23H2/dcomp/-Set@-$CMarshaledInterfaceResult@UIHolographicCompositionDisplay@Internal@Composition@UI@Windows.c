/*
 * XREFs of ?Set@?$CMarshaledInterfaceResult@UIHolographicCompositionDisplay@Internal@Composition@UI@Windows@@@Internal@Windows@@QEAAJPEAUIHolographicCompositionDisplay@2Composition@UI@3@@Z @ 0x18011A510
 * Callers:
 *     _lambda_4328ccf16b233a81f6b03adc706b18ed_::operator() @ 0x1801193D0 (_lambda_4328ccf16b233a81f6b03adc706b18ed_--operator().c)
 * Callees:
 *     ??B?$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ @ 0x180064D60 (--B-$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::Internal::CMarshaledInterfaceResult<Windows::UI::Composition::Internal::IHolographicCompositionDisplay>::Set(
        __int64 a1,
        __int64 a2)
{
  __int64 *v3; // rax
  unsigned int v4; // ebx
  __int64 *v5; // rdi
  __int64 *v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v7 = (__int64 *)(a1 + 16);
  v3 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::AgileRef>::operator Microsoft::WRL::AgileRef *(&v7);
  v4 = 0;
  v5 = v3;
  if ( a2 )
  {
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(v3);
    return (unsigned int)RoGetAgileReference(0LL, &GUID_ba20ba1f_e54e_4b7b_be58_9d0beadbb1db, a2, v5);
  }
  else
  {
    v7 = (__int64 *)*v3;
    v8 = 0LL;
    *v3 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v7);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v8);
  }
  return v4;
}
