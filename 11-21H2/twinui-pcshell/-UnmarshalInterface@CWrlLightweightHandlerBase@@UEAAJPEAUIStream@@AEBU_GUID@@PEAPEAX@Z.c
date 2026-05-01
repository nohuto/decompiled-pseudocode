/*
 * XREFs of ?UnmarshalInterface@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAPEAX@Z @ 0x18061BB40
 * Callers:
 *     <none>
 * Callees:
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AE06C (-_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWrlLightweightHandlerBase::UnmarshalInterface(
        RTL_SRWLOCK *this,
        struct IStream *a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 *v8; // rbx
  IUnknown *v9; // rdx
  int StdMarshaler; // ebx
  _QWORD v12[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  *a4 = 0LL;
  v13 = 0LL;
  v8 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v13, v12);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v8);
  StdMarshaler = CWrlLightweightHandlerBase::_GetStdMarshaler(this, v9, (void **)v8);
  if ( StdMarshaler >= 0 )
    StdMarshaler = (*(__int64 (__fastcall **)(__int64, struct IStream *, const struct _GUID *, void **))(*(_QWORD *)v13 + 48LL))(
                     v13,
                     a2,
                     a3,
                     a4);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
  return (unsigned int)StdMarshaler;
}
