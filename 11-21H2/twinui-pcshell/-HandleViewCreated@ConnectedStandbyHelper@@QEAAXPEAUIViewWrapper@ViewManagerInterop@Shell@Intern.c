/*
 * XREFs of ?HandleViewCreated@ConnectedStandbyHelper@@QEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180099F18
 * Callers:
 *     ?RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x180096470 (-RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@S.c)
 *     ?RaiseViewEventWithPropertySet@UwpWindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x1803F00EC (-RaiseViewEventWithPropertySet@UwpWindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerIntero.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_379fb6251cfae0942258739af0295e77_____lambda_379fb6251cfae0942258739af0295e77___ @ 0x18009A06C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_379fb6251cfae.c)
 *     ?_Incref_nz@_Ref_count_base@std@@QEAA_NXZ @ 0x18009A154 (-_Incref_nz@_Ref_count_base@std@@QEAA_NXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180126630 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Throw_bad_weak_ptr@std@@YAXXZ @ 0x1803F95F4 (-_Throw_bad_weak_ptr@std@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ConnectedStandbyHelper::HandleViewCreated(
        ConnectedStandbyHelper *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2)
{
  std::_Ref_count_base *v4; // rcx
  __int64 v5; // r14
  volatile signed __int32 *v6; // rdi
  unsigned int v7; // esi
  __int64 *v8; // rax
  __int64 v9; // rbx
  _QWORD v10[2]; // [rsp+30h] [rbp-20h] BYREF
  std::_Ref_count_base *v11; // [rsp+40h] [rbp-10h]
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v12; // [rsp+48h] [rbp-8h] BYREF
  __int64 v13; // [rsp+70h] [rbp+20h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v14; // [rsp+80h] [rbp+30h] BYREF

  v4 = (std::_Ref_count_base *)*((_QWORD *)this + 1);
  if ( !v4 || !std::_Ref_count_base::_Incref_nz(v4) )
    std::_Throw_bad_weak_ptr();
  v5 = *(_QWORD *)this;
  v6 = (volatile signed __int32 *)*((_QWORD *)this + 1);
  v14 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
  v10[0] = this;
  if ( v6 )
    _InterlockedIncrement(v6 + 2);
  v10[1] = v5;
  v11 = (std::_Ref_count_base *)v6;
  v12 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *))(*(_QWORD *)a2 + 8LL))(a2);
  v7 = *((_DWORD *)this + 4);
  v8 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_379fb6251cfae0942258739af0295e77_____lambda_379fb6251cfae0942258739af0295e77___(
                    &v13,
                    v10);
  v9 = *v8;
  *v8 = 0LL;
  if ( v13 )
  {
    v13 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release();
  }
  SHTaskPoolQueueTask(3LL, 2LL, v7, 0LL, v9, 0LL);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v12);
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v14);
  if ( v6 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v6);
}
