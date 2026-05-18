/*
 * XREFs of ?UpdateGPUPerformanceStats@Engine@1Spectre@@IEAAXV?$weak_ptr@$$CBVIRenderOutput@Engine@Spectre@@@std@@@Z @ 0x18003725C
 * Callers:
 *     ?RenderInternal@Display@Engine@Spectre@@AEAAXXZ @ 0x180057BA4 (-RenderInternal@Display@Engine@Spectre@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180010574 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Incref_nz@_Ref_count_base@std@@QEAA_NXZ @ 0x180011A3C (-_Incref_nz@_Ref_count_base@std@@QEAA_NXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@AEBV01@@Z @ 0x180012440 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAXXZ @ 0x180013348 (-_Tidy_deallocate@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEAAXXZ.c)
 *     ?empty@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA_NXZ @ 0x18001F7CC (-empty@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBA_NXZ.c)
 *     ?GetDeviceName@RenderDevice@Engine@Spectre@@QEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ @ 0x180026548 (-GetDeviceName@RenderDevice@Engine@Spectre@@QEBA-AV-$basic_string@_WU-$char_traits@_W@std@@V-$al.c)
 *     ?GetDeviceType@RenderDevice@Engine@Spectre@@QEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ @ 0x180026570 (-GetDeviceType@RenderDevice@Engine@Spectre@@QEBA-AV-$basic_string@_WU-$char_traits@_W@std@@V-$al.c)
 *     ?GetFeatureLevelString@RenderDevice@Engine@Spectre@@QEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ @ 0x1800265A8 (-GetFeatureLevelString@RenderDevice@Engine@Spectre@@QEBA-AV-$basic_string@_WU-$char_traits@_W@st.c)
 *     ??$?H_WU?$char_traits@_W@std@@V?$allocator@_W@1@@std@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@$$QEAV10@0@Z @ 0x18002DA5C (--$-H_WU-$char_traits@_W@std@@V-$allocator@_W@1@@std@@YA-AV-$basic_string@_WU-$char_traits@_W@st.c)
 *     ??$?H_WU?$char_traits@_W@std@@V?$allocator@_W@1@@std@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@$$QEAV10@QEB_W@Z @ 0x18002DA80 (--$-H_WU-$char_traits@_W@std@@V-$allocator@_W@1@@std@@YA-AV-$basic_string@_WU-$char_ea_18002DA80.c)
 *     ??$_Try_emplace@AEB_K$$V@?$map@_KUProfileDataBase@TelemetryTraceLogger@Utils@Spectre@@U?$less@_K@std@@V?$allocator@U?$pair@$$CB_KUProfileDataBase@TelemetryTraceLogger@Utils@Spectre@@@std@@@6@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_KUProfileDataBase@TelemetryTraceLogger@Utils@Spectre@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x18002FA6C (--$_Try_emplace@AEB_K$$V@-$map@_KUProfileDataBase@TelemetryTraceLogger@Utils@Spectre@@U-$less@_K.c)
 *     ??$_Try_emplace@AEB_K$$V@?$map@_K_KU?$less@_K@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_K_K@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x18002FBAC (--$_Try_emplace@AEB_K$$V@-$map@_K_KU-$less@_K@std@@V-$allocator@U-$pair@$$CB_K_K@std@@@2@@std@@A.c)
 *     ??4?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800320AC (--4-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?AddDataPoint@ProfileDataBase@TelemetryTraceLogger@Utils@Spectre@@QEAAXM@Z @ 0x180032820 (-AddDataPoint@ProfileDataBase@TelemetryTraceLogger@Utils@Spectre@@QEAAXM@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall Spectre::Engine::Engine::UpdateGPUPerformanceStats(__int64 a1, unsigned __int64 *a2)
{
  std::_Ref_count_base *v4; // rcx
  unsigned __int64 v5; // rdi
  std::_Ref_count_base *v6; // r14
  __int64 v7; // rbx
  __int64 v8; // r15
  __int64 v9; // rax
  _QWORD *FeatureLevelString; // rdi
  _QWORD *DeviceType; // rbx
  void **DeviceName; // rax
  _QWORD *v13; // rax
  void **v14; // rax
  _QWORD *v15; // rax
  char *v16; // rax
  std::_Ref_count_base *v17; // rcx
  unsigned __int64 v18; // [rsp+30h] [rbp-D0h] BYREF
  double v19; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v20; // [rsp+40h] [rbp-C0h]
  __int64 v21; // [rsp+50h] [rbp-B0h] BYREF
  std::_Ref_count_base *v22; // [rsp+58h] [rbp-A8h]
  _QWORD v23[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v24[16]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v25; // [rsp+80h] [rbp-80h] BYREF
  std::_Ref_count_base *v26; // [rsp+88h] [rbp-78h]
  _BYTE v27[32]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v28[4]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v29[32]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v30[4]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v31[4]; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v32[4]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v33[4]; // [rsp+160h] [rbp+60h] BYREF

  v23[1] = a2;
  v20 = 0LL;
  v4 = (std::_Ref_count_base *)a2[1];
  if ( v4 && std::_Ref_count_base::_Incref_nz(v4) )
  {
    v5 = *a2;
    *(_QWORD *)&v20 = *a2;
    v6 = (std::_Ref_count_base *)a2[1];
    *((_QWORD *)&v20 + 1) = v6;
  }
  else
  {
    v6 = (std::_Ref_count_base *)*((_QWORD *)&v20 + 1);
    v5 = v20;
  }
  if ( v5 )
  {
    v18 = v5;
    v19 = 0.0;
    (*(void (__fastcall **)(unsigned __int64, _QWORD, _QWORD *, double *))(*(_QWORD *)v5 + 224LL))(v5, 0LL, v23, &v19);
    v7 = v23[0];
    *(_QWORD *)(*(_QWORD *)std::map<unsigned __int64,unsigned __int64>::_Try_emplace<unsigned __int64 const &,>(
                             (__int64 *)(a1 + 1440),
                             (__int64)&v25,
                             &v18)
              + 40LL) = v7;
    v8 = *(_QWORD *)std::map<unsigned __int64,Spectre::Utils::TelemetryTraceLogger::ProfileDataBase>::_Try_emplace<unsigned __int64 const &,>(
                      (_QWORD *)(a1 + 1424),
                      (__int64)v24,
                      &v18);
    std::wstring::wstring(&v25, v8 + 64);
    LOBYTE(v7) = std::string::empty((__int64)&v25);
    std::wstring::_Tidy_deallocate((__int64)&v25);
    if ( (_BYTE)v7 )
    {
      v9 = (*(__int64 (__fastcall **)(unsigned __int64, __int64 *))(*(_QWORD *)v5 + 376LL))(v5, &v25);
      std::weak_ptr<Spectre::Engine::RenderDevice>::lock(v9, &v21);
      if ( v26 )
        std::_Ref_count_base::_Decwref(v26);
      if ( v21 )
      {
        FeatureLevelString = Spectre::Engine::RenderDevice::GetFeatureLevelString(v21, v33);
        DeviceType = Spectre::Engine::RenderDevice::GetDeviceType(v21, v32);
        DeviceName = (void **)Spectre::Engine::RenderDevice::GetDeviceName(v21, v31);
        v13 = std::operator+<wchar_t>(v30, DeviceName, L" ");
        v14 = (void **)std::operator+<wchar_t>((__int64)v29, (__int64)v13, (__int64)DeviceType);
        v15 = std::operator+<wchar_t>(v28, v14, L" ");
        v16 = (char *)std::operator+<wchar_t>((__int64)v27, (__int64)v15, (__int64)FeatureLevelString);
        std::wstring::operator=((char *)(v8 + 64), v16);
        std::wstring::_Tidy_deallocate((__int64)v27);
        std::wstring::_Tidy_deallocate((__int64)v28);
        std::wstring::_Tidy_deallocate((__int64)v29);
        std::wstring::_Tidy_deallocate((__int64)v30);
        std::wstring::_Tidy_deallocate((__int64)v31);
        std::wstring::_Tidy_deallocate((__int64)v32);
        std::wstring::_Tidy_deallocate((__int64)v33);
      }
      if ( v22 )
        std::_Ref_count_base::_Decref(v22);
    }
    Spectre::Utils::TelemetryTraceLogger::ProfileDataBase::AddDataPoint(
      (Spectre::Utils::TelemetryTraceLogger::ProfileDataBase *)(v8 + 40),
      v19);
  }
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  v17 = (std::_Ref_count_base *)a2[1];
  if ( v17 )
    std::_Ref_count_base::_Decwref(v17);
}
