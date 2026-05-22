/*
 * XREFs of ?put_Offset@Api@Visual@Composition@UI@Windows@@UEAAJUVector3@Numerics@Foundation@5@@Z @ 0x18004DA10
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     ?AnimationEnded@AnimationLoggingManager@Composition@UI@Windows@@QEAAXIIW4AnimationEndedReasonType@@W4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18004D000 (-AnimationEnded@AnimationLoggingManager@Composition@UI@Windows@@QEAAXIIW4AnimationEndedReasonTyp.c)
 *     ?GetBindingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationBindingManager@234@XZ @ 0x18004EA04 (-GetBindingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationBindingManager@234@.c)
 *     ?NotifyPropertyChanged@AnimationBindingManager@Composition@UI@Windows@@QEAAJIIPEA_N@Z @ 0x180050AC0 (-NotifyPropertyChanged@AnimationBindingManager@Composition@UI@Windows@@QEAAJIIPEA_N@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18005DB98 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z @ 0x1800719B4 (-ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@@7@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x180079048 (--$_Try_emplace@AEBI$$V@-$map@IUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@.c)
 *     ??0AnimationValueData@Composition@UI@Windows@@QEAA@VHStringReference@Wrappers@WRL@Microsoft@@@Z @ 0x18007CDF0 (--0AnimationValueData@Composition@UI@Windows@@QEAA@VHStringReference@Wrappers@WRL@Microsoft@@@Z.c)
 *     ??0HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBV0123@@Z @ 0x18007DAF4 (--0HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBV0123@@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::Api::put_Offset(__int64 a1, unsigned int *a2)
{
  __int64 *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned __int64 v5; // rcx
  char v6; // r14
  __int64 v7; // rax
  unsigned int v8; // r12d
  unsigned int v9; // r15d
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 *v12; // rax
  unsigned int v13; // r13d
  __int64 *v14; // rcx
  __int64 *v15; // rdx
  Windows::UI::Composition::AnimationBindingManager *BindingManager; // r13
  int v17; // eax
  int v18; // r14d
  bool v19; // r14
  unsigned int v21; // r8d
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // edx
  __int64 v27; // rdx
  unsigned __int64 v28; // [rsp+20h] [rbp-E0h]
  bool v29; // [rsp+30h] [rbp-D0h] BYREF
  char v30; // [rsp+31h] [rbp-CFh] BYREF
  char v31; // [rsp+32h] [rbp-CEh]
  bool v32; // [rsp+33h] [rbp-CDh] BYREF
  unsigned __int64 v33; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v34; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v35[2]; // [rsp+48h] [rbp-B8h]
  __int128 v36; // [rsp+50h] [rbp-B0h] BYREF
  char v37[16]; // [rsp+60h] [rbp-A0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v39[24]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v40; // [rsp+A8h] [rbp-58h]
  _DWORD v41[8]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v42; // [rsp+D0h] [rbp-30h]
  __int64 v43; // [rsp+D8h] [rbp-28h]
  unsigned int v44; // [rsp+E0h] [rbp-20h]
  char v45; // [rsp+118h] [rbp+18h]
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+58h]

  v2 = (__int64 *)(a1 - 168);
  v4 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 168 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v4);
  if ( (v2[4] & 2) != 0 )
  {
    v5 = v2[31] - *(_QWORD *)a2;
    if ( !v5 )
      v5 = *((unsigned int *)v2 + 64) - (unsigned __int64)a2[2];
    if ( v5 )
    {
      v6 = 1;
      v2[31] = *(_QWORD *)a2;
      *((_DWORD *)v2 + 64) = a2[2];
    }
    else
    {
      v6 = 0;
    }
    v7 = *v2;
    v31 = v6;
    v30 = 0;
    v8 = 0;
    if ( (*(__int64 (__fastcall **)(__int64 *))(v7 + 232))(v2) )
    {
      v33 = Windows::UI::Composition::Visual::sc_Offset;
      Microsoft::WRL::Wrappers::HStringReference::HStringReference(v39, &v33);
      v22 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
              &hstringHeader,
              (const struct Microsoft::WRL::Wrappers::HStringReference *)v39);
      Windows::UI::Composition::AnimationValueData::AnimationValueData(v41, v22);
      v45 = v6;
      v41[0] = 52;
      v43 = *(_QWORD *)a2;
      v44 = a2[2];
      v18 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *, char *))(*v2 + 224))(v2, v41, &v30);
      if ( v18 < 0 )
      {
        v24 = 261LL;
        goto LABEL_49;
      }
      v42 = 0LL;
      v40 = 0LL;
    }
    if ( v30 )
    {
LABEL_18:
      Microsoft::WRL2::ContextSession::EndApiEntry(v4);
      return v8;
    }
    v9 = HIDWORD(qword_1802178D8);
    if ( !a2 )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    v10 = v2[3];
    *(_QWORD *)v35 = qword_1802178D8;
    *(_QWORD *)&v36 = 12LL;
    v11 = *(_QWORD *)(v10 + 840);
    *((_QWORD *)&v36 + 1) = a2;
    v29 = 0;
    if ( v11 )
    {
      v12 = *(__int64 **)(v11 + 136);
      v13 = *((_DWORD *)v2 + 32);
      v14 = v12;
      v34 = v13;
      v15 = (__int64 *)v12[1];
      while ( !*((_BYTE *)v15 + 25) )
      {
        if ( *((_DWORD *)v15 + 7) < v13
          || *((_DWORD *)v15 + 7) == v13 && *((_DWORD *)v15 + 8) < (unsigned int)qword_1802178D8 )
        {
          v15 = (__int64 *)v15[2];
        }
        else
        {
          v14 = v15;
          v15 = (__int64 *)*v15;
        }
      }
      if ( !*((_BYTE *)v14 + 25)
        && v13 >= *((_DWORD *)v14 + 7)
        && (v13 != *((_DWORD *)v14 + 7) || (unsigned int)qword_1802178D8 >= *((_DWORD *)v14 + 8))
        && v14 != v12 )
      {
        std::map<unsigned int,Windows::UI::Composition::AnimationLoggingManager::ReferencedObject>::_Try_emplace<unsigned int const &,>(
          v11 + 152,
          v37,
          &v34);
        v25 = *(_QWORD *)(v11 + 24);
        v26 = *(_DWORD *)(v11 + 128);
        v33 = __PAIR64__(v35[0], v13);
        DirectComposition::CDevice::ResourceSetBufferProperty(
          *(DirectComposition::CDevice **)(v25 + 456),
          v26,
          0,
          &v33,
          8uLL);
      }
    }
    BindingManager = Windows::UI::Composition::CompositorCommon::GetBindingManager((Windows::UI::Composition::CompositorCommon *)v2[3]);
    v17 = Windows::UI::Composition::AnimationBindingManager::NotifyPropertyChanged(
            BindingManager,
            *((_DWORD *)v2 + 32),
            v35[0],
            &v29);
    v18 = v17;
    if ( v17 < 0 )
    {
      v27 = 1557LL;
    }
    else
    {
      if ( v9 == -1 )
      {
        v19 = v29;
        goto LABEL_15;
      }
      v17 = Windows::UI::Composition::AnimationBindingManager::NotifyPropertyChanged(
              BindingManager,
              *((_DWORD *)v2 + 32),
              v9,
              &v32);
      v18 = v17;
      if ( v17 >= 0 )
      {
        v19 = v32 || v29;
LABEL_15:
        if ( v19 )
        {
          v23 = *(_QWORD *)(v2[3] + 840);
          if ( v23 )
          {
            LODWORD(v28) = 52;
            Windows::UI::Composition::AnimationLoggingManager::AnimationEnded(
              v23,
              *((_DWORD *)v2 + 32),
              v35[0],
              1,
              v28,
              &v36);
          }
        }
        if ( v31 || v19 )
        {
          v21 = qword_1802178D8;
          if ( byte_1802178E5 )
            v21 = HIDWORD(qword_1802178D8);
          if ( byte_1802178E4 )
          {
            if ( byte_1802178E4 != 1 )
              Microsoft::WRL2::FailFast::Unexpected(0LL);
            DirectComposition::CDevice::ResourceSetBufferProperty(
              *(DirectComposition::CDevice **)(v2[3] + 456),
              *((_DWORD *)v2 + 32),
              v21,
              a2,
              0xCuLL);
          }
          else
          {
            DirectComposition::CDevice::ResourceSetFloatProperty(
              *(DirectComposition::CDevice **)(v2[3] + 456),
              *((_DWORD *)v2 + 32),
              v21,
              *(float *)a2);
          }
        }
        goto LABEL_18;
      }
      v27 = 1570LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v27,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtproxyobject.cpp",
      (const char *)(unsigned int)v17);
    v24 = 281LL;
LABEL_49:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\WrtProxyObject.inl",
      (const char *)(unsigned int)v18);
    v8 = v18;
    DoStackCaptureDirect(v18, 0xA85u);
    goto LABEL_18;
  }
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
  Microsoft::WRL2::ContextSession::EndApiEntry(v4);
  return 2147483667LL;
}
