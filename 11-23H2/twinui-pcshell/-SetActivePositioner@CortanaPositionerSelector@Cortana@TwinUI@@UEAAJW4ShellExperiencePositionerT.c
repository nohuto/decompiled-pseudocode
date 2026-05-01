/*
 * XREFs of ?SetActivePositioner@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJW4ShellExperiencePositionerType@Experience@Shell@Internal@Windows@@PEAUIShellExperienceView@5678@@Z @ 0x18046EC00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TwinUI::Cortana::CortanaPositionerSelector::SetActivePositioner(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  unsigned int v6; // r14d
  __int64 (__fastcall *v7)(__int64, _QWORD, __int64 *); // rbx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 (__fastcall *v11)(__int64, _QWORD, __int64 *); // rbx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, __int64, _QWORD, __int64 *); // rdi
  __int64 v16; // rax
  int v17; // eax
  __int64 v19[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  __int64 v21; // [rsp+80h] [rbp+40h] BYREF
  char v22; // [rsp+88h] [rbp+48h] BYREF
  __int64 v23; // [rsp+98h] [rbp+58h] BYREF

  v6 = *(_DWORD *)(a1 + 24);
  if ( a2 != v6 )
  {
    v21 = 0LL;
    v7 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a1 + 16LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
    v8 = v7(a1, a2, &v21);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 84LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanapositioner.cpp",
        (const char *)(unsigned int)v8);
LABEL_21:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
      return v9;
    }
    v22 = 0;
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, char *))(*(_QWORD *)v21 + 56LL))(v21, a3, v6, &v22);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 87LL;
      goto LABEL_6;
    }
    if ( v22 )
    {
      v19[0] = 0LL;
      if ( v6 )
      {
        v23 = 0LL;
        v11 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a1 + 16LL);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
        v12 = v11(a1, v6, &v23);
        v9 = v12;
        if ( v12 < 0 )
        {
          v13 = 94LL;
LABEL_13:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v13,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanapositioner.cpp",
            (const char *)(unsigned int)v12);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
LABEL_20:
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v19);
          goto LABEL_21;
        }
        v14 = v23;
        v15 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(*(_QWORD *)v23 + 64LL);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v19);
        v12 = v15(v14, a3, a2, v19);
        v9 = v12;
        if ( v12 < 0 )
        {
          v13 = 95LL;
          goto LABEL_13;
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
      }
      v16 = **(_QWORD **)(a1 + 40);
      if ( a2 == 1 )
        (*(void (**)(void))(v16 + 144))();
      else
        (*(void (**)(void))(v16 + 152))();
      *(_DWORD *)(a1 + 24) = a2;
      v17 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v21 + 72LL))(v21, a3, v6, v19[0]);
      v9 = v17;
      if ( v17 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x6E,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanapositioner.cpp",
          (const char *)(unsigned int)v17);
        goto LABEL_20;
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v19);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
  }
  return 0LL;
}
