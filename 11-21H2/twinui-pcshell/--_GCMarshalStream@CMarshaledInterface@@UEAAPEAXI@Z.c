/*
 * XREFs of ??_GCMarshalStream@CMarshaledInterface@@UEAAPEAXI@Z @ 0x180089A10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
CMarshaledInterface::CMarshalStream *__fastcall CMarshaledInterface::CMarshalStream::`scalar deleting destructor'(
        CMarshaledInterface::CMarshalStream *this,
        char a2)
{
  LPSTREAM *v4; // rdi
  __int64 v5; // rcx
  LPSTREAM v6; // rcx
  IStream *v8; // rcx
  LPVOID ppv; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CMarshaledInterface::CMarshalStream::`vftable';
  v4 = (LPSTREAM *)((char *)this + 16);
  if ( *((_QWORD *)this + 2) )
  {
    if ( *((_DWORD *)this + 10) == GetCurrentThreadId() )
    {
      CoReleaseMarshalData(*v4);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)v4);
    }
    else
    {
      ppv = 0LL;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&ppv);
      v8 = *v4;
      *v4 = 0LL;
      CoGetInterfaceAndReleaseStream(v8, &GUID_00000000_0000_0000_c000_000000000046, &ppv);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&ppv);
    }
  }
  v5 = *((_QWORD *)this + 4);
  if ( v5 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *v4;
  if ( *v4 )
  {
    *v4 = 0LL;
    (*(void (__fastcall **)(LPSTREAM))(*(_QWORD *)v6 + 16LL))(v6);
  }
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x30uLL);
  return this;
}
