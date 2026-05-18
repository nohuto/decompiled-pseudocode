/*
 * XREFs of ?GetHardwareVersion@Engine@1Spectre@@IEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ @ 0x180034420
 * Callers:
 *     ??$Create@VViewerEngine@Engine@Spectre@@VRenderDeviceD3D11@D3D11@23@@Engine@0Spectre@@SA?AV?$unique_ptr@VViewerEngine@Engine@Spectre@@U?$default_delete@VViewerEngine@Engine@Spectre@@@std@@@std@@AEBUEngineDescription@01@V?$shared_ptr@VPerformanceLogger@Utils@Spectre@@@3@V?$shared_ptr@VITelemetryManager@Utils@Spectre@@@3@V?$shared_ptr@VITelemetryTraceLogger@Utils@Spectre@@@3@@Z @ 0x18001568C (--$Create@VViewerEngine@Engine@Spectre@@VRenderDeviceD3D11@D3D11@23@@Engine@0Spectre@@SA-AV-$uni.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEAAXXZ @ 0x180013348 (-_Tidy_deallocate@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@AEAAXXZ.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x18001E6E8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 *     ?push_back@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXD@Z @ 0x18001E784 (-push_back@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXD@Z.c)
 *     ?end@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA?AV?$_String_iterator@V?$_String_val@U?$_Simple_types@_W@std@@@std@@@2@XZ @ 0x18001F800 (-end@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA-AV-$_String_iterator@V.c)
 *     ?GetDeviceType@RenderDevice@Engine@Spectre@@QEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ @ 0x180026570 (-GetDeviceType@RenderDevice@Engine@Spectre@@QEBA-AV-$basic_string@_WU-$char_traits@_W@std@@V-$al.c)
 *     ?GetFeatureLevelString@RenderDevice@Engine@Spectre@@QEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ @ 0x1800265A8 (-GetFeatureLevelString@RenderDevice@Engine@Spectre@@QEBA-AV-$basic_string@_WU-$char_traits@_W@st.c)
 *     ?GetMaxSupportedFeatureLevelString@RenderDevice@Engine@Spectre@@QEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ @ 0x1800265F0 (-GetMaxSupportedFeatureLevelString@RenderDevice@Engine@Spectre@@QEBA-AV-$basic_string@_WU-$char_.c)
 *     ??1?$shared_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ @ 0x180029F20 (--1-$shared_lock@VMutex@Engine@Spectre@@@std@@QEAA@XZ.c)
 *     ?GetSharedLockIfNecessary@Lockable@Engine@Spectre@@QEBA?AV?$shared_lock@VMutex@Engine@Spectre@@@std@@XZ @ 0x18002A1C4 (-GetSharedLockIfNecessary@Lockable@Engine@Spectre@@QEBA-AV-$shared_lock@VMutex@Engine@Spectre@@@.c)
 *     ??$?6_WU?$char_traits@_W@std@@@std@@YAAEAV?$basic_ostream@_WU?$char_traits@_W@std@@@0@AEAV10@PEBD@Z @ 0x18002D7D0 (--$-6_WU-$char_traits@_W@std@@@std@@YAAEAV-$basic_ostream@_WU-$char_traits@_W@std@@@0@AEAV10@PEB.c)
 *     ??$?6_WU?$char_traits@_W@std@@V?$allocator@_W@1@@std@@YAAEAV?$basic_ostream@_WU?$char_traits@_W@std@@@0@AEAV10@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@@Z @ 0x18002DA40 (--$-6_WU-$char_traits@_W@std@@V-$allocator@_W@1@@std@@YAAEAV-$basic_ostream@_WU-$char_traits@_W@.c)
 *     ??0?$basic_stringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@XZ @ 0x180030CA4 (--0-$basic_stringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@XZ.c)
 *     ??1?$_Tidy_deallocate_guard@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@QEAA@XZ @ 0x18003176C (--1-$_Tidy_deallocate_guard@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@@std@@.c)
 *     ??_D?$basic_stringstream@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAXXZ @ 0x180032178 (--_D-$basic_stringstream@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAXXZ.c)
 *     ?GetDevice@Engine@1Spectre@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@I@Z @ 0x180034148 (-GetDevice@Engine@1Spectre@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Spectre@@@std@@I@Z.c)
 *     ?GetDeviceCount@Engine@1Spectre@@QEBAIXZ @ 0x1800341E4 (-GetDeviceCount@Engine@1Spectre@@QEBAIXZ.c)
 *     ?_Get_buffer_view@?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA?AU_Buffer_view@12@XZ @ 0x1800382A8 (-_Get_buffer_view@-$basic_stringbuf@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBA-AU_Buf.c)
 *     ?reserve@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K@Z @ 0x180038B3C (-reserve@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K@Z.c)
 *     __RTDynamicCast_0 @ 0x1800E38E0 (__RTDynamicCast_0.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall Spectre::Engine::Engine::GetHardwareVersion(Spectre::Engine::Engine *this, __int64 a2)
{
  unsigned int i; // esi
  _QWORD *DeviceType; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  _QWORD *MaxSupportedFeatureLevelString; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  _QWORD *FeatureLevelString; // rax
  __int64 v12; // rax
  char *v13; // rbx
  char *v14; // rsi
  __int64 v15; // rdx
  __int64 v17; // [rsp+38h] [rbp-C8h] BYREF
  const void *v18; // [rsp+40h] [rbp-C0h] BYREF
  std::_Ref_count_base *v19; // [rsp+48h] [rbp-B8h]
  _BYTE v20[24]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v21[16]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v22[8]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v23[232]; // [rsp+88h] [rbp-78h] BYREF
  char v24[16]; // [rsp+170h] [rbp+70h] BYREF
  __m128i si128; // [rsp+180h] [rbp+80h]
  _QWORD v26[4]; // [rsp+190h] [rbp+90h] BYREF
  _QWORD v27[4]; // [rsp+1B0h] [rbp+B0h] BYREF
  _QWORD v28[4]; // [rsp+1D0h] [rbp+D0h] BYREF

  v17 = a2;
  std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>((__int64)v21);
  Spectre::Engine::Lockable::GetSharedLockIfNecessary((Spectre::Engine::Engine *)((char *)this + 112), (__int64)v20);
  for ( i = 0; i < (unsigned int)Spectre::Engine::Engine::GetDeviceCount(this); ++i )
  {
    Spectre::Engine::Engine::GetDevice(this, &v18, i);
    if ( !_RTDynamicCast_0(
            v18,
            0LL,
            &Spectre::Engine::RenderDevice `RTTI Type Descriptor',
            &Spectre::Engine::RenderDeviceGeneric `RTTI Type Descriptor',
            0) )
    {
      DeviceType = Spectre::Engine::RenderDevice::GetDeviceType((__int64)v18, v28);
      v6 = std::operator<<<wchar_t>((__int64)v22, DeviceType);
      v7 = std::operator<<<wchar_t,std::char_traits<wchar_t>>(v6, ": Hardware Feature Level ");
      MaxSupportedFeatureLevelString = Spectre::Engine::RenderDevice::GetMaxSupportedFeatureLevelString(
                                         (__int64)v18,
                                         v27);
      v9 = std::operator<<<wchar_t>(v7, MaxSupportedFeatureLevelString);
      v10 = std::operator<<<wchar_t,std::char_traits<wchar_t>>(v9, ", Engine Feature Level ");
      FeatureLevelString = Spectre::Engine::RenderDevice::GetFeatureLevelString((__int64)v18, v26);
      v12 = std::operator<<<wchar_t>(v10, FeatureLevelString);
      std::operator<<<wchar_t,std::char_traits<wchar_t>>(v12, "; ");
      std::wstring::_Tidy_deallocate((__int64)v26);
      std::wstring::_Tidy_deallocate((__int64)v27);
      std::wstring::_Tidy_deallocate((__int64)v28);
    }
    if ( v19 )
      std::_Ref_count_base::_Decref(v19);
  }
  *(_QWORD *)v24 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  std::wstringbuf::_Get_buffer_view(v23, &v18);
  if ( v18 )
    std::wstring::assign(v24, v18, (unsigned __int64)v19);
  v13 = (char *)*std::wstring::end(v24, &v18);
  v14 = v24;
  if ( si128.m128i_i64[1] >= 8uLL )
    v14 = *(char **)v24;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 15LL;
  *(_BYTE *)a2 = 0;
  std::string::reserve(a2, (v13 - v14) >> 1);
  v17 = a2;
  while ( v14 != v13 )
  {
    LOBYTE(v15) = *v14;
    std::string::push_back((void **)a2, v15);
    v14 += 2;
  }
  v17 = 0LL;
  std::_Tidy_deallocate_guard<std::string>::~_Tidy_deallocate_guard<std::string>(&v17);
  std::wstring::_Tidy_deallocate((__int64)v24);
  std::shared_lock<Spectre::Engine::Mutex>::~shared_lock<Spectre::Engine::Mutex>((__int64)v20);
  std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>>::`vbase destructor'((__int64)v21);
  return a2;
}
