/*
 * XREFs of ?DetachDevice@Engine@1Spectre@@QEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18003395C
 * Callers:
 *     ?DeleteDevice@Engine@1Spectre@@QEAAX$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180033380 (-DeleteDevice@Engine@1Spectre@@QEAAX$$QEAV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ?Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ @ 0x18001DAE8 (-Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ.c)
 *     ?GetID@RenderDevice@Engine@Spectre@@QEBA?AW4RenderDeviceID@23@XZ @ 0x1800265D0 (-GetID@RenderDevice@Engine@Spectre@@QEBA-AW4RenderDeviceID@23@XZ.c)
 *     ?GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A044 (-GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre.c)
 *     ??$ForEachComponent@VComponent@Engine@Spectre@@@Scene@Engine@Spectre@@QEAAXAEBV?$function@$$A6AXAEBV?$shared_ptr@VComponent@Engine@Spectre@@@std@@@Z@std@@@Z @ 0x18002DD80 (--$ForEachComponent@VComponent@Engine@Spectre@@@Scene@Engine@Spectre@@QEAAXAEBV-$function@$$A6AX.c)
 *     ??$LexicalCast@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Utils@Spectre@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@3@@Z @ 0x18002E028 (--$LexicalCast@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@V-$basic_string@_WU.c)
 *     std::_Test_callable__lambda_d2182d05379cb014900636156d153b19___ @ 0x18002F7D4 (std--_Test_callable__lambda_d2182d05379cb014900636156d153b19___.c)
 *     ?GetObjectLifespanLock@Engine@1Spectre@@QEAAAEAVLockable@12@XZ @ 0x1800346DC (-GetObjectLifespanLock@Engine@1Spectre@@QEAAAEAVLockable@12@XZ.c)
 *     ?GetResourceByIndex@Engine@1Spectre@@QEAA?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@_K@Z @ 0x1800346FC (-GetResourceByIndex@Engine@1Spectre@@QEAA-AV-$shared_ptr@VRendererResource@Engine@Spectre@@@std@.c)
 *     ?GetResourceCount@Engine@1Spectre@@QEBA_KXZ @ 0x180034748 (-GetResourceCount@Engine@1Spectre@@QEBA_KXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall Spectre::Engine::Engine::DetachDevice(__int64 **this, __int64 *a2)
{
  Spectre::Engine::Lockable *ObjectLifespanLock; // rax
  unsigned int ID; // r15d
  __int64 v6; // rcx
  const char *v7; // rax
  _QWORD *v8; // rax
  void (__fastcall *v9)(__int64 **, _QWORD *); // r8
  std::_Ref_count_base *v10; // rcx
  __int64 *v11; // rbx
  __int64 *i; // rsi
  unsigned __int64 v13; // rbx
  __int64 v14; // rdx
  _QWORD *v15; // r8
  std::_Ref_count_base *v16; // rcx
  _BYTE v17[16]; // [rsp+38h] [rbp-71h] BYREF
  _BYTE v18[16]; // [rsp+48h] [rbp-61h] BYREF
  _BYTE v19[16]; // [rsp+58h] [rbp-51h] BYREF
  __int64 v20; // [rsp+68h] [rbp-41h] BYREF
  std::_Ref_count_base *v21; // [rsp+70h] [rbp-39h]
  _QWORD v22[7]; // [rsp+90h] [rbp-19h] BYREF
  _QWORD *v23; // [rsp+C8h] [rbp+1Fh]

  Spectre::Engine::Lockable::GetExclusiveLockIfNecessary((Spectre::Engine::Lockable *)(this + 1), (__int64)v19);
  ObjectLifespanLock = Spectre::Engine::Engine::GetObjectLifespanLock((Spectre::Engine::Engine *)this);
  Spectre::Engine::Lockable::GetExclusiveLockIfNecessary(ObjectLifespanLock, (__int64)v18);
  Spectre::Engine::Lockable::GetExclusiveLockIfNecessary((Spectre::Engine::Lockable *)(*a2 + 24), (__int64)v17);
  ID = Spectre::Engine::RenderDevice::GetID(*a2);
  v7 = (const char *)Spectre::Utils::LexicalCast<std::string,std::wstring>(&v20, (_QWORD *)(v6 + 80));
  if ( *((_QWORD *)v7 + 3) >= 0x10uLL )
    v7 = *(const char **)v7;
  Trace::LevelSettingsWrapper::Output(
    &gTraceLevelsNativeRenderer_Engine,
    3,
    "Engine::DetachDevice() -- detaching device id %u -- %s",
    ID,
    v7);
  std::string::_Tidy_deallocate((__int64)&v20);
  v8 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         &v20,
         a2);
  v9(this, v8);
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(&v20, a2);
  v23 = 0LL;
  if ( std::_Test_callable__lambda_d2182d05379cb014900636156d153b19___() )
  {
    v22[0] = &std::_Func_impl_no_alloc<_lambda_d2182d05379cb014900636156d153b19_,void,std::shared_ptr<Spectre::Engine::Component> const &>::`vftable';
    v22[1] = v20;
    v22[2] = v21;
    v10 = 0LL;
    v23 = v22;
  }
  else
  {
    v10 = v21;
  }
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  v11 = this[88];
  for ( i = this[89]; v11 != i; v11 += 2 )
  {
    Spectre::Engine::Lockable::GetExclusiveLockIfNecessary((Spectre::Engine::Lockable *)(*v11 + 16), (__int64)&v20);
    Spectre::Engine::Scene::ForEachComponent<Spectre::Engine::Component>(*v11, (__int64)v22);
    std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)&v20);
  }
  v13 = 0LL;
  if ( Spectre::Engine::Engine::GetResourceCount((Spectre::Engine::Engine *)this) )
  {
    do
    {
      Spectre::Engine::Engine::GetResourceByIndex(this, &v20, v13);
      if ( v20 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v20 + 24LL))(v20, ID);
      if ( v21 )
        std::_Ref_count_base::_Decref(v21);
      ++v13;
    }
    while ( v13 < Spectre::Engine::Engine::GetResourceCount((Spectre::Engine::Engine *)this) );
    v15 = v23;
  }
  if ( v15 )
  {
    LOBYTE(v14) = v15 != v22;
    (*(void (__fastcall **)(_QWORD *, __int64))(*v15 + 32LL))(v15, v14);
    v23 = 0LL;
  }
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v17);
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v18);
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v19);
  v16 = (std::_Ref_count_base *)a2[1];
  if ( v16 )
    std::_Ref_count_base::_Decref(v16);
}
