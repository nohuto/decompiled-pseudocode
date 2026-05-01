/*
 * XREFs of ??$MakeAndInitialize@VUwpWindowManagerBridge@@UIUwpWindowManagerBridge@@PEAVUwpWindowEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIUwpWindowManagerBridge@@$$QEAPEAVUwpWindowEventDispatcher@@@Z @ 0x180196184
 * Callers:
 *     ?RuntimeClassInitialize@UwpWindowEventDispatcher@@QEAAJXZ @ 0x1800E62B8 (-RuntimeClassInitialize@UwpWindowEventDispatcher@@QEAAJXZ.c)
 * Callees:
 *     ?RuntimeClassInitialize@UwpWindowManagerBridge@@QEAAJPEAUIUwpWindowEventDispatcherInternal@@@Z @ 0x1800A44BC (-RuntimeClassInitialize@UwpWindowManagerBridge@@QEAAJPEAUIUwpWindowEventDispatcherInternal@@@Z.c)
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800CD1C0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUwpWindowManagerBridge@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18017B660 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUwpWindowManage.c)
 *     ??0UwpWindowManagerBridge@@QEAA@XZ @ 0x180196258 (--0UwpWindowManagerBridge@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<UwpWindowManagerBridge,IUwpWindowManagerBridge,UwpWindowEventDispatcher *>(
        void **a1,
        _QWORD *a2)
{
  UwpWindowManagerBridge *v4; // rax
  UwpWindowManagerBridge *v5; // rdi
  int v6; // ebx
  _DWORD *v7; // rcx
  _DWORD *v8; // r9
  const struct _GUID *v9; // rdx
  int CanCastTo; // eax

  *a1 = 0LL;
  v4 = (UwpWindowManagerBridge *)operator new(0x138uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v4 )
    return (unsigned int)-2147024882;
  v5 = UwpWindowManagerBridge::UwpWindowManagerBridge(v4);
  v6 = UwpWindowManagerBridge::RuntimeClassInitialize(
         v5,
         (struct IUwpWindowEventDispatcherInternal *)((*a2 + 16LL) & -(__int64)(*a2 != 0LL)));
  if ( v6 >= 0 )
  {
    *a1 = 0LL;
    if ( InlineIsEqualGUID(&GUID_a9936277_04ad_4680_b2ec_9b995a363b3d, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a1 = v5;
      (*(void (__fastcall **)(UwpWindowManagerBridge *))(*(_QWORD *)v5 + 8LL))(v5);
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
      CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((UwpWindowManagerBridge *)((char *)v5 + 8), v9, a1);
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
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUwpWindowManagerBridge,Microsoft::WRL::FtmBase>::Release((volatile signed __int32 *)v5);
  return (unsigned int)v6;
}
