/*
 * XREFs of ?NotifyDeviceAttach@ConsumerControlNexusDevice@@AEAAJPEAUIRawInputProvider@@@Z @ 0x1800ED7D8
 * Callers:
 *     ?TryCreateAndInitialize@ConsumerControlNexusDevice@@SAJPEAVPnpDevice@@PEAUIRawInputClient@@PEAUIMessageSession@@PEAUIRawInputProvider@@PEAPEAV1@@Z @ 0x1800EE2C0 (-TryCreateAndInitialize@ConsumerControlNexusDevice@@SAJPEAVPnpDevice@@PEAUIRawInputClient@@PEAUI.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x180017AC0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180057604 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAUIRawInputProvider@@@Z @ 0x1800EA0EC (--4-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@QEAAAEAV012@PEAUIRawInputProvider@@@Z.c)
 *     ??4?$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800ED254 (--4-$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 __fastcall ConsumerControlNexusDevice::NotifyDeviceAttach(
        ConsumerControlNexusDevice *this,
        struct IRawInputProvider *a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  __int64 v6; // rdx
  __int64 *v7; // rax
  __int64 *v8; // rbx
  int v9; // eax
  unsigned int v10; // esi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = operator new(0x60CuLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    memset_0(v4, 0, 0x60CuLL);
    v5[2] = 1548;
  }
  else
  {
    v5 = 0LL;
  }
  *((_QWORD *)this + 16) = v5;
  if ( !v5 )
  {
    v6 = 311LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
  **((_DWORD **)this + 16) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 32LL))(*((_QWORD *)this + 14));
  *(_DWORD *)(*((_QWORD *)this + 16) + 4LL) = 4;
  *(_DWORD *)(*((_QWORD *)this + 16) + 8LL) = 1548;
  v7 = (__int64 *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( !v7 )
  {
    v6 = 317LL;
    goto LABEL_11;
  }
  v7[2] = 0LL;
  *v7 = 0LL;
  v7[1] = 0LL;
  Microsoft::WRL::ComPtr<IRawInputClient>::operator=(v7, (__int64 *)this + 14);
  Microsoft::WRL::ComPtr<IRawInputProvider>::operator=(v8 + 1, (__int64)a2);
  v8[2] = *((_QWORD *)this + 16);
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(void *), __int64 *, __int64))(**((_QWORD **)this + 15)
                                                                                             + 152LL))(
         *((_QWORD *)this + 15),
         ConsumerControlNexusDevice::NotifyDeviceAttachCallback,
         v8,
         4LL);
  v10 = v9;
  if ( v9 >= 0 )
  {
    *((_BYTE *)this + 136) = 1;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x146,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)(unsigned int)v9);
    Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease(v8 + 1);
    Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease(v8);
    operator delete(v8);
    return v10;
  }
}
