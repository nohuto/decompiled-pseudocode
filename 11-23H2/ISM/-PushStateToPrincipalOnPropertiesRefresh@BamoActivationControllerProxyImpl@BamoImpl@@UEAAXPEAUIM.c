/*
 * XREFs of ?PushStateToPrincipalOnPropertiesRefresh@BamoActivationControllerProxyImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@2Microsoft@@@Z @ 0x1800A5AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall BamoImpl::BamoActivationControllerProxyImpl::PushStateToPrincipalOnPropertiesRefresh(
        BamoImpl::BamoActivationControllerProxyImpl *this,
        struct IMessageCallSendHost *a2,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a3)
{
  int v6; // eax
  int v7; // eax
  int v8; // [rsp+20h] [rbp-38h]
  __int64 v9; // [rsp+40h] [rbp-18h] BYREF
  __int64 v10; // [rsp+48h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v9 = *((unsigned int *)a3 + 9);
  v10 = *((unsigned int *)a3 + 10);
  LOWORD(v8) = 89;
  v6 = CoreUICallSend(a2, &v9, 2LL, 0LL);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2539,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v6,
      v8);
  (*(void (__fastcall **)(BamoImpl::BamoActivationControllerProxyImpl *))(*(_QWORD *)this + 80LL))(this);
  v9 = *((unsigned int *)a3 + 9);
  v10 = *((unsigned int *)a3 + 10);
  LOWORD(v8) = 88;
  v7 = CoreUICallSend(a2, &v9, 2LL, 0LL);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2541,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v7,
      v8);
}
