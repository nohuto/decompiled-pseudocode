/*
 * XREFs of ??$MakeAndInitialize@VCDeviceGraphManager@@UIDeviceGraphManager@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIDeviceGraphManager@@@Z @ 0x18004FEC8
 * Callers:
 *     ?InitializeDeviceGraphManager@@YAJXZ @ 0x18004FD0C (-InitializeDeviceGraphManager@@YAJXZ.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1800181E0 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphManager@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18003F610 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphManag.c)
 *     ??0CDeviceGraphManager@@QEAA@XZ @ 0x18004FF94 (--0CDeviceGraphManager@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800D30A4 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_1800D30A4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 Microsoft::WRL::Details::MakeAndInitialize<CDeviceGraphManager,IDeviceGraphManager,>()
{
  CDeviceGraphManager *v0; // rax
  struct IDeviceGraphManager *v1; // rdi
  const struct _GUID *v2; // rcx
  const struct _GUID *v3; // rcx
  const struct _GUID *v4; // r9
  __int64 v5; // rdx
  struct IDeviceGraphManager *v6; // r8
  int CanCastTo; // ebx

  g_DeviceGraphManager = 0LL;
  v0 = (CDeviceGraphManager *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v0 )
    return (unsigned int)-2147024882;
  v1 = CDeviceGraphManager::CDeviceGraphManager(v0);
  g_DeviceGraphManager = 0LL;
  if ( InlineIsEqualGUID(&GUID_d1560edf_8a5c_4f4a_9ee0_3d153853e7d9, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v2, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    g_DeviceGraphManager = v1;
    (*(void (__fastcall **)(struct IDeviceGraphManager *))(*(_QWORD *)v1 + 8LL))(v1);
    CanCastTo = 0;
  }
  else
  {
    if ( InlineIsEqualGUID(v3, v4) )
    {
      g_DeviceGraphManager = v6;
      CanCastTo = 0;
LABEL_6:
      (*(void (__fastcall **)(struct IDeviceGraphManager *))(*(_QWORD *)v6 + 8LL))(v6);
      goto LABEL_7;
    }
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>::CanCastTo(
                  (char *)v6 + 8,
                  v5,
                  &g_DeviceGraphManager);
    if ( CanCastTo >= 0 )
    {
      v6 = g_DeviceGraphManager;
      goto LABEL_6;
    }
  }
LABEL_7:
  if ( v1 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IDeviceGraphManager>::Release((__int64)v1);
  return (unsigned int)CanCastTo;
}
