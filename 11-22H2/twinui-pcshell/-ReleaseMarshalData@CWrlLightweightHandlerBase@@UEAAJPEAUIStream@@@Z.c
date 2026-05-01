/*
 * XREFs of ?ReleaseMarshalData@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@@Z @ 0x18079A360
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180117658 (-_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWrlLightweightHandlerBase::ReleaseMarshalData(RTL_SRWLOCK *this, struct IStream *a2)
{
  __int64 *v4; // rbx
  IUnknown *v5; // rdx
  int StdMarshaler; // ebx
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0LL;
  v4 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v8, &v9);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v4);
  StdMarshaler = CWrlLightweightHandlerBase::_GetStdMarshaler(this, v5, (void **)v4);
  if ( StdMarshaler >= 0 )
    StdMarshaler = (*(__int64 (__fastcall **)(__int64, struct IStream *))(*(_QWORD *)v8 + 56LL))(v8, a2);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v8);
  return (unsigned int)StdMarshaler;
}
