/*
 * XREFs of ?Clone@CAppLayout@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011D480
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ?CAppLayout_CreateInstance@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@AEBU_GUID@@PEAPEAX@Z @ 0x18011F2D0 (-CAppLayout_CreateInstance@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@AEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppLayout::Clone(RTL_SRWLOCK *this, const struct _GUID *a2, void **a3)
{
  RTL_SRWLOCK *v5; // rbx
  __int64 *v6; // rbx
  const struct _GUID *v7; // rdx
  int Instance; // ebx
  PVOID Ptr; // r15
  __int64 v10; // r14
  __int64 v11; // rsi
  __int64 (__fastcall *v12)(__int64, __int64 *); // rdi
  __int64 *v13; // rbx
  _QWORD v15[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v16; // [rsp+90h] [rbp+48h] BYREF
  const struct _GUID *v17; // [rsp+98h] [rbp+50h]
  __int64 v18; // [rsp+A0h] [rbp+58h] BYREF
  RTL_SRWLOCK *v19; // [rsp+A8h] [rbp+60h] BYREF

  v17 = a2;
  *a3 = 0LL;
  v5 = this + 2;
  AcquireSRWLockShared(this + 2);
  v19 = v5;
  v16 = 0LL;
  v6 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v16, &v18);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v6);
  Instance = CAppLayout_CreateInstance((const struct LAYOUT_ENVIRONMENT_DETAILS *)&this[3], v7, (void **)v6);
  if ( Instance >= 0 )
  {
    Ptr = this[9].Ptr;
    v10 = 0LL;
    if ( Ptr )
    {
      while ( Instance >= 0 )
      {
        v18 = 0LL;
        v11 = *((_QWORD *)this[8].Ptr + v10);
        v12 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 88LL);
        v13 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v18, v15);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v13);
        Instance = v12(v11, v13);
        if ( Instance >= 0 )
          Instance = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v16 + 224LL))(v16, v18, 1LL);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v18);
        if ( ++v10 >= (unsigned __int64)Ptr )
        {
          if ( Instance < 0 )
            break;
          goto LABEL_8;
        }
      }
    }
    else
    {
LABEL_8:
      Instance = (**(__int64 (__fastcall ***)(__int64, const struct _GUID *, void **))v16)(v16, v17, a3);
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v19);
  return (unsigned int)Instance;
}
