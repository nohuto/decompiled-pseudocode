/*
 * XREFs of ?DisconnectObject@CWrlLightweightHandlerBase@@UEAAJK@Z @ 0x18061BA20
 * Callers:
 *     <none>
 * Callees:
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AE06C (-_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWrlLightweightHandlerBase::DisconnectObject(RTL_SRWLOCK *this, unsigned int a2)
{
  __int64 *v4; // rbx
  IUnknown *v5; // rdx
  int StdMarshaler; // ebx
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0LL;
  v4 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v8, &v9);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v4);
  StdMarshaler = CWrlLightweightHandlerBase::_GetStdMarshaler(this, v5, (void **)v4);
  if ( StdMarshaler >= 0 )
    StdMarshaler = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 64LL))(v8, a2);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
  return (unsigned int)StdMarshaler;
}
