/*
 * XREFs of ?RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x1800F4FF4
 * Callers:
 *     ?EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ @ 0x180081138 (-EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ.c)
 *     ?FinalRelease@CRenderTarget@@MEAAXXZ @ 0x1800F8D90 (-FinalRelease@CRenderTarget@@MEAAXXZ.c)
 *     ?ProcessDestroyWindow@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTARGET_DESTROYWINDOW@@@Z @ 0x1801C2B50 (-ProcessDestroyWindow@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRE.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x1801C7360 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 *     ?SendCaptureCompleted@CVisualCapture@@IEAAXXZ @ 0x180243E40 (-SendCaptureCompleted@CVisualCapture@@IEAAXXZ.c)
 *     ?ReleaseInteropRenderTarget@CHolographicManager@@AEAAXXZ @ 0x1802964F4 (-ReleaseInteropRenderTarget@CHolographicManager@@AEAAXXZ.c)
 *     ?ProcessSetFlags@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICDISPLAY_SETFLAGS@@@Z @ 0x18029865C (-ProcessSetFlags@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICDISPLAY_.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalQueryInterface@?$CMILCOMBaseT@UIUnknown@@@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B3118 (-InternalQueryInterface@-$CMILCOMBaseT@UIUnknown@@@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     memmove_0 @ 0x18010518B (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEAPEAVCRenderTarget@@@?$vector@V?$com_ptr_t@VCRenderTarget@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCRenderTarget@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCRenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEAPEAVCRenderTarget@@@Z @ 0x18019A060 (--$_Emplace_reallocate@AEAPEAVCRenderTarget@@@-$vector@V-$com_ptr_t@VCRenderTarget@@Uerr_returnc.c)
 */

void __fastcall CRenderTargetManager::RemoveRenderTarget(CRenderTargetManager *this, struct CRenderTarget *a2)
{
  struct CRenderTarget **v2; // r8
  struct CRenderTarget **i; // rcx
  struct CRenderTarget **j; // rdi
  _QWORD *v7; // rdx
  volatile signed __int32 *v8; // [rsp+30h] [rbp+8h] BYREF
  struct CRenderTarget *v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  v2 = (struct CRenderTarget **)*((_QWORD *)this + 5);
  for ( i = (struct CRenderTarget **)*((_QWORD *)this + 4); i != v2; ++i )
  {
    if ( *i == a2 )
    {
      memmove_0(i, i + 1, (char *)v2 - (char *)(i + 1));
      *((_QWORD *)this + 5) -= 8LL;
      return;
    }
  }
  if ( *((_BYTE *)this + 576) )
  {
    v7 = (_QWORD *)*((_QWORD *)this + 8);
    if ( v7 == *((_QWORD **)this + 9) )
    {
      std::vector<wil::com_ptr_t<CRenderTarget,wil::err_returncode_policy>>::_Emplace_reallocate<CRenderTarget * &>(
        (char *)this + 56,
        v7,
        &v9,
        a2);
    }
    else
    {
      *v7 = a2;
      if ( a2 )
        (*(void (__fastcall **)(struct CRenderTarget *))(*(_QWORD *)a2 + 8LL))(a2);
      *((_QWORD *)this + 8) += 8LL;
    }
  }
  else
  {
    for ( j = (struct CRenderTarget **)*((_QWORD *)this + 1); j != *((struct CRenderTarget ***)this + 2); ++j )
    {
      if ( *j == a2 )
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
        memmove_0(j, j + 1, *((_QWORD *)this + 2) - (_QWORD)(j + 1));
        *((_QWORD *)this + 2) -= 8LL;
        wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v8);
        return;
      }
    }
  }
}
