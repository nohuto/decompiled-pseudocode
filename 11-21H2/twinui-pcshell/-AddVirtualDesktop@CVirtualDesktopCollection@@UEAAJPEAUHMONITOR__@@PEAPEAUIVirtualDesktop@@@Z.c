/*
 * XREFs of ?AddVirtualDesktop@CVirtualDesktopCollection@@UEAAJPEAUHMONITOR__@@PEAPEAUIVirtualDesktop@@@Z @ 0x18010FEA0
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopCollection@@QEAAJPEAUIVirtualDesktopFactory@@PEAUIVirtualDesktopPersistence@@_N@Z @ 0x1800A0E94 (-RuntimeClassInitialize@CVirtualDesktopCollection@@QEAAJPEAUIVirtualDesktopFactory@@PEAUIVirtual.c)
 *     ?OnMonitorAttached@CVirtualDesktopCollection@@UEAAJPEAUHMONITOR__@@@Z @ 0x1805418A0 (-OnMonitorAttached@CVirtualDesktopCollection@@UEAAJPEAUHMONITOR__@@@Z.c)
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
        struct IVirtualDesktop **a3)
{
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, GUID *, struct IVirtualDesktop **); // rbx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v11; // rdx
  struct IVirtualDesktop *v12; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IVirtualDesktop *v14; // [rsp+40h] [rbp+8h] BYREF

  if ( a3 )
    *a3 = 0LL;
  v14 = 0LL;
  v6 = *((_QWORD *)this + 3);
  v7 = *(__int64 (__fastcall **)(__int64, GUID *, struct IVirtualDesktop **))(*(_QWORD *)v6 + 32LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v14);
  v8 = v7(v6, &GUID_536d3495_b208_4cc9_ae26_de8111275bf8, &v14);
  v9 = v8;
  if ( v8 < 0 )
  {
    v11 = 67LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_8;
  }
  v8 = CVirtualDesktopCollection::_AddDesktop(this, a2, v14);
  v9 = v8;
  if ( v8 < 0 )
  {
    v11 = 68LL;
    goto LABEL_11;
  }
  if ( a3 )
  {
    v12 = v14;
    v14 = 0LL;
    *a3 = v12;
  }
  v9 = 0;
LABEL_8:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v14);
  return v9;
}
