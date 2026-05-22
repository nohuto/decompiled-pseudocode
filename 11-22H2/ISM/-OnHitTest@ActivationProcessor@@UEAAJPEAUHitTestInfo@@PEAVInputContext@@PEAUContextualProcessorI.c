/*
 * XREFs of ?OnHitTest@ActivationProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801D1B40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ @ 0x18005A98C (--1-$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VActivationContext@@V1@AEAW4SPATIAL_INPUT_ACTIVATION_POLICY@@_N@Details@WRL@Microsoft@@YAJPEAPEAVActivationContext@@AEAW4SPATIAL_INPUT_ACTIVATION_POLICY@@$$QEA_N@Z @ 0x1801D1940 (--$MakeAndInitialize@VActivationContext@@V1@AEAW4SPATIAL_INPUT_ACTIVATION_POLICY@@_N@Details@WRL.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ActivationProcessor::OnHitTest(
        ActivationProcessor *this,
        struct HitTestInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  __int64 *v4; // rsi
  int v5; // eax
  unsigned int v6; // ebx
  ActivationContext *v8; // rbx
  __int64 (__fastcall *v9)(ActivationContext *, GUID *, __int64 *); // rdi
  int v10; // eax
  unsigned int v11; // edi
  ActivationContext *v12[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v14; // [rsp+58h] [rbp+20h] BYREF

  *(_DWORD *)a4 = 1;
  v4 = (__int64 *)((char *)a4 + 8);
  if ( !*((_QWORD *)a4 + 1) && (*(_BYTE *)a2 & 0x1B) != 0 && (*((_DWORD *)a2 + 8) & 0x2004) == 0x2004 )
  {
    v12[0] = 0LL;
    v14 = 0;
    v5 = Microsoft::WRL::Details::MakeAndInitialize<ActivationContext,ActivationContext,enum SPATIAL_INPUT_ACTIVATION_POLICY &,bool>(
           v12,
           (_DWORD *)a3 + 24,
           &v14);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x36,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\activation\\system\\lib\\ac"
                 "tivationprocessor.cpp",
        (const char *)(unsigned int)v5);
      Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>(v12);
      return v6;
    }
    v8 = v12[0];
    v9 = **(__int64 (__fastcall ***)(ActivationContext *, GUID *, __int64 *))v12[0];
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v4);
    v10 = v9(v8, &GUID_00000000_0000_0000_c000_000000000046, v4);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x37,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\activation\\system\\lib\\ac"
                 "tivationprocessor.cpp",
        (const char *)(unsigned int)v10);
      (*(void (__fastcall **)(ActivationContext *))(*(_QWORD *)v8 + 16LL))(v8);
      return v11;
    }
    (*(void (__fastcall **)(ActivationContext *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  else
  {
    *(_DWORD *)a4 = 0;
  }
  return 0LL;
}
