/*
 * XREFs of ??0ShaderFamily@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VShaderManager@Engine@Spectre@@@4@V?$shared_ptr@VIShaderExtension@Engine@Spectre@@@4@@Z @ 0x18005F804
 * Callers:
 *     ??$make_shared@VShaderFamily@Engine@Spectre@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@VShaderManager@Engine@Spectre@@@5@AEAV?$shared_ptr@VIShaderExtension@Engine@Spectre@@@5@@std@@YA?AV?$shared_ptr@VShaderFamily@Engine@Spectre@@@0@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@$$QEAV?$shared_ptr@VShaderManager@Engine@Spectre@@@0@AEAV?$shared_ptr@VIShaderExtension@Engine@Spectre@@@0@@Z @ 0x18004E278 (--$make_shared@VShaderFamily@Engine@Spectre@@AEAV-$basic_string@DU-$char_traits@D@std@@V-$alloca.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18000C8C8 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 *     ??0?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderOption@Engine@Spectre@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ShaderOption@Engine@Spectre@@@std@@@2@@std@@QEAA@XZ @ 0x18004E658 (--0-$map@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@W4ShaderOption@Engine@Spe.c)
 *     ??0?$set@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QEAA@XZ @ 0x18004E698 (--0-$set@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@U-$less@V-$basic_string@D.c)
 *     ??$_Buyheadnode@V?$allocator@U?$_Tree_node@U?$pair@$$CBMV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBMV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@@std@@PEAX@std@@SAPEAU01@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBMV?$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft@@@std@@PEAX@std@@@1@@Z @ 0x18005EC88 (--$_Buyheadnode@V-$allocator@U-$_Tree_node@U-$pair@$$CBMV-$ComPtr@UIDXGIAdapter1@@@WRL@Microsoft.c)
 *     ??$make_shared@VIShaderExtension@Engine@Spectre@@AEAY0BA@$$CBD@std@@YA?AV?$shared_ptr@VIShaderExtension@Engine@Spectre@@@0@AEAY0BA@$$CBD@Z @ 0x18005F4E8 (--$make_shared@VIShaderExtension@Engine@Spectre@@AEAY0BA@$$CBD@std@@YA-AV-$shared_ptr@VIShaderEx.c)
 *     ??0SharedMutex@Utils@Spectre@@QEAA@XZ @ 0x1800E0CE0 (--0SharedMutex@Utils@Spectre@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall Spectre::Engine::ShaderFamily::ShaderFamily(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  char v10; // bl
  std::_Ref_count_base *v11; // rcx
  std::_Ref_count_base *v12; // rcx
  __int64 v14; // [rsp+38h] [rbp-80h] BYREF
  std::_Ref_count_base *v15; // [rsp+40h] [rbp-78h]
  __int64 v16; // [rsp+48h] [rbp-70h]
  _QWORD *v17; // [rsp+50h] [rbp-68h]
  _QWORD *v18; // [rsp+58h] [rbp-60h]
  __int64 v19; // [rsp+60h] [rbp-58h] BYREF
  std::_Ref_count_base *v20; // [rsp+68h] [rbp-50h]
  __int64 v21; // [rsp+70h] [rbp-48h]

  v16 = a1;
  v21 = a2;
  v17 = a3;
  v18 = a4;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  std::string::string((_QWORD *)(a1 + 16), a2);
  std::set<std::string>::set<std::string>((_QWORD *)(a1 + 48));
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  std::map<std::string,enum Spectre::Engine::ShaderOption>::map<std::string,enum Spectre::Engine::ShaderOption>((_QWORD *)(a1 + 80));
  memset_0((void *)(a1 + 96), 0, 0xA0uLL);
  `eh vector constructor iterator'(
    (char *)(a1 + 96),
    16LL,
    10LL,
    (void (*)(void *))std::shared_ptr<Spectre::Engine::VertexBuffer>::shared_ptr<Spectre::Engine::VertexBuffer>);
  memset_0((void *)(a1 + 256), 0, 0xA0uLL);
  `eh vector constructor iterator'(
    (char *)(a1 + 256),
    16LL,
    10LL,
    (void (*)(void *))std::shared_ptr<Spectre::Engine::VertexBuffer>::shared_ptr<Spectre::Engine::VertexBuffer>);
  v14 = a1 + 416;
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_QWORD *)(a1 + 424) = 0LL;
  v8 = operator new(0x48uLL);
  *v8 = v8;
  v8[1] = v8;
  v8[2] = v8;
  *((_WORD *)v8 + 12) = 257;
  *(_QWORD *)(a1 + 416) = v8;
  *(_DWORD *)(a1 + 432) = 0;
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
    (_QWORD *)(a1 + 440),
    a3);
  if ( *a4 )
  {
    v9 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
           &v19,
           a4);
    v10 = 1;
  }
  else
  {
    v9 = std::make_shared<Spectre::Engine::IShaderExtension,char const (&)[16]>(&v14);
    v10 = 2;
  }
  *(_QWORD *)(a1 + 456) = 0LL;
  *(_QWORD *)(a1 + 464) = 0LL;
  *(_QWORD *)(a1 + 456) = *v9;
  *(_QWORD *)(a1 + 464) = v9[1];
  *v9 = 0LL;
  v9[1] = 0LL;
  if ( (v10 & 2) != 0 )
  {
    v10 &= ~2u;
    if ( v15 )
      std::_Ref_count_base::_Decref(v15);
  }
  if ( (v10 & 1) != 0 && v20 )
    std::_Ref_count_base::_Decref(v20);
  Spectre::Utils::SharedMutex::SharedMutex((Spectre::Utils::SharedMutex *)(a1 + 472));
  v14 = a1 + 480;
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_QWORD *)(a1 + 480) = std::_Tree_node<std::pair<float const,Microsoft::WRL::ComPtr<IDXGIAdapter1>>,void *>::_Buyheadnode<std::allocator<std::_Tree_node<std::pair<float const,Microsoft::WRL::ComPtr<IDXGIAdapter1>>,void *>>>();
  *(_QWORD *)(a1 + 496) = 0LL;
  *(_QWORD *)(a1 + 512) = 0LL;
  *(_QWORD *)(a1 + 520) = 15LL;
  *(_BYTE *)(a1 + 496) = 0;
  *(_QWORD *)(a1 + 528) = 0LL;
  *(_QWORD *)(a1 + 536) = 0LL;
  *(_QWORD *)(a1 + 544) = 0LL;
  *(_QWORD *)(a1 + 552) = 0LL;
  std::string::_Tidy_deallocate(a2);
  v11 = (std::_Ref_count_base *)a3[1];
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  v12 = (std::_Ref_count_base *)a4[1];
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
  return a1;
}
