/*
 * XREFs of ?SendAckProxyReference@BamoPeerImpl@MPCManagerBamo_AutoBamos@BamoImpl@@UEAAXI_N@Z @ 0x18009AAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall BamoImpl::MPCManagerBamo_AutoBamos::BamoPeerImpl::SendAckProxyReference(
        BamoImpl::MPCManagerBamo_AutoBamos::BamoPeerImpl *this)
{
  __int64 v1; // r9
  __int64 v2; // r10
  int v3; // eax
  int v4; // [rsp+20h] [rbp-38h]
  _QWORD v5[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v1 = *(_QWORD *)(*((_QWORD *)this + 3) + 32LL);
  v5[0] = *((unsigned int *)this + 9);
  v2 = *(_QWORD *)(v1 + 72);
  v5[1] = *((unsigned int *)this + 10);
  LOWORD(v4) = 9;
  v3 = CoreUICallSend(v2, v5, 2LL, 1LL);
  if ( v3 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xD67,
      (int)"onecoreuap\\Windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManagerB"
           "amo.Common.bamo.h",
      (const char *)(unsigned int)v3,
      v4);
}
