/*
 * XREFs of ??$MakeAndInitialize@VWindowManagerBridge@@UIWindowManagerBridge@@PEAVWindowEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIWindowManagerBridge@@$$QEAPEAVWindowEventDispatcher@@@Z @ 0x180155324
 * Callers:
 *     ?RuntimeClassInitialize@WindowEventDispatcher@@QEAAJXZ @ 0x180155168 (-RuntimeClassInitialize@WindowEventDispatcher@@QEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180081EB0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?RuntimeClassInitialize@WindowManagerBridge@@QEAAJPEAUIWindowEventDispatcherInternal@@@Z @ 0x1800E4C08 (-RuntimeClassInitialize@WindowManagerBridge@@QEAAJPEAUIWindowEventDispatcherInternal@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@UIApplicationFrameFactory@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18013AA50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtm_ea_18013AA50.c)
 *     ??0WindowManagerBridge@@QEAA@XZ @ 0x1801553F8 (--0WindowManagerBridge@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<WindowManagerBridge,IWindowManagerBridge,WindowEventDispatcher *>(
        void **a1,
        _QWORD *a2)
{
  WindowManagerBridge *v4; // rax
  WindowManagerBridge *v5; // rdi
  int v6; // ebx
  _DWORD *v7; // rcx
  _DWORD *v8; // r9
  const struct _GUID *v9; // rdx
  int CanCastTo; // eax

  *a1 = 0LL;
  v4 = (WindowManagerBridge *)operator new(0x128uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v4 )
    return (unsigned int)-2147024882;
  v5 = WindowManagerBridge::WindowManagerBridge(v4);
  v6 = WindowManagerBridge::RuntimeClassInitialize(
         v5,
         (struct IWindowEventDispatcherInternal *)((*a2 + 16LL) & -(__int64)(*a2 != 0LL)));
  if ( v6 >= 0 )
  {
    *a1 = 0LL;
    if ( InlineIsEqualGUID(&GUID_fd4a9568_9653_4679_88b2_d7d1f960e8e1, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a1 = v5;
      (*(void (__fastcall **)(WindowManagerBridge *))(*(_QWORD *)v5 + 8LL))(v5);
      v6 = 0;
    }
    else
    {
      if ( InlineIsEqualGUID(v7, v8) )
      {
        *a1 = v5;
        v6 = 0;
LABEL_6:
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 8LL))(*a1);
        goto LABEL_7;
      }
      CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((WindowManagerBridge *)((char *)v5 + 8), v9, a1);
      v6 = -2147467262;
      if ( CanCastTo != -2147467262 )
      {
        v6 = CanCastTo;
        if ( CanCastTo >= 0 )
          goto LABEL_6;
      }
    }
  }
LABEL_7:
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,IApplicationFrameFactory>::Release((volatile signed __int32 *)v5);
  return (unsigned int)v6;
}
