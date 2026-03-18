/*
 * XREFs of ?AddRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x1800F7B94
 * Callers:
 *     ?CheckOcclusionState@CRenderTargetManager@@QEAAJXZ @ 0x18007DBDC (-CheckOcclusionState@CRenderTargetManager@@QEAAJXZ.c)
 *     ?Initialize@CRenderTarget@@MEAAJXZ @ 0x1800F8B80 (-Initialize@CRenderTarget@@MEAAJXZ.c)
 *     ?ProcessCreate@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTARGET_CREATE@@@Z @ 0x1801C2AE0 (-ProcessCreate@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTAR.c)
 *     ?Initialize@CCaptureRenderTarget@@MEAAJXZ @ 0x1801C4D10 (-Initialize@CCaptureRenderTarget@@MEAAJXZ.c)
 *     ?Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBVRenderTargetInfo@@AEBVCMonitorTransform@@PEAPEAV1@@Z @ 0x1801E0F4C (-Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBVRenderTargetInfo@@AEBVCMo.c)
 *     ?NotifyOnChangeCompleted@CVisualCapture@@MEAAXXZ @ 0x180243CA0 (-NotifyOnChangeCompleted@CVisualCapture@@MEAAXXZ.c)
 *     ?EnsureInteropRenderTarget@CHolographicManager@@AEAAJXZ @ 0x180295D68 (-EnsureInteropRenderTarget@CHolographicManager@@AEAAJXZ.c)
 *     ?ProcessSetFlags@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICDISPLAY_SETFLAGS@@@Z @ 0x18029865C (-ProcessSetFlags@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICDISPLAY_.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180092F80 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?InternalQueryInterface@?$CMILCOMBaseT@UIUnknown@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B3118 (-InternalQueryInterface@-$CMILCOMBaseT@UIUnknown@@@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAVCRenderTarget@@@?$vector@PEAVCRenderTarget@@V?$allocator@PEAVCRenderTarget@@@std@@@std@@QEAAPEAPEAVCRenderTarget@@QEAPEAV2@AEBQEAV2@@Z @ 0x1800F539C (--$_Emplace_reallocate@AEBQEAVCRenderTarget@@@-$vector@PEAVCRenderTarget@@V-$allocator@PEAVCRend.c)
 */

void __fastcall CRenderTargetManager::AddRenderTarget(CRenderTargetManager *this, struct CRenderTarget *a2)
{
  struct CComposition *CurrentFrameId; // rax
  _BYTE *v5; // rdx
  _BYTE *v6; // rdx
  char *v7; // rcx
  volatile signed __int32 *v8; // [rsp+30h] [rbp+8h] BYREF
  struct CRenderTarget *v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  if ( *((_BYTE *)this + 576)
    || (CurrentFrameId = GetCurrentFrameId(), *((struct CComposition **)this + 71) == CurrentFrameId) )
  {
    v6 = (_BYTE *)*((_QWORD *)this + 5);
    v7 = (char *)this + 32;
    if ( v6 == *((_BYTE **)this + 6) )
    {
      std::vector<CRenderTarget *>::_Emplace_reallocate<CRenderTarget * const &>((__int64)v7, v6, &v9);
    }
    else
    {
      *(_QWORD *)v6 = a2;
      *((_QWORD *)v7 + 1) += 8LL;
    }
  }
  else
  {
    v8 = 0LL;
    if ( (int)CMILCOMBaseT<IUnknown>::InternalQueryInterface(
                (volatile signed __int32 *)a2,
                &GUID_246c9be3_da00_417e_8eb0_aefc3aebe2a9,
                &v8) >= 0 )
    {
      *((_BYTE *)this + 578) = 1;
      *((_BYTE *)this + 580) = 1;
    }
    v5 = (_BYTE *)*((_QWORD *)this + 2);
    if ( v5 == *((_BYTE **)this + 3) )
    {
      std::vector<CRenderTarget *>::_Emplace_reallocate<CRenderTarget * const &>((__int64)this + 8, v5, &v9);
    }
    else
    {
      *(_QWORD *)v5 = a2;
      *((_QWORD *)this + 2) += 8LL;
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v8);
  }
}
