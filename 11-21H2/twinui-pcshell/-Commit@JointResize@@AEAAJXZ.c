/*
 * XREFs of ?Commit@JointResize@@AEAAJXZ @ 0x1805288CC
 * Callers:
 *     ?OnArrangedWindowJointResizeCompleted@JointResize@@AEAAJPEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UArrangedWindowJointResizeCompletedEventArgs@3456@@Z @ 0x180529980 (-OnArrangedWindowJointResizeCompleted@JointResize@@AEAAJPEBUIWindowManagementEvents2@WindowManag.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MszAdjustment@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800DBEB4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MszAdjustment@@@details@wil@@QEAAX_NW4Rep.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_JRITest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18052A514 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_JRITest@@@details@wil@@QEAAX_NW4Reporting.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall JointResize::Commit(JointResize *this, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // eax
  __int64 v6; // rdx
  unsigned int v7; // edi
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r15
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // r14
  _DWORD *v15; // r8
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  __int64 v21; // [rsp+30h] [rbp-20h] BYREF
  __int128 v22; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MszAdjustment>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_MszAdjustment>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  v21 = 0LL;
  v5 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 18))(
         *((_QWORD *)this + 18),
         &GUID_02c44cbf_3831_4038_af3a_ddf1ada2f4b6,
         &v21);
  v7 = v5;
  if ( v5 >= 0 )
  {
    v22 = 0LL;
    LOBYTE(v6) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_JRITest>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_JRITest>::GetImpl'::`2'::impl,
      v6);
    v10 = *((_QWORD *)this + 33);
    v11 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 25) + 128LL))(
            *((_QWORD *)this + 25),
            &v22);
    v7 = v11;
    if ( v11 >= 0 )
    {
      v13 = *((_QWORD *)this + 27);
      v14 = *((_QWORD *)this + 28);
      while ( 1 )
      {
        if ( v13 == v14 )
        {
          v7 = 0;
          goto LABEL_27;
        }
        LOBYTE(v12) = 1;
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_JRITest>::ReportUsage(
          &`wil::Feature<__WilFeatureTraits_Feature_JRITest>::GetImpl'::`2'::impl,
          v12);
        v15 = (_DWORD *)(v13 + 68);
        *(_OWORD *)(v13 + 68) = *(_OWORD *)(v13 + 24);
        switch ( *(_DWORD *)(v13 + 8) )
        {
          case 0xA:
            v19 = v22;
            if ( *(_BYTE *)(v13 + 40) )
              v19 = DWORD2(v22);
            *v15 = v19;
            break;
          case 0xB:
            v18 = DWORD2(v22);
            if ( *(_BYTE *)(v13 + 40) )
              v18 = v22;
            *(_DWORD *)(v13 + 76) = v18;
            break;
          case 0xC:
            v17 = DWORD1(v22);
            if ( *(_BYTE *)(v13 + 40) )
              v17 = HIDWORD(v22);
            *(_DWORD *)(v13 + 72) = v17;
            break;
          case 0xF:
            v16 = HIDWORD(v22);
            if ( *(_BYTE *)(v13 + 40) )
              v16 = DWORD1(v22);
            *(_DWORD *)(v13 + 80) = v16;
            break;
        }
        v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, __int64))(*(_QWORD *)v21 + 24LL))(
                v21,
                *(_QWORD *)(v13 + 16),
                v15,
                3LL);
        v7 = v11;
        if ( v11 < 0 )
          break;
        v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 16) + 40LL))(
                *((_QWORD *)this + 16),
                *(_QWORD *)(v13 + 16),
                v10);
        v7 = v11;
        if ( v11 < 0 )
        {
          v9 = 862LL;
          goto LABEL_30;
        }
        v13 += 88LL;
      }
      v9 = 858LL;
    }
    else
    {
      v9 = 826LL;
    }
LABEL_30:
    v8 = (unsigned int)v11;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E8,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/com.h",
      (const char *)(unsigned int)v5);
    v8 = v7;
    v9 = 820LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
    (const char *)v8);
LABEL_27:
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v21);
  return v7;
}
