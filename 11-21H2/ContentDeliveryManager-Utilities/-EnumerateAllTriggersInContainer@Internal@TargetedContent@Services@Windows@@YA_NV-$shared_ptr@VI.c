/*
 * XREFs of ?EnumerateAllTriggersInContainer@Internal@TargetedContent@Services@Windows@@YA_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@V?$function@$$A6A_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@AEAVPropertySetHelper@Triggers@CreativeFramework@@@Z@6@@Z @ 0x1800AA300
 * Callers:
 *     ?EnumerateAllTriggersInContainer@Internal@TargetedContent@Services@Windows@@YA_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@V?$function@$$A6A_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@AEAVPropertySetHelper@Triggers@CreativeFramework@@@Z@6@@Z @ 0x1800AA300 (-EnumerateAllTriggersInContainer@Internal@TargetedContent@Services@Windows@@YA_NV-$shared_ptr@VI.c)
 *     ?EnumerateTriggersWithStateInContainer@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@W4TargetedContentTriggerState@1234@V?$function@$$A6A_NAEAVPropertySetHelper@Triggers@CreativeFramework@@@Z@6@@Z @ 0x1800AADA4 (-EnumerateTriggersWithStateInContainer@Internal@TargetedContent@Services@Windows@@YAXV-$shared_p.c)
 *     ?UpdateTriggerStateIfNeeded@Internal@TargetedContent@Services@Windows@@YAJPEAUHSTRING__@@AEAVsrwlock@wil@@V?$function@$$A6AXPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@W4TargetedContentTriggerState@2345@1@Z@std@@@Z @ 0x1800AE2B8 (-UpdateTriggerStateIfNeeded@Internal@TargetedContent@Services@Windows@@YAJPEAUHSTRING__@@AEAVsrw.c)
 * Callees:
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x1800042D0 (-_Xbad_function_call@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180051E10 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x180057E48 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@Uless@Details@CommonHelper@CreativeFramework@@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@2@@std@@PEAX@2@@Z @ 0x180066F70 (-_Erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@.c)
 *     ?_Reset0@?$_Ptr_base@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@QEAAXPEAVISettingsContainer@CommonHelper@CreativeFramework@@PEAV_Ref_count_base@2@@Z @ 0x1800A3EB8 (-_Reset0@-$_Ptr_base@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@QEAAXPEAVISetting.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x1800A41C4 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ??0PropertySetHelper@Triggers@CreativeFramework@@QEAA@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800A8B5C (--0PropertySetHelper@Triggers@CreativeFramework@@QEAA@PEAUIPropertySet@Collections@Foundation@Wi.c)
 *     ??1OutRef@RoVariant@@QEAA@XZ @ 0x1800A8E5C (--1OutRef@RoVariant@@QEAA@XZ.c)
 *     ?EnumerateAllTriggersInContainer@Internal@TargetedContent@Services@Windows@@YA_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@V?$function@$$A6A_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@AEAVPropertySetHelper@Triggers@CreativeFramework@@@Z@6@@Z @ 0x1800AA300 (-EnumerateAllTriggersInContainer@Internal@TargetedContent@Services@Windows@@YA_NV-$shared_ptr@VI.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=30
char __fastcall Windows::Services::TargetedContent::Internal::EnumerateAllTriggersInContainer(__int64 *a1, __int64 a2)
{
  __int64 (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // rcx
  int v5; // eax
  int v6; // eax
  char v7; // di
  int v8; // eax
  __int64 v9; // rax
  int v10; // eax
  unsigned __int64 v11; // r9
  int v12; // eax
  struct Windows::Foundation::Collections::IPropertySet *v13; // rdx
  int v14; // eax
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v20; // rcx
  _QWORD *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v24; // rcx
  _QWORD *v25; // rcx
  void **v26; // r14
  void **v27; // rbx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 (__fastcall ***v30)(_QWORD, _BYTE *); // rcx
  __int64 (__fastcall **v31)(_QWORD, _BYTE *); // rax
  __int64 v32; // rax
  __int64 v33; // r8
  void **v34; // rax
  void **i; // rax
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  int v42; // [rsp+20h] [rbp-E0h] BYREF
  int v43; // [rsp+24h] [rbp-DCh] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v44; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD *v45; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v46; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v47; // [rsp+40h] [rbp-C0h] BYREF
  void (__fastcall ***v48)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-B8h] BYREF
  __int64 v49; // [rsp+50h] [rbp-B0h] BYREF
  int v50; // [rsp+58h] [rbp-A8h]
  void *v51[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 *v52; // [rsp+70h] [rbp-90h]
  __int64 v53; // [rsp+78h] [rbp-88h] BYREF
  __int64 v54; // [rsp+80h] [rbp-80h]
  __int64 (__fastcall ***v55)(_QWORD, GUID *, __int64 *); // [rsp+90h] [rbp-70h] BYREF
  __int128 v56; // [rsp+98h] [rbp-68h] BYREF
  __int64 *v57; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v58; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v59; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v60[24]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v61; // [rsp+E0h] [rbp-20h]
  __int64 *v62; // [rsp+E8h] [rbp-18h]
  __int64 v63; // [rsp+F0h] [rbp-10h]
  _BYTE v64[16]; // [rsp+F8h] [rbp-8h] BYREF
  void *v65[3]; // [rsp+108h] [rbp+8h] BYREF
  unsigned __int64 v66; // [rsp+120h] [rbp+20h]
  __int128 v67; // [rsp+128h] [rbp+28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+68h]

  v62 = a1;
  v63 = a2;
  v4 = **(__int64 (__fastcall *****)(_QWORD, GUID *, __int64 *))(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)*a1 + 24LL))(
                                                                  *a1,
                                                                  v64);
  v55 = v4;
  if ( v4 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v4)[1])(v4);
  std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)v64);
  v48 = 0LL;
  v5 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
         &v55,
         (__int64 *)&v48);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      151LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v5,
      v42);
  v47 = 0LL;
  (**v48)(v48, &GUID_fe2f3d47_5d47_5499_8374_430c7cda0204, &v47);
  v46 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v47 + 48LL))(v47, &v46);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      155LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v6,
      v42);
  v7 = 1;
  LOBYTE(v42) = 1;
  while ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v46 + 56LL))(v46, &v42) >= 0 )
  {
    if ( !(_BYTE)v42 )
      goto LABEL_52;
    v45 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)v46 + 48LL))(v46, &v45);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        162LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v8,
        v42);
    v49 = 0LL;
    v50 = 0;
    v9 = *v45;
    v57 = &v49;
    v58 = 0LL;
    v10 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *))(v9 + 56))(v45, &v58);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        165LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v10,
        v42);
    RoVariant::OutRef::~OutRef((RoVariant::OutRef *)&v57);
    v11 = (unsigned int)v50;
    if ( v50 >= 0 )
    {
      if ( v50 )
      {
        if ( v50 == 1 || v50 == 3 )
        {
          v43 = 13;
        }
        else
        {
          v12 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v49 + 48LL))(v49, &v43);
          v11 = (unsigned int)v12;
          if ( v12 < 0 )
            goto LABEL_19;
        }
      }
      else
      {
        v43 = 0;
      }
      v11 = 0LL;
    }
LABEL_19:
    if ( (v11 & 0x80000000) != 0LL )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        167LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)v11,
        v42);
    v13 = 0LL;
    v44 = 0LL;
    if ( v43 == 13 )
    {
      v14 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct Windows::Foundation::Collections::IPropertySet **))v49)(
              v49,
              &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
              &v44);
      v13 = v44;
    }
    else
    {
      v14 = -2147418113;
    }
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        169LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v14,
        v42);
    CreativeFramework::Triggers::PropertySetHelper::PropertySetHelper(
      (CreativeFramework::Triggers::PropertySetHelper *)&v53,
      v13);
    v56 = 0LL;
    v15 = a1[1];
    v16 = *a1;
    if ( v15 )
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
    std::_Ptr_base<CreativeFramework::CommonHelper::ISettingsContainer>::_Reset0(&v56, v16, v15);
    v52 = &v56;
    v17 = *(_QWORD *)(a2 + 24);
    if ( !v17 )
      std::_Xbad_function_call();
    v7 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64 *))(*(_QWORD *)v17 + 16LL))(v17, &v56, &v53);
    std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)&v56);
    if ( !v7 || (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v46 + 64LL))(v46, &v42) < 0 )
    {
      v22 = v54;
      if ( v54 )
      {
        v54 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      }
      v23 = v53;
      if ( v53 )
      {
        v53 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      }
      v24 = v44;
      if ( v44 )
      {
        v44 = 0LL;
        (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v24 + 16LL))(v24);
      }
      if ( v49 && ((v50 - 3) & 0xFFFFFFFB) == 0 )
        (*(void (**)(void))(*(_QWORD *)v49 + 16LL))();
      v25 = v45;
      if ( v45 )
      {
        v45 = 0LL;
        (*(void (__fastcall **)(_QWORD *))(*v25 + 16LL))(v25);
      }
LABEL_52:
      if ( !v7 )
        goto LABEL_79;
      break;
    }
    v18 = v54;
    if ( v54 )
    {
      v54 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    v19 = v53;
    if ( v53 )
    {
      v53 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    v20 = v44;
    if ( v44 )
    {
      v44 = 0LL;
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v20 + 16LL))(v20);
    }
    if ( v49 && ((v50 - 3) & 0xFFFFFFFB) == 0 )
      (*(void (**)(void))(*(_QWORD *)v49 + 16LL))();
    v21 = v45;
    if ( v45 )
    {
      v45 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v21 + 16LL))(v21);
    }
  }
  (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)*a1 + 16LL))(*a1, v51);
  v26 = (void **)v51[0];
  v27 = *(void ***)v51[0];
  while ( v27 != v26 )
  {
    v66 = 7LL;
    v65[2] = 0LL;
    LOWORD(v65[0]) = 0;
    std::wstring::assign(v65, v27 + 4, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
    v67 = 0LL;
    v28 = (__int64)v27[9];
    v29 = (__int64)v27[8];
    if ( v28 )
      _InterlockedIncrement((volatile signed __int32 *)(v28 + 8));
    std::_Ptr_base<CreativeFramework::CommonHelper::ISettingsContainer>::_Reset0(&v67, v29, v28);
    v52 = (__int128 *)v60;
    v61 = 0LL;
    v30 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a2 + 24);
    if ( v30 )
    {
      v31 = *v30;
      if ( v30 == (__int64 (__fastcall ***)(_QWORD, _BYTE *))a2 )
        v32 = (*v31)(v30, v60);
      else
        v32 = (*v31)(v30, 0LL);
      v61 = v32;
    }
    v59 = 0LL;
    v33 = *((_QWORD *)&v67 + 1);
    if ( *((_QWORD *)&v67 + 1) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v67 + 1) + 8LL));
      v33 = *((_QWORD *)&v67 + 1);
    }
    std::_Ptr_base<CreativeFramework::CommonHelper::ISettingsContainer>::_Reset0(&v59, v67, v33);
    v7 = Windows::Services::TargetedContent::Internal::EnumerateAllTriggersInContainer(&v59, v60);
    if ( !v7 )
    {
      std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)&v67);
      if ( v66 >= 8 )
        operator delete(v65[0]);
      break;
    }
    std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)&v67);
    if ( v66 >= 8 )
      operator delete(v65[0]);
    if ( !*((_BYTE *)v27 + 25) )
    {
      v34 = (void **)v27[2];
      if ( *((_BYTE *)v34 + 25) )
      {
        for ( i = (void **)v27[1]; !*((_BYTE *)i + 25) && v27 == i[2]; i = (void **)i[1] )
          v27 = i;
        v27 = i;
      }
      else
      {
        do
        {
          v27 = v34;
          v34 = (void **)*v34;
        }
        while ( !*((_BYTE *)v34 + 25) );
      }
    }
  }
  std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>,CreativeFramework::CommonHelper::Details::less,std::allocator<std::pair<std::wstring const,std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>>>,0>>::_Erase(
    (__int64)v51,
    *((__int64 **)v51[0] + 1));
  *((void **)v51[0] + 1) = v51[0];
  *(_QWORD *)v51[0] = v51[0];
  *((void **)v51[0] + 2) = v51[0];
  v51[1] = 0LL;
  operator delete(v51[0]);
LABEL_79:
  v36 = v46;
  if ( v46 )
  {
    v46 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  }
  v37 = v47;
  if ( v47 )
  {
    v47 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  }
  v38 = (__int64)v48;
  if ( v48 )
  {
    v48 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
  }
  if ( v55 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v55)[2])(v55);
  std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>((__int64)a1);
  v40 = *(_QWORD *)(a2 + 24);
  if ( v40 )
  {
    LOBYTE(v39) = v40 != a2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v40 + 32LL))(v40, v39);
    *(_QWORD *)(a2 + 24) = 0LL;
  }
  return v7;
}
