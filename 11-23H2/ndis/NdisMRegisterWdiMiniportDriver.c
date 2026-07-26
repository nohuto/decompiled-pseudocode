/*
 * XREFs of NdisMRegisterWdiMiniportDriver @ 0x1C013D9B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0037728 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0038400 (memmove.c)
 *     ??1?$unique_ptr@VKnobCollection@@U?$KFreePool@VKnobCollection@@@@@wistd@@QEAA@XZ @ 0x1C005D038 (--1-$unique_ptr@VKnobCollection@@U-$KFreePool@VKnobCollection@@@@@wistd@@QEAA@XZ.c)
 *     ?TryAcquire@KRundownBase@@QEAA_NXZ @ 0x1C00B3AE4 (-TryAcquire@KRundownBase@@QEAA_NXZ.c)
 *     ??1KRundownHolder@@QEAA@XZ @ 0x1C013D550 (--1KRundownHolder@@QEAA@XZ.c)
 *     ?DereferenceWdi@@YAXXZ @ 0x1C013D57C (-DereferenceWdi@@YAXXZ.c)
 *     ?ReferenceWdi@@YA_NXZ @ 0x1C013D6FC (-ReferenceWdi@@YA_NXZ.c)
 *     ?ndisMpHookGetHook@@YA?AV?$KRundownPtr@$$CBUNDIS_MINIPORT_HOOK_PROVIDER_INFO@@@@W4_NDIS_MINIPORT_HOOK_DRIVER_TYPE@@@Z @ 0x1C013DD88 (-ndisMpHookGetHook@@YA-AV-$KRundownPtr@$$CBUNDIS_MINIPORT_HOOK_PROVIDER_INFO@@@@W4_NDIS_MINIPORT.c)
 */

NDIS_STATUS __stdcall NdisMRegisterWdiMiniportDriver(
        DRIVER_OBJECT *DriverObject,
        PCUNICODE_STRING RegistryPath,
        NDIS_MINIPORT_DRIVER_CONTEXT NdisDriverContext,
        NDIS_MINIPORT_DRIVER_CHARACTERISTICS *MiniportDriverCharacteristics,
        NDIS_MINIPORT_DRIVER_WDI_CHARACTERISTICS *MiniportWdiCharacteristics,
        NDIS_MINIPORT_DRIVER_HANDLE *NdisMiniportDriverHandle)
{
  NDIS_MINIPORT_DRIVER_HANDLE *v6; // r14
  size_t Size; // rdi
  NDIS_MINIPORT_DRIVER_HANDLE *v12; // rbx
  NDIS_STATUS v13; // edi
  _DWORD *v14; // rax
  void *v16; // rcx
  __int64 v17; // [rsp+40h] [rbp-20h] BYREF
  KRundownHolder RunRef; // [rsp+48h] [rbp-18h] BYREF

  v6 = NdisMiniportDriverHandle;
  Size = 160LL;
  *NdisMiniportDriverHandle = 0LL;
  NdisMiniportDriverHandle = (NDIS_MINIPORT_DRIVER_HANDLE *)ExAllocatePool2(66LL, 160LL, 1749250125);
  v12 = NdisMiniportDriverHandle;
  if ( !NdisMiniportDriverHandle )
  {
    v13 = -1073741670;
LABEL_15:
    wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::~unique_ptr<KnobCollection,KFreePool<KnobCollection>>((void **)&NdisMiniportDriverHandle);
    return v13;
  }
  if ( MiniportDriverCharacteristics->Header.Size < 0xA0u )
    Size = MiniportDriverCharacteristics->Header.Size;
  memmove(NdisMiniportDriverHandle, MiniportDriverCharacteristics, Size);
  if ( !ReferenceWdi() )
  {
LABEL_6:
    v13 = -1073741637;
    goto LABEL_15;
  }
  ndisMpHookGetHook(&v17);
  if ( !v17 )
  {
    DereferenceWdi();
    KRundownHolder::~KRundownHolder(&RunRef);
    goto LABEL_6;
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, DRIVER_OBJECT *, PCUNICODE_STRING, NDIS_MINIPORT_DRIVER_CONTEXT, NDIS_MINIPORT_DRIVER_CHARACTERISTICS *, NDIS_MINIPORT_DRIVER_WDI_CHARACTERISTICS *, NDIS_MINIPORT_DRIVER_HANDLE *))(v17 + 8))(
          *(_QWORD *)v17,
          DriverObject,
          RegistryPath,
          NdisDriverContext,
          MiniportDriverCharacteristics,
          MiniportWdiCharacteristics,
          v6);
  if ( v13 )
  {
LABEL_12:
    if ( v17 )
    {
      v17 = 0LL;
      --RunRef.m_count;
      ExReleaseRundownProtection(&RunRef.m_rundown->m_rundown);
    }
    DereferenceWdi();
    KRundownHolder::~KRundownHolder(&RunRef);
    goto LABEL_15;
  }
  v14 = *v6;
  if ( !*v6 )
  {
    v13 = -1073741823;
    goto LABEL_12;
  }
  v14[224] = 1;
  *((_BYTE *)v14 + 900) = 1;
  v16 = (void *)*((_QWORD *)v14 + 44);
  *((_QWORD *)v14 + 44) = v12;
  if ( v16 )
    operator delete(v16);
  KRundownBase::TryAcquire((KRundownBase *)(v17 - 16));
  KRundownHolder::~KRundownHolder(&RunRef);
  return 0;
}
