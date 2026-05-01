/*
 * XREFs of ?GetMarshalSizeMax@CWrlLightweightHandlerBase@@UEAAJAEBU_GUID@@PEAXK1KPEAK@Z @ 0x1800ADF10
 * Callers:
 *     <none>
 * Callees:
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AE06C (-_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWrlLightweightHandlerBase::GetMarshalSizeMax(
        CWrlLightweightHandlerBase *this,
        const struct _GUID *a2,
        void *a3,
        unsigned int a4,
        void *a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int *v7; // r14
  __int64 *v12; // rbx
  const struct _GUID *v13; // rdx
  signed int StdMarshaler; // ebx
  unsigned int *v15; // rdi
  unsigned int v16; // edx
  unsigned int v17; // eax
  int v18; // edx
  __int64 v20[2]; // [rsp+40h] [rbp-38h] BYREF

  v7 = a7;
  v20[0] = 0LL;
  *a7 = 0;
  v12 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)v20, &a7);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v12);
  StdMarshaler = CWrlLightweightHandlerBase::_GetStdMarshaler(this, v13, (void **)v12);
  if ( StdMarshaler >= 0 )
  {
    StdMarshaler = (*(__int64 (__fastcall **)(__int64, const struct _GUID *, void *, _QWORD, void *, unsigned int, unsigned int **))(*(_QWORD *)v20[0] + 32LL))(
                     v20[0],
                     a2,
                     a3,
                     a4,
                     a5,
                     a6,
                     &a7);
    if ( StdMarshaler >= 0 )
    {
      v15 = (unsigned int *)((char *)this + 16);
      StdMarshaler = (*(__int64 (__fastcall **)(CWrlLightweightHandlerBase *, const struct _GUID *, void *, _QWORD, void *, unsigned int, char *))(*(_QWORD *)this + 80LL))(
                       this,
                       a2,
                       a3,
                       a4,
                       a5,
                       a6,
                       (char *)this + 16);
      if ( StdMarshaler >= 0 )
      {
        v16 = *v15 + 4;
        if ( v16 < *v15 )
        {
          StdMarshaler = -2147024362;
        }
        else
        {
          v17 = v16 + (_DWORD)a7;
          v18 = -1;
          if ( v17 >= (unsigned int)a7 )
            v18 = v17;
          StdMarshaler = v17 < (unsigned int)a7 ? 0x80070216 : 0;
          *v7 = v18;
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v20);
  return (unsigned int)StdMarshaler;
}
