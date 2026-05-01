/*
 * XREFs of ?_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AE06C
 * Callers:
 *     ?MarshalInterface@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z @ 0x1800ADC30 (-MarshalInterface@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z.c)
 *     ?GetUnmarshalClass@CWrlLightweightHandlerBase@@UEAAJAEBU_GUID@@PEAXK1KPEAU2@@Z @ 0x1800ADE30 (-GetUnmarshalClass@CWrlLightweightHandlerBase@@UEAAJAEBU_GUID@@PEAXK1KPEAU2@@Z.c)
 *     ?GetMarshalSizeMax@CWrlLightweightHandlerBase@@UEAAJAEBU_GUID@@PEAXK1KPEAK@Z @ 0x1800ADF10 (-GetMarshalSizeMax@CWrlLightweightHandlerBase@@UEAAJAEBU_GUID@@PEAXK1KPEAK@Z.c)
 *     ?DisconnectObject@CWrlLightweightHandlerBase@@UEAAJK@Z @ 0x18061BA20 (-DisconnectObject@CWrlLightweightHandlerBase@@UEAAJK@Z.c)
 *     ?ReleaseMarshalData@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@@Z @ 0x18061BAB0 (-ReleaseMarshalData@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@@Z.c)
 *     ?UnmarshalInterface@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAPEAX@Z @ 0x18061BB40 (-UnmarshalInterface@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CopyTo@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AE1DC (-CopyTo@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWrlLightweightHandlerBase::_GetStdMarshaler(RTL_SRWLOCK *this, IUnknown *a2, void **a3)
{
  RTL_SRWLOCK *v3; // rbp
  PVOID Ptr; // rbx
  HRESULT StdMarshal; // edi
  __int64 (__fastcall **v9)(RTL_SRWLOCK *, GUID *, LPUNKNOWN *); // rax
  __int64 (__fastcall *v10)(RTL_SRWLOCK *, GUID *, LPUNKNOWN *); // rbx
  __int64 *v11; // rbx
  DWORD v12; // eax
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  LPUNKNOWN pUnkOuter; // [rsp+58h] [rbp+10h] BYREF

  pUnkOuter = a2;
  *a3 = 0LL;
  v3 = this + 3;
  AcquireSRWLockShared(this + 3);
  Ptr = this[4].Ptr;
  ReleaseSRWLockShared(v3);
  StdMarshal = Ptr == 0LL ? 0x80004005 : 0;
  if ( !Ptr )
  {
    AcquireSRWLockExclusive(v3);
    if ( this[4].Ptr )
    {
      StdMarshal = 0;
    }
    else
    {
      v9 = (__int64 (__fastcall **)(RTL_SRWLOCK *, GUID *, LPUNKNOWN *))this->Ptr;
      pUnkOuter = 0LL;
      v10 = *v9;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&pUnkOuter);
      StdMarshal = v10(this, &GUID_00000000_0000_0000_c000_000000000046, &pUnkOuter);
      if ( StdMarshal >= 0 )
      {
        v11 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&this[4], &v13);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v11);
        v12 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *))this->Ptr + 9))(this);
        StdMarshal = CoGetStdMarshalEx(pUnkOuter, v12, (LPUNKNOWN *)v11);
        if ( StdMarshal >= 0 )
          (*((void (__fastcall **)(RTL_SRWLOCK *))this->Ptr + 12))(this);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&pUnkOuter);
    }
    ReleaseSRWLockExclusive(v3);
  }
  if ( StdMarshal >= 0 )
    return (unsigned int)Microsoft::WRL::ComPtr<IInspectable>::CopyTo(
                           &this[4],
                           &GUID_00000003_0000_0000_c000_000000000046,
                           a3);
  return (unsigned int)StdMarshal;
}
