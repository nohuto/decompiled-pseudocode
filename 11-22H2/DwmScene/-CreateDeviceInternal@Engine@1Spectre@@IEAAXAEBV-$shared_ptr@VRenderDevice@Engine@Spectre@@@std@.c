/*
 * XREFs of ?CreateDeviceInternal@Engine@1Spectre@@IEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180032CC0
 * Callers:
 *     ??$CreateDevice@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@Engine@0Spectre@@QEAA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@UDeviceDescription@01@UOutputDescription@01@@Z @ 0x180015AE0 (--$CreateDevice@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@Engine@0Spectre@@QEAA-AV-$shared_ptr@V.c)
 *     ??$CreateDevice@VRenderDeviceGeneric@Engine@Spectre@@@Engine@0Spectre@@QEAA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@UDeviceDescription@01@UOutputDescription@01@@Z @ 0x180015C10 (--$CreateDevice@VRenderDeviceGeneric@Engine@Spectre@@@Engine@0Spectre@@QEAA-AV-$shared_ptr@VRend.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18000CA79 (_CxxThrowException_0.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x180010DD0 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$?0VScene@Engine@Spectre@@$0A@@?$weak_ptr@VScene@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VScene@Engine@Spectre@@@1@@Z @ 0x180015604 (--$-0VScene@Engine@Spectre@@$0A@@-$weak_ptr@VScene@Engine@Spectre@@@std@@QEAA@AEBV-$shared_ptr@V.c)
 *     ?Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ @ 0x18001DAE8 (-Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ.c)
 *     ?GetID@RenderDevice@Engine@Spectre@@QEBA?AW4RenderDeviceID@23@XZ @ 0x1800265D0 (-GetID@RenderDevice@Engine@Spectre@@QEBA-AW4RenderDeviceID@23@XZ.c)
 *     ?GetOutput@RenderDevice@Engine@Spectre@@QEBA?AV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@I@Z @ 0x180026618 (-GetOutput@RenderDevice@Engine@Spectre@@QEBA-AV-$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@.c)
 *     ?GetOutputCount@RenderDevice@Engine@Spectre@@QEBAIXZ @ 0x18002666C (-GetOutputCount@RenderDevice@Engine@Spectre@@QEBAIXZ.c)
 *     ?NotifyAttachComplete@RenderDevice@Engine@Spectre@@IEAAXXZ @ 0x180026D6C (-NotifyAttachComplete@RenderDevice@Engine@Spectre@@IEAAXXZ.c)
 *     ?GetOption@RendererResource@Engine@Spectre@@QEBA_NW4EResourceOption@123@@Z @ 0x1800295E4 (-GetOption@RendererResource@Engine@Spectre@@QEBA_NW4EResourceOption@123@@Z.c)
 *     ?GetExclusiveLock@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x180029FF0 (-GetExclusiveLock@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre@@@std@@XZ.c)
 *     ?GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A044 (-GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre.c)
 *     ?VerifyWriteAccess@Lockable@Engine@Spectre@@QEBAXXZ @ 0x18002A384 (-VerifyWriteAccess@Lockable@Engine@Spectre@@QEBAXXZ.c)
 *     std::_Func_impl_no_alloc__lambda_991510985cb39e07691d1fb2432ec0d9__void_std::shared_ptr_Spectre::Engine::Component__const_&_::_Func_impl_no_alloc__lambda_991510985cb39e07691d1fb2432ec0d9__void_std::shared_ptr_Spectre::Engine::Component__const_&___lambda_991510985cb39e07691d1fb2432ec0d9__0_ @ 0x18002D7A4 (std--_Func_impl_no_alloc__lambda_991510985cb39e07691d1fb2432ec0d9__void_std--shared_ptr_Spectre-.c)
 *     ??$ForEachComponent@VComponent@Engine@Spectre@@@Scene@Engine@Spectre@@QEAAXAEBV?$function@$$A6AXAEBV?$shared_ptr@VComponent@Engine@Spectre@@@std@@@Z@std@@@Z @ 0x18002DD80 (--$ForEachComponent@VComponent@Engine@Spectre@@@Scene@Engine@Spectre@@QEAAXAEBV-$function@$$A6AX.c)
 *     ??$LexicalCast@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Utils@Spectre@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@3@@Z @ 0x18002E028 (--$LexicalCast@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@V-$basic_string@_WU.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@@?$vector@V?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@VFrameBuffer@Engine@Spectre@@@1@QEAV21@AEBV21@@Z @ 0x18002E528 (--$_Emplace_reallocate@AEBV-$shared_ptr@VFrameBuffer@Engine@Spectre@@@std@@@-$vector@V-$shared_p.c)
 *     std::_Test_callable__lambda_991510985cb39e07691d1fb2432ec0d9___ @ 0x18002F7C8 (std--_Test_callable__lambda_991510985cb39e07691d1fb2432ec0d9___.c)
 *     ??$_Try_emplace@V?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@$$V@?$map@V?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VDisplay@Engine@Spectre@@@2@U?$owner_less@V?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@@2@V?$allocator@U?$pair@$$CBV?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VDisplay@Engine@Spectre@@@2@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VDisplay@Engine@Spectre@@@2@@std@@PEAX@std@@_N@1@$$QEAV?$weak_ptr@VRenderDevice@Engine@Spectre@@@1@@Z @ 0x18002FDBC (--$_Try_emplace@V-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@$$V@-$map@V-$weak_ptr@VRenderDev.c)
 *     ?CreateDisplay@Engine@1Spectre@@QEAA?AV?$shared_ptr@VDisplay@Engine@Spectre@@@std@@W4RefreshPolicy@Display@12@W4RenderingMode@612@@Z @ 0x180033108 (-CreateDisplay@Engine@1Spectre@@QEAA-AV-$shared_ptr@VDisplay@Engine@Spectre@@@std@@W4RefreshPoli.c)
 *     ?GetCamera@Engine@1Spectre@@QEBA?AV?$shared_ptr@VCamera@Engine@Spectre@@@std@@_KV?$shared_ptr@VScene@Engine@Spectre@@@4@@Z @ 0x180033E34 (-GetCamera@Engine@1Spectre@@QEBA-AV-$shared_ptr@VCamera@Engine@Spectre@@@std@@_KV-$shared_ptr@VS.c)
 *     ?GetObjectLifespanLock@Engine@1Spectre@@QEAAAEAVLockable@12@XZ @ 0x1800346DC (-GetObjectLifespanLock@Engine@1Spectre@@QEAAAEAVLockable@12@XZ.c)
 *     ?GetResourceByIndex@Engine@1Spectre@@QEAA?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@_K@Z @ 0x1800346FC (-GetResourceByIndex@Engine@1Spectre@@QEAA-AV-$shared_ptr@VRendererResource@Engine@Spectre@@@std@.c)
 *     ?GetResourceCount@Engine@1Spectre@@QEBA_KXZ @ 0x180034748 (-GetResourceCount@Engine@1Spectre@@QEBA_KXZ.c)
 *     ?PrintDevices@Engine@1Spectre@@QEAAXXZ @ 0x1800358C4 (-PrintDevices@Engine@1Spectre@@QEAAXXZ.c)
 *     ?ProcessNewResources@Engine@1Spectre@@IEAAXXZ @ 0x180035AA8 (-ProcessNewResources@Engine@1Spectre@@IEAAXXZ.c)
 *     ?AttachDevice@ShaderManager@Engine@Spectre@@QEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18004F618 (-AttachDevice@ShaderManager@Engine@Spectre@@QEAAXV-$shared_ptr@VRenderDevice@Engine@Spectre@@@st.c)
 *     ?AddCamera@Display@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VCamera@Engine@Spectre@@@std@@@Z @ 0x180057404 (-AddCamera@Display@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VCamera@Engine@Spectre@@@std@@@Z.c)
 *     ?AttachOutput@Display@Engine@Spectre@@QEAAXAEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@@Z @ 0x1800576E0 (-AttachOutput@Display@Engine@Spectre@@QEAAXAEBV-$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@.c)
 *     ??0EngineException@Engine@Spectre@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBV34@_N@Z @ 0x18006ECFC (--0EngineException@Engine@Spectre@@QEAA@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
void __fastcall Spectre::Engine::Engine::CreateDeviceInternal(Spectre::Engine::Engine *this, __int64 *a2)
{
  Spectre::Engine::Mutex *ObjectLifespanLock; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // r14
  unsigned int v7; // eax
  int v8; // r8d
  int ID; // eax
  const char *v10; // r8
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // rbx
  _QWORD *Output; // rax
  __int64 *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // r8
  unsigned __int64 i; // rbx
  __int64 v23; // rcx
  _QWORD *v24; // rcx
  __int64 *v25; // rbx
  __int64 *v26; // r14
  _QWORD *v27; // rdx
  __int64 v28; // [rsp+30h] [rbp-89h] BYREF
  std::_Ref_count_base *v29; // [rsp+38h] [rbp-81h]
  __int64 v30; // [rsp+40h] [rbp-79h] BYREF
  std::_Ref_count_base *v31; // [rsp+48h] [rbp-71h]
  _BYTE v32[16]; // [rsp+50h] [rbp-69h] BYREF
  _BYTE v33[16]; // [rsp+60h] [rbp-59h] BYREF
  std::_Ref_count_base *v34[2]; // [rsp+70h] [rbp-49h] BYREF
  _QWORD v35[4]; // [rsp+90h] [rbp-29h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+B0h] [rbp-9h] BYREF
  _QWORD *v37; // [rsp+E8h] [rbp+2Fh]

  Spectre::Engine::Lockable::GetExclusiveLock((Spectre::Engine::Engine *)((char *)this + 8), (__int64)v33);
  ObjectLifespanLock = Spectre::Engine::Engine::GetObjectLifespanLock(this);
  Spectre::Engine::Lockable::GetExclusiveLock(ObjectLifespanLock, (__int64)v32);
  Spectre::Engine::Lockable::VerifyWriteAccess((Spectre::Engine::Lockable *)(*a2 + 24));
  if ( !*((_DWORD *)this + 138) && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 32LL))(*a2) )
  {
    v5 = (_QWORD *)*((_QWORD *)this + 11);
    v6 = (_QWORD *)*((_QWORD *)this + 12);
    while ( v5 != v6 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 32LL))(*v5) )
      {
        std::string::string(
          v34,
          (__int64)"This Engine instance cannot create multiple devices because it was created with option General.Engine"
                   "DeviceMode==Single.");
        v7 = (unsigned int)std::string::string(
                             v35,
                             (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\c"
                                      "pp\\source\\engine\\engine.cpp");
        Spectre::Engine::EngineException::EngineException((unsigned int)pExceptionObject, v7, v8, (unsigned int)v34, 0);
        throw (Spectre::Engine::EngineException *)pExceptionObject;
      }
      v5 += 2;
    }
  }
  Trace::LevelSettingsWrapper::Output(
    &gTraceLevelsNativeRenderer_Engine,
    3,
    "-----------------------------------------------------------------------------------");
  Spectre::Utils::LexicalCast<std::string,std::wstring>(v35, (_QWORD *)(*a2 + 80));
  ID = Spectre::Engine::RenderDevice::GetID(*a2);
  Trace::LevelSettingsWrapper::Output(
    &gTraceLevelsNativeRenderer_Engine,
    3,
    "Engine::CreateDevice() -- attaching device id %u -- %s",
    ID,
    v10);
  std::string::_Tidy_deallocate((__int64)v35);
  if ( (unsigned int)Spectre::Engine::RenderDevice::GetOutputCount((Spectre::Engine::RenderDevice *)*a2) )
  {
    Spectre::Engine::Engine::CreateDisplay(this, &v30, v11, 0LL);
    *(_OWORD *)v34 = 0LL;
    Spectre::Engine::Engine::GetCamera(this, &v28, v12, v34);
    if ( v28 )
      Spectre::Engine::Display::AddCamera(v30, &v28);
    if ( v29 )
      std::_Ref_count_base::_Decref(v29);
    v13 = v30;
    Output = Spectre::Engine::RenderDevice::GetOutput(*a2, v34, 0);
    Spectre::Engine::Display::AttachOutput(v13, Output);
    if ( v34[1] )
      std::_Ref_count_base::_Decref(v34[1]);
    std::weak_ptr<Spectre::Engine::Scene>::weak_ptr<Spectre::Engine::Scene>(v34, a2);
    std::map<std::weak_ptr<Spectre::Engine::RenderDevice>,std::shared_ptr<Spectre::Engine::Display>,std::owner_less<std::weak_ptr<Spectre::Engine::RenderDevice>>,std::allocator<std::pair<std::weak_ptr<Spectre::Engine::RenderDevice> const,std::shared_ptr<Spectre::Engine::Display>>>>::_Try_emplace<std::weak_ptr<Spectre::Engine::RenderDevice>,>(
      (__int64 *)this + 23,
      (__int64)v35,
      (__int64)v34);
    v15 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
            &v28,
            &v30);
    v16 = *v15;
    *v15 = *(_QWORD *)(v17 + 48);
    *(_QWORD *)(v17 + 48) = v16;
    v18 = v15[1];
    v15[1] = *(_QWORD *)(v17 + 56);
    *(_QWORD *)(v17 + 56) = v18;
    if ( v29 )
      std::_Ref_count_base::_Decref(v29);
    if ( v34[1] )
      std::_Ref_count_base::_Decwref(v34[1]);
    if ( v31 )
      std::_Ref_count_base::_Decref(v31);
  }
  Spectre::Engine::Lockable::GetExclusiveLockIfNecessary((Spectre::Engine::Engine *)((char *)this + 112), (__int64)v34);
  v19 = (_QWORD *)*((_QWORD *)this + 12);
  if ( v19 == *((_QWORD **)this + 13) )
  {
    std::vector<std::shared_ptr<Spectre::Engine::FrameBuffer>>::_Emplace_reallocate<std::shared_ptr<Spectre::Engine::FrameBuffer> const &>(
      (_QWORD *)this + 11,
      *((char **)this + 12),
      a2);
  }
  else
  {
    std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(v19, a2);
    *((_QWORD *)this + 12) += 16LL;
  }
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v34);
  Spectre::Engine::Engine::ProcessNewResources(this);
  v20 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
          v34,
          a2);
  Spectre::Engine::ShaderManager::AttachDevice(v21, v20);
  for ( i = 0LL; i < Spectre::Engine::Engine::GetResourceCount(this); ++i )
  {
    Spectre::Engine::Engine::GetResourceByIndex(this, v34, i);
    if ( v34[0] && Spectre::Engine::RendererResource::GetOption((__int64)v34[0], 2) )
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v23 + 16LL))(v23, a2);
    if ( v34[1] )
      std::_Ref_count_base::_Decref(v34[1]);
  }
  std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(&v30, a2);
  v37 = 0LL;
  if ( std::_Test_callable__lambda_991510985cb39e07691d1fb2432ec0d9___() )
  {
    v24 = (_QWORD *)std::_Func_impl_no_alloc__lambda_991510985cb39e07691d1fb2432ec0d9__void_std::shared_ptr_Spectre::Engine::Component__const___::_Func_impl_no_alloc__lambda_991510985cb39e07691d1fb2432ec0d9__void_std::shared_ptr_Spectre::Engine::Component__const_____lambda_991510985cb39e07691d1fb2432ec0d9__0_(
                      pExceptionObject,
                      &v30);
    v37 = v24;
  }
  if ( v31 )
  {
    std::_Ref_count_base::_Decref(v31);
    v24 = v37;
  }
  v25 = (__int64 *)*((_QWORD *)this + 88);
  v26 = (__int64 *)*((_QWORD *)this + 89);
  if ( v25 != v26 )
  {
    do
    {
      Spectre::Engine::Lockable::GetExclusiveLockIfNecessary((Spectre::Engine::Lockable *)(*v25 + 16), (__int64)v34);
      Spectre::Engine::Scene::ForEachComponent<Spectre::Engine::Component>(*v25, (__int64)pExceptionObject);
      std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v34);
      v25 += 2;
    }
    while ( v25 != v26 );
    v24 = v37;
  }
  if ( v24 )
  {
    v27 = pExceptionObject;
    LOBYTE(v27) = v24 != pExceptionObject;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v24 + 32LL))(v24, v27);
  }
  Spectre::Engine::RenderDevice::NotifyAttachComplete((Spectre::Engine::RenderDevice *)*a2);
  Spectre::Engine::Engine::PrintDevices(this);
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v32);
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v33);
}
