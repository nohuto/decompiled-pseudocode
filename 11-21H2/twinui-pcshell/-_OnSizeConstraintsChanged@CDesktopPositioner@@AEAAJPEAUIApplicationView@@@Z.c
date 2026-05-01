/*
 * XREFs of ?_OnSizeConstraintsChanged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180158D18
 * Callers:
 *     ?OnApplicationViewChanged@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800998E0 (-OnApplicationViewChanged@CDesktopPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHAN.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_IsViewManaged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x180098E54 (-_IsViewManaged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ResizeView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x1804FC230 (-ResizeView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDesktopPositioner::_OnSizeConstraintsChanged(CDesktopPositioner *this, struct IApplicationView *a2)
{
  int IsViewManaged; // eax
  unsigned int v5; // ebx
  __int64 (__fastcall *v6)(struct IApplicationView *, __int64); // rbx
  __int64 AddressOf; // rax
  int v8; // eax
  __int64 (__fastcall *v9)(struct IApplicationView *, GUID *, __int64 *); // rbx
  int v10; // eax
  LONG v11; // edx
  LONG v12; // eax
  LONG v13; // r8d
  __int64 v15; // rdx
  __int64 v16; // rdx
  bool v17; // [rsp+30h] [rbp-50h] BYREF
  LONG v18; // [rsp+38h] [rbp-48h] BYREF
  LONG v19; // [rsp+3Ch] [rbp-44h]
  __int64 v20; // [rsp+40h] [rbp-40h] BYREF
  __int64 v21; // [rsp+48h] [rbp-38h] BYREF
  struct tagSIZE v22; // [rsp+50h] [rbp-30h]
  char v23[8]; // [rsp+58h] [rbp-28h] BYREF
  int v24; // [rsp+60h] [rbp-20h] BYREF
  int v25; // [rsp+64h] [rbp-1Ch]
  int v26; // [rsp+68h] [rbp-18h]
  int v27; // [rsp+6Ch] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  IsViewManaged = CDesktopPositioner::_IsViewManaged(this, a2, &v17);
  v5 = IsViewManaged;
  if ( IsViewManaged < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7F8,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)IsViewManaged);
    return v5;
  }
  if ( v17 )
  {
    v21 = 0LL;
    v6 = *(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 80LL);
    AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v21);
    v8 = v6(a2, AddressOf);
    v5 = v8;
    if ( v8 < 0 )
    {
      v15 = 2044LL;
    }
    else
    {
      v8 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64, LONG *, char *))(*(_QWORD *)a2 + 280LL))(
             a2,
             v21,
             &v18,
             v23);
      v5 = v8;
      if ( v8 >= 0 )
      {
        v20 = 0LL;
        v9 = *(__int64 (__fastcall **)(struct IApplicationView *, GUID *, __int64 *))(*(_QWORD *)a2 + 104LL);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v20);
        v10 = v9(a2, &GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6, &v20);
        v5 = v10;
        if ( v10 < 0 )
        {
          v16 = 2051LL;
        }
        else
        {
          v10 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v20 + 24LL))(v20, &v24);
          v5 = v10;
          if ( v10 < 0 )
          {
            v16 = 2054LL;
          }
          else
          {
            v11 = v27 - v25;
            v12 = v26 - v24;
            if ( v18 > v26 - v24 )
              v12 = v18;
            v22.cx = v12;
            v13 = v27 - v25;
            if ( v19 > v11 )
              v13 = v19;
            v22.cy = v13;
            if ( v12 == v26 - v24 && v13 == v11
              || (v10 = CDesktopPositioner::ResizeView((CDesktopPositioner *)((char *)this + 104), a2, v22, v22),
                  v5 = v10,
                  v10 >= 0) )
            {
              v5 = 0;
LABEL_14:
              Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v20);
LABEL_15:
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
              return v5;
            }
            v16 = 2062LL;
          }
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v16,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v10);
        goto LABEL_14;
      }
      v15 = 2048LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_15;
  }
  return 0LL;
}
