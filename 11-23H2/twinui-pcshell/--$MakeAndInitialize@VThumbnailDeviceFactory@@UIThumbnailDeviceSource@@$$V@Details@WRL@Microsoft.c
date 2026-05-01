/*
 * XREFs of ??$MakeAndInitialize@VThumbnailDeviceFactory@@UIThumbnailDeviceSource@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIThumbnailDeviceSource@@@Z @ 0x18019CFE0
 * Callers:
 *     ?Initialize@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x180139210 (-Initialize@VirtualDesktopDataSource@@UEAAJPEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDeskt.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CD1C0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIThumbnailDeviceSource@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180140880 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIThumbnailDevice.c)
 *     ??0ThumbnailDeviceFactory@@QEAA@XZ @ 0x18019D098 (--0ThumbnailDeviceFactory@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ThumbnailDeviceFactory,IThumbnailDeviceSource,>(
        void **a1)
{
  ThumbnailDeviceFactory *v2; // rax
  ThumbnailDeviceFactory *v3; // rdi
  _DWORD *v4; // rcx
  _DWORD *v5; // r9
  const struct _GUID *v6; // rdx
  unsigned int v7; // ebx
  volatile int *v8; // rdx
  int CanCastTo; // eax

  *a1 = 0LL;
  v2 = (ThumbnailDeviceFactory *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v2 )
    return (unsigned int)-2147024882;
  v3 = ThumbnailDeviceFactory::ThumbnailDeviceFactory(v2);
  *a1 = 0LL;
  if ( InlineIsEqualGUID(&GUID_ebf4f734_c638_49eb_991f_652a0bc063f0, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *a1 = v3;
    (*(void (__fastcall **)(ThumbnailDeviceFactory *))(*(_QWORD *)v3 + 8LL))(v3);
    v7 = 0;
  }
  else
  {
    if ( InlineIsEqualGUID(v4, v5) )
    {
      *a1 = v3;
      v7 = 0;
LABEL_5:
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 8LL))(*a1);
      goto LABEL_6;
    }
    CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((ThumbnailDeviceFactory *)((char *)v3 + 8), v6, a1);
    v7 = -2147467262;
    if ( CanCastTo != -2147467262 )
    {
      v7 = CanCastTo;
      if ( CanCastTo >= 0 )
        goto LABEL_5;
    }
  }
LABEL_6:
  if ( v3 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IThumbnailDeviceSource,Microsoft::WRL::FtmBase>::Release(
      (__int64)v3,
      v8);
  return v7;
}
