/*
 * XREFs of ?put_Size@Api@Visual@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@5@@Z @ 0x18004E710
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAnimationLoggingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationLoggingManager@234@_N@Z @ 0x180022008 (-GetAnimationLoggingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationLoggingMan.c)
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

__int64 __fastcall Windows::UI::Composition::Visual::Api::put_Size(__int64 a1, __int64 a2)
{
  __int64 *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  char v4; // r13
  __int64 v5; // rax
  unsigned int v6; // r14d
  unsigned int v7; // r15d
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 *v10; // rax
  unsigned int v11; // r12d
  __int64 *v12; // rcx
  __int64 *v13; // rdx
  Windows::UI::Composition::AnimationBindingManager *BindingManager; // r12
  int v15; // eax
  int v16; // esi
  bool v17; // si
  unsigned int v19; // r8d
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  int v23; // edx
  __int64 v24; // rcx
  __int64 v25; // rdx
  Windows::UI::Composition::CompositorCommon *v26; // rcx
  struct Windows::UI::Composition::AnimationLoggingManager *AnimationLoggingManager; // rax
  unsigned __int64 v28; // [rsp+20h] [rbp-E0h]
  bool v29; // [rsp+30h] [rbp-D0h] BYREF
  char v30; // [rsp+31h] [rbp-CFh] BYREF
  bool v31; // [rsp+32h] [rbp-CEh] BYREF
  __int64 v32; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v33[2]; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v34; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v35[4]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v36; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v37[16]; // [rsp+70h] [rbp-90h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v39[24]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v40; // [rsp+B8h] [rbp-48h]
  _DWORD v41[8]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v42; // [rsp+E0h] [rbp-20h]
  __int64 v43; // [rsp+E8h] [rbp-18h]
  char v44; // [rsp+128h] [rbp+28h]
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+78h]

  v2 = (__int64 *)(a1 - 168);
  *(_QWORD *)v33 = a2;
  v3 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 168 + 24);
  v32 = a2;
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (v2[4] & 2) != 0 )
  {
    if ( *(__int64 *)((char *)v2 + 268) == v32 )
    {
      v4 = 0;
    }
    else
    {
      v4 = 1;
      *(__int64 *)((char *)v2 + 268) = v32;
    }
    v5 = *v2;
    v30 = 0;
    v6 = 0;
    if ( (*(__int64 (__fastcall **)(__int64 *))(v5 + 232))(v2) )
    {
      v34 = Windows::UI::Composition::Visual::sc_Size;
      Microsoft::WRL::Wrappers::HStringReference::HStringReference(v39, &v34);
      v20 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
              &hstringHeader,
              (const struct Microsoft::WRL::Wrappers::HStringReference *)v39);
      Windows::UI::Composition::AnimationValueData::AnimationValueData(v41, v20);
      v21 = *v2;
      v43 = v32;
      v44 = v4;
      v41[0] = 35;
      v16 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *, char *))(v21 + 224))(v2, v41, &v30);
      if ( v16 < 0 )
      {
        v22 = 261LL;
        goto LABEL_43;
      }
      v42 = 0LL;
      v40 = 0LL;
    }
    if ( v30 )
    {
LABEL_15:
      Microsoft::WRL2::ContextSession::EndApiEntry(v3);
      return v6;
    }
    v7 = HIDWORD(qword_180217908);
    *((_QWORD *)&v36 + 1) = &v32;
    v8 = v2[3];
    *(_QWORD *)v33 = qword_180217908;
    *(_QWORD *)&v36 = 8LL;
    v29 = 0;
    v9 = *(_QWORD *)(v8 + 840);
    if ( v9 )
    {
      v10 = *(__int64 **)(v9 + 136);
      v11 = *((_DWORD *)v2 + 32);
      v12 = v10;
      v35[0] = v11;
      v13 = (__int64 *)v10[1];
      while ( !*((_BYTE *)v13 + 25) )
      {
        if ( *((_DWORD *)v13 + 7) < v11
          || *((_DWORD *)v13 + 7) == v11 && *((_DWORD *)v13 + 8) < (unsigned int)qword_180217908 )
        {
          v13 = (__int64 *)v13[2];
        }
        else
        {
          v12 = v13;
          v13 = (__int64 *)*v13;
        }
      }
      if ( !*((_BYTE *)v12 + 25)
        && v11 >= *((_DWORD *)v12 + 7)
        && (v11 != *((_DWORD *)v12 + 7) || (unsigned int)qword_180217908 >= *((_DWORD *)v12 + 8))
        && v12 != v10 )
      {
        std::map<unsigned int,Windows::UI::Composition::AnimationLoggingManager::ReferencedObject>::_Try_emplace<unsigned int const &,>(
          v9 + 152,
          v37,
          v35);
        v23 = *(_DWORD *)(v9 + 128);
        v24 = *(_QWORD *)(v9 + 24);
        v34 = __PAIR64__(v33[0], v11);
        DirectComposition::CDevice::ResourceSetBufferProperty(
          *(DirectComposition::CDevice **)(v24 + 456),
          v23,
          0,
          &v34,
          8uLL);
      }
    }
    BindingManager = Windows::UI::Composition::CompositorCommon::GetBindingManager((Windows::UI::Composition::CompositorCommon *)v2[3]);
    v15 = Windows::UI::Composition::AnimationBindingManager::NotifyPropertyChanged(
            BindingManager,
            *((_DWORD *)v2 + 32),
            v33[0],
            &v29);
    v16 = v15;
    if ( v15 < 0 )
    {
      v25 = 1557LL;
    }
    else
    {
      if ( v7 == -1 )
      {
        v17 = v29;
        goto LABEL_12;
      }
      v15 = Windows::UI::Composition::AnimationBindingManager::NotifyPropertyChanged(
              BindingManager,
              *((_DWORD *)v2 + 32),
              v7,
              &v31);
      v16 = v15;
      if ( v15 >= 0 )
      {
        v17 = v31 || v29;
LABEL_12:
        if ( v17 )
        {
          v26 = (Windows::UI::Composition::CompositorCommon *)v2[3];
          if ( *((_QWORD *)v26 + 105) )
          {
            AnimationLoggingManager = Windows::UI::Composition::CompositorCommon::GetAnimationLoggingManager(v26, 0);
            LODWORD(v28) = 35;
            Windows::UI::Composition::AnimationLoggingManager::AnimationEnded(
              (__int64)AnimationLoggingManager,
              *((_DWORD *)v2 + 32),
              v33[0],
              1,
              v28,
              &v36);
          }
        }
        if ( v4 || v17 )
        {
          v19 = qword_180217908;
          if ( byte_180217915 )
            v19 = HIDWORD(qword_180217908);
          if ( byte_180217914 )
          {
            if ( byte_180217914 != 1 )
              Microsoft::WRL2::FailFast::Unexpected(0LL);
            DirectComposition::CDevice::ResourceSetBufferProperty(
              *(DirectComposition::CDevice **)(v2[3] + 456),
              *((_DWORD *)v2 + 32),
              v19,
              &v32,
              8uLL);
          }
          else
          {
            DirectComposition::CDevice::ResourceSetFloatProperty(
              *(DirectComposition::CDevice **)(v2[3] + 456),
              *((_DWORD *)v2 + 32),
              v19,
              *(float *)&v32);
          }
        }
        goto LABEL_15;
      }
      v25 = 1570LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtproxyobject.cpp",
      (const char *)(unsigned int)v15);
    v22 = 281LL;
LABEL_43:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\WrtProxyObject.inl",
      (const char *)(unsigned int)v16);
    v6 = v16;
    DoStackCaptureDirect(v16, 0xA8Cu);
    goto LABEL_15;
  }
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return 2147483667LL;
}
