/*
 * XREFs of ?put_Opacity@Api@Visual@Composition@UI@Windows@@UEAAJM@Z @ 0x1800523F0
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
 *     ??$UpdateAnimatedPropertyWorker@V?$SparsePropertyUpdater@MVVisual@Composition@UI@Windows@@P81234@EBAMXZP81234@EAAXM@Z@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAXAEAV?$SparsePropertyUpdater@MVVisual@Composition@UI@Windows@@P81234@EBAMXZP81234@EAAXM@Z@123@AEBVPropertyUpdateInfo@123@_N2G@Z @ 0x180072534 (--$UpdateAnimatedPropertyWorker@V-$SparsePropertyUpdater@MVVisual@Composition@UI@Windows@@P81234.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@@7@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x180079048 (--$_Try_emplace@AEBI$$V@-$map@IUReferencedObject@AnimationLoggingManager@Composition@UI@Windows@.c)
 *     ??0AnimationValueData@Composition@UI@Windows@@QEAA@VHStringReference@Wrappers@WRL@Microsoft@@@Z @ 0x18007CDF0 (--0AnimationValueData@Composition@UI@Windows@@QEAA@VHStringReference@Wrappers@WRL@Microsoft@@@Z.c)
 *     ??0HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBV0123@@Z @ 0x18007DAF4 (--0HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBV0123@@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::Api::put_Opacity(
        Windows::UI::Composition::Visual::Api *this,
        float a2)
{
  char *v2; // rdi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  unsigned int v4; // r15d
  float Sparse_Opacity; // xmm0_4
  char v6; // r14
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 *v10; // rax
  __int64 *v11; // rcx
  unsigned int v12; // r12d
  __int64 *v13; // rdx
  struct _RTL_GENERIC_TABLE *BindingManager; // rax
  int v15; // eax
  int v16; // esi
  bool v17; // si
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // edx
  unsigned __int64 v25; // [rsp+20h] [rbp-E0h]
  char v26; // [rsp+30h] [rbp-D0h] BYREF
  bool v27; // [rsp+31h] [rbp-CFh] BYREF
  float v28; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v29; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v30; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v31; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v32; // [rsp+60h] [rbp-A0h] BYREF
  char *v33; // [rsp+70h] [rbp-90h] BYREF
  __int128 v34; // [rsp+78h] [rbp-88h]
  __int128 v35; // [rsp+88h] [rbp-78h]
  float *v36; // [rsp+98h] [rbp-68h]
  char v37[16]; // [rsp+A0h] [rbp-60h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v39[24]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v40; // [rsp+E8h] [rbp-18h]
  _DWORD v41[8]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v42; // [rsp+110h] [rbp+10h]
  float v43; // [rsp+118h] [rbp+18h]
  char v44; // [rsp+158h] [rbp+58h]
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v2 = (char *)this - 168;
  v3 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this - 18);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (v2[32] & 2) != 0 )
  {
    *(_QWORD *)&v31 = Windows::UI::Composition::Visual::GetSparse_Opacity;
    v4 = 0;
    *(_QWORD *)&v30 = Windows::UI::Composition::Visual::SetSparse_Opacity;
    DWORD2(v30) = 0;
    DWORD2(v31) = 0;
    v36 = &v28;
    v33 = v2;
    v34 = v31;
    *(_QWORD *)&v31 = &Windows::UI::Composition::Visual::sc_Opacity;
    v28 = fminf(1.0, fmaxf(a2, 0.0));
    v35 = v30;
    Sparse_Opacity = Windows::UI::Composition::Visual::GetSparse_Opacity((Windows::UI::Composition::Visual *)v2);
    if ( Sparse_Opacity == v28 )
    {
      v6 = 0;
    }
    else
    {
      ((void (__fastcall *)(char *))Windows::UI::Composition::Visual::SetSparse_Opacity)(v2);
      v6 = 1;
    }
    v7 = *(_QWORD *)v2;
    v26 = 0;
    if ( (*(__int64 (__fastcall **)(char *))(v7 + 232))(v2) )
    {
      *(_QWORD *)&v30 = Windows::UI::Composition::Visual::sc_Opacity;
      Microsoft::WRL::Wrappers::HStringReference::HStringReference(v39, &v30);
      v19 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
              &hstringHeader,
              (const struct Microsoft::WRL::Wrappers::HStringReference *)v39);
      Windows::UI::Composition::AnimationValueData::AnimationValueData(v41, v19);
      v20 = *(_QWORD *)v2;
      v43 = v28;
      v44 = v6;
      v41[0] = 18;
      v16 = (*(__int64 (__fastcall **)(char *, _DWORD *, char *))(v20 + 224))(v2, v41, &v26);
      if ( v16 < 0 )
      {
        v22 = 261LL;
        goto LABEL_36;
      }
      v42 = 0LL;
      v40 = 0LL;
    }
    if ( v26 )
    {
LABEL_13:
      Microsoft::WRL2::ContextSession::EndApiEntry(v3);
      return v4;
    }
    *(_QWORD *)&v32 = 4LL;
    *((_QWORD *)&v32 + 1) = &v28;
    v8 = *((_QWORD *)v2 + 3);
    v27 = 0;
    v9 = *(_QWORD *)(v8 + 840);
    if ( v9 )
    {
      v10 = *(__int64 **)(v9 + 136);
      v11 = v10;
      v12 = *((_DWORD *)v2 + 32);
      v29 = v12;
      v13 = (__int64 *)v10[1];
      while ( !*((_BYTE *)v13 + 25) )
      {
        if ( *((_DWORD *)v13 + 7) < v12 || *((_DWORD *)v13 + 7) == v12 && *((_DWORD *)v13 + 8) < 0x19u )
        {
          v13 = (__int64 *)v13[2];
        }
        else
        {
          v11 = v13;
          v13 = (__int64 *)*v13;
        }
      }
      if ( !*((_BYTE *)v11 + 25)
        && v12 >= *((_DWORD *)v11 + 7)
        && (v12 != *((_DWORD *)v11 + 7) || *((_DWORD *)v11 + 8) <= 0x19u)
        && v11 != v10 )
      {
        std::map<unsigned int,Windows::UI::Composition::AnimationLoggingManager::ReferencedObject>::_Try_emplace<unsigned int const &,>(
          v9 + 152,
          v37,
          &v29);
        v23 = *(_QWORD *)(v9 + 24);
        v24 = *(_DWORD *)(v9 + 128);
        *(_QWORD *)&v30 = v12 | 0x1900000000LL;
        DirectComposition::CDevice::ResourceSetBufferProperty(
          *(DirectComposition::CDevice **)(v23 + 456),
          v24,
          0,
          &v30,
          8uLL);
      }
    }
    BindingManager = (struct _RTL_GENERIC_TABLE *)Windows::UI::Composition::CompositorCommon::GetBindingManager(*((Windows::UI::Composition::CompositorCommon **)v2 + 3));
    v15 = Windows::UI::Composition::AnimationBindingManager::NotifyPropertyChanged(
            BindingManager,
            *((_DWORD *)v2 + 32),
            0x19u,
            &v27);
    v16 = v15;
    if ( v15 >= 0 )
    {
      v17 = v27;
      if ( v27 )
      {
        v21 = *(_QWORD *)(*((_QWORD *)v2 + 3) + 840LL);
        if ( v21 )
        {
          LODWORD(v25) = 18;
          Windows::UI::Composition::AnimationLoggingManager::AnimationEnded(
            v21,
            *((_DWORD *)v2 + 32),
            0x19u,
            1,
            v25,
            &v32);
        }
      }
      if ( v6 || v17 )
        Windows::UI::Composition::ProxyObject::UpdateAnimatedPropertyWorker<Windows::UI::Composition::SparsePropertyUpdater<float,Windows::UI::Composition::Visual,float (Windows::UI::Composition::Visual::*)(void)const,void (Windows::UI::Composition::Visual::*)(float)>,Windows::UI::Composition::PropertyUpdateInfo>(
          (_DWORD)v2,
          (unsigned int)&v33,
          (unsigned int)&v31,
          0,
          1,
          0);
      goto LABEL_13;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x615,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtproxyobject.cpp",
      (const char *)(unsigned int)v15);
    v22 = 281LL;
LABEL_36:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\WrtProxyObject.inl",
      (const char *)(unsigned int)v16);
    v4 = v16;
    DoStackCaptureDirect(v16, 0xA86u);
    goto LABEL_13;
  }
  RoOriginateErrorW(
    2147483667LL,
    0LL,
    L"The given object has already been closed / disposed and may no longer be used.");
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return 2147483667LL;
}
