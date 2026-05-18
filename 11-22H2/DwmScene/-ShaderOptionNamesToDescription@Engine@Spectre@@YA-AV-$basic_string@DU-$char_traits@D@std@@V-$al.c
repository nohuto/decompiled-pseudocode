/*
 * XREFs of ?ShaderOptionNamesToDescription@Engine@Spectre@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$set@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z @ 0x180050870
 * Callers:
 *     ?GetShaderOptionsDescription@ShaderRegistration@Engine@Spectre@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_KQEBV45@H@Z @ 0x18007C2B8 (-GetShaderOptionsDescription@ShaderRegistration@Engine@Spectre@@YA-AV-$basic_string@DU-$char_tra.c)
 *     ?SetShaders@ShaderPipeline@Engine@Spectre@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_K0@Z @ 0x180087868 (-SetShaders@ShaderPipeline@Engine@Spectre@@QEAAXV-$basic_string@DU-$char_traits@D@s_ea_180087868.c)
 * Callees:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceConstantBuffer@Engine@Spectre@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18001D378 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4RenderDevic.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x18001DDE0 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall Spectre::Engine::ShaderOptionNamesToDescription(void **Src, __int64 **a2)
{
  char v4; // si
  __int64 v5; // rax
  _QWORD *v6; // rbx
  unsigned __int64 v7; // r8
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  std::string::string(Src, (__int64)"{");
  v4 = 0;
  v5 = **a2;
  v9 = v5;
  while ( !*(_BYTE *)(v5 + 25) )
  {
    v6 = (_QWORD *)(v5 + 32);
    if ( v4 )
      std::string::append(Src, ",", 1uLL);
    else
      v4 = 1;
    v7 = v6[2];
    if ( v6[3] >= 0x10uLL )
      v6 = (_QWORD *)*v6;
    std::string::append(Src, v6, v7);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceConstantBuffer>>>>,std::_Iterator_base0>::operator++(&v9);
    v5 = v9;
  }
  std::string::append(Src, "}", 1uLL);
  return Src;
}
