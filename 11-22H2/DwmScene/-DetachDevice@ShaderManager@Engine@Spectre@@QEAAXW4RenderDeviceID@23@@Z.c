/*
 * XREFs of ?DetachDevice@ShaderManager@Engine@Spectre@@QEAAXW4RenderDeviceID@23@@Z @ 0x18004F884
 * Callers:
 *     ?DeleteDevice@Engine@1Spectre@@QEAAX$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180033380 (-DeleteDevice@Engine@1Spectre@@QEAAX$$QEAV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBW4RenderDeviceID@Engine@Spectre@@V?$shared_ptr@VDeviceConstantBuffer@Engine@Spectre@@@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18001D378 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBW4RenderDevic.c)
 *     ?DetachDevice@ShaderFamily@Engine@Spectre@@QEAAXW4RenderDeviceID@23@@Z @ 0x180060590 (-DetachDevice@ShaderFamily@Engine@Spectre@@QEAAXW4RenderDeviceID@23@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Spectre::Engine::ShaderManager::DetachDevice(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 *j; // rbx
  __int64 v6; // rcx
  __int64 **v7; // rax
  __int64 *i; // rax
  __int64 *v9; // rcx
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v4 = **(_QWORD **)(a1 + 18560);
  v10 = v4;
  while ( !*(_BYTE *)(v4 + 25) )
  {
    Spectre::Engine::ShaderFamily::DetachDevice(*(_QWORD *)(v4 + 64), a2);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<enum Spectre::Engine::RenderDeviceID const,std::shared_ptr<Spectre::Engine::DeviceConstantBuffer>>>>,std::_Iterator_base0>::operator++(&v10);
    v4 = v10;
  }
  j = **(__int64 ***)(a1 + 18576);
  while ( !*((_BYTE *)j + 25) )
  {
    v6 = j[11];
    if ( v6 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 24LL))(v6, a2);
    v7 = (__int64 **)j[2];
    if ( *((_BYTE *)v7 + 25) )
    {
      for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
        j = i;
      j = i;
    }
    else
    {
      v9 = *v7;
      for ( j = (__int64 *)j[2]; !*((_BYTE *)v9 + 25); v9 = (__int64 *)*v9 )
        j = v9;
    }
  }
}
