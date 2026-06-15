/*
 * XREFs of ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18003B160
 * Callers:
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x180007DF0 (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 *     ?DisconnectHelper@CPolicyConfig@@SAXPEBG@Z @ 0x18006570C (-DisconnectHelper@CPolicyConfig@@SAXPEBG@Z.c)
 *     ?RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800DC8B8 (-RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@.c)
 *     std::_Func_impl_no_alloc__lambda_575e561af4240623508f6fe68ec23261__long_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy__&_::_Do_call @ 0x1800EA5A0 (std--_Func_impl_no_alloc__lambda_575e561af4240623508f6fe68ec23261__long_wil--com_pt_ea_1800EA5A0.c)
 *     std::_Func_impl_no_alloc__lambda_ddaf1e9eb7e2eca453b2b4697b517284__long_wil::com_ptr_t_CEndpointStore_wil::err_returncode_policy__&_::_Do_call @ 0x1800EA660 (std--_Func_impl_no_alloc__lambda_ddaf1e9eb7e2eca453b2b4697b517284__long_wil--com_pt_ea_1800EA660.c)
 *     wil::details::lambda_call__lambda_87d3782d9079e94a32bbf6440560d047___::_lambda_call__lambda_87d3782d9079e94a32bbf6440560d047___ @ 0x1800FB638 (wil--details--lambda_call__lambda_87d3782d9079e94a32bbf6440560d047___--_lambda_call__lambda_87d3.c)
 *     ?RefreshStreamsOnDevice@CBtLeAudioResourceManager@@IEAAJW4ReconnectSaDeviceOptions@1@@Z @ 0x1800FBFD8 (-RefreshStreamsOnDevice@CBtLeAudioResourceManager@@IEAAJW4ReconnectSaDeviceOptions@1@@Z.c)
 *     ?SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z @ 0x180116F60 (-SetEndpointVisibility@CPolicyConfig@@UEAAJPEBGH@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x18001CDF4 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180021F60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x180027120 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x18002D580 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180046188 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180047D88 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?UnregisterInternalAudioSessionNotificationClients@CAudioSessionManager@@AEAAXPEAVCAudioSession@@@Z @ 0x18004840C (-UnregisterInternalAudioSessionNotificationClients@CAudioSessionManager@@AEAAXPEAVCAudioSession@.c)
 *     ??$emplace@AEBU?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@AEBU?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@1@@Z @ 0x180051410 (--$emplace@AEBU-$pair@$$CBVCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSession@@Uerr_returncode.c)
 *     ??1Completer@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x180065B08 (--1Completer@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     atexit @ 0x180067018 (atexit.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x180081418 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800D07C4 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800D2CB0 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800D3278 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??$As@UIStreamGroupProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800D789C (--$As@UIStreamGroupProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     WPP_SF_S @ 0x1800DDDDC (WPP_SF_S.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800E6F24 (--$_Emplace_reallocate@AEBV-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UISt.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800E7078 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBVCAudioSessionInstanceId@@V-$com_ptr_t@.c)
 *     ?_Move_assign@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@AEAAXAEAV12@U_Equal_allocators@2@@Z @ 0x1800E8F14 (-_Move_assign@-$_Hash@V-$_Umap_traits@VCAudioSessionInstanceId@@V-$com_ptr_t@VCAudioSession@@Uer.c)
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@VCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@VCAudioSessionInstanceId@@U?$hash@VCAudioSessionInstanceId@@@std@@U?$equal_to@VCAudioSessionInstanceId@@@3@@std@@V?$allocator@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBVCAudioSessionInstanceId@@V?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x1800E90A0 (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@VCAudioSessionInstanceId@@V-$com_ptr_t@VC_ea_1800E90A0.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall CAudioSessionManager::Disconnect(CAudioSessionManager *a1, int a2, char a3)
{
  int v3; // ebx
  CAudioSessionManager *v4; // r15
  CEndpointStoreCache *v5; // rcx
  _QWORD *v6; // r9
  const unsigned __int16 **v7; // r13
  const unsigned __int16 *v8; // rdx
  int EndpointStore; // eax
  unsigned int v10; // edi
  __int64 v12; // rbx
  int v13; // eax
  _QWORD *v14; // r14
  _QWORD *v15; // rsi
  __int64 v16; // r15
  __int64 v17; // r13
  int v18; // eax
  char v19; // al
  __int64 **v20; // rbx
  __int64 **v21; // rdi
  int v22; // eax
  __int64 *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdi
  const WCHAR *v26; // rcx
  __int64 v27; // rax
  int v28; // edx
  struct _RTL_CRITICAL_SECTION *v29; // rdi
  _QWORD *v30; // rbx
  _QWORD *v31; // r14
  _QWORD *v32; // rsi
  void *v33; // rdx
  HANDLE ProcessHeap; // rax
  _QWORD *v35; // rdi
  HANDLE v36; // rax
  _QWORD *v37; // rax
  _QWORD *v38; // rcx
  struct _RTL_CRITICAL_SECTION *v39; // r15
  float *v40; // r14
  _QWORD *v41; // rbx
  _QWORD *v42; // rdi
  CAudioSessionManager *v43; // r14
  unsigned __int8 v44; // r13
  const unsigned __int16 **v45; // r13
  HANDLE v46; // rax
  _QWORD *v47; // rbx
  unsigned __int64 v48; // rdi
  SIZE_T v49; // rdi
  _QWORD *v50; // rax
  HANDLE v51; // rax
  _QWORD *v52; // rcx
  _QWORD **v53; // rbx
  _QWORD *i; // rdi
  _QWORD **v55; // rbx
  _QWORD **v56; // rdi
  unsigned int v57; // r14d
  unsigned __int8 v58; // r13
  void *v59; // rcx
  unsigned __int64 v60; // rdx
  _QWORD **v61; // rcx
  _QWORD *v62; // r14
  _QWORD *v63; // rbx
  CAudioSessionManager *v64; // rcx
  unsigned __int64 v65; // rdx
  __int64 v66; // r15
  _QWORD *v67; // rdi
  _QWORD *v68; // r15
  _QWORD *v69; // rdx
  unsigned __int64 v70; // rdx
  _QWORD **v71; // rcx
  _QWORD *v72; // r14
  _QWORD *v73; // rbx
  struct CEndpointStore *v74; // rcx
  signed __int32 j; // edi
  int v76; // [rsp+30h] [rbp-288h] BYREF
  __int64 v77; // [rsp+38h] [rbp-280h]
  __int64 v78; // [rsp+40h] [rbp-278h]
  __int64 v79; // [rsp+48h] [rbp-270h] BYREF
  __int64 v80; // [rsp+50h] [rbp-268h] BYREF
  CAudioSessionManager *v81; // [rsp+58h] [rbp-260h] BYREF
  struct CEndpointStore *v82; // [rsp+60h] [rbp-258h] BYREF
  unsigned __int64 v83; // [rsp+68h] [rbp-250h] BYREF
  __int128 v84; // [rsp+70h] [rbp-248h] BYREF
  _QWORD *v85; // [rsp+80h] [rbp-238h]
  __int128 v86; // [rsp+88h] [rbp-230h] BYREF
  __int64 v87; // [rsp+98h] [rbp-220h]
  unsigned __int64 v88; // [rsp+A0h] [rbp-218h] BYREF
  const unsigned __int16 **v89; // [rsp+A8h] [rbp-210h]
  void *v90; // [rsp+B0h] [rbp-208h] BYREF
  float v91; // [rsp+C0h] [rbp-1F8h] BYREF
  void *v92; // [rsp+C8h] [rbp-1F0h]
  unsigned __int64 v93; // [rsp+D0h] [rbp-1E8h]
  CAudioSessionManager *v94; // [rsp+D8h] [rbp-1E0h]
  __int128 v95; // [rsp+E0h] [rbp-1D8h]
  __int64 v96; // [rsp+F0h] [rbp-1C8h]
  unsigned __int64 v97; // [rsp+F8h] [rbp-1C0h]
  int v98; // [rsp+100h] [rbp-1B8h]
  WINBOOL fPending; // [rsp+104h] [rbp-1B4h] BYREF
  _QWORD *v100; // [rsp+108h] [rbp-1B0h]
  LPVOID Context; // [rsp+110h] [rbp-1A8h] BYREF
  _QWORD *v102; // [rsp+118h] [rbp-1A0h]
  CAudioSessionManager *v103; // [rsp+120h] [rbp-198h]
  __int128 v104; // [rsp+128h] [rbp-190h] BYREF
  __int64 v105; // [rsp+138h] [rbp-180h]
  float v106; // [rsp+140h] [rbp-178h] BYREF
  void *v107; // [rsp+148h] [rbp-170h]
  __int64 v108; // [rsp+150h] [rbp-168h]
  void *v109; // [rsp+158h] [rbp-160h]
  __int128 v110; // [rsp+160h] [rbp-158h]
  __int64 v111; // [rsp+170h] [rbp-148h]
  __int64 v112; // [rsp+178h] [rbp-140h]
  __int64 v113; // [rsp+180h] [rbp-138h] BYREF
  void *v114; // [rsp+188h] [rbp-130h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+190h] [rbp-128h] BYREF
  struct _RTL_CRITICAL_SECTION *v116; // [rsp+198h] [rbp-120h]
  _DWORD v117[2]; // [rsp+1A0h] [rbp-118h] BYREF
  __int64 v118; // [rsp+1A8h] [rbp-110h]
  CAudioSessionManager *v119; // [rsp+1B0h] [rbp-108h] BYREF
  union _RTL_RUN_ONCE *v120; // [rsp+1C0h] [rbp-F8h] BYREF
  int v121; // [rsp+1C8h] [rbp-F0h]
  _QWORD v122[8]; // [rsp+1D0h] [rbp-E8h] BYREF
  unsigned __int16 *v123; // [rsp+210h] [rbp-A8h] BYREF
  int v124; // [rsp+218h] [rbp-A0h]
  int v125; // [rsp+21Ch] [rbp-9Ch]
  void *v126; // [rsp+220h] [rbp-98h]
  int v127; // [rsp+228h] [rbp-90h]
  int v128; // [rsp+22Ch] [rbp-8Ch]
  const WCHAR *v129; // [rsp+230h] [rbp-88h]
  int v130; // [rsp+238h] [rbp-80h]
  int v131; // [rsp+23Ch] [rbp-7Ch]
  void **v132; // [rsp+240h] [rbp-78h]
  __int64 v133; // [rsp+248h] [rbp-70h]
  __int64 *v134; // [rsp+250h] [rbp-68h]
  __int64 v135; // [rsp+258h] [rbp-60h]
  int *v136; // [rsp+260h] [rbp-58h]
  __int64 v137; // [rsp+268h] [rbp-50h]
  wil::details::in1diag3 *retaddr; // [rsp+2B8h] [rbp+0h]

  BYTE1(v76) = a3;
  v3 = a2;
  LODWORD(v78) = a2;
  v4 = a1;
  v81 = a1;
  v103 = a1;
  v119 = a1;
  LODWORD(v88) = a2;
  LOBYTE(v77) = a3;
  v98 = 0;
  v5 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v6 = (_QWORD *)((char *)v4 + 240);
    if ( *((_QWORD *)v4 + 33) >= 8uLL )
      v6 = (_QWORD *)*v6;
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 34LL, &WPP_c22fced76a16385f24e46043528014d7_Traceguids, v6);
  }
  v84 = 0LL;
  v85 = 0LL;
  v82 = 0LL;
  v7 = (const unsigned __int16 **)((char *)v4 + 240);
  v89 = (const unsigned __int16 **)((char *)v4 + 240);
  v8 = (const unsigned __int16 *)((char *)v4 + 240);
  v83 = (unsigned __int64)v4 + 264;
  if ( *((_QWORD *)v4 + 33) >= 8uLL )
    v8 = *v7;
  EndpointStore = CEndpointStoreCache::GetEndpointStore(v5, v8, &v82);
  v10 = EndpointStore;
  if ( EndpointStore < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3E8,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)EndpointStore);
    if ( v82 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v82);
    return v10;
  }
  if ( v3 == 1 || v3 == 6 )
  {
    v32 = (_QWORD *)*((_QWORD *)&v84 + 1);
  }
  else
  {
    v12 = *((_QWORD *)v82 + 13);
    v80 = v12;
    (*(void (__fastcall **)(__int64, LPCRITICAL_SECTION *))(*(_QWORD *)v12 + 120LL))(v12, &lpCriticalSection);
    v98 = 2;
    v104 = 0LL;
    v105 = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v12 + 104LL))(v12, &v104);
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xC87,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v13);
    v14 = (_QWORD *)*((_QWORD *)&v104 + 1);
    v15 = (_QWORD *)v104;
    v90 = (void *)((__int64)(*((_QWORD *)&v104 + 1) - v104) >> 3);
    v79 = 0LL;
    LOBYTE(v76) = 0;
    if ( (_QWORD)v104 != *((_QWORD *)&v104 + 1) )
    {
      v16 = v80;
      v17 = 0LL;
      while ( 1 )
      {
        v86 = 0LL;
        v87 = 0LL;
        v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v16 + 112LL))(v16, *v15, &v86);
        if ( v18 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xC90,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)(unsigned int)v18);
        v17 += (__int64)(*((_QWORD *)&v86 + 1) - v86) >> 3;
        v19 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v15 + 88LL))(*v15);
        v20 = (__int64 **)*((_QWORD *)&v86 + 1);
        v21 = (__int64 **)v86;
        if ( !v19 )
          break;
        LOBYTE(v76) = 1;
        if ( (_QWORD)v86 != *((_QWORD *)&v86 + 1) )
        {
          do
          {
            v23 = *v21;
            v24 = **v21;
            v122[0] = off_18017B1A8;
            v122[7] = v122;
            (*(void (__fastcall **)(__int64 *, _QWORD *))(v24 + 384))(v23, v122);
            ++v21;
          }
          while ( v21 != v20 );
          v16 = v80;
LABEL_30:
          v21 = (__int64 **)v86;
        }
        if ( v21 )
        {
          std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v21, *((_QWORD *)&v86 + 1));
          std::_Deallocate<16,0>(v86, 8 * ((v87 - (__int64)v86) >> 3));
          v86 = 0LL;
          v87 = 0LL;
        }
        if ( ++v15 == v14 )
        {
          v79 = v17;
          v7 = v89;
          v4 = v81;
          v12 = v80;
          goto LABEL_35;
        }
      }
      if ( (_QWORD)v86 != *((_QWORD *)&v86 + 1) )
      {
        do
        {
          v22 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64 *, _QWORD))(*(_QWORD *)g_DeviceGraphManager
                                                                                           + 40LL))(
                  g_DeviceGraphManager,
                  *v21,
                  *v15);
          if ( v22 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0xC99,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
              (const char *)(unsigned int)v22);
          ++v21;
        }
        while ( v21 != v20 );
      }
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(v15);
      goto LABEL_30;
    }
LABEL_35:
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      v120 = &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper;
      Context = &qword_1801CFD38;
      qword_1801CFD38 = (__int64)&AudioSrvTelemetryProvider::`vftable';
      qword_1801CFD50 = (__int64)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      v121 = 0;
      wil::details::static_lazy<AudioSrvTelemetryProvider>::Completer::~Completer(&v120);
    }
    v25 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v25 > 4u )
    {
      v113 = v79;
      v114 = v90;
      v26 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 24LL))(v12);
      v136 = &v76;
      v137 = 1LL;
      v134 = &v113;
      v135 = 8LL;
      v132 = &v114;
      v133 = 8LL;
      if ( v26 )
      {
        v27 = -1LL;
        do
          ++v27;
        while ( v26[v27] );
        v28 = 2 * v27 + 2;
      }
      else
      {
        v26 = &String2;
        v28 = 2;
      }
      v129 = v26;
      v130 = v28;
      v131 = 0;
      v117[0] = 184549376;
      v117[1] = 4;
      v118 = 0LL;
      v123 = *(unsigned __int16 **)(v25 + 8);
      v124 = *v123;
      v125 = 2;
      v126 = &unk_18019014B;
      v127 = 91;
      v128 = 1;
      LODWORD(v100) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EtwEventWriteTransfer(*(_QWORD *)(v25 + 32), v117, 0LL, 0LL, 6, &v123, v76, v77, v78);
    }
    if ( (_QWORD)v104 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v104, *((_QWORD *)&v104 + 1));
      std::_Deallocate<16,0>(v104, 8 * ((v105 - (__int64)v104) >> 3));
    }
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    v29 = (struct _RTL_CRITICAL_SECTION *)((char *)v4 + 112);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v4 + 112));
    v116 = (struct _RTL_CRITICAL_SECTION *)((char *)v4 + 112);
    v30 = (_QWORD *)*((_QWORD *)v4 + 19);
    v31 = (_QWORD *)*((_QWORD *)v4 + 20);
    v102 = v31;
    v32 = (_QWORD *)*((_QWORD *)&v84 + 1);
    while ( 1 )
    {
      v100 = v30;
      if ( v30 == v31 )
        break;
      v80 = 0LL;
      if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(v30, &v80) >= 0 && v80 )
      {
        v79 = 0LL;
        if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(&v80, &v79) >= 0 )
        {
          v33 = v7;
          if ( *(_QWORD *)v83 >= 8uLL )
            v33 = (void *)*v7;
          (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v79 + 392LL))(v79, v33);
          if ( v32 == v85 )
          {
            try
            {
              std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IStreamGroupProxy> const &>(
                &v84,
                v32,
                &v79);
              v32 = (_QWORD *)*((_QWORD *)&v84 + 1);
            }
            catch ( std::bad_alloc )
            {
              v32 = (_QWORD *)*((_QWORD *)&v84 + 1);
              v29 = v116;
              v30 = v100;
              v31 = v102;
              v7 = v89;
              v4 = v103;
              v81 = v103;
              LODWORD(v78) = v88;
              BYTE1(v76) = v77;
            }
          }
          else
          {
            *v32 = v79;
            Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v32++);
            *((_QWORD *)&v84 + 1) = v32;
          }
        }
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v79);
      }
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(&v80);
      ++v30;
    }
    if ( v29 )
      LeaveCriticalSection(v29);
    v3 = v78;
  }
  v91 = 0.0;
  v92 = 0LL;
  v93 = 0LL;
  ProcessHeap = GetProcessHeap();
  v35 = HeapAlloc(ProcessHeap, 0, 0x68uLL);
  *v35 = v35;
  v35[1] = v35;
  v92 = v35;
  v94 = 0LL;
  v95 = 0LL;
  v96 = 7LL;
  v97 = 8LL;
  v91 = FLOAT_1_0;
  v36 = GetProcessHeap();
  v37 = HeapAlloc(v36, 0, 0x80uLL);
  v94 = (CAudioSessionManager *)v37;
  v38 = v37 + 16;
  *(_QWORD *)&v95 = v37 + 16;
  *((_QWORD *)&v95 + 1) = v37 + 16;
  do
    *v37++ = v35;
  while ( v37 != v38 );
  v39 = (struct _RTL_CRITICAL_SECTION *)((char *)v4 + 8);
  EnterCriticalSection(v39);
  v103 = (CAudioSessionManager *)v39;
  v40 = (float *)((char *)v119 + 48);
  if ( v3 == 1 )
  {
    if ( &v91 != v40 )
      std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::_Move_assign(
        &v91,
        (char *)v119 + 48);
    v41 = v92;
    v42 = *(_QWORD **)v92;
    v43 = v81;
    v44 = BYTE1(v76);
    while ( v42 != v41 )
    {
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)v42[12] + 72LL))(v42[12], 1LL, v44);
      CAudioSessionManager::UnregisterInternalAudioSessionNotificationClients(v43, (struct CAudioSession *)v42[12]);
      v42 = (_QWORD *)*v42;
    }
    v45 = v89;
    goto LABEL_94;
  }
  v106 = *v40;
  v107 = 0LL;
  v108 = 0LL;
  v46 = GetProcessHeap();
  v47 = HeapAlloc(v46, 0, 0x68uLL);
  *v47 = v47;
  v47[1] = v47;
  v107 = v47;
  v109 = 0LL;
  v110 = 0LL;
  v111 = *((_QWORD *)v40 + 6);
  v112 = *((_QWORD *)v40 + 7);
  v48 = (__int64)(*((_QWORD *)v40 + 4) - *((_QWORD *)v40 + 3)) >> 3;
  if ( v48 )
  {
    if ( v48 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
    v49 = v48;
    if ( v49 >= 512 )
    {
      v50 = (_QWORD *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v49 * 8);
      goto LABEL_79;
    }
    if ( v49 * 8 )
    {
      v51 = GetProcessHeap();
      v50 = HeapAlloc(v51, 0, v49 * 8);
LABEL_79:
      v109 = v50;
      v52 = &v50[v49];
      *(_QWORD *)&v110 = &v50[v49];
      for ( *((_QWORD *)&v110 + 1) = &v50[v49]; v50 != v52; ++v50 )
        *v50 = v47;
      goto LABEL_83;
    }
    v109 = 0LL;
    v110 = 0uLL;
  }
LABEL_83:
  v53 = (_QWORD **)*((_QWORD *)v40 + 1);
  for ( i = *v53; i != v53; i = (_QWORD *)*i )
    std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::emplace<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>> const &>(
      &v106,
      &v119,
      i + 2);
  v55 = (_QWORD **)v107;
  v56 = *(_QWORD ***)v107;
  v57 = v78;
  v58 = BYTE1(v76);
  while ( v56 != v55 )
  {
    (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*v56[12] + 72LL))(v56[12], v57, v58);
    v56 = (_QWORD **)*v56;
  }
  v59 = v109;
  v60 = 8 * ((__int64)(v110 - (_QWORD)v109) >> 3);
  v88 = v60;
  v90 = v109;
  v45 = v89;
  if ( v60 >= 0x1000 )
  {
    std::_Adjust_manually_vector_aligned(&v90, &v88);
    v60 = v88;
    v59 = v90;
  }
  operator delete(v59, v60);
  v109 = 0LL;
  v110 = 0LL;
  v61 = (_QWORD **)v107;
  **((_QWORD **)v107 + 1) = 0LL;
  v62 = *v61;
  if ( *v61 )
  {
    do
    {
      v63 = (_QWORD *)*v62;
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(v62 + 12);
      CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)(v62 + 2));
      std::_Deallocate<16,0>(v62, 104LL);
      v62 = v63;
    }
    while ( v63 );
  }
  operator delete(v107, 0x68uLL);
LABEL_94:
  if ( v39 )
    LeaveCriticalSection(v39);
  if ( !v93 )
    goto LABEL_103;
  if ( v97 >> 3 > v93 )
  {
    std::_Hash<std::_Umap_traits<CAudioSessionInstanceId,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>,std::_Uhash_compare<CAudioSessionInstanceId,std::hash<CAudioSessionInstanceId>,std::equal_to<CAudioSessionInstanceId>>,std::allocator<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>>,0>>::_Unchecked_erase(
      &v91,
      *(_QWORD *)v92,
      v92);
LABEL_103:
    v64 = v94;
    goto LABEL_104;
  }
  std::_List_node<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<CAudioSessionInstanceId const,wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>>,void *>>>(
    v93,
    v92);
  *(_QWORD *)v92 = v92;
  *((_QWORD *)v92 + 1) = v92;
  v93 = 0LL;
  v64 = v94;
  v65 = (unsigned __int64)(v95 - (_QWORD)v94 + 7) >> 3;
  if ( (unsigned __int64)v94 > (unsigned __int64)v95 )
    v65 = 0LL;
  if ( v65 )
  {
    memset64(v94, (unsigned __int64)v92, v65);
    goto LABEL_103;
  }
LABEL_104:
  if ( (_DWORD)v78 == 1 || (_DWORD)v78 == 6 )
  {
LABEL_112:
    v66 = v84;
    goto LABEL_113;
  }
  v66 = v84;
  v67 = (_QWORD *)v84;
  if ( (_QWORD *)v84 != v32 )
  {
    v68 = (_QWORD *)v83;
    do
    {
      v69 = v45;
      if ( *v68 >= 8uLL )
        v69 = *v45;
      (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*v67 + 400LL))(*v67, v69);
      ++v67;
    }
    while ( v67 != v32 );
    v64 = v94;
    goto LABEL_112;
  }
LABEL_113:
  v70 = 8 * ((__int64)(v95 - (_QWORD)v64) >> 3);
  v83 = v70;
  v81 = v64;
  if ( v70 >= 0x1000 )
  {
    std::_Adjust_manually_vector_aligned((void **)&v81, &v83);
    v70 = v83;
    v64 = v81;
  }
  operator delete(v64, v70);
  v94 = 0LL;
  v95 = 0LL;
  v71 = (_QWORD **)v92;
  **((_QWORD **)v92 + 1) = 0LL;
  v72 = *v71;
  if ( *v71 )
  {
    do
    {
      v73 = (_QWORD *)*v72;
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(v72 + 12);
      CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)(v72 + 2));
      std::_Deallocate<16,0>(v72, 104LL);
      v72 = v73;
    }
    while ( v73 );
  }
  operator delete(v92, 0x68uLL);
  v74 = v82;
  if ( v82 )
  {
    for ( j = *((_DWORD *)v82 + 3); j != 0x7FFFFFFF; j = *((_DWORD *)v74 + 3) )
    {
      if ( j == _InterlockedCompareExchange((volatile signed __int32 *)v74 + 3, j - 1, j) )
        break;
    }
    if ( j == 1 )
    {
      (*(void (__fastcall **)(struct CEndpointStore *, __int64))(*(_QWORD *)v82 + 24LL))(v82, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL))();
    }
    v32 = (_QWORD *)*((_QWORD *)&v84 + 1);
    v66 = v84;
  }
  if ( v66 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v66, v32);
    std::_Deallocate<16,0>(v66, ((unsigned __int64)v85 - v66) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  return 0LL;
}
