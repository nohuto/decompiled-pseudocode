/*
 * XREFs of ?put_Color@Api@?$CompositionColorBrushT@VCompositionColorBrush@Composition@UI@Windows@@VCompositionBrush@234@@Composition@UI@Windows@@UEAAJUColor@45@@Z @ 0x18004B850
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAnimationLoggingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationLoggingManager@234@_N@Z @ 0x180022008 (-GetAnimationLoggingManager@CompositorCommon@Composition@UI@Windows@@QEAAPEAVAnimationLoggingMan.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ??$_Find_lower_bound@UObjectPropertyPair@@@?$_Tree@V?$_Tset_traits@UObjectPropertyPair@@U?$less@UObjectPropertyPair@@@std@@V?$allocator@UObjectPropertyPair@@@3@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@UObjectPropertyPair@@PEAX@std@@@1@AEBUObjectPropertyPair@@@Z @ 0x18004C2F8 (--$_Find_lower_bound@UObjectPropertyPair@@@-$_Tree@V-$_Tset_traits@UObjectPropertyPair@@U-$less@.c)
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

__int64 __fastcall Windows::UI::Composition::CompositionColorBrushT<Windows::UI::Composition::CompositionColorBrush,Windows::UI::Composition::CompositionBrush>::Api::put_Color(
        __int64 a1,
        unsigned int a2)
{
  __int64 *v2; // rsi
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  int v4; // r14d
  unsigned int v5; // r12d
  unsigned __int8 v6; // bl
  unsigned int v7; // r15d
  char v8; // r13
  __int64 v9; // rax
  unsigned int v10; // r12d
  unsigned int v11; // r15d
  __int64 v12; // rax
  __int64 v13; // rbx
  unsigned int v14; // r14d
  Windows::UI::Composition::AnimationBindingManager *BindingManager; // r14
  int v16; // eax
  unsigned int v17; // ebx
  char v18; // bl
  unsigned int v20; // r8d
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // eax
  unsigned __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned int v27; // edx
  __int64 v28; // rdx
  Windows::UI::Composition::CompositorCommon *v29; // rcx
  struct Windows::UI::Composition::AnimationLoggingManager *AnimationLoggingManager; // rax
  __int64 v31; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v32; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v33[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v34[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v35[16]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+70h] [rbp-90h]
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp-88h] BYREF
  __int128 v38; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v39[24]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v40; // [rsp+C0h] [rbp-40h]
  _DWORD v41[8]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v42; // [rsp+F0h] [rbp-10h]
  __int128 v43; // [rsp+F8h] [rbp-8h]
  char v44; // [rsp+138h] [rbp+38h]
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v2 = (__int64 *)(a1 - 152);
  v3 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 152 + 24);
  v4 = HIBYTE(a2);
  v5 = HIWORD(a2);
  v6 = a2;
  v7 = a2 >> 8;
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (v2[4] & 2) == 0 )
  {
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC03,
      (int)"onecoreuap\\private\\Windows\\inc\\private\\compgen\\DCompABIAutoGen_Windows.UI.Composition.g.h",
      (const char *)0x80000013LL);
    Microsoft::WRL2::ContextSession::EndApiEntry(v3);
    return 2147483667LL;
  }
  *((float *)&v38 + 3) = (float)v6 / 255.0;
  *(float *)&v38 = (float)(unsigned __int8)v7 / 255.0;
  *((float *)&v38 + 1) = (float)(unsigned __int8)v5 / 255.0;
  *((float *)&v38 + 2) = (float)v4 / 255.0;
  if ( *((float *)v2 + 42) == *(float *)&v38
    && *((float *)v2 + 43) == (float)((float)(unsigned __int8)v5 / 255.0)
    && *((float *)v2 + 44) == (float)((float)v4 / 255.0)
    && *((float *)v2 + 45) == (float)((float)v6 / 255.0) )
  {
    v8 = 0;
  }
  else
  {
    v8 = 1;
    *(_OWORD *)(v2 + 21) = v38;
  }
  v9 = *v2;
  BYTE1(v31) = 0;
  if ( (*(__int64 (__fastcall **)(__int64 *))(v9 + 232))(v2) )
  {
    v32 = Windows::UI::Composition::CompositionColorBrush::sc_Color;
    Microsoft::WRL::Wrappers::HStringReference::HStringReference(v39, &v32);
    v21 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &hstringHeader,
            (const struct Microsoft::WRL::Wrappers::HStringReference *)v39);
    Windows::UI::Composition::AnimationValueData::AnimationValueData(v41, v21);
    v22 = *v2;
    v44 = v8;
    v43 = v38;
    v41[0] = 70;
    v23 = (*(__int64 (__fastcall **)(__int64 *, _DWORD *, char *))(v22 + 224))(v2, v41, (char *)&v31 + 1);
    v17 = v23;
    if ( v23 < 0 )
    {
      v24 = (unsigned int)v23;
      v25 = 261LL;
      goto LABEL_40;
    }
    v42 = 0LL;
    v40 = 0LL;
  }
  if ( !BYTE1(v31) )
  {
    v10 = dword_1802175AC;
    v11 = dword_1802175A8;
    v34[1] = &v38;
    v12 = v2[3];
    v34[0] = 16LL;
    LOBYTE(v31) = 0;
    v13 = *(_QWORD *)(v12 + 840);
    if ( v13 )
    {
      LODWORD(v33[0]) = *((_DWORD *)v2 + 32);
      v14 = v33[0];
      v32 = __PAIR64__(dword_1802175A8, v33[0]);
      std::_Tree<std::_Tset_traits<ObjectPropertyPair,std::less<ObjectPropertyPair>,std::allocator<ObjectPropertyPair>,0>>::_Find_lower_bound<ObjectPropertyPair>(
        v13 + 136,
        v35,
        &v32);
      if ( !*(_BYTE *)(v36 + 25)
        && v14 >= *(_DWORD *)(v36 + 28)
        && (v14 != *(_DWORD *)(v36 + 28) || v11 >= *(_DWORD *)(v36 + 32))
        && v36 != *(_QWORD *)(v13 + 136) )
      {
        std::map<unsigned int,Windows::UI::Composition::AnimationLoggingManager::ReferencedObject>::_Try_emplace<unsigned int const &,>(
          v13 + 152,
          v35,
          v33);
        v26 = *(_QWORD *)(v13 + 24);
        v27 = *(_DWORD *)(v13 + 128);
        v32 = __PAIR64__(v11, v14);
        DirectComposition::CDevice::ResourceSetBufferProperty(
          *(DirectComposition::CDevice **)(v26 + 456),
          v27,
          0,
          &v32,
          8uLL);
      }
    }
    BindingManager = Windows::UI::Composition::CompositorCommon::GetBindingManager((Windows::UI::Composition::CompositorCommon *)v2[3]);
    v16 = Windows::UI::Composition::AnimationBindingManager::NotifyPropertyChanged(
            BindingManager,
            *((_DWORD *)v2 + 32),
            v11,
            (bool *)&v31);
    v17 = v16;
    if ( v16 < 0 )
    {
      v28 = 1557LL;
    }
    else
    {
      if ( v10 == -1 )
      {
        v18 = v31;
        goto LABEL_15;
      }
      v16 = Windows::UI::Composition::AnimationBindingManager::NotifyPropertyChanged(
              BindingManager,
              *((_DWORD *)v2 + 32),
              v10,
              (bool *)&v31 + 2);
      v17 = v16;
      if ( v16 >= 0 )
      {
        v18 = BYTE2(v31) | v31;
LABEL_15:
        if ( v18 )
        {
          v29 = (Windows::UI::Composition::CompositorCommon *)v2[3];
          if ( *((_QWORD *)v29 + 105) )
          {
            AnimationLoggingManager = Windows::UI::Composition::CompositorCommon::GetAnimationLoggingManager(v29, 0);
            Windows::UI::Composition::AnimationLoggingManager::AnimationEnded(
              AnimationLoggingManager,
              *((unsigned int *)v2 + 32),
              v11,
              1LL,
              70,
              v34,
              v31,
              v32,
              v33[0],
              v33[1]);
          }
        }
        if ( v8 || v18 )
        {
          v20 = dword_1802175A8;
          if ( byte_1802175B5 )
            v20 = dword_1802175AC;
          if ( byte_1802175B4 )
          {
            if ( byte_1802175B4 != 1 )
              Microsoft::WRL2::FailFast::Unexpected(0LL);
            DirectComposition::CDevice::ResourceSetBufferProperty(
              *(DirectComposition::CDevice **)(v2[3] + 456),
              *((_DWORD *)v2 + 32),
              v20,
              &v38,
              0x10uLL);
          }
          else
          {
            DirectComposition::CDevice::ResourceSetFloatProperty(
              *(DirectComposition::CDevice **)(v2[3] + 456),
              *((_DWORD *)v2 + 32),
              v20,
              *(float *)&v38);
          }
        }
        goto LABEL_18;
      }
      v28 = 1570LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v28,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtproxyobject.cpp",
      (const char *)(unsigned int)v16);
    v24 = v17;
    v25 = 281LL;
LABEL_40:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\WrtProxyObject.inl",
      (const char *)v24);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC06,
      (int)"onecoreuap\\private\\Windows\\inc\\private\\compgen\\DCompABIAutoGen_Windows.UI.Composition.g.h",
      (const char *)v17);
    Microsoft::WRL2::ContextSession::EndApiEntry(v3);
    return v17;
  }
LABEL_18:
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return 0LL;
}
