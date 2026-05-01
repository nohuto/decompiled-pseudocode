/*
 * XREFs of ?AddVirtualDesktop@CVirtualDesktopCollection@@UEAAJPEAUHMONITOR__@@AEBU_GUID@@PEAPEAUIVirtualDesktop@@@Z @ 0x180541150
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AddDesktop@CVirtualDesktopCollection@@AEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@@Z @ 0x18010FF58 (-_AddDesktop@CVirtualDesktopCollection@@AEAAJPEAUHMONITOR__@@PEAUIVirtualDesktop@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopCollection::AddVirtualDesktop(
        CVirtualDesktopCollection *this,
        HMONITOR a2,
        const struct _GUID *a3,
        struct IVirtualDesktop **a4)
{
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, const struct _GUID *, GUID *, struct IVirtualDesktop **); // rbx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  struct IVirtualDesktop *v13; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IVirtualDesktop *v16; // [rsp+50h] [rbp+8h] BYREF

  if ( a4 )
    *a4 = 0LL;
  v16 = 0LL;
  v8 = *((_QWORD *)this + 3);
  v9 = *(__int64 (__fastcall **)(__int64, const struct _GUID *, GUID *, struct IVirtualDesktop **))(*(_QWORD *)v8 + 24LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v16);
  v10 = v9(v8, a3, &GUID_536d3495_b208_4cc9_ae26_de8111275bf8, &v16);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = 77LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_11;
  }
  v10 = CVirtualDesktopCollection::_AddDesktop(this, a2, v16);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = 78LL;
    goto LABEL_7;
  }
  if ( a4 )
  {
    v13 = v16;
    v16 = 0LL;
    *a4 = v13;
  }
  v11 = 0;
LABEL_11:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v16);
  return v11;
}
