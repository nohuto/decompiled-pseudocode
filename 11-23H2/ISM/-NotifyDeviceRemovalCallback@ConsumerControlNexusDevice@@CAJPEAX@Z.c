/*
 * XREFs of ?NotifyDeviceRemovalCallback@ConsumerControlNexusDevice@@CAJPEAX@Z @ 0x1800EDBA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x180017AC0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ConsumerControlNexusDevice::NotifyDeviceRemovalCallback(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  void *v4; // rcx
  int v6; // eax
  unsigned int v7; // edi
  void *v8; // rcx
  void *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a1 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v2 = *a1;
  if ( !v2 )
  {
    v3 = 388LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)0x80070057LL);
    v4 = (void *)a1[1];
    if ( v4 )
    {
      operator delete(v4);
      a1[1] = 0LL;
    }
    Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease(a1);
    operator delete(a1);
    return 2147942487LL;
  }
  if ( !a1[1] )
  {
    v3 = 389LL;
    goto LABEL_7;
  }
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 56LL))(v2);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v9 = (void *)a1[1];
    if ( v9 )
    {
      operator delete(v9);
      a1[1] = 0LL;
    }
    Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease(a1);
    operator delete(a1);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x187,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)(unsigned int)v6);
    v8 = (void *)a1[1];
    if ( v8 )
    {
      operator delete(v8);
      a1[1] = 0LL;
    }
    Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease(a1);
    operator delete(a1);
    return v7;
  }
}
