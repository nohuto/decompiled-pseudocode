/*
 * XREFs of ?ApplicationViewManagerVisibilityDebouncer_CreateInstance@@YAJPEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x1800D9B74
 * Callers:
 *     ?RuntimeClassInitialize@CApplicationViewManager@@QEAAJXZ @ 0x1800AF578 (-RuntimeClassInitialize@CApplicationViewManager@@QEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIApplicationViewChangeListener@@UIApplicationViewCollection@@UIApplicationViewCollectionTestHook@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800D9CD8 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIApplicat_ea_1800D9CD8.c)
 *     ??$MakeAndInitialize@VApplicationViewManagerVisibilityDebouncer@@V1@AEAPEAUIApplicationViewCollection@@@Details@WRL@Microsoft@@YAJPEAPEAVApplicationViewManagerVisibilityDebouncer@@AEAPEAUIApplicationViewCollection@@@Z @ 0x1800FF77C (--$MakeAndInitialize@VApplicationViewManagerVisibilityDebouncer@@V1@AEAPEAUIApplicationViewColle.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEAAKXZ @ 0x1801383A4 (-InternalRelease@-$ComPtr@VApplicationViewManagerVisibilityDebouncer@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ApplicationViewManagerVisibilityDebouncer_CreateInstance(
        struct IApplicationViewCollection *a1,
        const struct _GUID *a2,
        void **a3)
{
  int v4; // eax
  int CanCastTo; // ebx
  _DWORD *v6; // rcx
  _DWORD *v7; // r9
  _DWORD *v8; // rcx
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r9
  char *v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IApplicationViewCollection *v15; // [rsp+30h] [rbp+8h] BYREF
  char *v16; // [rsp+38h] [rbp+10h] BYREF

  v15 = a1;
  *a3 = 0LL;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease(&v16);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<ApplicationViewManagerVisibilityDebouncer,ApplicationViewManagerVisibilityDebouncer,IApplicationViewCollection * &>(
         &v16,
         &v15);
  CanCastTo = v4;
  if ( v4 < 0 )
  {
    v10 = (unsigned int)v4;
    v11 = 373LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanagervisibilitydebouncer.cpp",
      (const char *)v10);
    goto LABEL_7;
  }
  *a3 = 0LL;
  if ( InlineIsEqualGUID(&GUID_7b75e1b4_5965_48b5_9daa_59f76b0d9b87, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v13 = v16;
    *a3 = v16;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v13 + 8LL))(v13);
    CanCastTo = 0;
  }
  else
  {
    if ( InlineIsEqualGUID(v6, v7) || InlineIsEqualGUID(v8, &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3) )
    {
      *a3 = v16;
      CanCastTo = 0;
LABEL_5:
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
      goto LABEL_6;
    }
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IApplicationViewChangeListener,IApplicationViewCollection,IApplicationViewCollectionTestHook,Microsoft::WRL::FtmBase>::CanCastTo(
                  v16 + 8,
                  v12,
                  a3);
    if ( CanCastTo >= 0 )
      goto LABEL_5;
  }
LABEL_6:
  if ( CanCastTo < 0 )
  {
    v10 = (unsigned int)CanCastTo;
    v11 = 374LL;
    goto LABEL_14;
  }
LABEL_7:
  Microsoft::WRL::ComPtr<ApplicationViewManagerVisibilityDebouncer>::InternalRelease(&v16);
  return (unsigned int)CanCastTo;
}
