/*
 * XREFs of ?_ProcessOverride@CVisibilityOverride@@AEAAXXZ @ 0x1800E374C
 * Callers:
 *     ?OnIdleStateChanged@CVisibilityOverride@@UEAAJH@Z @ 0x18006E080 (-OnIdleStateChanged@CVisibilityOverride@@UEAAJH@Z.c)
 *     ?s_DXModeWNFCallback@CVisibilityOverride@@SAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800E3710 (-s_DXModeWNFCallback@CVisibilityOverride@@SAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 *     ?s_HoloShellWNFCallback@CVisibilityOverride@@SAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1801B5F60 (-s_HoloShellWNFCallback@CVisibilityOverride@@SAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CVisibilityOverride::_ProcessOverride(CVisibilityOverride *this)
{
  char v1; // di
  __int64 v3; // rax

  v1 = 0;
  if ( !*((_BYTE *)this + 88) || *((_BYTE *)this + 89) )
    v1 = (unsigned int)D3DKMTCheckOcclusion(&CVisibilityOverride::s_checkOcclusion) == -1071775738;
  if ( v1 != *((_BYTE *)this + 52) )
  {
    v3 = **((_QWORD **)this + 10);
    if ( v1 )
      (*(void (**)(void))(v3 + 24))();
    else
      (*(void (**)(void))(v3 + 32))();
    *((_BYTE *)this + 52) = v1;
  }
}
