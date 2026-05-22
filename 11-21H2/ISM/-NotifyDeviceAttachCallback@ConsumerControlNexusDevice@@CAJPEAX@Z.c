/*
 * XREFs of ?NotifyDeviceAttachCallback@ConsumerControlNexusDevice@@CAJPEAX@Z @ 0x1800D3D70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
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
    if ( !v3 )
    {
      v2 = -2147024809;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x155,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
        (const char *)0x80070057LL);
      v4 = a1 + 1;
LABEL_14:
      Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease(v4);
      Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease(a1);
      operator delete(a1);
      return v2;
    }
    if ( a1[1] )
    {
      if ( a1[2] )
      {
        v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 40LL))(v3);
        v2 = v7;
        if ( v7 >= 0 )
        {
          v2 = 0;
          goto LABEL_13;
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
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)v5);
LABEL_13:
    v4 = a1 + 1;
    goto LABEL_14;
  }
  v2 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x154,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
    (const char *)0x80070057LL);
  return v2;
}
