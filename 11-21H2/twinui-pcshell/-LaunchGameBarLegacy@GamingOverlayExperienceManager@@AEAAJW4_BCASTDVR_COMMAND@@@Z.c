/*
 * XREFs of ?LaunchGameBarLegacy@GamingOverlayExperienceManager@@AEAAJW4_BCASTDVR_COMMAND@@@Z @ 0x180334594
 * Callers:
 *     ?LaunchGameBar@GamingOverlayExperienceManager@@AEAAJPEBGW4_BCASTDVR_COMMAND@@@Z @ 0x180334058 (-LaunchGameBar@GamingOverlayExperienceManager@@AEAAJPEBGW4_BCASTDVR_COMMAND@@@Z.c)
 *     ?TriggerOnLastFocusedWindow@GamingOverlayExperienceManager@@UEAAJXZ @ 0x18033ACB0 (-TriggerOnLastFocusedWindow@GamingOverlayExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GamingOverlayExperienceManager::LaunchGameBarLegacy(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, GUID *, GUID *, __int64 *); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0LL;
  v3 = *(_QWORD *)(a1 + 328);
  v4 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v3 + 24LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
  v5 = v4(v3, &GUID_82467e7f_e743_4e2f_bf0b_20adcadf3217, &GUID_5a4c52f1_92a1_4f7d_9010_60dc2a06d6af, &v11);
  v6 = v5;
  if ( v5 >= 0 )
  {
    if ( a2 > 0xA
      || (v8 = 1043, !_bittest(&v8, a2))
      || (v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 24LL))(v11, a2), v6 = v5, v5 >= 0) )
    {
      v6 = 0;
      goto LABEL_9;
    }
    v7 = 1692LL;
  }
  else
  {
    v7 = 1684LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
    (const char *)(unsigned int)v5);
LABEL_9:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
  return v6;
}
