/*
 * XREFs of ?RemoveExpiredResources@Engine@1Spectre@@QEAAXXZ @ 0x180035C08
 * Callers:
 *     ?DeleteDevice@Engine@1Spectre@@QEAAX$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180033380 (-DeleteDevice@Engine@1Spectre@@QEAAX$$QEAV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z.c)
 * Callees:
 *     ??4?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800320E0 (--4-$weak_ptr@VRendererResource@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?erase@?$vector@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@V?$allocator@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$weak_ptr@VRendererResource@Engine@Spectre@@@std@@@std@@@std@@@2@0@Z @ 0x18003879C (-erase@-$vector@V-$weak_ptr@VRendererResource@Engine@Spectre@@@std@@V-$allocator@V-$weak_ptr@VRe.c)
 */

void __fastcall Spectre::Engine::Engine::RemoveExpiredResources(Spectre::Engine::Engine *this)
{
  __int64 *v1; // rsi
  char *v2; // r14
  __int64 *i; // rbx
  __int64 v5; // rax
  __int64 *j; // rdi
  __int64 v7; // rax
  char v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = (__int64 *)*((_QWORD *)this + 112);
  v2 = (char *)this + 888;
  for ( i = (__int64 *)*((_QWORD *)this + 111); i != v1; i += 2 )
  {
    v5 = i[1];
    if ( !v5 || !*(_DWORD *)(v5 + 8) )
      break;
  }
  if ( i != v1 )
  {
    for ( j = i + 2; j != v1; j += 2 )
    {
      v7 = j[1];
      if ( v7 && *(_DWORD *)(v7 + 8) )
      {
        std::weak_ptr<Spectre::Engine::RendererResource>::operator=(i, j);
        i += 2;
      }
    }
  }
  std::vector<std::weak_ptr<Spectre::Engine::RendererResource>>::erase(v2, &v8, i, *((_QWORD *)this + 112));
}
