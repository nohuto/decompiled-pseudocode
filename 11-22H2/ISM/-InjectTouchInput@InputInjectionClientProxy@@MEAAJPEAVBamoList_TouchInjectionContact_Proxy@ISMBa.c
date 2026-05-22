/*
 * XREFs of ?InjectTouchInput@InputInjectionClientProxy@@MEAAJPEAVBamoList_TouchInjectionContact_Proxy@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x1801C3DD0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x18001ABBC (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x18004C900 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     ??1?$com_ptr_t@VBamoSimpleHapticsControllerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18005582C (--1-$com_ptr_t@VBamoSimpleHapticsControllerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VKernelContextProvider@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F6B94 (--1-$ComPtr@VKernelContextProvider@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?OnAttachDevice@InjectionRawInputProvider@@QEAAJPEAVInputInjectionClientProxy@@@Z @ 0x1800F7334 (-OnAttachDevice@InjectionRawInputProvider@@QEAAJPEAVInputInjectionClientProxy@@@Z.c)
 *     ?OnInputReport@InjectionRawInputProvider@@QEAAJPEAVInputInjectionClientProxy@@AEAV?$vector@UTouchInjectionContact@Input@Internal@UI@Windows@@V?$allocator@UTouchInjectionContact@Input@Internal@UI@Windows@@@std@@@std@@@Z @ 0x1800F74B8 (-OnInputReport@InjectionRawInputProvider@@QEAAJPEAVInputInjectionClientProxy@@AEAV-$vector@UTouc.c)
 *     ??$_Emplace_reallocate@AEBUTouchInjectionContact@Input@Internal@UI@Windows@@@?$vector@UTouchInjectionContact@Input@Internal@UI@Windows@@V?$allocator@UTouchInjectionContact@Input@Internal@UI@Windows@@@std@@@std@@QEAAPEAUTouchInjectionContact@Input@Internal@UI@Windows@@QEAU23456@AEBU23456@@Z @ 0x1801C2E38 (--$_Emplace_reallocate@AEBUTouchInjectionContact@Input@Internal@UI@Windows@@@-$vector@UTouchInje.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall InputInjectionClientProxy::InjectTouchInput(
        InputInjectionClientProxy *this,
        struct Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_TouchInjectionContact_Proxy *a2)
{
  InjectionRawInputProvider *v4; // rbx
  _BYTE *v5; // r13
  __int64 v6; // r15
  unsigned int v7; // r12d
  _BYTE *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v11; // rax
  const char *v12; // r9
  _OWORD *v13; // r8
  __int128 v15; // [rsp+20h] [rbp-20h] BYREF
  _BYTE *v16; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  InjectionRawInputProvider *v18; // [rsp+80h] [rbp+40h] BYREF
  struct Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_TouchInjectionContact_Proxy *v19; // [rsp+90h] [rbp+50h] BYREF

  v4 = InjectionRawInputProvider::s_rawInputProvider;
  v18 = InjectionRawInputProvider::s_rawInputProvider;
  if ( InjectionRawInputProvider::s_rawInputProvider )
  {
    _InterlockedIncrement((volatile signed __int32 *)InjectionRawInputProvider::s_rawInputProvider + 4);
    v4 = v18;
  }
  if ( !*((_BYTE *)this + 56) )
  {
    if ( (int)InjectionRawInputProvider::OnAttachDevice(v4, this) < 0 )
    {
      Microsoft::WRL::ComPtr<KernelContextProvider>::~ComPtr<KernelContextProvider>((__int64 *)&v18);
      return 0LL;
    }
    *((_BYTE *)this + 56) = 1;
  }
  v19 = a2;
  if ( a2 )
    (**(void (__fastcall ***)(struct Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_TouchInjectionContact_Proxy *))a2)(a2);
  v15 = 0LL;
  v5 = 0LL;
  v16 = 0LL;
  v6 = (__int64)(*((_QWORD *)a2 + 7) - *((_QWORD *)a2 + 6)) >> 4;
  v7 = 0;
  if ( (_DWORD)v6 )
  {
    v8 = (_BYTE *)*((_QWORD *)&v15 + 1);
    do
    {
      v9 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 4) + 24LL) + 32LL);
      if ( *(int *)(v9 + 8) <= 0 )
        v10 = 0LL;
      else
        v10 = *(_QWORD *)(v9 + 16);
      v11 = (Microsoft::BamoImpl::BaseBamoConnectionImpl *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 56LL))(v10);
      Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(v11);
      if ( v7 >= (unsigned __int64)((__int64)(*((_QWORD *)a2 + 7) - *((_QWORD *)a2 + 6)) >> 4) )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x5C,
          (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
          v12);
      v13 = (_OWORD *)(*((_QWORD *)a2 + 6) + 16LL * v7);
      if ( v8 == v5 )
      {
        std::vector<Windows::UI::Internal::Input::TouchInjectionContact>::_Emplace_reallocate<Windows::UI::Internal::Input::TouchInjectionContact const &>(
          (const void **)&v15,
          v8,
          v13);
        v5 = v16;
        v8 = (_BYTE *)*((_QWORD *)&v15 + 1);
      }
      else
      {
        *(_OWORD *)v8 = *v13;
        v8 += 16;
        *((_QWORD *)&v15 + 1) = v8;
      }
      ++v7;
    }
    while ( v7 < (unsigned int)v6 );
  }
  InjectionRawInputProvider::OnInputReport((__int64)v4, (__int64)this, &v15);
  if ( (_QWORD)v15 )
    std::_Deallocate<16,0>((void *)v15, (unsigned __int64)&v16[-v15] & 0xFFFFFFFFFFFFFFF0uLL);
  wil::com_ptr_t<BamoSimpleHapticsControllerProxy,wil::err_returncode_policy>::~com_ptr_t<BamoSimpleHapticsControllerProxy,wil::err_returncode_policy>((__int64 *)&v19);
  if ( v4 )
    RefCountedObject::Release((InjectionRawInputProvider *)((char *)v4 + 8));
  return 0LL;
}
