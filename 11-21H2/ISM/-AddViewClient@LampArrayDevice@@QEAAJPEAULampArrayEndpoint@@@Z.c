/*
 * XREFs of ?AddViewClient@LampArrayDevice@@QEAAJPEAULampArrayEndpoint@@@Z @ 0x1800D1D1C
 * Callers:
 *     ?OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z @ 0x1800CF984 (-OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z.c)
 *     ?OnSipcClientConnection@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCServer@@KK@Z @ 0x1800CFBB0 (-OnSipcClientConnection@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCServer@@KK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004B738 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UISIPCEndpoint@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800D1C0C (--4-$ComPtr@UISIPCEndpoint@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??_GViewClientListEntry@LampArrayDevice@@QEAAPEAXI@Z @ 0x1800D1CD0 (--_GViewClientListEntry@LampArrayDevice@@QEAAPEAXI@Z.c)
 *     ?CreateClientView@HidLampArrayDevice@@QEAAJPEAUISIPCEndpoint@@PEAPEAULampArrayDeviceView@@@Z @ 0x1800D6ABC (-CreateClientView@HidLampArrayDevice@@QEAAJPEAUISIPCEndpoint@@PEAPEAULampArrayDeviceView@@@Z.c)
 */

__int64 __fastcall LampArrayDevice::AddViewClient(LampArrayDevice *this, struct LampArrayEndpoint *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  struct ISIPCEndpoint **v6; // r14
  _QWORD *v7; // r15
  int ClientView; // eax
  int v9; // edi
  LampArrayDevice **v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    *v4 = 0LL;
    v6 = (struct ISIPCEndpoint **)(v4 + 2);
    v4[1] = 0LL;
    v4[3] = 0LL;
    v4[4] = 0LL;
    v4[2] = 0LL;
    Microsoft::WRL::ComPtr<ISIPCEndpoint>::operator=(v4 + 2, a2);
    v7 = v5 + 4;
    *((_DWORD *)v5 + 6) = *((_DWORD *)a2 + 2);
    ClientView = HidLampArrayDevice::CreateClientView(
                   *((HidLampArrayDevice **)this + 3),
                   *v6,
                   (struct LampArrayDeviceView **)v5 + 4);
    v9 = ClientView;
    if ( ClientView < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8A,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
        (const char *)(unsigned int)ClientView);
LABEL_4:
      LampArrayDevice::ViewClientListEntry::`scalar deleting destructor'((LampArrayDevice::ViewClientListEntry *)v5);
      return (unsigned int)v9;
    }
    v9 = (*(__int64 (__fastcall **)(struct ISIPCEndpoint *, _QWORD))(*(_QWORD *)*v6 + 40LL))(*v6, *v7);
    if ( v9 < 0 )
    {
      (*(void (__fastcall **)(struct ISIPCEndpoint *, _QWORD))(*(_QWORD *)*v6 + 48LL))(*v6, *v7);
      goto LABEL_4;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
    v11 = (LampArrayDevice **)*((_QWORD *)this + 5);
    if ( *v11 != (LampArrayDevice *)((char *)this + 32) )
      __fastfail(3u);
    *v5 = (char *)this + 32;
    v5[1] = v11;
    *v11 = (LampArrayDevice *)v5;
    ++*((_QWORD *)this + 6);
    *((_QWORD *)this + 5) = v5;
    if ( this != (LampArrayDevice *)-56LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x86,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
