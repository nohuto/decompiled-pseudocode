/*
 * XREFs of ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801C0BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180029D70 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     memcpy_0 @ 0x18004E993 (memcpy_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007FD5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIMPCInputProviderBase@@@Z @ 0x180091CA8 (--0-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIMPCInputProvid.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18009205C (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProvid.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x180092314 (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?IsHovering@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180092460 (-IsHovering@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_.c)
 *     ?IsInjecting@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18009259C (-IsInjecting@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?OnMenuPressed@MPCManager@@QEAAXW4MPCSourceKind@@I@Z @ 0x180099EC0 (-OnMenuPressed@MPCManager@@QEAAXW4MPCSourceKind@@I@Z.c)
 *     ?InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KMM@Z @ 0x18009E1B8 (-InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KMM@Z.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1800AD480 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?EndGesture@MPCSixDofProcessor@@AEAAXXZ @ 0x1801BF588 (-EndGesture@MPCSixDofProcessor@@AEAAXXZ.c)
 *     ?HasMenuButtonReleased@MPCSixDofProcessor@@AEAA_NPEAULegacyInputInfo@@@Z @ 0x1801BF838 (-HasMenuButtonReleased@MPCSixDofProcessor@@AEAA_NPEAULegacyInputInfo@@@Z.c)
 *     ?PopulateDownLevelInfo@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801C07D4 (-PopulateDownLevelInfo@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?UpdatePoint@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801C21EC (-UpdatePoint@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801C33F4 (-UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 */

void __fastcall MPCSixDofProcessor::PostHitTestProcessing(
        unsigned __int64 this,
        struct MPCHolographicInputContext *a2,
        struct LegacyInputInfo *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  bool HasMenuButtonReleased; // bl
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct MPCHolographicInputManager *Instance; // rax
  const char *v11; // r9
  int v12; // eax
  struct MPCHolographicInputManager *v13; // rax
  const char *v14; // r9
  int v15; // eax
  struct MPCGestureHandlerManager *v16; // rbx
  unsigned __int64 *v17; // rax
  char IsInjecting; // al
  struct LegacyInputInfo *v19; // rdx
  MPCSixDofProcessor *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct MPCGestureHandlerManager *v23; // rax
  unsigned __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  MPCGestureHandlerManager *v27; // rbx
  unsigned __int64 *v28; // rax
  const char *v29; // r9
  struct MPCGestureHandlerManager *v30; // rbx
  unsigned __int64 *v31; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v33; // [rsp+50h] [rbp+8h] BYREF

  if ( MPCInputProviderBase::IsPrimary(this) )
  {
    MPCSixDofProcessor::UpdatePoint((MPCSixDofProcessor *)(this - 24), a3);
    HasMenuButtonReleased = MPCSixDofProcessor::HasMenuButtonReleased((MPCSixDofProcessor *)(this - 24), a3);
    if ( HasMenuButtonReleased )
      MPCManager::OnMenuPressed((__int64)MPCManager::s_instance, 5u, *(_DWORD *)(this + 2804));
    if ( *((_BYTE *)a3 + 240) )
    {
      memcpy_0((void *)(this + 4760), a3, 0xBC0uLL);
      if ( HasMenuButtonReleased )
      {
        Instance = MPCHolographicInputManager::GetInstance();
        v12 = MPCHolographicInputManager::InjectRightClick(
                (__int64)Instance,
                1,
                *((_DWORD *)a3 + 68),
                v11,
                *((float *)a3 + 62));
        if ( v12 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            967LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
            (const char *)(unsigned int)v12);
        v13 = MPCHolographicInputManager::GetInstance();
        v15 = MPCHolographicInputManager::InjectRightClick(
                (__int64)v13,
                0,
                *((_DWORD *)a3 + 68),
                v14,
                *((float *)a3 + 62));
        if ( v15 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            975LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
            (const char *)(unsigned int)v15);
      }
      if ( *(_BYTE *)(this + 3653) )
      {
        MPCSixDofProcessor::UpdateTouchpadDownleveling((MPCSixDofProcessor *)(this - 24), a3);
        return;
      }
      v16 = MPCGestureHandlerManager::GetInstance(v9, v8);
      v17 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
              &v33,
              this & -(__int64)(this != 24));
      IsInjecting = MPCGestureHandlerManager::IsInjecting((__int64)v16, v17);
      v19 = a3;
      v20 = (MPCSixDofProcessor *)(this - 24);
      if ( !IsInjecting )
      {
        MPCSixDofProcessor::UpdateTouchpadDownleveling(v20, a3);
        if ( *(_BYTE *)(this + 3653) )
          return;
        v19 = a3;
        v20 = (MPCSixDofProcessor *)(this - 24);
      }
      MPCSixDofProcessor::PopulateDownLevelInfo(v20, v19);
      v23 = MPCGestureHandlerManager::GetInstance(v22, v21);
      v24 = this & -(__int64)(this != 24);
      goto LABEL_19;
    }
    if ( *(_QWORD *)(this + 3600) && *(_BYTE *)(this + 3624) )
    {
      a3 = (struct LegacyInputInfo *)(this + 4760);
      MPCSixDofProcessor::PopulateDownLevelInfo(
        (MPCSixDofProcessor *)(this - 24),
        (struct LegacyInputInfo *)(this + 4760));
      v23 = MPCGestureHandlerManager::GetInstance(v26, v25);
      v24 = this & -(__int64)(this != 24);
LABEL_19:
      v27 = v23;
      v28 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
              &v33,
              v24);
      MPCGestureHandlerManager::DownLevelTo2D(v27, (__int64)a3, v28, v29);
      return;
    }
    v30 = MPCGestureHandlerManager::GetInstance(v6, v5);
    v31 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
            &v33,
            this & -(__int64)(this != 24));
    if ( MPCGestureHandlerManager::IsHovering((__int64)v30, v31) )
      MPCSixDofProcessor::EndGesture((MPCSixDofProcessor *)(this - 24));
  }
}
