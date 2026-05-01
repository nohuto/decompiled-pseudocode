/*
 * XREFs of ?VirtualDesktopItemFactory_CreateInstance@@YAJPEAUHMONITOR__@@PEAUIVirtualDesktopManagerInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x1804A8B5C
 * Callers:
 *     ?_InitializeVirtualDesktopComponents@MultitaskingData@@AEAAJPEAUHMONITOR__@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopPinnedApps@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x1804A0D08 (-_InitializeVirtualDesktopComponents@MultitaskingData@@AEAAJPEAUHMONITOR__@@PEAUIVirtualDesktopM.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ @ 0x1804A6A90 (-InternalRelease@-$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VVirtualDesktopItemFactory@@V1@AEAPEAUHMONITOR__@@AEAPEAUIVirtualDesktopManagerInternal@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopItemFactory@@AEAPEAUHMONITOR__@@AEAPEAUIVirtualDesktopManagerInternal@@@Z @ 0x1804A89C4 (--$MakeAndInitialize@VVirtualDesktopItemFactory@@V1@AEAPEAUHMONITOR__@@AEAPEAUIVirtualDesktopMan.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopItemFactory_CreateInstance(
        __int64 a1,
        struct IVirtualDesktopManagerInternal *a2,
        const struct _GUID *a3,
        void **a4)
{
  int v5; // eax
  int v6; // ebx
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  _DWORD *v9; // rcx
  VirtualDesktopItemFactory *v10; // rcx
  VirtualDesktopItemFactory *v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF
  struct IVirtualDesktopManagerInternal *v15; // [rsp+38h] [rbp+10h] BYREF
  VirtualDesktopItemFactory *v16; // [rsp+40h] [rbp+18h] BYREF

  v15 = a2;
  v14 = a1;
  *a4 = 0LL;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<SwitchItemFactory>::InternalRelease((volatile int **)&v16);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopItemFactory,VirtualDesktopItemFactory,HMONITOR__ * &,IVirtualDesktopManagerInternal * &>(
         &v16,
         &v14,
         (__int64 *)&v15);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = (unsigned int)v5;
    v8 = 41LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopitemfactory.cpp",
      (const char *)v7);
    goto LABEL_11;
  }
  *a4 = 0LL;
  if ( InlineIsEqualGUID(&GUID_6376f62e_2aef_470d_9975_4bf85317f40a, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v11 = v16;
    *a4 = v16;
    (*(void (__fastcall **)(VirtualDesktopItemFactory *))(*(_QWORD *)v11 + 8LL))(v11);
    v6 = 0;
  }
  else if ( InlineIsEqualGUID(v9, v9) )
  {
    v10 = v16;
    *a4 = v16;
    v6 = 0;
    (*(void (__fastcall **)(VirtualDesktopItemFactory *))(*(_QWORD *)v10 + 8LL))(v10);
  }
  else
  {
    v6 = -2147467262;
  }
  if ( v6 < 0 )
  {
    v7 = (unsigned int)v6;
    v8 = 42LL;
    goto LABEL_10;
  }
LABEL_11:
  Microsoft::WRL::ComPtr<SwitchItemFactory>::InternalRelease((volatile int **)&v16);
  return (unsigned int)v6;
}
