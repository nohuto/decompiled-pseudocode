/*
 * XREFs of ?GetShoulderTapExperienceManager@PeoplePaneViewManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803D71F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180072674 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall PeoplePaneViewManager::GetShoulderTapExperienceManager(
        PeoplePaneViewManager *this,
        const struct _GUID *a2,
        void **a3)
{
  CMarshaledInterface *v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0LL;
  v5 = (PeoplePaneViewManager *)((char *)this + 480);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v11);
  v6 = CMarshaledInterface::_Unmarshal(v5, &GUID_8667db0d_6960_465f_b9a4_c461863efa91, &v11, 0);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 1128LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_6;
  }
  v6 = (**(__int64 (__fastcall ***)(void *, const struct _GUID *, void **))v11)(v11, a2, a3);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = 1130LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v11);
  return v7;
}
