/*
 * XREFs of ?GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ @ 0x18016C6A0
 * Callers:
 *     ?GetItemId@BamoCompObjectDiagnosticsPrincipal@@QEBAIXZ @ 0x18016C664 (-GetItemId@BamoCompObjectDiagnosticsPrincipal@@QEBAIXZ.c)
 *     ?SendDisposeProxy@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXPEAVBamoStubImpl@23@_N@Z @ 0x18016E1E8 (-SendDisposeProxy@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXPEAVBamoStubImpl@23@_N@Z.c)
 *     ?SendMaterializeProxy@BamoCompObjectDiagnosticsPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x18019E350 (-SendMaterializeProxy@BamoCompObjectDiagnosticsPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSend.c)
 *     ?SendMaterializeProxy@BamoCompObjectDiagnosticsRootPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x18019F740 (-SendMaterializeProxy@BamoCompObjectDiagnosticsRootPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCall.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::GetItemId(Microsoft::BamoImpl::BamoPrincipalImpl *this)
{
  unsigned int *v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r11
  int v4; // eax
  int v6; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (unsigned int *)((char *)this + 24);
  if ( !*((_DWORD *)this + 6) && *((int *)this + 2) > 0 )
  {
    v2 = *(_QWORD *)(*((_QWORD *)this + 2) + 32LL);
    v3 = *(_QWORD *)(v2 + 64);
    if ( v3 )
    {
      v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, Microsoft::BamoImpl::BamoPrincipalImpl *, unsigned int *))(*(_QWORD *)v3 + 24LL))(
             v3,
             *(unsigned int *)(v2 + 28),
             this,
             v1);
      if ( v4 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          1059LL,
          (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v4,
          v6);
    }
  }
  return *v1;
}
