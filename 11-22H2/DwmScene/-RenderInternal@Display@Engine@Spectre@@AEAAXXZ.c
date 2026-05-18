/*
 * XREFs of ?RenderInternal@Display@Engine@Spectre@@AEAAXXZ @ 0x180057BA4
 * Callers:
 *     ?Render@Display@Engine@Spectre@@QEAAXXZ @ 0x180057B28 (-Render@Display@Engine@Spectre@@QEAAXXZ.c)
 *     ?RenderThread@Display@Engine@Spectre@@AEAAXXZ @ 0x1800581C0 (-RenderThread@Display@Engine@Spectre@@AEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180010F54 (--1-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x180011CA0 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ??$?0VScene@Engine@Spectre@@$0A@@?$weak_ptr@VScene@Engine@Spectre@@@std@@QEAA@AEBV?$shared_ptr@VScene@Engine@Spectre@@@1@@Z @ 0x180015604 (--$-0VScene@Engine@Spectre@@$0A@@-$weak_ptr@VScene@Engine@Spectre@@@std@@QEAA@AEBV-$shared_ptr@V.c)
 *     ??4?$unique_lock@VMutex@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180017C90 (--4-$unique_lock@VMutex@Engine@Spectre@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??1?$shared_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180029F20 (--1-$shared_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ?GetExclusiveLock@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x180029FF0 (-GetExclusiveLock@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre@@@std@@XZ.c)
 *     ?GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA?AV?$unique_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A044 (-GetExclusiveLockIfNecessary@Lockable@Engine@Spectre@@QEAA-AV-$unique_lock@VMutex@Engine@Spectre.c)
 *     ?GetSharedLock@Lockable@Engine@Spectre@@QEBA?AV?$shared_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A19C (-GetSharedLock@Lockable@Engine@Spectre@@QEBA-AV-$shared_lock@VMutex@Engine@Spectre@@@std@@XZ.c)
 *     ?GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z @ 0x180034014 (-GetConfiguration@Engine@1Spectre@@QEBAAEAVIConfigurationManager@Utils@2@H@Z.c)
 *     ?GetCpuProfiler@Engine@1Spectre@@QEBA?AV?$shared_ptr@VCpuProfiler@Engine@Spectre@@@std@@XZ @ 0x18003405C (-GetCpuProfiler@Engine@1Spectre@@QEBA-AV-$shared_ptr@VCpuProfiler@Engine@Spectre@@@std@@XZ.c)
 *     ?GetObjectLifespanLock@Engine@1Spectre@@QEAAAEAVLockable@12@XZ @ 0x1800346DC (-GetObjectLifespanLock@Engine@1Spectre@@QEAAAEAVLockable@12@XZ.c)
 *     ?PresentFrame@Engine@1Spectre@@IEAAXAEBV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@4@AEAV?$unique_lock@VMutex@Engine@Spectre@@@4@22@Z @ 0x18003565C (-PresentFrame@Engine@1Spectre@@IEAAXAEBV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@AEBV-$s.c)
 *     ?RenderContent@Engine@1Spectre@@IEAAXAEBV?$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV?$vector@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@V?$allocator@V?$shared_ptr@VCamera@Engine@Spectre@@@std@@@2@@4@AEBV?$shared_ptr@VIRenderOutput@Engine@Spectre@@@4@@Z @ 0x180035E98 (-RenderContent@Engine@1Spectre@@IEAAXAEBV-$shared_ptr@VScene@Engine@Spectre@@@std@@AEBV-$vector@.c)
 *     ?UpdateGPUPerformanceStats@Engine@1Spectre@@IEAAXV?$weak_ptr@$$CBVIRenderOutput@Engine@Spectre@@@std@@@Z @ 0x18003725C (-UpdateGPUPerformanceStats@Engine@1Spectre@@IEAAXV-$weak_ptr@$$CBVIRenderOutput@Engine@Spectre@@.c)
 *     ?lock@?$weak_ptr@VGpuProfiler@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VGpuProfiler@Engine@Spectre@@@2@XZ @ 0x18003888C (-lock@-$weak_ptr@VGpuProfiler@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VGpuProfiler@Engine@Spec.c)
 *     ??4?$atomic@_N@std@@QEAA_N_N@Z @ 0x180040168 (--4-$atomic@_N@std@@QEAA_N_N@Z.c)
 *     ??$?0VIRenderOutput@Engine@Spectre@@$0A@@?$weak_ptr@$$CBVIRenderOutput@Engine@Spectre@@@std@@QEAA@AEBV?$weak_ptr@VIRenderOutput@Engine@Spectre@@@1@@Z @ 0x180056C00 (--$-0VIRenderOutput@Engine@Spectre@@$0A@@-$weak_ptr@$$CBVIRenderOutput@Engine@Spectre@@@std@@QEA.c)
 *     ?GetSceneLockless@Display@Engine@Spectre@@AEBA?AV?$shared_ptr@VScene@Engine@Spectre@@@std@@XZ @ 0x180057A00 (-GetSceneLockless@Display@Engine@Spectre@@AEBA-AV-$shared_ptr@VScene@Engine@Spectre@@@std@@XZ.c)
 *     ?GetUpdateVersion@Scene@Engine@Spectre@@QEBAHXZ @ 0x180057A5C (-GetUpdateVersion@Scene@Engine@Spectre@@QEBAHXZ.c)
 *     ?UpdateTiming@Display@Engine@Spectre@@AEAAXV?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Z @ 0x180058360 (-UpdateTiming@Display@Engine@Spectre@@AEAAXV-$duration@_JU-$ratio@$00$0DLJKMKAA@@std@@@chrono@st.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@V?$weak_ptr@VCamera@Engine@Spectre@@@std@@UCameraViewport@Display@Engine@Spectre@@U?$owner_less@V?$weak_ptr@VCamera@Engine@Spectre@@@std@@@2@V?$allocator@U?$pair@$$CBV?$weak_ptr@VCamera@Engine@Spectre@@@std@@UCameraViewport@Display@Engine@Spectre@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$weak_ptr@VCamera@Engine@Spectre@@@std@@UCameraViewport@Display@Engine@Spectre@@@std@@@std@@@std@@@2@AEBV?$weak_ptr@VCamera@Engine@Spectre@@@2@@Z @ 0x1800585C0 (-find@-$_Tree@V-$_Tmap_traits@V-$weak_ptr@VCamera@Engine@Spectre@@@std@@UCameraViewport@Display@.c)
 *     ?GetViewportMax@Camera@Engine@Spectre@@QEBA?AUVector2@Math@Utils@3@XZ @ 0x18005BC10 (-GetViewportMax@Camera@Engine@Spectre@@QEBA-AUVector2@Math@Utils@3@XZ.c)
 *     ?GetViewportMin@Camera@Engine@Spectre@@QEBA?AUVector2@Math@Utils@3@XZ @ 0x18005BC28 (-GetViewportMin@Camera@Engine@Spectre@@QEBA-AUVector2@Math@Utils@3@XZ.c)
 *     ?GetViewportMode@Camera@Engine@Spectre@@QEBA?AW4EViewportMode@123@XZ @ 0x18005BC40 (-GetViewportMode@Camera@Engine@Spectre@@QEBA-AW4EViewportMode@123@XZ.c)
 *     ?SetViewport@Camera@Engine@Spectre@@QEAAXUVector2@Math@Utils@3@0W4EViewportMode@123@@Z @ 0x18005D4E4 (-SetViewport@Camera@Engine@Spectre@@QEAAXUVector2@Math@Utils@3@0W4EViewportMode@123@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall Spectre::Engine::Display::RenderInternal(
        Spectre::Engine::Display *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  Spectre::Engine::Display *v4; // rdi
  char *v5; // r12
  __int64 v6; // r8
  __int64 v7; // r9
  int UpdateVersion; // edx
  int v9; // eax
  Spectre::Engine::Mutex *ObjectLifespanLock; // rax
  int v11; // r14d
  __int64 ExclusiveLockIfNecessary; // rax
  Spectre::Engine::Scene *v13; // rax
  int v14; // edx
  unsigned int v15; // esi
  struct Spectre::Utils::IConfigurationManager *Configuration; // rbx
  __int64 v17; // r15
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rbx
  struct Spectre::Utils::IConfigurationManager *v21; // rax
  unsigned int v22; // eax
  _QWORD *CpuProfiler; // rax
  void (__fastcall *v24)(__int64, _QWORD *); // r8
  __int64 v25; // r9
  _QWORD *v26; // rax
  _QWORD *v27; // rbx
  _QWORD *v28; // r15
  unsigned __int64 *ViewportMin; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r10
  unsigned int *v33; // rdx
  unsigned __int64 *ViewportMax; // rax
  int ViewportMode; // eax
  __int64 v36; // rbx
  unsigned __int64 *v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // [rsp+38h] [rbp-D0h] BYREF
  std::_Ref_count_base *v40; // [rsp+40h] [rbp-C8h]
  Spectre::Engine::Scene *v41; // [rsp+48h] [rbp-C0h] BYREF
  std::_Ref_count_base *v42; // [rsp+50h] [rbp-B8h]
  __int64 v43; // [rsp+58h] [rbp-B0h] BYREF
  char v44; // [rsp+60h] [rbp-A8h]
  _BYTE v45[16]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD *v46; // [rsp+78h] [rbp-90h]
  __int64 v47; // [rsp+80h] [rbp-88h] BYREF
  __int64 v48; // [rsp+88h] [rbp-80h] BYREF
  std::_Ref_count_base *v49; // [rsp+90h] [rbp-78h]
  __int64 v50; // [rsp+98h] [rbp-70h] BYREF
  std::_Ref_count_base *v51; // [rsp+A0h] [rbp-68h]
  _BYTE v52[16]; // [rsp+A8h] [rbp-60h] BYREF
  char v53[8]; // [rsp+B8h] [rbp-50h] BYREF
  char v54[8]; // [rsp+C0h] [rbp-48h] BYREF
  char v55[8]; // [rsp+C8h] [rbp-40h] BYREF
  std::_Ref_count_base *v56; // [rsp+D0h] [rbp-38h]
  __int64 v57; // [rsp+D8h] [rbp-30h] BYREF
  std::_Ref_count_base *v58; // [rsp+E0h] [rbp-28h]
  char v59[16]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v60[56]; // [rsp+F8h] [rbp-10h] BYREF
  Spectre::Engine::Display *v61; // [rsp+178h] [rbp+70h] BYREF
  __int64 v62; // [rsp+180h] [rbp+78h] BYREF
  __int64 v63; // [rsp+188h] [rbp+80h]
  __int64 v64; // [rsp+190h] [rbp+88h]

  v61 = this;
  v4 = this;
  v5 = (char *)this + 424;
  LOBYTE(a2) = 1;
  std::atomic<bool>::operator=((__int64)this + 424, a2, a3, a4);
  Spectre::Engine::Display::GetSceneLockless((__int64)v4, &v41);
  if ( v41 )
    UpdateVersion = Spectre::Engine::Scene::GetUpdateVersion(v41);
  else
    UpdateVersion = 0;
  if ( *((_QWORD *)v4 + 8) == *((_QWORD *)v4 + 9) )
    goto LABEL_48;
  if ( *((_BYTE *)v4 + 432) )
  {
    v9 = *((_DWORD *)v4 + 107);
    *((_DWORD *)v4 + 107) = UpdateVersion;
    if ( UpdateVersion <= v9 )
      goto LABEL_48;
  }
  *((_QWORD *)v4 + 55) = *std::chrono::steady_clock::now(&v62);
  ObjectLifespanLock = Spectre::Engine::Engine::GetObjectLifespanLock(*((Spectre::Engine::Engine **)v4 + 3));
  Spectre::Engine::Lockable::GetSharedLock(ObjectLifespanLock, (__int64)v60);
  v11 = 0;
  v43 = 0LL;
  v44 = 0;
  if ( v41 )
  {
    ExclusiveLockIfNecessary = Spectre::Engine::Lockable::GetExclusiveLockIfNecessary(
                                 (Spectre::Engine::Scene *)((char *)v41 + 16),
                                 (__int64)v45);
    std::unique_lock<Spectre::Engine::Mutex>::operator=((__int64)&v43, ExclusiveLockIfNecessary);
    std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v45);
    v13 = v41;
    v11 = *((_DWORD *)v41 + 28);
    v14 = *((_DWORD *)v4 + 4);
    if ( v14 )
    {
      *((_DWORD *)v41 + 28) = v14;
      v14 = *((_DWORD *)v4 + 4);
      v13 = v41;
    }
    v15 = *((_DWORD *)v13 + 28);
    if ( v14 )
      goto LABEL_16;
    goto LABEL_15;
  }
  v15 = *((_DWORD *)v4 + 4);
  if ( !v15 )
  {
    v15 = 1;
LABEL_15:
    v14 = 1;
    goto LABEL_16;
  }
  v14 = *((_DWORD *)v4 + 4);
LABEL_16:
  Configuration = Spectre::Engine::Engine::GetConfiguration(*((Spectre::Engine::Engine **)v4 + 3), v14);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration + 88LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kRenderer_ResolutionScalingX);
  (*(void (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *))(*(_QWORD *)Configuration + 88LL))(
    Configuration,
    &Spectre::Engine::ConfigurationProperties::kRenderer_ResolutionScalingY);
  v17 = *((_QWORD *)v4 + 8);
  v64 = v17;
  v18 = *((_QWORD *)v4 + 9);
  v63 = v18;
  if ( v17 != v18 )
  {
    do
    {
      std::weak_ptr<Spectre::Engine::GpuProfiler>::lock(v17, &v39);
      if ( v39 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v39 + 352LL))(v39) )
      {
        v19 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v39 + 376LL))(v39, v55);
        std::weak_ptr<Spectre::Engine::RenderDevice>::lock(v19, &v48);
        if ( v56 )
          std::_Ref_count_base::_Decwref(v56);
        v20 = v48;
        if ( v48 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48) )
        {
          Spectre::Engine::Lockable::GetExclusiveLock((Spectre::Engine::Mutex *)(v20 + 24), (__int64)v45);
          Spectre::Engine::Lockable::GetExclusiveLock((Spectre::Engine::Mutex *)(v39 + 8), (__int64)v52);
          v21 = Spectre::Engine::Engine::GetConfiguration(*((Spectre::Engine::Engine **)v4 + 3), v15);
          v22 = (*(__int64 (__fastcall **)(struct Spectre::Utils::IConfigurationManager *, void *, _QWORD))(*(_QWORD *)v21 + 72LL))(
                  v21,
                  &Spectre::Engine::ConfigurationProperties::kRenderer_SyncInterval,
                  0LL);
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v39 + 304LL))(v39, v22);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 72LL))(v39);
          CpuProfiler = Spectre::Engine::Engine::GetCpuProfiler(*((_QWORD *)v4 + 3), &v57);
          v24(v25, CpuProfiler);
          if ( v58 )
            std::_Ref_count_base::_Decref(v58);
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v39 + 232LL))(v39, v15);
          v26 = (_QWORD *)*((_QWORD *)v4 + 6);
          v46 = v26;
          v27 = (_QWORD *)*((_QWORD *)v4 + 5);
          if ( v27 != v26 )
          {
            v28 = v26;
            while ( 1 )
            {
              std::weak_ptr<Spectre::Engine::Scene>::weak_ptr<Spectre::Engine::Scene>(&v50, v27);
              std::_Tree<std::_Tmap_traits<std::weak_ptr<Spectre::Engine::Camera>,Spectre::Engine::Display::CameraViewport,std::owner_less<std::weak_ptr<Spectre::Engine::Camera>>,std::allocator<std::pair<std::weak_ptr<Spectre::Engine::Camera> const,Spectre::Engine::Display::CameraViewport>>,0>>::find(
                (char *)v4 + 88,
                &v47,
                &v50);
              if ( v51 )
                std::_Ref_count_base::_Decwref(v51);
              if ( v47 == *((_QWORD *)v4 + 11) )
                goto LABEL_35;
              ViewportMin = (unsigned __int64 *)Spectre::Engine::Camera::GetViewportMin(*v27, v53);
              if ( (_mm_movemask_ps(_mm_cmpeq_ps((__m128)*ViewportMin, (__m128)*(unsigned __int64 *)(v32 + 48))) & 3) == 3 )
              {
                ViewportMax = (unsigned __int64 *)Spectre::Engine::Camera::GetViewportMax(v30, v54, v31);
                v33 = (unsigned int *)(v32 + 56);
                if ( (_mm_movemask_ps(_mm_cmpeq_ps((__m128)*(unsigned __int64 *)(v32 + 56), (__m128)*ViewportMax)) & 3) == 3 )
                {
                  ViewportMode = Spectre::Engine::Camera::GetViewportMode(v30);
                  if ( ViewportMode == *(_DWORD *)(v32 + 64) )
                    goto LABEL_35;
                }
              }
              else
              {
                v33 = (unsigned int *)(v32 + 56);
              }
              Spectre::Engine::Camera::SetViewport(
                v30,
                _mm_unpacklo_ps((__m128)*(unsigned int *)(v32 + 48), (__m128)*(unsigned int *)(v32 + 52)).m128_u64[0],
                _mm_unpacklo_ps((__m128)*v33, (__m128)v33[1]).m128_u64[0],
                *(unsigned int *)(v32 + 64));
LABEL_35:
              v27 += 2;
              if ( v27 == v28 )
              {
                v4 = v61;
                v17 = v64;
                break;
              }
            }
          }
          (*(void (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)v4 + 3) + 48LL))(*((_QWORD *)v4 + 3), &v39);
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v39 + 240LL))(v39, v15);
          Spectre::Engine::Engine::RenderContent(
            *((Spectre::Engine::Engine **)v4 + 3),
            (__int64)&v41,
            (__int64)v4 + 40,
            &v39);
          Spectre::Engine::Engine::PresentFrame(
            *((_QWORD *)v4 + 3),
            &v48,
            &v39,
            (__int64)v52,
            (__int64)v45,
            (__int64)&v43);
          (*(void (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)v4 + 3) + 56LL))(*((_QWORD *)v4 + 3), &v39);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 248LL))(v39);
          v36 = *((_QWORD *)v4 + 3);
          v37 = (unsigned __int64 *)std::weak_ptr<Spectre::Engine::IRenderOutput const>::weak_ptr<Spectre::Engine::IRenderOutput const>(
                                      (__int64)v59,
                                      v17);
          Spectre::Engine::Engine::UpdateGPUPerformanceStats(v36, v37);
          std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v52);
          std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)v45);
        }
        if ( v49 )
          std::_Ref_count_base::_Decref(v49);
        v18 = v63;
      }
      if ( v40 )
        std::_Ref_count_base::_Decref(v40);
      v17 += 16LL;
      v64 = v17;
    }
    while ( v17 != v18 );
    v5 = (char *)v4 + 424;
  }
  if ( v41 )
    *((_DWORD *)v41 + 28) = v11;
  v38 = std::chrono::steady_clock::now(&v61);
  Spectre::Engine::Display::UpdateTiming(v4, *v38 - *((_QWORD *)v4 + 55));
  std::unique_lock<Spectre::Engine::Mutex>::~unique_lock<Spectre::Engine::Mutex>((__int64)&v43);
  std::shared_lock<Spectre::Engine::Mutex>::~shared_lock<Spectre::Engine::Mutex>((__int64)v60);
LABEL_48:
  std::atomic<bool>::operator=((__int64)v5, 0LL, v6, v7);
  _Cnd_broadcast((Spectre::Engine::Display *)((char *)v4 + 280));
  if ( v42 )
    std::_Ref_count_base::_Decref(v42);
}
