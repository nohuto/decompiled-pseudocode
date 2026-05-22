/*
 * XREFs of ?NotifyInputReport@ConsumerControlNexusDevice@@AEAAJPEAUInputInfo@@@Z @ 0x1800D40C4
 * Callers:
 *     ?ProcessInput@ConsumerControlNexusDevice@@QEAAJXZ @ 0x1800D4298 (-ProcessInput@ConsumerControlNexusDevice@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004B738 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@PEBUInputInfo@@@Z @ 0x1800D34A4 (--0-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@PEBUInputInfo@@@Z.c)
 *     ??4?$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800D3638 (--4-$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

__int64 __fastcall ConsumerControlNexusDevice::NotifyInputReport(
        ConsumerControlNexusDevice *this,
        struct InputInfo *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 *v6; // rax
  __int64 v7; // r8
  const char *v8; // r9
  __int64 *v9; // rbx
  int v10; // eax
  int v12; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !a2 )
  {
    v4 = -2147024809;
    v5 = 401LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)v4);
    return v4;
  }
  v6 = (__int64 *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v6;
  if ( !v6 )
  {
    v4 = -2147024882;
    v5 = 404LL;
    goto LABEL_8;
  }
  *v6 = 0LL;
  VariableSizedPayloadStorage<InputInfo>::VariableSizedPayloadStorage<InputInfo>((__int64)(v6 + 1), (int *)a2, v7, v8);
  Microsoft::WRL::ComPtr<IRawInputClient>::operator=(v9, (__int64 *)this + 14);
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(void *), __int64 *, __int64))(**((_QWORD **)this + 15)
                                                                                              + 152LL))(
          *((_QWORD *)this + 15),
          ConsumerControlNexusDevice::NotifyInputReportCallback,
          v9,
          4LL);
  if ( v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x19B,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
      (const char *)(unsigned int)v10,
      v12);
  return 0LL;
}
