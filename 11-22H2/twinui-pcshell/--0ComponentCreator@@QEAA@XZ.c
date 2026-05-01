/*
 * XREFs of ??0ComponentCreator@@QEAA@XZ @ 0x180180450
 * Callers:
 *     ??0CImmersiveShellCreationBehavior@@QEAA@XZ @ 0x18018025C (--0CImmersiveShellCreationBehavior@@QEAA@XZ.c)
 *     ??0ImmersiveShellComponentsConfiguration@@QEAA@PEAUHKEY__@@PEBG@Z @ 0x180489E08 (--0ImmersiveShellComponentsConfiguration@@QEAA@PEAUHKEY__@@PEBG@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewChangeListener@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004F730 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAp_ea_18004F730.c)
 *     ??1?$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800AC91C (--1-$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$CoCreateInstance@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@YA?AV?$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@0@AEBU_GUID@@K@Z @ 0x180180554 (--$CoCreateInstance@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@YA-AV-$com_ptr.c)
 *     ??$MakeOrThrow@VCoCreateInstanceImmersiveShellComponentCreator@@$$V@wil@@YA?AV?$ComPtr@VCoCreateInstanceImmersiveShellComponentCreator@@@WRL@Microsoft@@XZ @ 0x1801805C4 (--$MakeOrThrow@VCoCreateInstanceImmersiveShellComponentCreator@@$$V@wil@@YA-AV-$ComPtr@VCoCreate.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
ComponentCreator *__fastcall ComponentCreator::ComponentCreator(ComponentCreator *this)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  volatile int **v8; // rax
  volatile int *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v13; // [rsp+38h] [rbp+18h] BYREF

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  wil::CoCreateInstance<IImmersiveComponentCreator,wil::err_exception_policy>(
    (int)&v13,
    &GUID_65a04334_9dd4_4fa2_94db_a62922b8ba24);
  v2 = v13;
  v13 = 0LL;
  v3 = *(_QWORD *)this;
  *(_QWORD *)this = v2;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  wil::com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>::~com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>(&v13);
  wil::CoCreateInstance<IImmersiveComponentCreator,wil::err_exception_policy>(
    (int)&v13,
    &GUID_1e35b0d0_49f2_4acb_a9a5_4d2da8331b02);
  v4 = v13;
  v13 = 0LL;
  v5 = *((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = v4;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  wil::com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>::~com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>(&v13);
  wil::CoCreateInstance<IImmersiveComponentCreator,wil::err_exception_policy>(
    (int)&v13,
    &GUID_d2d94e72_dcdd_420a_b779_197ef796cc85);
  v6 = v13;
  v13 = 0LL;
  v7 = *((_QWORD *)this + 1);
  *((_QWORD *)this + 1) = v6;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  wil::com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>::~com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>(&v13);
  v8 = (volatile int **)wil::MakeOrThrow<CoCreateInstanceImmersiveShellComponentCreator,>(&v13);
  v9 = *v8;
  *v8 = 0LL;
  v10 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = v9;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v11 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewChangeListener>::Release(
      v11,
      v9);
  }
  return this;
}
