/*
 * XREFs of ?DeleteDevice@Engine@1Spectre@@QEAAX$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180033380
 * Callers:
 *     ?OnShutdown@Engine@1Spectre@@MEAAXXZ @ 0x180035310 (-OnShutdown@Engine@1Spectre@@MEAAXXZ.c)
 *     ?RemoveInvalidDevices@Engine@1Spectre@@IEAAXXZ @ 0x180035CAC (-RemoveInvalidDevices@Engine@1Spectre@@IEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ??4?$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180011020 (--4-$shared_ptr@VDeviceArrayBuffer@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??0?$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z @ 0x18001246C (--0-$shared_ptr@VShaderPropertyLayout@Engine@Spectre@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$?0VScene@Engine@Spectre@@$0A@@?$weak_ptr@VScene@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VScene@Engine@Spectre@@@1@@Z @ 0x180015604 (--$-0VScene@Engine@Spectre@@$0A@@-$weak_ptr@VScene@Engine@Spectre@@@std@@QEAA@AEBV-$shared_ptr@V.c)
 *     ??$?8VTween@Tweening@Utils@Spectre@@V0123@@std@@YA_NAEBV?$shared_ptr@VTween@Tweening@Utils@Spectre@@@0@0@Z @ 0x180015678 (--$-8VTween@Tweening@Utils@Spectre@@V0123@@std@@YA_NAEBV-$shared_ptr@VTween@Tweening@Utils@Spect.c)
 *     ?Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ @ 0x18001DAE8 (-Output@LevelSettingsWrapper@Trace@@QEAAXW4Level@2@PEBDZZ.c)
 *     ?DeleteOutput@RenderDevice@Engine@Spectre@@QEAAX$$QEAV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@@Z @ 0x1800262CC (-DeleteOutput@RenderDevice@Engine@Spectre@@QEAAX$$QEAV-$shared_ptr@VIRenderOutput@Engine@Spectre.c)
 *     ?GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ @ 0x180026598 (-GetEngine@RenderDevice@Engine@Spectre@@QEBAPEAV223@XZ.c)
 *     ?GetID@RenderDevice@Engine@Spectre@@QEBA?AW4RenderDeviceID@23@XZ @ 0x1800265D0 (-GetID@RenderDevice@Engine@Spectre@@QEBA-AW4RenderDeviceID@23@XZ.c)
 *     ?GetOutput@RenderDevice@Engine@Spectre@@QEBA?AV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@@I@Z @ 0x180026618 (-GetOutput@RenderDevice@Engine@Spectre@@QEBA-AV-$shared_ptr@VIRenderOutput@Engine@Spectre@@@std@.c)
 *     ?GetOutputCount@RenderDevice@Engine@Spectre@@QEBAIXZ @ 0x18002666C (-GetOutputCount@RenderDevice@Engine@Spectre@@QEBAIXZ.c)
 *     ?IsActive@RenderDevice@Engine@Spectre@@QEBA_NXZ @ 0x180026CE4 (-IsActive@RenderDevice@Engine@Spectre@@QEBA_NXZ.c)
 *     ?Shutdown@RenderDevice@Engine@Spectre@@QEAAXXZ @ 0x180027148 (-Shutdown@RenderDevice@Engine@Spectre@@QEAAXXZ.c)
 *     ??1?$shared_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180029F20 (--1-$shared_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ?GetExclusiveLock@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x180029FF0 (-GetExclusiveLock@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre@@@std@@XZ.c)
 *     ?GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A044 (-GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre.c)
 *     ?GetSharedLockIfNecessary@Lockable@Engine@Spectre@@QEBA?AV?$shared_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A1C4 (-GetSharedLockIfNecessary@Lockable@Engine@Spectre@@QEBA-AV-$shared_lock@VMutex@Engine@Spectre@@@.c)
 *     ??1?$unique_lock@Vmutex@std@@@std@@QEAA@XZ @ 0x18002B860 (--1-$unique_lock@Vmutex@std@@@std@@QEAA@XZ.c)
 *     ??$LexicalCast@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Utils@Spectre@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@3@@Z @ 0x18002E028 (--$LexicalCast@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@V-$basic_string@_WU.c)
 *     ??$_Find_lower_bound@V?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@@?$_Tree@V?$_Tmap_traits@V?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VDisplay@Engine@Spectre@@@2@U?$owner_less@V?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@@2@V?$allocator@U?$pair@$$CBV?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VDisplay@Engine@Spectre@@@2@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VDisplay@Engine@Spectre@@@2@@std@@PEAX@std@@@1@AEBV?$weak_ptr@VRenderDevice@Engine@Spectre@@@1@@Z @ 0x18002F01C (--$_Find_lower_bound@V-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@@-$_Tree@V-$_Tmap_traits@V-.c)
 *     ??$_Try_emplace@V?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@$$V@?$map@V?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VDisplay@Engine@Spectre@@@2@U?$owner_less@V?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@@2@V?$allocator@U?$pair@$$CBV?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VDisplay@Engine@Spectre@@@2@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VDisplay@Engine@Spectre@@@2@@std@@PEAX@std@@_N@1@$$QEAV?$weak_ptr@VRenderDevice@Engine@Spectre@@@1@@Z @ 0x18002FDBC (--$_Try_emplace@V-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@$$V@-$map@V-$weak_ptr@VRenderDev.c)
 *     ?DeleteDisplay@Engine@1Spectre@@QEAAX$$QEAV?$shared_ptr@VDisplay@Engine@Spectre@@@std@@@Z @ 0x1800338B0 (-DeleteDisplay@Engine@1Spectre@@QEAAX$$QEAV-$shared_ptr@VDisplay@Engine@Spectre@@@std@@@Z.c)
 *     ?DetachDevice@Engine@1Spectre@@QEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x18003395C (-DetachDevice@Engine@1Spectre@@QEAAXV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z.c)
 *     ?GetDeviceIndex@Engine@1Spectre@@QEAAIAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x1800342A8 (-GetDeviceIndex@Engine@1Spectre@@QEAAIAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z.c)
 *     ?GetObjectLifespanLock@Engine@1Spectre@@QEAAAEAVLockable@12@XZ @ 0x1800346DC (-GetObjectLifespanLock@Engine@1Spectre@@QEAAAEAVLockable@12@XZ.c)
 *     ?InvokeCallback@Engine@1Spectre@@IEAAXW4ESpectreNativeRenderCallbackType@12@V?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VIRenderOutput@Engine@Spectre@@@5@@Z @ 0x180034E40 (-InvokeCallback@Engine@1Spectre@@IEAAXW4ESpectreNativeRenderCallbackType@12@V-$shared_ptr@VRende.c)
 *     ?LogInstanceCounts@Engine@1Spectre@@AEBAXXZ @ 0x180034F18 (-LogInstanceCounts@Engine@1Spectre@@AEBAXXZ.c)
 *     ?PrintDevices@Engine@1Spectre@@QEAAXXZ @ 0x1800358C4 (-PrintDevices@Engine@1Spectre@@QEAAXXZ.c)
 *     ?RemoveExpiredResources@Engine@1Spectre@@QEAAXXZ @ 0x180035C08 (-RemoveExpiredResources@Engine@1Spectre@@QEAAXXZ.c)
 *     ?SendDevicePerformanceTelemetry@Engine@1Spectre@@IEAAXV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@@Z @ 0x180036528 (-SendDevicePerformanceTelemetry@Engine@1Spectre@@IEAAXV-$shared_ptr@VRenderDevice@Engine@Spectre.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VDisplay@Engine@Spectre@@@2@U?$owner_less@V?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@@2@V?$allocator@U?$pair@$$CBV?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@V?$shared_ptr@VDisplay@Engine@Spectre@@@2@@std@@@2@$0A@@std@@@std@@QEAA_KAEBV?$weak_ptr@VRenderDevice@Engine@Spectre@@@2@@Z @ 0x180038678 (-erase@-$_Tree@V-$_Tmap_traits@V-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@V-$shared_ptr@VDi.c)
 *     ?DetachDevice@ShaderManager@Engine@Spectre@@QEAAXW4RenderDeviceID@23@@Z @ 0x18004F884 (-DetachDevice@ShaderManager@Engine@Spectre@@QEAAXW4RenderDeviceID@23@@Z.c)
 *     ?FlushState@ShaderManager@Engine@Spectre@@QEAAXXZ @ 0x18004FA38 (-FlushState@ShaderManager@Engine@Spectre@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall Spectre::Engine::Engine::DeleteDevice(
        Spectre::Engine::Engine *this,
        Spectre::Engine::RenderDevice **a2)
{
  Spectre::Engine::RenderDevice *v3; // rsi
  std::_Ref_count_base *v4; // rbx
  _QWORD *v5; // rax
  Spectre::Engine::Mutex *ObjectLifespanLock; // rax
  _QWORD *v7; // rax
  int ID; // eax
  const char *v9; // rdx
  _QWORD *i; // rcx
  __int64 v11; // rcx
  std::_Ref_count_base *v12; // rcx
  unsigned int v13; // r13d
  Spectre::Engine::RenderDevice *v14; // rcx
  unsigned int OutputCount; // r15d
  unsigned int j; // r14d
  std::_Ref_count_base *v17; // rbx
  __int64 v18; // rdx
  _BOOL8 v19; // rbx
  __int64 v20; // rax
  unsigned int k; // ebx
  Spectre::Engine::RenderDevice *v22; // rcx
  _QWORD *v23; // rsi
  __int64 *v24; // r14
  __int64 *m; // rbx
  std::_Ref_count_base *v26; // rcx
  std::_Ref_count_base *v27[2]; // [rsp+30h] [rbp-69h] BYREF
  Spectre::Engine::RenderDevice *v28; // [rsp+40h] [rbp-59h] BYREF
  std::_Ref_count_base *v29; // [rsp+48h] [rbp-51h]
  __int64 v30; // [rsp+50h] [rbp-49h] BYREF
  std::_Ref_count_base *v31; // [rsp+58h] [rbp-41h]
  _QWORD v32[3]; // [rsp+60h] [rbp-39h] BYREF
  _BYTE v33[16]; // [rsp+78h] [rbp-21h] BYREF
  _BYTE v34[16]; // [rsp+88h] [rbp-11h] BYREF
  _QWORD v35[4]; // [rsp+98h] [rbp-1h] BYREF

  v28 = *a2;
  v3 = v28;
  v4 = a2[1];
  v29 = v4;
  *a2 = 0LL;
  a2[1] = 0LL;
  *(_OWORD *)v27 = 0LL;
  v5 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         &v30,
         &v28);
  Spectre::Engine::Engine::InvokeCallback(this, 8LL, v5, v27);
  Spectre::Engine::Lockable::GetExclusiveLockIfNecessary((Spectre::Engine::Engine *)((char *)this + 8), (__int64)v34);
  ObjectLifespanLock = Spectre::Engine::Engine::GetObjectLifespanLock(this);
  Spectre::Engine::Lockable::GetExclusiveLock(ObjectLifespanLock, (__int64)v33);
  v7 = std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
         v27,
         &v28);
  Spectre::Engine::Engine::SendDevicePerformanceTelemetry(this, v7);
  Trace::LevelSettingsWrapper::Output(
    &gTraceLevelsNativeRenderer_Engine,
    3,
    "-----------------------------------------------------------------------------------");
  Spectre::Utils::LexicalCast<std::string,std::wstring>(v35, (_QWORD *)v3 + 10);
  ID = Spectre::Engine::RenderDevice::GetID((__int64)v3);
  Trace::LevelSettingsWrapper::Output(
    &gTraceLevelsNativeRenderer_Engine,
    3,
    "Engine::DeleteDevice() -- removing device id %u -- %s",
    ID,
    v9);
  std::string::_Tidy_deallocate((__int64)v35);
  Spectre::Engine::Lockable::GetSharedLockIfNecessary((Spectre::Engine::Engine *)((char *)this + 112), (__int64)v27);
  if ( Spectre::Engine::RenderDevice::GetEngine(v3) == this )
  {
    for ( i = (_QWORD *)*((_QWORD *)this + 11); i != *((_QWORD **)this + 12); i = (_QWORD *)(v11 + 16) )
    {
      if ( std::operator==<Spectre::Utils::Tweening::Tween,Spectre::Utils::Tweening::Tween>(i, &v28) )
      {
        std::shared_lock<Spectre::Engine::Mutex>::~shared_lock<Spectre::Engine::Mutex>((__int64)v27);
        Spectre::Engine::Lockable::GetExclusiveLockIfNecessary(
          (Spectre::Engine::RenderDevice *)((char *)v3 + 24),
          (__int64)v35);
        v13 = Spectre::Engine::RenderDevice::GetID((__int64)v3);
        OutputCount = Spectre::Engine::RenderDevice::GetOutputCount(v14);
        for ( j = 0; j < OutputCount; ++j )
        {
          Spectre::Engine::RenderDevice::GetOutput((__int64)v3, v27, j);
          v17 = v27[0];
          Spectre::Engine::Lockable::GetExclusiveLock((std::_Ref_count_base *)((char *)v27[0] + 8), (__int64)v32);
          (*(void (__fastcall **)(std::_Ref_count_base *, __int64 *))(*(_QWORD *)v17 + 320LL))(v17, &v30);
          (*(void (__fastcall **)(std::_Ref_count_base *, _QWORD))(*(_QWORD *)v17 + 360LL))(v17, 0LL);
          std::unique_lock<std::mutex>::~unique_lock<std::mutex>((__int64)&v30);
          std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v32);
          if ( v27[1] )
            std::_Ref_count_base::_Decref(v27[1]);
        }
        std::weak_ptr<Spectre::Engine::Scene>::weak_ptr<Spectre::Engine::Scene>(v27, &v28);
        v18 = *(_QWORD *)(std::_Tree<std::_Tmap_traits<std::weak_ptr<Spectre::Engine::RenderDevice>,std::shared_ptr<Spectre::Engine::Display>,std::owner_less<std::weak_ptr<Spectre::Engine::RenderDevice>>,std::allocator<std::pair<std::weak_ptr<Spectre::Engine::RenderDevice> const,std::shared_ptr<Spectre::Engine::Display>>>,0>>::_Find_lower_bound<std::weak_ptr<Spectre::Engine::RenderDevice>>(
                            (__int64 *)this + 23,
                            (__int64)v32,
                            (__int64)v27)
                        + 16);
        v19 = !*(_BYTE *)(v18 + 25) && v27[1] >= (std::_Ref_count_base *)*(_QWORD *)(v18 + 40);
        if ( v27[1] )
          std::_Ref_count_base::_Decwref(v27[1]);
        if ( v19 )
        {
          std::weak_ptr<Spectre::Engine::Scene>::weak_ptr<Spectre::Engine::Scene>(v27, &v28);
          v20 = std::map<std::weak_ptr<Spectre::Engine::RenderDevice>,std::shared_ptr<Spectre::Engine::Display>,std::owner_less<std::weak_ptr<Spectre::Engine::RenderDevice>>,std::allocator<std::pair<std::weak_ptr<Spectre::Engine::RenderDevice> const,std::shared_ptr<Spectre::Engine::Display>>>>::_Try_emplace<std::weak_ptr<Spectre::Engine::RenderDevice>,>(
                  (__int64 *)this + 23,
                  (__int64)v32,
                  (__int64)v27);
          std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
            &v30,
            (_QWORD *)(*(_QWORD *)v20 + 48LL));
          if ( v27[1] )
            std::_Ref_count_base::_Decwref(v27[1]);
          std::weak_ptr<Spectre::Engine::Scene>::weak_ptr<Spectre::Engine::Scene>(v27, &v28);
          std::_Tree<std::_Tmap_traits<std::weak_ptr<Spectre::Engine::RenderDevice>,std::shared_ptr<Spectre::Engine::Display>,std::owner_less<std::weak_ptr<Spectre::Engine::RenderDevice>>,std::allocator<std::pair<std::weak_ptr<Spectre::Engine::RenderDevice> const,std::shared_ptr<Spectre::Engine::Display>>>,0>>::erase(
            (char *)this + 184,
            v27);
          if ( v27[1] )
            std::_Ref_count_base::_Decwref(v27[1]);
          Spectre::Engine::Engine::DeleteDisplay(this, &v30);
          if ( v31 )
            std::_Ref_count_base::_Decref(v31);
        }
        std::shared_ptr<Spectre::Engine::ShaderPropertyLayout>::shared_ptr<Spectre::Engine::ShaderPropertyLayout>(
          v32,
          &v28);
        Spectre::Engine::Engine::DetachDevice(this);
        if ( Spectre::Engine::RenderDevice::IsActive(v3) )
          (*(void (**)(void))(*(_QWORD *)v3 + 8LL))();
        for ( k = 0; k < OutputCount; ++k )
        {
          Spectre::Engine::RenderDevice::GetOutput((__int64)v3, v27, k);
          (*(void (__fastcall **)(std::_Ref_count_base *))(*(_QWORD *)v27[0] + 176LL))(v27[0]);
          if ( v27[1] )
            std::_Ref_count_base::_Decref(v27[1]);
        }
        Spectre::Engine::ShaderManager::FlushState(*((Spectre::Engine::ShaderManager **)this + 64));
        Spectre::Engine::ShaderManager::DetachDevice(*((_QWORD *)this + 64), v13);
        while ( (unsigned int)Spectre::Engine::RenderDevice::GetOutputCount(v3) )
        {
          Spectre::Engine::RenderDevice::GetOutput((__int64)v3, v27, 0);
          Spectre::Engine::RenderDevice::DeleteOutput(v3, (__int64 *)v27);
          if ( v27[1] )
            std::_Ref_count_base::_Decref(v27[1]);
        }
        if ( Spectre::Engine::RenderDevice::IsActive(v3) )
          Spectre::Engine::RenderDevice::Shutdown(v22);
        std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v35);
        Spectre::Engine::Lockable::GetExclusiveLockIfNecessary(
          (Spectre::Engine::Engine *)((char *)this + 112),
          (__int64)v35);
        v23 = (_QWORD *)(*((_QWORD *)this + 11) + 16LL * (unsigned int)Spectre::Engine::Engine::GetDeviceIndex(this));
        v24 = (__int64 *)*((_QWORD *)this + 12);
        for ( m = v23 + 2; m != v24; m += 2 )
        {
          std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(v23, m);
          v23 += 2;
        }
        v26 = *(std::_Ref_count_base **)(*((_QWORD *)this + 12) - 8LL);
        if ( v26 )
          std::_Ref_count_base::_Decref(v26);
        *((_QWORD *)this + 12) -= 16LL;
        std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v35);
        *(_OWORD *)v27 = 0LL;
        std::shared_ptr<Spectre::Engine::DeviceArrayBuffer>::operator=(&v28, (__int64 *)v27);
        if ( v27[1] )
          std::_Ref_count_base::_Decref(v27[1]);
        Trace::LevelSettingsWrapper::Output(
          &gTraceLevelsNativeRenderer_Engine,
          3,
          "Engine::DeleteDevice() -- completed");
        Trace::LevelSettingsWrapper::Output(
          &gTraceLevelsNativeRenderer_Engine,
          3,
          "-----------------------------------------------------------------------------------");
        Spectre::Engine::Engine::PrintDevices(this);
        Spectre::Engine::Engine::RemoveExpiredResources(this);
        Spectre::Engine::Engine::LogInstanceCounts(this);
        std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v33);
        std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v34);
        v12 = v29;
        if ( !v29 )
          return;
        goto LABEL_8;
      }
    }
  }
  Trace::LevelSettingsWrapper::Output(
    &gTraceLevelsNativeRenderer_Engine,
    3,
    "Engine::DeleteDevice() -- device is not attached to this engine");
  std::shared_lock<Spectre::Engine::Mutex>::~shared_lock<Spectre::Engine::Mutex>((__int64)v27);
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v33);
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v34);
  if ( v4 )
  {
    v12 = v4;
LABEL_8:
    std::_Ref_count_base::_Decref(v12);
  }
}
