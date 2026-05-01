/*
 * XREFs of ??1CMarshalStream@CMarshaledInterface@@UEAA@XZ @ 0x1800E2B2C
 * Callers:
 *     ??_GCMarshalStream@CMarshaledInterface@@UEAAPEAXI@Z @ 0x1800E2AF0 (--_GCMarshalStream@CMarshaledInterface@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CMarshaledInterface::CMarshalStream::~CMarshalStream(CMarshaledInterface::CMarshalStream *this)
{
  LPSTREAM *v1; // rbx
  bool v3; // zf
  IStream *v4; // rcx
  LPVOID ppv; // [rsp+30h] [rbp+8h] BYREF

  v1 = (LPSTREAM *)((char *)this + 16);
  v3 = *((_QWORD *)this + 2) == 0LL;
  *(_QWORD *)this = &CMarshaledInterface::CMarshalStream::`vftable';
  if ( !v3 )
  {
    if ( *((_DWORD *)this + 10) == GetCurrentThreadId() )
    {
      CoReleaseMarshalData(*v1);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)v1);
    }
    else
    {
      ppv = 0LL;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&ppv);
      v4 = *v1;
      *v1 = 0LL;
      CoGetInterfaceAndReleaseStream(v4, &GUID_00000000_0000_0000_c000_000000000046, &ppv);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&ppv);
    }
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 4);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)v1);
  *((_DWORD *)this + 3) = -1073741823;
}
