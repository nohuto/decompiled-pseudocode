/*
 * XREFs of ?CVirtualDesktopHotkeyHandler_CreateInstance@@YAJPEAUIVirtualDesktopManagerPrivate@@PEAUIVirtualDesktopLock@@AEBU_GUID@@PEAPEAX@Z @ 0x18011103C
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x1800DE300 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VAppSizeConstraintsCache@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EE1EC (-InternalRelease@-$ComPtr@VAppSizeConstraintsCache@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCVirtualDesktopHotkeyHandler@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopLock@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopHotkeyHandler@@AEAPEAUIVirtualDesktopManagerPrivate@@AEAPEAUIVirtualDesktopLock@@@Z @ 0x180112200 (--$MakeAndInitialize@VCVirtualDesktopHotkeyHandler@@V1@AEAPEAUIVirtualDesktopManagerPrivate@@AEA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopHotkeyHandler_CreateInstance(
        struct IVirtualDesktopManagerPrivate *a1,
        struct IVirtualDesktopLock *a2,
        const struct _GUID *a3,
        void **a4)
{
  int v5; // eax
  int v6; // ebx
  _DWORD *v7; // rcx
  _DWORD *v8; // rcx
  void *v9; // rcx
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  void *v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IVirtualDesktopManagerPrivate *v15; // [rsp+30h] [rbp+8h] BYREF
  struct IVirtualDesktopLock *v16; // [rsp+38h] [rbp+10h] BYREF
  void *v17; // [rsp+40h] [rbp+18h] BYREF

  v16 = a2;
  v15 = a1;
  *a4 = 0LL;
  v17 = 0LL;
  Microsoft::WRL::ComPtr<AppSizeConstraintsCache>::InternalRelease((__int64 *)&v17);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopHotkeyHandler,CVirtualDesktopHotkeyHandler,IVirtualDesktopManagerPrivate * &,IVirtualDesktopLock * &>(
         &v17,
         &v15,
         &v16);
  v6 = v5;
  if ( v5 < 0 )
  {
    v11 = (unsigned int)v5;
    v12 = 114LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeyhandler.cpp",
      (const char *)v11);
    goto LABEL_6;
  }
  *a4 = 0LL;
  if ( InlineIsEqualGUID(&GUID_6109bc11_9cd9_4c61_b840_97ee12fba4b2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v13 = v17;
    *a4 = v17;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v13 + 8LL))(v13);
    v6 = 0;
  }
  else if ( InlineIsEqualGUID(v7, v7) || InlineIsEqualGUID(v8, &GUID_71db071a_44ae_4271_b9f6_01cfb6a12dee) )
  {
    v9 = v17;
    *a4 = v17;
    v6 = 0;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v9 + 8LL))(v9);
  }
  else
  {
    v6 = -2147467262;
  }
  if ( v6 < 0 )
  {
    v11 = (unsigned int)v6;
    v12 = 115LL;
    goto LABEL_12;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<AppSizeConstraintsCache>::InternalRelease((__int64 *)&v17);
  return (unsigned int)v6;
}
