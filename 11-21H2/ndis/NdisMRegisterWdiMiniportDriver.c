/*
 * XREFs of NdisMRegisterWdiMiniportDriver @ 0x1C0131DE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0035B90 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 *     ?TryAcquire@KRundownBase@@QEAA_NXZ @ 0x1C00ADAA0 (-TryAcquire@KRundownBase@@QEAA_NXZ.c)
 *     ??1KRundownHolder@@QEAA@XZ @ 0x1C013197C (--1KRundownHolder@@QEAA@XZ.c)
 *     ?DereferenceWdi@@YAXXZ @ 0x1C01319A8 (-DereferenceWdi@@YAXXZ.c)
 *     ?ReferenceWdi@@YA_NXZ @ 0x1C0131B28 (-ReferenceWdi@@YA_NXZ.c)
 *     ?ndisMpHookGetHook@@YA?AV?$KRundownPtr@$$CBUNDIS_MINIPORT_HOOK_PROVIDER_INFO@@@@W4_NDIS_MINIPORT_HOOK_DRIVER_TYPE@@@Z @ 0x1C01321B8 (-ndisMpHookGetHook@@YA-AV-$KRundownPtr@$$CBUNDIS_MINIPORT_HOOK_PROVIDER_INFO@@@@W4_NDIS_MINIPORT.c)
 */

NDIS_STATUS __stdcall NdisMRegisterWdiMiniportDriver(
        DRIVER_OBJECT *DriverObject,
        PCUNICODE_STRING RegistryPath,
        NDIS_MINIPORT_DRIVER_CONTEXT NdisDriverContext,
        NDIS_MINIPORT_DRIVER_CHARACTERISTICS *MiniportDriverCharacteristics,
        NDIS_MINIPORT_DRIVER_WDI_CHARACTERISTICS *MiniportWdiCharacteristics,
        NDIS_MINIPORT_DRIVER_HANDLE *NdisMiniportDriverHandle)
{
  size_t Size; // rdi
  void *Pool2; // rbx
  NDIS_STATUS v12; // edi
  _DWORD *v13; // rcx
  void *v15; // rax
  void *v16; // rdx
  __int64 v17; // [rsp+40h] [rbp-38h] BYREF
  KRundownHolder RunRef; // [rsp+48h] [rbp-30h] BYREF

  Size = 160LL;
  *NdisMiniportDriverHandle = 0LL;
  Pool2 = (void *)ExAllocatePool2(66LL, 160LL, 1749250125);
  if ( !Pool2 )
  {
    v12 = -1073741670;
    goto LABEL_16;
  }
  if ( MiniportDriverCharacteristics->Header.Size < 0xA0u )
    Size = MiniportDriverCharacteristics->Header.Size;
  memmove(Pool2, MiniportDriverCharacteristics, Size);
  if ( !ReferenceWdi() )
  {
    v12 = -1073741637;
    goto LABEL_16;
  }
  ndisMpHookGetHook(&v17);
  if ( v17 )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, DRIVER_OBJECT *, PCUNICODE_STRING, NDIS_MINIPORT_DRIVER_CONTEXT, NDIS_MINIPORT_DRIVER_CHARACTERISTICS *, NDIS_MINIPORT_DRIVER_WDI_CHARACTERISTICS *, NDIS_MINIPORT_DRIVER_HANDLE *))(v17 + 8))(
            *(_QWORD *)v17,
            DriverObject,
            RegistryPath,
            NdisDriverContext,
            MiniportDriverCharacteristics,
            MiniportWdiCharacteristics,
            NdisMiniportDriverHandle);
    if ( !v12 )
    {
      v13 = *NdisMiniportDriverHandle;
      if ( *NdisMiniportDriverHandle )
      {
        v13[224] = 1;
        v15 = Pool2;
        *((_BYTE *)v13 + 900) = 1;
        Pool2 = 0LL;
        v16 = (void *)*((_QWORD *)v13 + 44);
        *((_QWORD *)v13 + 44) = v15;
        if ( v16 )
          operator delete(v16);
        KRundownBase::TryAcquire((KRundownBase *)(v17 - 16));
        v12 = 0;
        goto LABEL_15;
      }
      v12 = -1073741823;
    }
    if ( v17 )
    {
      v17 = 0LL;
      --RunRef.m_count;
      ExReleaseRundownProtection(&RunRef.m_rundown->m_rundown);
    }
  }
  else
  {
    v12 = -1073741637;
  }
  DereferenceWdi();
LABEL_15:
  KRundownHolder::~KRundownHolder(&RunRef);
LABEL_16:
  if ( Pool2 )
    operator delete(Pool2);
  return v12;
}
