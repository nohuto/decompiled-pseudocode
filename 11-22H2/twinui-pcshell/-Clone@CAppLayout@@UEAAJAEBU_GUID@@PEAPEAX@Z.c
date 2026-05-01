/*
 * XREFs of ?Clone@CAppLayout@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18016C080
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?CAppLayout_CreateInstance@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@AEBU_GUID@@PEAPEAX@Z @ 0x18016C4CC (-CAppLayout_CreateInstance@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@AEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppLayout::Clone(RTL_SRWLOCK *this, const struct _GUID *a2, void **a3)
{
  RTL_SRWLOCK *v5; // r14
  __int64 *v6; // rbx
  const struct _GUID *v7; // rdx
  int Instance; // ebx
  PVOID Ptr; // r15
  __int64 v10; // rbp
  __int64 v11; // rsi
  __int64 (__fastcall *v12)(__int64, __int64 *); // rdi
  __int64 *v13; // rbx
  __int64 v15; // [rsp+80h] [rbp+8h] BYREF
  const struct _GUID *v16; // [rsp+88h] [rbp+10h]
  __int64 v17; // [rsp+90h] [rbp+18h] BYREF
  __int64 v18; // [rsp+98h] [rbp+20h] BYREF

  v16 = a2;
  *a3 = 0LL;
  v5 = this + 2;
  AcquireSRWLockShared(this + 2);
  v15 = 0LL;
  v6 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v15, &v17);
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
        v17 = 0LL;
        v11 = *((_QWORD *)this[8].Ptr + v10);
        v12 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 88LL);
        v13 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v17, &v18);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v13);
        Instance = v12(v11, v13);
        if ( Instance >= 0 )
          Instance = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v15 + 224LL))(v15, v17, 1LL);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
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
      Instance = (**(__int64 (__fastcall ***)(__int64, const struct _GUID *, void **))v15)(v15, v16, a3);
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v15);
  if ( v5 )
    ReleaseSRWLockShared(v5);
  return (unsigned int)Instance;
}
