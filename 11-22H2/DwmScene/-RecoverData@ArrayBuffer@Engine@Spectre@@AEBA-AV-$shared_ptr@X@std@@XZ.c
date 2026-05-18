/*
 * XREFs of ?RecoverData@ArrayBuffer@Engine@Spectre@@AEBA?AV?$shared_ptr@X@std@@XZ @ 0x180088CB8
 * Callers:
 *     ??$GetData@I@ArrayBuffer@Engine@Spectre@@QEBA?AV?$shared_ptr@I@std@@W4EBufferGetDataOption@12@@Z @ 0x180047340 (--$GetData@I@ArrayBuffer@Engine@Spectre@@QEBA-AV-$shared_ptr@I@std@@W4EBufferGetDataOption@12@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A044 (-GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall Spectre::Engine::ArrayBuffer::RecoverData(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 v5; // [rsp+28h] [rbp-40h] BYREF
  std::_Ref_count_base *v6; // [rsp+30h] [rbp-38h]
  __int64 v7; // [rsp+38h] [rbp-30h] BYREF
  std::_Ref_count_base *v8; // [rsp+40h] [rbp-28h]
  _BYTE v9[32]; // [rsp+48h] [rbp-20h] BYREF

  if ( *(_QWORD *)(a1 + 128) )
  {
    std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
      &v7,
      (_QWORD *)(**(_QWORD **)(a1 + 120) + 40LL));
    v3 = v7;
    std::weak_ptr<Spectre::Engine::RenderDevice>::lock(v7 + 72, &v5);
    Spectre::Engine::Lockable::GetExclusiveLockIfNecessary((Spectre::Engine::Lockable *)(v5 + 24), (__int64)v9);
    if ( v6 )
      std::_Ref_count_base::_Decref(v6);
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v3 + 40LL))(v3, a2);
    std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v9);
    if ( v8 )
      std::_Ref_count_base::_Decref(v8);
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  return a2;
}
