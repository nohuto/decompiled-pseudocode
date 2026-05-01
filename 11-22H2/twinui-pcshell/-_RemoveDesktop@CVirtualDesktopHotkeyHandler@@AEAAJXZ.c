/*
 * XREFs of ?_RemoveDesktop@CVirtualDesktopHotkeyHandler@@AEAAJXZ @ 0x1806099A8
 * Callers:
 *     ?HandleHotkey@CVirtualDesktopHotkeyHandler@@UEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x180608EE0 (-HandleHotkey@CVirtualDesktopHotkeyHandler@@UEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 * Callees:
 *     ??1SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1800E1A74 (--1SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_VDBugFixes@@@details@wil@@QEAA_NXZ @ 0x180118494 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_W365Switch_Engineering_Improvemen.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18038BBC0 (--1-$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??B?$ComPtrRef@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAUIVirtualDesktop@@XZ @ 0x1803AC8A8 (--B-$ComPtrRef@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAUIV.c)
 *     ?IsRemoteDesktop@CVirtualDesktopHotkeyHandler@@AEAAJPEAUIVirtualDesktop@@PEAH@Z @ 0x1806092E8 (-IsRemoteDesktop@CVirtualDesktopHotkeyHandler@@AEAAJPEAUIVirtualDesktop@@PEAH@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVirtualDesktopHotkeyHandler::_RemoveDesktop(CVirtualDesktopHotkeyHandler *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, __int64 *); // rbx
  __int64 *v4; // rax
  int v5; // eax
  unsigned int v6; // ebx
  unsigned int v7; // esi
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64, __int64, __int64 *); // rbx
  __int64 *v10; // rax
  int v11; // edi
  CVirtualDesktopHotkeyHandler *v12; // rcx
  int v13; // eax
  int IsRemoteDesktop; // eax
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 (__fastcall *v17)(__int64, __int64, __int64, __int64 *); // rbx
  __int64 *v18; // rax
  int v19; // eax
  __int64 v20; // rdi
  __int64 (__fastcall *v21)(__int64, __int64, __int64, __int64 *); // rbx
  __int64 *v22; // rax
  _BYTE v24[16]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  struct IVirtualDesktop **v26; // [rsp+70h] [rbp+30h] BYREF
  struct IVirtualDesktop *v27; // [rsp+78h] [rbp+38h] BYREF
  __int64 v28; // [rsp+80h] [rbp+40h] BYREF
  struct IVirtualDesktop **v29; // [rsp+88h] [rbp+48h] BYREF

  (*(void (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 9) + 32LL))(*((_QWORD *)this + 9), v24);
  v28 = 0LL;
  v2 = *((_QWORD *)this + 3);
  v3 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 360LL);
  v26 = (struct IVirtualDesktop **)&v28;
  v4 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IVirtualDesktop>>::operator IVirtualDesktop * *((__int64 **)&v26);
  v5 = v3(v2, v4);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v7 = 0;
    v27 = 0LL;
    v8 = *((_QWORD *)this + 3);
    v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v8 + 376LL);
    v26 = &v27;
    v10 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IVirtualDesktop>>::operator IVirtualDesktop * *((__int64 **)&v26);
    v11 = v9(v8, v28, 6LL, v10);
    if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_VDBugFixes>::__private_IsEnabled((__int64)&`wil::Feature<__WilFeatureTraits_Feature_W365Switch_Engineering_Improvements_VDBugFixes>::GetImpl'::`2'::impl) )
    {
      if ( v11 != -2147316575 )
        goto LABEL_14;
      v7 = 1;
      v20 = *((_QWORD *)this + 3);
      v21 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v20 + 376LL);
      v26 = &v27;
      v22 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IVirtualDesktop>>::operator IVirtualDesktop * *((__int64 **)&v26);
      v19 = v21(v20, v28, 5LL, v22);
LABEL_13:
      v11 = v19;
LABEL_14:
      if ( v11 >= 0 )
      {
        IsRemoteDesktop = (*(__int64 (__fastcall **)(_QWORD, __int64, struct IVirtualDesktop *, _QWORD))(**((_QWORD **)this + 4) + 32LL))(
                            *((_QWORD *)this + 4),
                            v28,
                            v27,
                            v7);
        v6 = IsRemoteDesktop;
        if ( IsRemoteDesktop < 0 )
        {
          v15 = 228LL;
          goto LABEL_18;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xE3,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeyhandler.cpp",
          (const char *)(unsigned int)v11);
        v6 = v11;
      }
LABEL_19:
      Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>((__int64 *)&v27);
      goto LABEL_20;
    }
    v13 = 0;
    LODWORD(v26) = 0;
    if ( v11 < 0 )
    {
      if ( v11 == -2147316575 )
      {
LABEL_10:
        v7 = 1;
        v16 = *((_QWORD *)this + 3);
        v17 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v16 + 376LL);
        v29 = &v27;
        v18 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IVirtualDesktop>>::operator IVirtualDesktop * *((__int64 **)&v29);
        v19 = v17(v16, v28, 5LL, v18);
        goto LABEL_13;
      }
    }
    else
    {
      IsRemoteDesktop = CVirtualDesktopHotkeyHandler::IsRemoteDesktop(
                          v12,
                          (__int64 (__fastcall ***)(struct IVirtualDesktop *, GUID *, CVirtualDesktopHotkeyHandler **))v27,
                          (int *)&v26);
      v6 = IsRemoteDesktop;
      if ( IsRemoteDesktop < 0 )
      {
        v15 = 208LL;
LABEL_18:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeyhandler.cpp",
          (const char *)(unsigned int)IsRemoteDesktop);
        goto LABEL_19;
      }
      v13 = (int)v26;
    }
    if ( !v13 )
      goto LABEL_14;
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC6,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeyhandler.cpp",
    (const char *)(unsigned int)v5);
LABEL_20:
  Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(&v28);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::~SyncLockExclusive((Microsoft::WRL::Wrappers::Details::SyncLockExclusive *)v24);
  return v6;
}
