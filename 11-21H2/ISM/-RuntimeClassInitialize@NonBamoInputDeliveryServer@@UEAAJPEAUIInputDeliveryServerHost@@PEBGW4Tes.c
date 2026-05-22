/*
 * XREFs of ?RuntimeClassInitialize@NonBamoInputDeliveryServer@@UEAAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1@@Z @ 0x180031B10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     CreateInputServiceProxy @ 0x1800309C0 (CreateInputServiceProxy.c)
 *     ?Initialize@?$KernelInputConnection@UtagQMSGINPUTREPORT@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBUtagQMSGINPUTREPORT@@@Z@std@@@Z @ 0x180031C18 (-Initialize@-$KernelInputConnection@UtagQMSGINPUTREPORT@@@@QEAAXAEBV-$ComPtr@UIMessageSession@@@.c)
 *     ?InitConversation@NonBamoInputDeliveryServer@@AEAAXPEBG@Z @ 0x180032F40 (-InitConversation@NonBamoInputDeliveryServer@@AEAAXPEBG@Z.c)
 *     ?InitPort@NonBamoInputDeliveryServer@@AEAAXXZ @ 0x180034670 (-InitPort@NonBamoInputDeliveryServer@@AEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall NonBamoInputDeliveryServer::RuntimeClassInitialize(
        __int64 a1,
        __int64 a2,
        const unsigned __int16 *a3,
        int a4)
{
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // r8
  int InputServiceProxy; // eax
  int v13[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v14; // [rsp+28h] [rbp-40h]
  int *v15; // [rsp+58h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v8 = *(_QWORD *)(a1 + 32);
  if ( v8 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v8 = *(_QWORD *)(a1 + 32);
    }
    *(_QWORD *)(a1 + 32) = a2;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  *(_DWORD *)(a1 + 40) = a4;
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)(a1 + 48));
  v9 = CoreUICreate(a1 + 48);
  if ( v9 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x35,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
      (const char *)(unsigned int)v9,
      v13[0]);
  NonBamoInputDeliveryServer::InitPort((NonBamoInputDeliveryServer *)a1);
  NonBamoInputDeliveryServer::InitConversation((NonBamoInputDeliveryServer *)a1, a3);
  if ( *(_DWORD *)(a1 + 40) != 1 )
  {
    *(_QWORD *)v13 = &off_1801E45C0;
    v14 = a1;
    v15 = v13;
    KernelInputConnection<tagQMSGINPUTREPORT>::Initialize(a1 + 72, a1 + 48, v10, v13);
  }
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)(a1 + 280));
  InputServiceProxy = CreateInputServiceProxy(a1 + 8, (__int64 *)(a1 + 280));
  if ( InputServiceProxy < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x3E,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\nonbamoinputdeliveryserver.cpp",
      (const char *)(unsigned int)InputServiceProxy,
      v13[0]);
  return 0LL;
}
