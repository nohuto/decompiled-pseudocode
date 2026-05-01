/*
 * XREFs of ?MarshalInterface@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z @ 0x180116E80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x1800ECE64 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180117658 (-_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     IStream_Write_0 @ 0x1801CE22A (IStream_Write_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWrlLightweightHandlerBase::MarshalInterface(
        CWrlLightweightHandlerBase *this,
        struct IStream *pstm,
        const struct _GUID *a3,
        void *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7)
{
  void *v11; // rbx
  __int64 *v12; // rdi
  const struct _GUID *v13; // rdx
  int StdMarshaler; // edi
  unsigned __int64 v15; // rax
  unsigned __int64 v17; // rax
  ULONG v18; // r14d
  void *pv; // [rsp+40h] [rbp-20h] BYREF
  __int64 v20; // [rsp+48h] [rbp-18h] BYREF
  __int64 v21; // [rsp+50h] [rbp-10h] BYREF
  __int64 v22; // [rsp+58h] [rbp-8h] BYREF

  v11 = 0LL;
  v20 = 0LL;
  v12 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v20, &v22);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v12);
  StdMarshaler = CWrlLightweightHandlerBase::_GetStdMarshaler(this, v13, (void **)v12);
  if ( StdMarshaler >= 0 )
  {
    StdMarshaler = (*(__int64 (__fastcall **)(__int64, struct IStream *, const struct _GUID *, void *, unsigned int, void *, unsigned int))(*(_QWORD *)v20 + 40LL))(
                     v20,
                     pstm,
                     a3,
                     a4,
                     a5,
                     a6,
                     a7);
    if ( StdMarshaler >= 0 )
    {
      StdMarshaler = (*(__int64 (__fastcall **)(CWrlLightweightHandlerBase *, const struct _GUID *, void *, _QWORD, void *, unsigned int, char *))(*(_QWORD *)this + 80LL))(
                       this,
                       a3,
                       a4,
                       a5,
                       a6,
                       a7,
                       (char *)this + 16);
      if ( StdMarshaler >= 0 )
      {
        StdMarshaler = IStream_Write_0(pstm, (char *)this + 16, 4u);
        if ( StdMarshaler >= 0 )
        {
          StdMarshaler = (*(__int64 (__fastcall **)(struct IStream *, _QWORD, __int64, __int64 *))(*(_QWORD *)pstm + 40LL))(
                           pstm,
                           0LL,
                           1LL,
                           &v22);
          if ( StdMarshaler >= 0 )
          {
            StdMarshaler = (*(__int64 (__fastcall **)(CWrlLightweightHandlerBase *, struct IStream *, const struct _GUID *, void *, unsigned int, void *, unsigned int))(*(_QWORD *)this + 88LL))(
                             this,
                             pstm,
                             a3,
                             a4,
                             a5,
                             a6,
                             a7);
            if ( StdMarshaler >= 0 )
            {
              StdMarshaler = (*(__int64 (__fastcall **)(struct IStream *, _QWORD, __int64, __int64 *))(*(_QWORD *)pstm + 40LL))(
                               pstm,
                               0LL,
                               1LL,
                               &v21);
              if ( StdMarshaler >= 0 )
              {
                v15 = *((unsigned int *)this + 4);
                if ( v21 - v22 > v15 )
                {
                  StdMarshaler = -2147467259;
                }
                else if ( v21 - v22 < v15 )
                {
                  v17 = v15 - (v21 - v22);
                  if ( v17 > 0xFFFFFFFF )
                  {
                    StdMarshaler = -2147024362;
                  }
                  else
                  {
                    v18 = v17;
                    pv = 0LL;
                    if ( is_mul_ok((unsigned int)v17, 1uLL) )
                    {
                      StdMarshaler = CTCoAllocPolicy::Alloc((void *)0xFFFFFFFFLL, 1, (unsigned int)v17, &pv);
                      v11 = pv;
                      if ( StdMarshaler >= 0 )
                        StdMarshaler = IStream_Write_0(pstm, pv, v18);
                    }
                    else
                    {
                      StdMarshaler = -2147024362;
                    }
                    CoTaskMemFree(v11);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v20);
  return (unsigned int)StdMarshaler;
}
