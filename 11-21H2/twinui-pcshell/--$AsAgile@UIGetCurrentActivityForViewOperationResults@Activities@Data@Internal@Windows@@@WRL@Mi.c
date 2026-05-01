/*
 * XREFs of ??$AsAgile@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@WRL@Microsoft@@YAJPEAUIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@PEAVAgileRef@01@@Z @ 0x1803BFD8C
 * Callers:
 *     _lambda_6084a6cce004fd5fee81c22a52dae34d_::operator() @ 0x1803C2510 (_lambda_6084a6cce004fd5fee81c22a52dae34d_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::AsAgile<Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults>(
        __int64 a1,
        __int64 *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  if ( a1 )
  {
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a2);
    return (unsigned int)RoGetAgileReference(0LL, &GUID_570e20d1_ca8a_454c_92d3_3d2a5d160fcc, a1, a2);
  }
  else
  {
    v7 = 0LL;
    v5 = *a2;
    *a2 = 0LL;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v7);
  }
  return v4;
}
