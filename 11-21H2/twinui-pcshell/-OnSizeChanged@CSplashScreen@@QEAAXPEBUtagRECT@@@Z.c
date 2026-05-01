/*
 * XREFs of ?OnSizeChanged@CSplashScreen@@QEAAXPEBUtagRECT@@@Z @ 0x18006B4C0
 * Callers:
 *     ?OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18006ABA4 (-OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x180074724 (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_get_ImageLocationInternal@CSplashScreen@@AEAA?AURect@Foundation@Windows@@XZ @ 0x18006B5E8 (-_get_ImageLocationInternal@CSplashScreen@@AEAA-AURect@Foundation@Windows@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CSplashScreen::OnSizeChanged(CSplashScreen *this, const struct tagRECT *a2)
{
  __int64 *v3; // rsi
  __int64 *v4; // rbp
  __int128 v5; // xmm6
  __int64 v6; // rbx
  int (__fastcall *v7)(__int64, GUID *, __int64 **); // rdi
  __int64 v8; // rax
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF
  __int64 *v10; // [rsp+60h] [rbp+8h] BYREF
  __int64 v11; // [rsp+68h] [rbp+10h] BYREF

  *((float *)this + 34) = (float)(a2->bottom - a2->top);
  *((float *)this + 33) = (float)(a2->right - a2->left);
  CSplashScreen::_get_ImageLocationInternal(this, &v9);
  v3 = (__int64 *)*((_QWORD *)this + 12);
  v4 = (__int64 *)*((_QWORD *)this + 13);
  if ( v3 != v4 )
  {
    v5 = v9;
    do
    {
      v6 = *v3;
      v11 = v6;
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      v10 = 0LL;
      v7 = *(int (__fastcall **)(__int64, GUID *, __int64 **))(*(_QWORD *)v6 + 40LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v10);
      if ( v7(v6, &GUID_2ce345bd_11db_4b6f_a348_a64e187a0e67, &v10) >= 0 )
      {
        v8 = *v10;
        v9 = v5;
        (*(void (__fastcall **)(__int64 *, __int128 *))(v8 + 48))(v10, &v9);
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v10);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
      ++v3;
    }
    while ( v3 != v4 );
  }
}
