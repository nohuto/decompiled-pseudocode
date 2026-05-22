/*
 * XREFs of ?OnHitTest@ActivationProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801A5F50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VActivationContext@@V1@AEAW4SPATIAL_INPUT_ACTIVATION_POLICY@@_N@Details@WRL@Microsoft@@YAJPEAPEAVActivationContext@@AEAW4SPATIAL_INPUT_ACTIVATION_POLICY@@$$QEA_N@Z @ 0x1801A5D64 (--$MakeAndInitialize@VActivationContext@@V1@AEAW4SPATIAL_INPUT_ACTIVATION_POLICY@@_N@Details@WRL.c)
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
  unsigned int v6; // edi
  ActivationContext *v7; // rbx
  __int64 v8; // rdx
  __int64 (__fastcall *v9)(ActivationContext *, GUID *, __int64 *); // rdi
  ActivationContext *v11; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v13; // [rsp+58h] [rbp+20h] BYREF

  *(_DWORD *)a4 = 1;
  v4 = (__int64 *)((char *)a4 + 8);
  if ( *((_QWORD *)a4 + 1) || (*(_BYTE *)a2 & 0x1B) == 0 || (*((_DWORD *)a2 + 8) & 0x2004) != 0x2004 )
  {
    *(_DWORD *)a4 = 0;
    return 0LL;
  }
  v11 = 0LL;
  v13 = 0;
  v5 = Microsoft::WRL::Details::MakeAndInitialize<ActivationContext,ActivationContext,enum SPATIAL_INPUT_ACTIVATION_POLICY &,bool>(
         &v11,
         (_DWORD *)a3 + 24,
         &v13);
  v6 = v5;
  v7 = v11;
  if ( v5 >= 0 )
  {
    v9 = **(__int64 (__fastcall ***)(ActivationContext *, GUID *, __int64 *))v11;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v4);
    v5 = v9(v7, &GUID_00000000_0000_0000_c000_000000000046, v4);
    v6 = v5;
    if ( v5 < 0 )
    {
      v8 = 55LL;
      goto LABEL_8;
    }
    (*(void (__fastcall **)(ActivationContext *))(*(_QWORD *)v7 + 16LL))(v7);
    return 0LL;
  }
  v8 = 54LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\activation\\system\\lib\\activationprocessor.cpp",
    (const char *)(unsigned int)v5);
  if ( v7 )
    (*(void (__fastcall **)(ActivationContext *))(*(_QWORD *)v7 + 16LL))(v7);
  return v6;
}
