/*
 * XREFs of ?RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z @ 0x1800E58C0
 * Callers:
 *     ?RegisterIndirectSwapchainRenderTargetForWindow@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX_NU_LUID@@@Z @ 0x180105430 (-RegisterIndirectSwapchainRenderTargetForWindow@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX_NU_LUID@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$CreateProxy@VCIndirectSwapchainRenderTargetProxy@@@CCompositor@@IEAAJPEAPEAVCIndirectSwapchainRenderTargetProxy@@@Z @ 0x1800A8674 (--$CreateProxy@VCIndirectSwapchainRenderTargetProxy@@@CCompositor@@IEAAJPEAPEAVCIndirectSwapchai.c)
 *     ?Unregister@CIndirectSwapchainRenderTargetProxy@@QEAAJXZ @ 0x1800C0AC8 (-Unregister@CIndirectSwapchainRenderTargetProxy@@QEAAJXZ.c)
 *     ?SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ @ 0x1800E5E54 (-SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTopLevelWindow::RegisterIndirectSwapChainRenderTarget(
        CTopLevelWindow *this,
        HANDLE hObject,
        char a3,
        struct _LUID a4)
{
  volatile signed __int32 *v8; // rbx
  int v9; // esi
  unsigned int v10; // eax
  __int64 v11; // r14
  int v12; // eax
  int v13; // eax
  CIndirectSwapchainRenderTargetProxy *v15; // [rsp+60h] [rbp+8h] BYREF

  v8 = 0LL;
  v15 = 0LL;
  if ( *((_QWORD *)this + 102) )
  {
    v9 = -2147024891;
    v10 = 5884;
    goto LABEL_17;
  }
  if ( !a3 )
  {
    v11 = *((_QWORD *)this + 70);
    if ( !v11 )
    {
LABEL_16:
      v9 = -2147467261;
      v10 = 5901;
LABEL_17:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, v10);
      if ( hObject )
        CloseHandle(hObject);
      goto LABEL_19;
    }
    goto LABEL_7;
  }
  v11 = *((_QWORD *)this + 34);
  if ( v11 )
LABEL_7:
    v11 = *(_QWORD *)(v11 + 16);
  if ( !v11 )
    goto LABEL_16;
  v9 = CCompositor::CreateProxy<CIndirectSwapchainRenderTargetProxy>(
         *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
         &v15);
  v8 = (volatile signed __int32 *)v15;
  if ( v9 < 0 )
  {
    v10 = 5907;
    goto LABEL_17;
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, HANDLE, struct _LUID, _DWORD))(**(_QWORD **)(*((_QWORD *)v15 + 2)
                                                                                              + 16LL)
                                                                                + 688LL))(
          *(_QWORD *)(*((_QWORD *)v15 + 2) + 16LL),
          *(unsigned int *)(*((_QWORD *)v15 + 2) + 24LL),
          hObject,
          a4,
          *(_DWORD *)(*(_QWORD *)(v11 + 16) + 24LL));
  v9 = v12;
  if ( v12 >= 0 )
  {
    *((_BYTE *)this + 808) = a3;
    *((_QWORD *)this + 102) = v8;
    _InterlockedIncrement(v8 + 2);
    v13 = CTopLevelWindow::SendBoundsToSwapchainTarget(this);
    v9 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x1754u);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x1723u);
    }
    v8 = (volatile signed __int32 *)v15;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x171Eu);
  }
LABEL_19:
  if ( v8 && v9 < 0 )
    CIndirectSwapchainRenderTargetProxy::Unregister((CIndirectSwapchainRenderTargetProxy *)v8);
  if ( v8 )
    CBaseObject::Release((CBaseObject *)v8);
  return (unsigned int)v9;
}
