/*
 * XREFs of ?AddRemoteDesktop@CVirtualDesktopCollection@@UEAAJPEAUHSTRING__@@PEAPEAUIVirtualDesktop@@@Z @ 0x1805FBBC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddDesktopHelper@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@@Z @ 0x18013EBD0 (-AddDesktopHelper@CVirtualDesktopCollection@@AEAAJPEAUIVirtualDesktop@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18038BBC0 (--1-$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVirtualDesktopCollection::AddRemoteDesktop(
        CVirtualDesktopCollection *this,
        HSTRING a2,
        struct IVirtualDesktop **a3)
{
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, GUID *, struct IVirtualDesktop **); // rbx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 (__fastcall **v10)(struct IVirtualDesktop *, GUID *, __int64 *); // rax
  int v11; // eax
  __int64 v12; // rdx
  struct IVirtualDesktop *v13; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  struct IVirtualDesktop *v16; // [rsp+50h] [rbp+30h] BYREF
  __int64 v17; // [rsp+60h] [rbp+40h] BYREF

  if ( a3 )
    *a3 = 0LL;
  v16 = 0LL;
  v6 = *((_QWORD *)this + 3);
  v7 = *(__int64 (__fastcall **)(__int64, GUID *, struct IVirtualDesktop **))(*(_QWORD *)v6 + 32LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v16);
  v8 = v7(v6, &GUID_3f07f4be_b107_441a_af0f_39d82529072c, &v16);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v17 = 0LL;
    v10 = *(__int64 (__fastcall ***)(struct IVirtualDesktop *, GUID *, __int64 *))v16;
    v17 = 0LL;
    v11 = (*v10)(v16, &GUID_c9be252c_e386_425e_b33c_ca422112f51f, &v17);
    v9 = v11;
    if ( v11 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 56LL))(v17, 1LL);
      v9 = v11;
      if ( v11 >= 0 )
      {
        v11 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v17 + 24LL))(v17, a2);
        v9 = v11;
        if ( v11 >= 0 )
        {
          v11 = CVirtualDesktopCollection::AddDesktopHelper(
                  this,
                  (__int64 (__fastcall ***)(struct IVirtualDesktop *, GUID *, CVirtualDesktopCollection **))v16);
          v9 = v11;
          if ( v11 >= 0 )
          {
            if ( a3 )
            {
              v13 = v16;
              v16 = 0LL;
              *a3 = v13;
            }
            v9 = 0;
            goto LABEL_17;
          }
          v12 = 367LL;
        }
        else
        {
          v12 = 364LL;
        }
      }
      else
      {
        v12 = 363LL;
      }
    }
    else
    {
      v12 = 361LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
      (const char *)(unsigned int)v11);
LABEL_17:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v17);
    goto LABEL_18;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x166,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
    (const char *)(unsigned int)v8);
LABEL_18:
  Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>((__int64 *)&v16);
  return v9;
}
