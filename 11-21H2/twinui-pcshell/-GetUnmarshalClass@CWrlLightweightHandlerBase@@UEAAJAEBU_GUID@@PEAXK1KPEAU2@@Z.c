/*
 * XREFs of ?GetUnmarshalClass@CWrlLightweightHandlerBase@@UEAAJAEBU_GUID@@PEAXK1KPEAU2@@Z @ 0x1800ADE30
 * Callers:
 *     <none>
 * Callees:
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AE06C (-_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWrlLightweightHandlerBase::GetUnmarshalClass(
        CWrlLightweightHandlerBase *this,
        const struct _GUID *a2,
        void *a3,
        unsigned int a4,
        void *a5,
        unsigned int a6,
        struct _GUID *a7)
{
  GUID *v7; // rsi
  __int64 *v12; // rbx
  const struct _GUID *v13; // rdx
  int StdMarshaler; // ebx
  __int64 v16; // [rsp+40h] [rbp-28h] BYREF

  v7 = a7;
  a7 = 0LL;
  *v7 = GUID_NULL;
  v12 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&a7, &v16);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v12);
  StdMarshaler = CWrlLightweightHandlerBase::_GetStdMarshaler(this, v13, (void **)v12);
  if ( StdMarshaler >= 0 )
    StdMarshaler = (*(__int64 (__fastcall **)(struct _GUID *, const struct _GUID *, void *, _QWORD, void *, unsigned int, GUID *))(*(_QWORD *)&a7->Data1 + 24LL))(
                     a7,
                     a2,
                     a3,
                     a4,
                     a5,
                     a6,
                     v7);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&a7);
  return (unsigned int)StdMarshaler;
}
