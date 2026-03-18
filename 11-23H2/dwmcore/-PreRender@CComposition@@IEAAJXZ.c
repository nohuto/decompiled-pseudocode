/*
 * XREFs of ?PreRender@CComposition@@IEAAJXZ @ 0x180047A10
 * Callers:
 *     ?ProcessComposition@CComposition@@IEAAXPEA_N@Z @ 0x18004781C (-ProcessComposition@CComposition@@IEAAXPEA_N@Z.c)
 * Callees:
 *     ?ProcessBatches@CComposition@@IEAAJXZ @ 0x180048420 (-ProcessBatches@CComposition@@IEAAJXZ.c)
 *     ?BeginCompositionFrame@CComposition@@IEAAJXZ @ 0x18004866C (-BeginCompositionFrame@CComposition@@IEAAJXZ.c)
 *     ?CheckOcclusionState@CRenderTargetManager@@QEAAJXZ @ 0x180048800 (-CheckOcclusionState@CRenderTargetManager@@QEAAJXZ.c)
 *     ?ClearD2DCaches@CDeviceManager@@IEAA_NK@Z @ 0x180048A64 (-ClearD2DCaches@CDeviceManager@@IEAA_NK@Z.c)
 *     ?UpdateExpressions@CExpressionManager@@QEAAX_K0@Z @ 0x180049C24 (-UpdateExpressions@CExpressionManager@@QEAAX_K0@Z.c)
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x18005EF70 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x180072578 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x180081C20 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180082158 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ??$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContext@@W4WalkReason@@@Z @ 0x180083458 (--$WalkSubtree@VCInputSinkContext@@@CVisualTreeIterator@@QEAAJPEBVCVisual@@0PEAVCInputSinkContex.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x180091A90 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180098088 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@s.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18009DA0C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x1800AEEE0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800BA450 (-RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     _tlgKeywordOn @ 0x1800D6054 (_tlgKeywordOn.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800DC75C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x1800E5678 (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     __security_check_cookie @ 0x18010EE30 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F3C8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x18012DB24 (McTemplateU0q_EventWriteTransfer.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1801A2414 (McGenEventWrite_EventWriteTransfer.c)
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@PEAX@2@PEAU32@@Z @ 0x1801B7D80 (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V-$_.c)
 *     ?EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ @ 0x1801BC578 (-EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ.c)
 *     ?reset@?$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801BD15C (-reset@-$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@1@AEB_K@Z @ 0x1801E3DA8 (--$find@X@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V-$_Uhash_co.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x180216240 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ?Create@CDebugVisualImage@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x1802180BC (-Create@CDebugVisualImage@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?LockAndRead@CDebugVisualImage@@QEAAXXZ @ 0x180218218 (-LockAndRead@CDebugVisualImage@@QEAAXXZ.c)
 *     ?IsSuperWetCompatible@CSynchronousSuperWetInk@@AEBA_NXZ @ 0x180253584 (-IsSuperWetCompatible@CSynchronousSuperWetInk@@AEBA_NXZ.c)
 *     ?UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x180274FBC (-UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
 */

__int64 __fastcall CComposition::PreRender(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // r13
  CComposition *v2; // rdi
  int v3; // eax
  unsigned int v4; // ecx
  int v5; // r14d
  __int64 v6; // rsi
  unsigned int i; // ebx
  __int64 ***v8; // rsi
  __int64 **j; // rbx
  unsigned __int64 v10; // rcx
  HANDLE CurrentThread; // rax
  BOOL v12; // eax
  int v13; // eax
  unsigned int v14; // ecx
  unsigned __int64 v15; // rcx
  HANDLE v16; // rax
  BOOL ThreadCycleTime; // eax
  int v18; // eax
  unsigned int v19; // edx
  CDeviceManager *v20; // rcx
  __int64 v21; // rdx
  char v22; // si
  _QWORD *v23; // rbx
  CD3DResource *v24; // rcx
  CD3DDevice *v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rax
  _QWORD *v28; // rbx
  _QWORD *v29; // r15
  _QWORD *v30; // rsi
  __int64 *v31; // rsi
  __int64 *v32; // rbx
  unsigned int v33; // esi
  int v34; // ebx
  unsigned __int64 v35; // rcx
  HANDLE v36; // rax
  BOOL v37; // eax
  _QWORD *v38; // rsi
  _QWORD *m; // rbx
  _QWORD *v40; // rcx
  __int64 v41; // rax
  int v42; // eax
  unsigned int v43; // ecx
  int v44; // ebx
  __int64 v45; // rbx
  __int64 v46; // rbx
  __int64 v47; // r15
  _QWORD *v48; // rcx
  __int64 v49; // rax
  __int64 *v50; // rsi
  void *v51; // rbx
  __int64 v52; // rax
  CResource *v53; // rbx
  _QWORD *v55; // r15
  __int64 v56; // r13
  __int64 n; // r12
  unsigned __int8 (__fastcall ***v58)(_QWORD, __int64); // rcx
  __int64 v59; // rcx
  __int64 *v60; // r13
  int v61; // r15d
  __int64 v62; // r12
  __int64 *v63; // rbx
  __int64 v64; // rdx
  int v65; // eax
  HANDLE ProcessHeap; // rax
  __int64 v67; // rsi
  int v68; // ebx
  int v69; // eax
  int v70; // ebx
  __int64 v71; // rax
  unsigned int v72; // ecx
  __int64 v73; // rax
  __int64 v74; // r13
  _QWORD *v75; // r12
  _QWORD *v76; // rdi
  __int64 v77; // r12
  _DWORD *v78; // r15
  int v79; // r8d
  int v80; // r9d
  unsigned int v81; // ecx
  __int64 v82; // r9
  unsigned int k; // r8d
  __int64 v84; // rax
  __int64 v85; // rcx
  __int64 v86; // r15
  __int64 v87; // rcx
  __int64 v88; // r8
  unsigned int v89; // ecx
  __int64 v90; // rbx
  _QWORD *v91; // r15
  _QWORD *v92; // rsi
  __int64 ii; // r12
  unsigned __int64 *v94; // [rsp+20h] [rbp-E0h]
  unsigned int v95; // [rsp+20h] [rbp-E0h]
  unsigned __int64 CycleTime; // [rsp+40h] [rbp-C0h] BYREF
  CComposition *v97; // [rsp+48h] [rbp-B8h] BYREF
  int v98; // [rsp+50h] [rbp-B0h] BYREF
  RTL_SRWLOCK *v99; // [rsp+58h] [rbp-A8h] BYREF
  CResource *v100; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v101[4]; // [rsp+70h] [rbp-90h] BYREF
  int v102; // [rsp+74h] [rbp-8Ch]
  __int64 v103; // [rsp+78h] [rbp-88h]
  __int64 v104; // [rsp+80h] [rbp-80h]
  __int64 v105; // [rsp+8Ch] [rbp-74h]
  __int64 v106; // [rsp+94h] [rbp-6Ch]
  void *v107; // [rsp+A0h] [rbp-60h]
  int v108; // [rsp+A8h] [rbp-58h]
  __int64 v109; // [rsp+B0h] [rbp-50h]
  __int64 v110; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v111[2]; // [rsp+D0h] [rbp-30h] BYREF
  char v112; // [rsp+E0h] [rbp-20h] BYREF
  char v113; // [rsp+F0h] [rbp-10h] BYREF
  char v114; // [rsp+100h] [rbp+0h] BYREF
  char v115; // [rsp+110h] [rbp+10h] BYREF

  v1 = this + 84;
  v97 = (CComposition *)this;
  v2 = (CComposition *)this;
  v99 = this + 84;
  v100 = 0LL;
  AcquireSRWLockExclusive(this + 84);
  LODWORD(v1[1].Ptr) = GetCurrentThreadId();
  v3 = CComposition::BeginCompositionFrame(v2);
  v5 = v3;
  if ( v3 < 0 )
  {
    v95 = 3208;
    goto LABEL_162;
  }
  (*(void (__fastcall **)(CComposition *))(*(_QWORD *)v2 + 32LL))(v2);
  v3 = CComposition::ProcessBatches(v2);
  v5 = v3;
  if ( v3 < 0 )
  {
    v95 = 3214;
LABEL_162:
    MilInstrumentationCheckHR_MaybeFailFast(v4, &dword_180356700, 3u, v3, v95, 0LL);
    goto LABEL_55;
  }
  v6 = *((_QWORD *)v2 + 53);
  for ( i = 0; i < *(_DWORD *)(v6 + 288); ++i )
  {
    v71 = *(_QWORD *)(v6 + 264);
    if ( *(_BYTE *)(*(_QWORD *)(v71 + 8LL * i) + 320LL) )
      InteractionSourceManager::UpdateActiveManipulations((InteractionSourceManager *)(*(_QWORD *)(v71 + 8LL * i) + 200LL));
  }
  v8 = *(__int64 ****)(v6 + 600);
  for ( j = *v8; j != (__int64 **)v8; j = (__int64 **)*j )
    (*(void (__fastcall **)(__int64 *))*j[2])(j[2]);
  v10 = 0LL;
  CycleTime = 0LL;
  if ( ::CycleTime )
  {
    CurrentThread = GetCurrentThread();
    v12 = QueryThreadCycleTime(CurrentThread, &CycleTime);
    v10 = CycleTime;
    if ( v12 )
      qword_1803E5A50 += CycleTime - ::CycleTime;
  }
  ::CycleTime = v10;
  v13 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v2 + 28) + 32LL))(*((_QWORD *)v2 + 28));
  v5 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xD1Eu, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(v72, &dword_180356700, 3u, v5, 0xC9Eu, 0LL);
    goto LABEL_55;
  }
  v15 = 0LL;
  v111[0] = 0LL;
  if ( ::CycleTime )
  {
    v16 = GetCurrentThread();
    ThreadCycleTime = QueryThreadCycleTime(v16, v111);
    v15 = v111[0];
    if ( ThreadCycleTime )
      qword_1803E5A58 += v111[0] - ::CycleTime;
  }
  ::CycleTime = v15;
  if ( g_pDebugVisual && (int)CDebugVisualImage::Create(v2, g_pDebugVisual, &v100) >= 0 )
    *((_BYTE *)v2 + 1280) = 1;
  v18 = CRenderTargetManager::CheckOcclusionState(*((CRenderTargetManager **)v2 + 27));
  v5 = v18;
  if ( v18 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v20, &dword_180356700, 3u, v18, 0xCACu, 0LL);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 1) != 0 )
    McTemplateU0q_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_CLEAR_D2D_CACHES_Start,
      2000LL);
  v22 = CDeviceManager::ClearD2DCaches(v20, v19);
  if ( v22 )
    v22 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)v2 + 83) + 8LL))(*((_QWORD *)v2 + 83), 2000LL);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 1) != 0 )
    McTemplateU0q_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_CLEAR_D2D_CACHES_Stop,
      v22 != 0);
  v23 = (_QWORD *)*((_QWORD *)v2 + 36);
  if ( (__int64)(v23[6] - v23[5]) >> 3 )
  {
    CSceneResourceManager::EnsureSceneCompositor(*((CSceneResourceManager **)v2 + 36));
  }
  else
  {
    v24 = (CD3DResource *)v23[3];
    if ( v24 )
    {
      CD3DResource::RemoveResourceNotifier(v24, *((const struct IDeviceResourceNotify **)v2 + 36));
      v73 = v23[3];
      if ( v73 )
      {
        v74 = *(_QWORD *)(v73 + 96);
        if ( !v74 || (v75 = (_QWORD *)v23[5], v75 == (_QWORD *)v23[6]) )
        {
          v1 = (RTL_SRWLOCK *)((char *)v2 + 672);
        }
        else
        {
          v76 = (_QWORD *)v23[6];
          do
          {
            (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v75 + 8LL))(*v75, v74);
            ++v75;
          }
          while ( v75 != v76 );
          v2 = v97;
          v1 = v99;
        }
      }
      wil::com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>::reset(v23 + 3);
    }
    v25 = (CD3DDevice *)v23[4];
    v23[4] = 0LL;
    if ( v25 )
      CD3DDevice::Release(v25);
  }
  v26 = *((_QWORD *)v2 + 33);
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  v27 = *((_QWORD *)v2 + 27);
  if ( *(_BYTE *)(v27 + 581) && !*(_BYTE *)(v27 + 582) )
  {
    dword_1803E5A10 |= 0x200u;
    v67 = *((_QWORD *)v2 + 53);
    if ( *(_QWORD *)(v67 + 544) )
      CExpressionManager::UpdateExpressions(
        *((CExpressionManager **)v2 + 53),
        *((_QWORD *)v2 + 76),
        *((_QWORD *)v2 + 62));
    v68 = *(_DWORD *)(v67 + 256) - 1;
    if ( v68 >= 0 )
    {
      v77 = 16LL * v68;
      do
      {
        v78 = *(_DWORD **)(*(_QWORD *)(v67 + 232) + v77 + 8);
        if ( !CNotificationResource::ShouldNotify((CNotificationResource *)v78)
          && !CPtrArrayBase::GetCount((CPtrArrayBase *)(v78 + 6)) )
        {
          if ( (unsigned int)dword_1803E37D0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1803E37D0, 4LL) )
          {
            v98 = v78[16];
            LODWORD(v99) = CNotificationResource::GetChannelCallbackId((CNotificationResource *)v78);
            LODWORD(v97) = (*(__int64 (**)(void))(*(_QWORD *)v78 + 144LL))();
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
              (unsigned int)&dword_1803E37D0,
              (unsigned int)&unk_180380512,
              v79,
              v80,
              (__int64)&v97,
              (__int64)&v99,
              (__int64)&v98);
          }
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v78 + 16LL))(v78);
          v81 = *(_DWORD *)(v67 + 256);
          if ( v68 < v81 )
          {
            v82 = *(_QWORD *)(v67 + 232);
            for ( k = v68; k < v81 - 1; v81 = *(_DWORD *)(v67 + 256) )
            {
              v84 = 2LL * k;
              v85 = 2LL * ++k;
              *(_OWORD *)(v82 + 8 * v84) = *(_OWORD *)(v82 + 8 * v85);
            }
            *(_DWORD *)(v67 + 256) = v81 - 1;
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(v81, 0LL, 0, -2147024809, 0x19Cu, 0LL);
          }
        }
        v77 -= 16LL;
        --v68;
      }
      while ( v68 >= 0 );
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)v2 + 28) + 48LL))(*((_QWORD *)v2 + 28))
      || *((_DWORD *)v2 + 186) )
    {
      *((_BYTE *)v2 + 1280) = 1;
    }
    goto LABEL_55;
  }
  if ( !v22 )
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)v2 + 82) + 32LL))(
      *((_QWORD *)v2 + 82),
      2000LL,
      4LL);
  v28 = (_QWORD *)*((_QWORD *)v2 + 32);
  LOBYTE(v21) = 0;
  v29 = (_QWORD *)v28[6];
  v30 = (_QWORD *)v28[5];
  if ( v30 == v29 )
    goto LABEL_172;
  do
  {
    if ( *(_QWORD *)(*v28 + 496LL) - v30[11] < 0xAuLL )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v30 + 72LL))(*v30, 0LL, 0LL);
      LOBYTE(v21) = 1;
    }
    v30 += 13;
  }
  while ( v30 != v29 );
  if ( !(_BYTE)v21 )
  {
LABEL_172:
    v31 = (__int64 *)v28[2];
    v32 = (__int64 *)v28[3];
    if ( v31 != v32 )
    {
      while ( 1 )
      {
        v86 = *v31;
        v87 = *(_QWORD *)(*v31 + 256);
        if ( !v87
          || !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v87 + 56LL))(v87, 182LL)
          || !CSynchronousSuperWetInk::IsSuperWetCompatible(*(CSynchronousSuperWetInk **)(v86 + 256)) )
        {
          goto LABEL_145;
        }
        if ( *(_DWORD *)(**(_QWORD **)(v88 + 216) + 4LL) > *(_DWORD *)(v88 + 240) )
          goto LABEL_144;
        v21 = *(_QWORD *)(*(_QWORD *)(v88 + 88) + 24LL);
        v89 = *(_DWORD *)(*(_QWORD *)v21 + 4LL);
        if ( v89 > *(_DWORD *)(v88 + 100) )
          break;
LABEL_145:
        if ( ++v31 == v32 )
          goto LABEL_34;
      }
      *(_DWORD *)(v88 + 100) = v89;
LABEL_144:
      CVisual::PropagateFlags(v86, 5LL);
      goto LABEL_145;
    }
  }
LABEL_34:
  v33 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v94 = v111;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_UCE_PROCESSANIMATERESOURCES_Start);
  }
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
  {
    v94 = (unsigned __int64 *)&v112;
    McGenEventWrite_EventWriteTransfer(&Microsoft_Windows_Dwm_Compositor_Context, &UpdateAnimations_Start);
  }
  v34 = *((_DWORD *)v2 + 178);
  while ( v34 )
  {
    v58 = *(unsigned __int8 (__fastcall ****)(_QWORD, __int64))(*((_QWORD *)v2 + 86) + 8LL * (unsigned int)--v34);
    if ( (**v58)(v58, v21) )
      ++v33;
  }
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
    McTemplateU0q_EventWriteTransfer(&Microsoft_Windows_Dwm_Compositor_Context, &UpdateAnimations_Stop, v33);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v94 = (unsigned __int64 *)&v113;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_UCE_PROCESSANIMATERESOURCES_Stop);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      v94 = (unsigned __int64 *)&v114;
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_PROCESS_EXPRESSIONS_Start);
    }
  }
  CExpressionManager::UpdateExpressions(*((CExpressionManager **)v2 + 53), *((_QWORD *)v2 + 76), *((_QWORD *)v2 + 62));
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v94 = (unsigned __int64 *)&v115;
    McGenEventWrite_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_PROCESS_EXPRESSIONS_Stop);
  }
  v35 = 0LL;
  v111[0] = 0LL;
  if ( ::CycleTime )
  {
    v36 = GetCurrentThread();
    v37 = QueryThreadCycleTime(v36, v111);
    v35 = v111[0];
    if ( v37 )
      qword_1803E5A60 += v111[0] - ::CycleTime;
  }
  ::CycleTime = v35;
  v38 = *(_QWORD **)(*((_QWORD *)v2 + 157) + 48LL);
  for ( m = (_QWORD *)*v38; m != v38; m = (_QWORD *)*m )
  {
    v55 = (_QWORD *)m[3];
    v56 = v55[19];
    for ( n = v55[18]; n != v56; n += 8LL )
    {
      std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::find<void>(
        v55 + 10,
        &CycleTime,
        n);
      if ( CycleTime != v55[11] )
      {
        *(_QWORD *)(*(_QWORD *)(CycleTime + 24) + 192LL) = 0LL;
        std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::_Unchecked_erase(v55 + 10);
      }
    }
    v55[19] = v55[18];
  }
  v2 = v97;
  v40 = (_QWORD *)*((_QWORD *)v97 + 36);
  v41 = v40[3];
  if ( v41 )
  {
    v90 = *(_QWORD *)(v41 + 96);
    if ( v90 )
    {
      v91 = (_QWORD *)v40[6];
      v92 = (_QWORD *)v40[5];
      for ( ii = *(_QWORD *)(v40[1] + 608LL); v92 != v91; ++v92 )
        (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*v92 + 16LL))(*v92, v90, ii);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v90 + 96LL))(v90);
    }
  }
  v42 = CComposition::CleanTrees(v2);
  v44 = v42;
  if ( v42 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v43, &dword_180356700, 3u, v42, 0xCD6u, 0LL);
  if ( !v5 || v5 >= 0 && v44 < 0 )
    v5 = v44;
  v1 = (RTL_SRWLOCK *)((char *)v2 + 672);
LABEL_55:
  v45 = *((_QWORD *)v2 + 30);
  if ( v45 )
  {
    v46 = v45 + 80;
    while ( 1 )
    {
      v47 = 0LL;
      EnterCriticalSection((LPCRITICAL_SECTION)(v46 + 24));
      v48 = *(_QWORD **)v46;
      if ( *(_QWORD *)(*(_QWORD *)v46 + 8LL) != v46 || (v49 = *v48, *(_QWORD **)(*v48 + 8LL) != v48) )
        __fastfail(3u);
      *(_QWORD *)v46 = v49;
      *(_QWORD *)(v49 + 8) = v46;
      if ( v48 != (_QWORD *)v46 )
      {
        v47 = v48[2];
        operator delete(v48, 0x18uLL);
        --*(_DWORD *)(v46 + 16);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(v46 + 24));
      if ( !v47 )
        break;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
    }
  }
  if ( *((_BYTE *)v2 + 1280) )
  {
    v69 = CComposition::CleanTrees(v2);
    v70 = v69;
    if ( v69 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v43, &dword_180356700, 3u, v69, 0xCF5u, 0LL);
    if ( !v5 || v5 >= 0 && v70 < 0 )
      v5 = v70;
  }
  v50 = (__int64 *)*((_QWORD *)v2 + 167);
  v51 = 0LL;
  v106 = 0LL;
  v52 = ((__int64)v50 - *((_QWORD *)v2 + 166)) >> 3;
  v107 = 0LL;
  v108 = 0;
  v105 = 0LL;
  v102 = 0;
  v103 = 0LL;
  v104 = 0LL;
  v110 = 0LL;
  if ( v52 )
  {
    while ( 1 )
    {
      v60 = (__int64 *)*((_QWORD *)v2 + 166);
      v61 = 0;
      v62 = *((_QWORD *)v2 + 168);
      v63 = v60;
      *((_QWORD *)v2 + 168) = 0LL;
      *((_QWORD *)v2 + 167) = 0LL;
      *((_QWORD *)v2 + 166) = 0LL;
      if ( v60 != v50 )
        break;
LABEL_89:
      if ( v60 )
      {
        std::_Destroy_range<std::allocator<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>>(v60, v50);
        std::_Deallocate<16,0>(v60, (v62 - (_QWORD)v60) & 0xFFFFFFFFFFFFFFF8uLL);
      }
      v50 = (__int64 *)*((_QWORD *)v2 + 167);
      if ( !(((__int64)v50 - *((_QWORD *)v2 + 166)) >> 3) )
        goto LABEL_92;
    }
    do
    {
      v64 = *v63;
      if ( (*(_BYTE *)(*v63 + 96) & 0x20) != 0 )
      {
        v110 = 0LL;
        v109 = 0LL;
        v65 = CVisualTreeIterator::WalkSubtree<CInputSinkContext>(v101, v64, v64, v101, v94);
        v61 = v65;
        if ( v65 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, v65, 0x4Au, 0LL);
          goto LABEL_168;
        }
      }
      ++v63;
    }
    while ( v63 != v50 );
    if ( v61 >= 0 )
      goto LABEL_89;
LABEL_168:
    MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, v61, 0xDD0u, 0LL);
    if ( v60 )
    {
      std::_Destroy_range<std::allocator<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>>(v60, v50);
      std::_Deallocate<16,0>(v60, (v62 - (_QWORD)v60) & 0xFFFFFFFFFFFFFFF8uLL);
    }
LABEL_92:
    v51 = v107;
    v1 = (RTL_SRWLOCK *)((char *)v2 + 672);
  }
  if ( v51 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v51);
  }
  (*(void (__fastcall **)(CComposition *))(*(_QWORD *)v2 + 40LL))(v2);
  v53 = v100;
  if ( v100 )
    CDebugVisualImage::LockAndRead(v100);
  LODWORD(v1[1].Ptr) = 0;
  ReleaseSRWLockExclusive(v1);
  if ( *((_BYTE *)v2 + 1272) )
  {
    v59 = *(_QWORD *)(*((_QWORD *)v2 + 29) + 24LL);
    if ( v59 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
    *((_BYTE *)v2 + 1272) = 0;
  }
  if ( dword_1803E61D0 )
    SetEvent(CManipulationManager::s_rghWaitEvents);
  if ( v53 )
    CResource::InternalRelease(v53);
  return (unsigned int)v5;
}
