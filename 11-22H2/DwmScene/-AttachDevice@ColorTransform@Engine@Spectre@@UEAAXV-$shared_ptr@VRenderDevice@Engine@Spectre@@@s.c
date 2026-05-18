/*
 * XREFs of ?AttachDevice@ColorTransform@Engine@Spectre@@UEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18008F650
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??0EngineNotImplException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18004AC7C (--0EngineNotImplException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocat.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Spectre::Engine::ColorTransform::AttachDevice(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // r8
  std::_Ref_count_base *v7; // rcx
  _QWORD v8[4]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v9[4]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+80h] [rbp-48h] BYREF

  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a2 + 96LL))(*a2, 1LL) )
  {
    v4 = *(_QWORD *)(a1 + 144);
    if ( !v4 || ((v4 - 1) & v4) != 0 )
    {
      std::string::string(
        v9,
        (__int64)"ColorTransform::CreateResources() -- volume texture must be power of two below feature level 10.0");
      v5 = std::string::string(
             v8,
             (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engi"
                      "ne\\colortransform.cpp");
      Spectre::Engine::EngineNotImplException::EngineNotImplException(pExceptionObject, (__int64)v5, v6, (__int64)v9);
      throw (Spectre::Engine::EngineNotImplException *)pExceptionObject;
    }
  }
  v7 = (std::_Ref_count_base *)a2[1];
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
}
