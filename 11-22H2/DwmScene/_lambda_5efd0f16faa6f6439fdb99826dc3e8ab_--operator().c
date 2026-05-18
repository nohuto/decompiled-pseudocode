/*
 * XREFs of _lambda_5efd0f16faa6f6439fdb99826dc3e8ab_::operator() @ 0x1800D5AEC
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_5efd0f16faa6f6439fdb99826dc3e8ab__void_std::shared_ptr_Spectre::Engine::Texture__enum_Spectre::Engine::Format_unsigned_int_::_Do_call @ 0x1800D7030 (std--_Func_impl_no_alloc__lambda_5efd0f16faa6f6439fdb99826dc3e8ab__void_std--shared_ea_1800D7030.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV10@QEBD@Z @ 0x18001C59C (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_18001C59C.c)
 *     ?GetName@RendererResource@Engine@Spectre@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ @ 0x1800295BC (-GetName@RendererResource@Engine@Spectre@@QEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloca.c)
 *     ?SetName@RendererResource@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800297A4 (-SetName@RendererResource@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@std@@V-$allocat.c)
 *     ?Create@Texture@Engine@Spectre@@QEAAXIIIW4Format@23@W4Usage@23@IPEBXIPEAVRenderDevice@23@@Z @ 0x180055E20 (-Create@Texture@Engine@Spectre@@QEAAXIIIW4Format@23@W4Usage@23@IPEBXIPEAVRenderDevice@23@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_5efd0f16faa6f6439fdb99826dc3e8ab_::operator()(__int64 a1, __int64 *a2, unsigned int a3, int a4)
{
  __int64 v8; // rbx
  _QWORD *Name; // rax
  void **v10; // rax
  std::_Ref_count_base *v11; // rcx
  rsize_t v12; // [rsp+40h] [rbp-88h]
  _QWORD v13[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD v14[4]; // [rsp+80h] [rbp-48h] BYREF

  v8 = *a2;
  Name = Spectre::Engine::RendererResource::GetName(*(_QWORD *)a1, v14);
  v10 = (void **)std::operator+<char>(v13, Name, (__int64)"Texture");
  Spectre::Engine::RendererResource::SetName(v8, v10);
  std::string::_Tidy_deallocate((__int64)v14);
  LODWORD(v12) = 0;
  Spectre::Engine::Texture::Create(
    *a2,
    **(_DWORD **)(a1 + 8),
    **(_DWORD **)(a1 + 16),
    0,
    a3,
    0,
    **(_DWORD **)(a1 + 24) | a4,
    0LL,
    v12,
    **(struct Spectre::Engine::RenderDevice ***)(a1 + 32));
  v11 = (std::_Ref_count_base *)a2[1];
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
}
