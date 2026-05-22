/*
 * XREFs of ?PushStateToProxyOnOutboundMessagesResumed@BamoActivationWatcherPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800B7620
 * Callers:
 *     <none>
 * Callees:
 *     ?GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ @ 0x1800080E0 (-GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PushStateToProxy@BamoActivationWatcherPrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800B75D4 (-PushStateToProxy@BamoActivationWatcherPrincipalImpl@BamoImpl@@QEAAXPEAVBamoStubImpl@2Microsoft@.c)
 */

void __fastcall BamoImpl::BamoActivationWatcherPrincipalImpl::PushStateToProxyOnOutboundMessagesResumed(
        BamoImpl::BamoActivationWatcherPrincipalImpl *this,
        struct IMessageCallSendHost *a2,
        struct Microsoft::BamoImpl::BamoStubImpl *a3)
{
  __int64 v3; // rbx
  int v7; // eax
  int v8; // eax
  int v9; // [rsp+20h] [rbp-48h]
  __int64 v10; // [rsp+40h] [rbp-28h] BYREF
  __int64 v11; // [rsp+48h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v3 = *((_QWORD *)a3 + 4);
  Microsoft::BamoImpl::BamoPrincipalImpl::GetItemId(this);
  v10 = *(unsigned int *)(v3 + 36);
  v11 = *(unsigned int *)(v3 + 40);
  LOWORD(v9) = 86;
  v7 = CoreUICallSend(a2, &v10, 2LL, 0LL);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2C5E,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v7,
      v9);
  BamoImpl::BamoActivationWatcherPrincipalImpl::PushStateToProxy(this, a3);
  Microsoft::BamoImpl::BamoPrincipalImpl::GetItemId(this);
  v10 = *(unsigned int *)(v3 + 36);
  v11 = *(unsigned int *)(v3 + 40);
  LOWORD(v9) = 87;
  v8 = CoreUICallSend(a2, &v10, 2LL, 0LL);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2C66,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v8,
      v9);
}
