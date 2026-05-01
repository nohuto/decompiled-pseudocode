/*
 * XREFs of ??0ComponentCreator@@QEAA@XZ @ 0x180142848
 * Callers:
 *     ??0CImmersiveShellCreationBehavior@@QEAA@XZ @ 0x180142718 (--0CImmersiveShellCreationBehavior@@QEAA@XZ.c)
 *     ??0ImmersiveShellComponentsConfiguration@@QEAA@PEAUHKEY__@@PEBG@Z @ 0x1803AF970 (--0ImmersiveShellComponentsConfiguration@@QEAA@PEAUHKEY__@@PEBG@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180041D68 (--1-$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$CoCreateInstance@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@YA?AV?$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@0@AEBU_GUID@@K@Z @ 0x18014294C (--$CoCreateInstance@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@YA-AV-$com_ptr.c)
 *     ??$MakeOrThrow@VCoCreateInstanceImmersiveShellComponentCreator@@$$V@wil@@YA?AV?$ComPtr@VCoCreateInstanceImmersiveShellComponentCreator@@@WRL@Microsoft@@XZ @ 0x1801429BC (--$MakeOrThrow@VCoCreateInstanceImmersiveShellComponentCreator@@$$V@wil@@YA-AV-$ComPtr@VCoCreate.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewChangeListener@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18030BB50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAp_ea_18030BB50.c)
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
  __int64 *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v12; // [rsp+38h] [rbp+18h] BYREF

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  wil::CoCreateInstance<IImmersiveComponentCreator,wil::err_exception_policy>(
    (int)&v12,
    &GUID_65a04334_9dd4_4fa2_94db_a62922b8ba24);
  v2 = v12;
  v12 = 0LL;
  v3 = *(_QWORD *)this;
  *(_QWORD *)this = v2;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  wil::com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>::~com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>(&v12);
  wil::CoCreateInstance<IImmersiveComponentCreator,wil::err_exception_policy>(
    (int)&v12,
    &GUID_1e35b0d0_49f2_4acb_a9a5_4d2da8331b02);
  v4 = v12;
  v12 = 0LL;
  v5 = *((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = v4;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  wil::com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>::~com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>(&v12);
  wil::CoCreateInstance<IImmersiveComponentCreator,wil::err_exception_policy>(
    (int)&v12,
    &GUID_d2d94e72_dcdd_420a_b779_197ef796cc85);
  v6 = v12;
  v12 = 0LL;
  v7 = *((_QWORD *)this + 1);
  *((_QWORD *)this + 1) = v6;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  wil::com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>::~com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>(&v12);
  v8 = (__int64 *)wil::MakeOrThrow<CoCreateInstanceImmersiveShellComponentCreator,>(&v12);
  v9 = *v8;
  *v8 = 0LL;
  v10 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = v9;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v12 )
  {
    v12 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewChangeListener>::Release();
  }
  return this;
}
