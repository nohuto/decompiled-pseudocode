/*
 * XREFs of ?Materialize_BamoDockDeviceProxy@BamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x1801346CC
 * Callers:
 *     ?Thunk_Materialize_BamoDockDeviceProxy_5@?$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@ISMBamos_AutoBamos@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180141450 (-Thunk_Materialize_BamoDockDeviceProxy_5@-$IBamoPeer_ISMBamos_AutoBamos_Receive@VBamoPeerImpl@IS.c)
 * Callees:
 *     ??4?$com_ptr_t@VBaseBamoPeerImpl@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVBaseBamoPeerImpl@BamoImpl@Microsoft@@@Z @ 0x180050C38 (--4-$com_ptr_t@VBaseBamoPeerImpl@BamoImpl@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV0.c)
 *     ??2@YAPEAX_K@Z @ 0x1800577AC (--2@YAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl::Materialize_BamoDockDeviceProxy(
        BamoImpl::ISMBamos_AutoBamos::BamoPeerImpl *this,
        unsigned int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  int v6; // eax
  int v8; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char *v10; // [rsp+50h] [rbp+18h]

  v10 = (char *)operator new(0x50uLL);
  *(_QWORD *)v10 = &BamoDockDeviceProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)v10 + 1) = &BamoDockDeviceProxy::`vftable'{for `IDockDeviceProxy'};
  *((_DWORD *)v10 + 6) = 0;
  *((_QWORD *)v10 + 4) = 0LL;
  *((_DWORD *)v10 + 10) = 0;
  *((_DWORD *)v10 + 11) = 0;
  *((_QWORD *)v10 + 2) = &BamoImpl::BamoDockDeviceProxyImpl::`vftable';
  *((_QWORD *)v10 + 6) = 0LL;
  v10[56] = 0;
  *(_OWORD *)(v10 + 60) = 0LL;
  v4 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v10 + 56LL))(v10);
  wil::com_ptr_t<Microsoft::BamoImpl::BaseBamoPeerImpl,wil::err_returncode_policy>::operator=(
    (__int64 *)(v4 + 16),
    (void (__fastcall ***)(_QWORD))this);
  *(_DWORD *)(v4 + 24) = a2;
  v5 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 32LL) + 64LL);
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v5 + 40LL))(
         v5,
         *((unsigned int *)this + 9),
         a2,
         v4);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4B40,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v6,
      v8);
  return 0LL;
}
