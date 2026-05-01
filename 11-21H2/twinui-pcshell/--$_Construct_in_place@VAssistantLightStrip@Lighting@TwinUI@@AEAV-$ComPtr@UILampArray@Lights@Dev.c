/*
 * XREFs of ??$_Construct_in_place@VAssistantLightStrip@Lighting@TwinUI@@AEAV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@AEAV?$vector@HV?$allocator@H@std@@@std@@AEAV78@@std@@YAXAEAVAssistantLightStrip@Lighting@TwinUI@@AEAV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@AEAV?$vector@HV?$allocator@H@std@@@0@2@Z @ 0x18055F5E0
 * Callers:
 *     ??$make_shared@VAssistantLightStrip@Lighting@TwinUI@@AEAV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@AEAV?$vector@HV?$allocator@H@std@@@std@@AEAV78@@std@@YA?AV?$shared_ptr@VAssistantLightStrip@Lighting@TwinUI@@@0@AEAV?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@AEAV?$vector@HV?$allocator@H@std@@@0@1@Z @ 0x180560044 (--$make_shared@VAssistantLightStrip@Lighting@TwinUI@@AEAV-$ComPtr@UILampArray@Lights@Devices@Win.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180560108 (--0-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ??0AssistantLightStrip@Lighting@TwinUI@@QEAA@V?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@V?$vector@HV?$allocator@H@std@@@std@@1@Z @ 0x180561124 (--0AssistantLightStrip@Lighting@TwinUI@@QEAA@V-$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Construct_in_place<TwinUI::Lighting::AssistantLightStrip,Microsoft::WRL::ComPtr<Windows::Devices::Lights::ILampArray> &,std::vector<int> &,std::vector<int> &>(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 v9; // rcx
  _BYTE v11[24]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v12[56]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v13; // [rsp+80h] [rbp+8h] BYREF
  _BYTE *v14; // [rsp+88h] [rbp+10h]

  v14 = v11;
  v7 = std::vector<Windows::UI::Color>::vector<Windows::UI::Color>(v11, a4);
  v8 = std::vector<Windows::UI::Color>::vector<Windows::UI::Color>(v12, a3);
  v9 = *a2;
  v13 = v9;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  return TwinUI::Lighting::AssistantLightStrip::AssistantLightStrip(a1, &v13, v8, v7);
}
