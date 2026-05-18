/*
 * XREFs of ?GetShaderOptionsDescription@ShaderRegistration@Engine@Spectre@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_KQEBV45@H@Z @ 0x18007C2B8
 * Callers:
 *     ?RegisterShaders@BackgroundUnlit@ShaderProgramGenerator@@YAPEAXXZ @ 0x1800A5868 (-RegisterShaders@BackgroundUnlit@ShaderProgramGenerator@@YAPEAXXZ.c)
 *     ?RegisterShaders@ImageProcessingBlur@ShaderProgramGenerator@@YAPEAXXZ @ 0x1800A783C (-RegisterShaders@ImageProcessingBlur@ShaderProgramGenerator@@YAPEAXXZ.c)
 *     ?RegisterShaders@ImageProcessingCameraEffects@ShaderProgramGenerator@@YAPEAXXZ @ 0x1800A7D40 (-RegisterShaders@ImageProcessingCameraEffects@ShaderProgramGenerator@@YAPEAXXZ.c)
 *     ?RegisterShaders@ImageProcessingFullscreen@ShaderProgramGenerator@@YAPEAXXZ @ 0x1800AF408 (-RegisterShaders@ImageProcessingFullscreen@ShaderProgramGenerator@@YAPEAXXZ.c)
 *     ?RegisterShaders@Font@ShaderProgramGenerator@@YAPEAXXZ @ 0x1800AF69C (-RegisterShaders@Font@ShaderProgramGenerator@@YAPEAXXZ.c)
 *     ?RegisterShaders@UnlitShader@ShaderProgramGenerator@@YAPEAXXZ @ 0x1800AFA28 (-RegisterShaders@UnlitShader@ShaderProgramGenerator@@YAPEAXXZ.c)
 *     ?RegisterShaders@StandardShader@ShaderProgramGenerator@@YAPEAXXZ @ 0x1800B1AB4 (-RegisterShaders@StandardShader@ShaderProgramGenerator@@YAPEAXXZ.c)
 * Callees:
 *     ??$_Erase_head@V?$allocator@U?$_Tree_node@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAX@std@@@1@@Z @ 0x18004D844 (--$_Erase_head@V-$allocator@U-$_Tree_node@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@.c)
 *     ??$insert@$0A@$0A@@?$_Tree@V?$_Tset_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@std@@@std@@_N@1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@@Z @ 0x18004DEA4 (--$insert@$0A@$0A@@-$_Tree@V-$_Tset_traits@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 *     ??0?$set@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QEAA@XZ @ 0x18004E698 (--0-$set@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@U-$less@V-$basic_string@D.c)
 *     ?ShaderOptionNamesToDescription@Engine@Spectre@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$set@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z @ 0x180050870 (-ShaderOptionNamesToDescription@Engine@Spectre@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$al.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall Spectre::Engine::ShaderRegistration::GetShaderOptionsDescription(
        void **Src,
        __int64 a2,
        _QWORD *a3,
        int a4)
{
  int v8; // ebx
  void *v10[2]; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v11[32]; // [rsp+38h] [rbp-20h] BYREF

  v8 = 0;
  std::set<std::string>::set<std::string>(v10);
  if ( a4 > 0 )
  {
    do
    {
      if ( ((1LL << v8) & a2) != 0 )
        std::_Tree<std::_Tset_traits<std::string,std::less<std::string>,std::allocator<std::string>,0>>::insert<0,0>(
          (__int64 *)v10,
          (__int64)v11,
          a3);
      ++v8;
      a3 += 4;
    }
    while ( v8 < a4 );
  }
  Spectre::Engine::ShaderOptionNamesToDescription(Src, (__int64 **)v10);
  std::_Tree_val<std::_Tree_simple_types<std::string>>::_Erase_head<std::allocator<std::_Tree_node<std::string,void *>>>(
    v10,
    (__int64)v10);
  return Src;
}
