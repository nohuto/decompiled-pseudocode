/*
 * XREFs of ?StartAnimation@GestureHandler@@QEAAXAEAV?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@_N@Z @ 0x180157BB8
 * Callers:
 *     ?StartAnimation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IPEBQEAVBamoAnimationTargetClientProxy@@IPEAVBamoDragManagerClientProxy@@W4GestureProcessorType@@@Z @ 0x180153CB0 (-StartAnimation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IPEBQEAVBamoAnimationTargetCl.c)
 * Callees:
 *     ?GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ @ 0x180034EC0 (-GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ.c)
 *     std::for_each_std::_List_const_iterator_std::_List_val_std::_List_simple_types_unsigned_int_______lambda_1f06d20aa2c7b6f65f005431986a59fb___ @ 0x18006148C (std--for_each_std--_List_const_iterator_std--_List_val_std--_List_simple_types_unsigned_int_____.c)
 *     _lambda_1f06d20aa2c7b6f65f005431986a59fb_::_lambda_1f06d20aa2c7b6f65f005431986a59fb_ @ 0x180061548 (_lambda_1f06d20aa2c7b6f65f005431986a59fb_--_lambda_1f06d20aa2c7b6f65f005431986a59fb_.c)
 *     _lambda_1f06d20aa2c7b6f65f005431986a59fb_::__lambda_1f06d20aa2c7b6f65f005431986a59fb_ @ 0x180061584 (_lambda_1f06d20aa2c7b6f65f005431986a59fb_--__lambda_1f06d20aa2c7b6f65f005431986a59fb_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A72F8 (-InternalRelease@-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1801566AC (--4-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?FeedAnimationDataIfNeeded@GestureHandler@@AEAAX_N@Z @ 0x180156C98 (-FeedAnimationDataIfNeeded@GestureHandler@@AEAAX_N@Z.c)
 *     ?IsGestureInvalid@GestureHandler@@QEBA_NXZ @ 0x1801575DC (-IsGestureInvalid@GestureHandler@@QEBA_NXZ.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall GestureHandler::StartAnimation(GestureHandler *this, __int64 a2, char a3)
{
  char *v6; // rsi
  struct IAnimationDataProvider *AnimationDataProvider; // rdi
  __int64 *v8; // rax
  _QWORD *v9; // rax
  __int64 (__fastcall *v10)(struct IAnimationDataProvider *, void (__fastcall ****)(_QWORD)); // r15
  void (__fastcall ***v11)(_QWORD); // rcx
  void (__fastcall ***v12)(_QWORD); // rcx
  void (__fastcall ***v13)(_QWORD); // [rsp+20h] [rbp-10h] BYREF
  __int64 v14; // [rsp+28h] [rbp-8h] BYREF
  void (__fastcall ***v15)(_QWORD); // [rsp+68h] [rbp+38h] BYREF

  if ( !GestureHandler::IsGestureInvalid(this) )
  {
    v6 = (char *)this + 248;
    if ( !*((_QWORD *)this + 31) )
    {
      AnimationDataProvider = ISMStatics::GetAnimationDataProvider();
      v8 = (__int64 *)(*(__int64 (__fastcall **)(struct IAnimationDataProvider *, void (__fastcall ****)(_QWORD), _QWORD))(*(_QWORD *)AnimationDataProvider + 24LL))(
                        AnimationDataProvider,
                        &v13,
                        0LL);
      Microsoft::WRL::ComPtr<DataSourcePrincipal>::operator=((__int64 *)this + 31, v8);
      Microsoft::WRL::ComPtr<DataSourcePrincipal>::InternalRelease((__int64 *)&v13);
      (*(void (__fastcall **)(struct IAnimationDataProvider *, void (__fastcall ****)(_QWORD)))(*(_QWORD *)AnimationDataProvider
                                                                                              + 64LL))(
        AnimationDataProvider,
        &v15);
      v9 = lambda_1f06d20aa2c7b6f65f005431986a59fb_::_lambda_1f06d20aa2c7b6f65f005431986a59fb_(&v13, &v15);
      std::for_each_std::_List_const_iterator_std::_List_val_std::_List_simple_types_unsigned_int_______lambda_1f06d20aa2c7b6f65f005431986a59fb___(
        &v14,
        **(__int64 ***)(a2 + 8),
        *(__int64 **)(a2 + 8),
        v9);
      lambda_1f06d20aa2c7b6f65f005431986a59fb_::__lambda_1f06d20aa2c7b6f65f005431986a59fb_(&v14);
      (*(void (__fastcall **)(__int64, void (__fastcall ***)(_QWORD)))(*(_QWORD *)(*(_QWORD *)v6 + 8LL) + 120LL))(
        *(_QWORD *)v6 + 8LL,
        v15);
      v10 = *(__int64 (__fastcall **)(struct IAnimationDataProvider *, void (__fastcall ****)(_QWORD)))(*(_QWORD *)AnimationDataProvider + 40LL);
      v11 = *(void (__fastcall ****)(_QWORD))v6;
      v13 = v11;
      if ( v11 )
        (**v11)(v11);
      *((_QWORD *)this + 32) = v10(AnimationDataProvider, &v13);
      *((_QWORD *)this + 33) = (*(__int64 (__fastcall **)(struct IAnimationDataProvider *))(*(_QWORD *)AnimationDataProvider
                                                                                          + 32LL))(AnimationDataProvider);
      GestureHandler::FeedAnimationDataIfNeeded(this, 0);
      *((_BYTE *)this + 240) = a3;
      v12 = v15;
      if ( v15 )
      {
        v15 = 0LL;
        (*v12)[1](v12);
      }
    }
  }
}
