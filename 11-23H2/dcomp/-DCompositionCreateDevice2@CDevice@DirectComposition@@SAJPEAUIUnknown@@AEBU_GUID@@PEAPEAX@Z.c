/*
 * XREFs of ?DCompositionCreateDevice2@CDevice@DirectComposition@@SAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18008977C
 * Callers:
 *     DCompositionCreateDevice2 @ 0x180089770 (DCompositionCreateDevice2.c)
 * Callees:
 *     ?Create@CDevice@DirectComposition@@SAJPEAUIDeviceOwner@2@W4DeviceVersion@2@PEAUIUnknown@@PEAPEAV12@@Z @ 0x18001D994 (-Create@CDevice@DirectComposition@@SAJPEAUIDeviceOwner@2@W4DeviceVersion@2@PEAUIUnknown@@PEAPEAV.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CDevice::DCompositionCreateDevice2(
        struct IUnknown *a1,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // esi
  unsigned int *v9; // rbx
  unsigned int *v11; // [rsp+40h] [rbp+18h] BYREF

  v11 = 0LL;
  if ( !a3 )
    return (unsigned int)-2147024809;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_c37ea93a_e7aa_450d_b16f_9746cb0407f3.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_c37ea93a_e7aa_450d_b16f_9746cb0407f3.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_c37ea93a_e7aa_450d_b16f_9746cb0407f3.Data4;
  if ( v5 )
  {
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_5f4633fe_1e08_4cb8_8c75_ce24333f5602.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_5f4633fe_1e08_4cb8_8c75_ce24333f5602.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_5f4633fe_1e08_4cb8_8c75_ce24333f5602.Data4;
    if ( v6 )
    {
      v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_d14b6158_c3fa_4bce_9c1f_b61d8665eab0.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_d14b6158_c3fa_4bce_9c1f_b61d8665eab0.Data1 )
        v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_d14b6158_c3fa_4bce_9c1f_b61d8665eab0.Data4;
      if ( v7 )
      {
        v8 = -2147467262;
LABEL_12:
        *a3 = 0LL;
        return (unsigned int)v8;
      }
    }
  }
  v8 = DirectComposition::CDevice::Create(0LL, 1u, a1, &v11);
  if ( v8 < 0 )
    goto LABEL_12;
  v9 = v11;
  v8 = (**(__int64 (__fastcall ***)(unsigned int *, const struct _GUID *, void **))v11)(v11, a2, a3);
  (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v8 < 0 )
    goto LABEL_12;
  return (unsigned int)v8;
}
