/*
 * XREFs of ?DCompositionCreateDevice3@CDevice@DirectComposition@@SAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18001BDAC
 * Callers:
 *     DCompositionCreateDevice3 @ 0x18001BDA0 (DCompositionCreateDevice3.c)
 * Callees:
 *     ?Create@CDevice@DirectComposition@@SAJPEAUIDeviceOwner@2@W4DeviceVersion@2@PEAUIUnknown@@PEAPEAV12@@Z @ 0x18001D994 (-Create@CDevice@DirectComposition@@SAJPEAUIDeviceOwner@2@W4DeviceVersion@2@PEAUIUnknown@@PEAPEAV.c)
 *     ?IsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18002B938 (-IsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CDevice::DCompositionCreateDevice3(
        struct IUnknown *a1,
        const struct _GUID *a2,
        void **a3)
{
  int v5; // esi
  const struct _GUID *v6; // rcx
  __int64 v7; // r10
  const struct _GUID *v8; // rcx
  const struct _GUID *v9; // rcx
  const struct _GUID *v10; // rcx
  const struct _GUID *v11; // rcx
  const struct _GUID *v12; // rcx
  const struct _GUID *v13; // rcx
  const struct _GUID *v14; // rcx
  __int64 (__fastcall ***v15)(_QWORD, const struct _GUID *, void **); // rbx
  __int64 (__fastcall ***v17)(_QWORD, const struct _GUID *, void **); // [rsp+40h] [rbp+18h] BYREF

  v17 = 0LL;
  if ( !a3 )
    return (unsigned int)-2147024809;
  if ( !(unsigned int)IsEqualGUID(a2, &GUID_c37ea93a_e7aa_450d_b16f_9746cb0407f3)
    && !(unsigned int)IsEqualGUID(v6, &GUID_85fc5cca_2da6_494c_86b6_4a775c049b8a)
    && !(unsigned int)IsEqualGUID(v8, &GUID_5f4633fe_1e08_4cb8_8c75_ce24333f5602)
    && !(unsigned int)IsEqualGUID(v9, &GUID_d14b6158_c3fa_4bce_9c1f_b61d8665eab0)
    && !(unsigned int)IsEqualGUID(v10, &GUID_28d6ad3d_ee2a_4bcd_9419_7d54800435b1)
    && !(unsigned int)IsEqualGUID(v11, &GUID_e01eb649_787e_4560_b398_0de7a2065d8b)
    && !(unsigned int)IsEqualGUID(v12, &GUID_25090604_9c8b_42c9_8a71_bd1b3ad16512)
    && !(unsigned int)IsEqualGUID(v13, &GUID_ca67b562_1c32_4017_9dd9_3d4b7e2510aa)
    && !(unsigned int)IsEqualGUID(v14, &GUID_6083f66a_8533_4f7e_a37e_6c222134280b) )
  {
    v5 = -2147467262;
LABEL_15:
    *a3 = 0LL;
    return (unsigned int)v5;
  }
  v5 = DirectComposition::CDevice::Create(0LL, 2LL, v7, &v17);
  if ( v5 < 0 )
    goto LABEL_15;
  v15 = v17;
  v5 = (**v17)(v17, a2, a3);
  ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, const struct _GUID *, void **)))(*v15)[2])(v15);
  if ( v5 < 0 )
    goto LABEL_15;
  return (unsigned int)v5;
}
