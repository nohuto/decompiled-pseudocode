/*
 * XREFs of ?RuntimeClassInitialize@ChromeManager@@QEAAJPEAUIUnknown@@@Z @ 0x18010431C
 * Callers:
 *     ??$MakeAndInitialize@VChromeManager@@V1@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAVChromeManager@@AEAPEAUIUnknown@@@Z @ 0x1801034F8 (--$MakeAndInitialize@VChromeManager@@V1@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAVChrom.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?JointDivider_CreateInstance@@YAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x180104598 (-JointDivider_CreateInstance@@YAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?CoverWindow_CreateInstance@@YAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180104690 (-CoverWindow_CreateInstance@@YAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ChromeManager::RuntimeClassInitialize(ChromeManager *this, struct IUnknown *a2)
{
  void **v4; // rdi
  const struct _GUID *v5; // rdx
  int Instance; // eax
  unsigned int v7; // ebx
  __int64 (__fastcall ***v8)(void *, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v9)(void *, GUID *, __int64 *); // rbx
  int v10; // eax
  const struct _GUID *v11; // rdx
  __int64 v13; // rdx
  int v14; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v16; // [rsp+30h] [rbp+8h] BYREF
  HWND v17; // [rsp+40h] [rbp+18h] BYREF

  v4 = (void **)((char *)this + 40);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 5);
  Instance = CoverWindow_CreateInstance(a2, v5, v4);
  v7 = Instance;
  if ( Instance < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x68,
      (unsigned int)"pcshell\\twinui\\tabletmode\\lib\\chromemanager.cpp",
      (const char *)(unsigned int)Instance,
      v14);
    return v7;
  }
  v16 = 0LL;
  v8 = (__int64 (__fastcall ***)(void *, GUID *, __int64 *))*v4;
  v9 = **v8;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
  v10 = v9(v8, &GUID_2122d367_9c2a_4d30_ba5e_105a9e2c3965, &v16);
  v7 = v10;
  if ( v10 < 0 )
  {
    v13 = 107LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (unsigned int)"pcshell\\twinui\\tabletmode\\lib\\chromemanager.cpp",
      (const char *)(unsigned int)v10,
      v14);
    goto LABEL_6;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v16 + 24LL))(v16, &v17);
  v7 = v10;
  if ( v10 < 0 )
  {
    v13 = 110LL;
    goto LABEL_12;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 6);
  v10 = JointDivider_CreateInstance(v17, v11, (void **)this + 6);
  v7 = v10;
  if ( v10 < 0 )
  {
    v13 = 111LL;
    goto LABEL_12;
  }
  v7 = 0;
LABEL_6:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
  return v7;
}
