/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopManagerSuspensionToken@@UIUnknown@@PEAVCVirtualDesktopManager@@@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@$$QEAPEAVCVirtualDesktopManager@@@Z @ 0x1805FCE84
 * Callers:
 *     ?SuspendModificationsInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIUnknown@@@Z @ 0x180605EB0 (-SuspendModificationsInternal@CVirtualDesktopManager@@UEAAJPEAPEAUIUnknown@@@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CD1C0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180142290 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@VFtmBa.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0VirtualDesktopManagerSuspensionToken@@QEAA@XZ @ 0x18060015C (--0VirtualDesktopManagerSuspensionToken@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@VirtualDesktopManagerSuspensionToken@@QEAAJPEAUISuspendableVirtualDesktopManager@@@Z @ 0x1806034F0 (-RuntimeClassInitialize@VirtualDesktopManagerSuspensionToken@@QEAAJPEAUISuspendableVirtualDeskto.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopManagerSuspensionToken,IUnknown,CVirtualDesktopManager *>(
        void **a1,
        _QWORD *a2)
{
  VirtualDesktopManagerSuspensionToken *v4; // rax
  int v5; // ebx
  VirtualDesktopManagerSuspensionToken *v6; // rdi
  volatile int *v7; // rdx
  const struct _GUID *v8; // rdx
  int CanCastTo; // eax

  *a1 = 0LL;
  v4 = (VirtualDesktopManagerSuspensionToken *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = VirtualDesktopManagerSuspensionToken::VirtualDesktopManagerSuspensionToken(v4);
    v5 = VirtualDesktopManagerSuspensionToken::RuntimeClassInitialize(
           v6,
           (struct ISuspendableVirtualDesktopManager *)((*a2 + 40LL) & ((unsigned __int128)-(__int128)(unsigned __int64)*a2 >> 64)));
    if ( v5 >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_00000000_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046) )
      {
        *a1 = v6;
        (*(void (__fastcall **)(VirtualDesktopManagerSuspensionToken *))(*(_QWORD *)v6 + 8LL))(v6);
        v5 = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((VirtualDesktopManagerSuspensionToken *)((char *)v6 + 8), v8, a1);
        v5 = -2147467262;
        if ( CanCastTo != -2147467262 )
        {
          v5 = CanCastTo;
          if ( CanCastTo >= 0 )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 8LL))(*a1);
        }
      }
    }
    if ( v6 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown,Microsoft::WRL::FtmBase>::Release(
        (__int64)v6,
        v7);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
