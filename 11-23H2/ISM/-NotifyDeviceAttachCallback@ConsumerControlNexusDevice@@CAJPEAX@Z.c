/*
 * XREFs of ?NotifyDeviceAttachCallback@ConsumerControlNexusDevice@@CAJPEAX@Z @ 0x1800ED990
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x180017AC0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ConsumerControlNexusDevice::NotifyDeviceAttachCallback(__int64 *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 *v4; // rcx
  __int64 v5; // r9
  __int64 v6; // rdx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1 )
  {
    v3 = *a1;
    if ( v3 )
    {
      if ( a1[1] )
      {
        if ( a1[2] )
        {
          v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 40LL))(v3);
          v2 = v7;
          if ( v7 >= 0 )
          {
            Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease(a1 + 1);
            v2 = 0;
            goto LABEL_14;
          }
          v5 = (unsigned int)v7;
          v6 = 347LL;
        }
        else
        {
          v2 = -2147024809;
          v5 = 2147942487LL;
          v6 = 343LL;
        }
      }
      else
      {
        v2 = -2147024809;
        v5 = 2147942487LL;
        v6 = 342LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
        (const char *)v5);
      v4 = a1 + 1;
    }
    else
    {
      v2 = -2147024809;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x155,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
        (const char *)0x80070057LL);
      v4 = a1 + 1;
    }
    Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease(v4);
LABEL_14:
    Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease(a1);
    operator delete(a1);
    return v2;
  }
  v2 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x154,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
    (const char *)0x80070057LL);
  return v2;
}
