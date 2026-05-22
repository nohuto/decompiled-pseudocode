/*
 * XREFs of ?DCompositionCreateDevice@CDevice@DirectComposition@@SAJPEAUIDXGIDevice@@AEBU_GUID@@PEAPEAX@Z @ 0x1800F1554
 * Callers:
 *     DCompositionCreateDevice @ 0x1800FF650 (DCompositionCreateDevice.c)
 * Callees:
 *     ?Create@CDevice@DirectComposition@@SAJPEAUIDeviceOwner@2@W4DeviceVersion@2@PEAUIUnknown@@PEAPEAV12@@Z @ 0x18001D994 (-Create@CDevice@DirectComposition@@SAJPEAUIDeviceOwner@2@W4DeviceVersion@2@PEAUIUnknown@@PEAPEAV.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CDevice::DCompositionCreateDevice(
        struct IUnknown *a1,
        const struct _GUID *a2,
        void **a3)
{
  int v5; // edi
  __int64 v6; // rax
  unsigned int *v7; // rbx
  unsigned int *v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0LL;
  if ( !a3 )
    return (unsigned int)-2147024809;
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_c37ea93a_e7aa_450d_b16f_9746cb0407f3.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_c37ea93a_e7aa_450d_b16f_9746cb0407f3.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_c37ea93a_e7aa_450d_b16f_9746cb0407f3.Data4;
  if ( v6 )
  {
    v5 = -2147467262;
LABEL_9:
    *a3 = 0LL;
    return (unsigned int)v5;
  }
  v5 = DirectComposition::CDevice::Create(0LL, 0, a1, &v9);
  if ( v5 < 0 )
    goto LABEL_9;
  v7 = v9;
  v5 = (**(__int64 (__fastcall ***)(unsigned int *, const struct _GUID *, void **))v9)(v9, a2, a3);
  (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v5 < 0 )
    goto LABEL_9;
  return (unsigned int)v5;
}
