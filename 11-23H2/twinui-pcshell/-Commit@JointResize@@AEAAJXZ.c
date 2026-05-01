/*
 * XREFs of ?Commit@JointResize@@AEAAJXZ @ 0x1805E2560
 * Callers:
 *     ?OnArrangedWindowJointResizeCompleted@JointResize@@AEAAJPEBUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@UArrangedWindowJointResizeCompletedEventArgs@3456@@Z @ 0x1805E3920 (-OnArrangedWindowJointResizeCompleted@JointResize@@AEAAJPEBUIWindowManagementEvents2@WindowManag.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall JointResize::Commit(JointResize *this)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // r14
  _DWORD *v7; // r8
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v13; // [rsp+30h] [rbp-20h] BYREF
  __int128 v14; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v13 = 0LL;
  v2 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 18))(
         *((_QWORD *)this + 18),
         &GUID_02c44cbf_3831_4038_af3a_ddf1ada2f4b6,
         &v13);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v14 = 0LL;
    v2 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 24) + 128LL))(
           *((_QWORD *)this + 24),
           &v14);
    v3 = v2;
    if ( v2 >= 0 )
    {
      v5 = *((_QWORD *)this + 25);
      v6 = *((_QWORD *)this + 26);
      while ( 1 )
      {
        if ( v5 == v6 )
        {
          v3 = 0;
          goto LABEL_27;
        }
        v7 = (_DWORD *)(v5 + 80);
        *(_OWORD *)(v5 + 80) = *(_OWORD *)(v5 + 24);
        switch ( *(_DWORD *)(v5 + 8) )
        {
          case 0xA:
            v11 = v14;
            if ( *(_BYTE *)(v5 + 40) )
              v11 = DWORD2(v14);
            *v7 = v11;
            break;
          case 0xB:
            v10 = DWORD2(v14);
            if ( *(_BYTE *)(v5 + 40) )
              v10 = v14;
            *(_DWORD *)(v5 + 88) = v10;
            break;
          case 0xC:
            v9 = DWORD1(v14);
            if ( *(_BYTE *)(v5 + 40) )
              v9 = HIDWORD(v14);
            *(_DWORD *)(v5 + 84) = v9;
            break;
          case 0xF:
            v8 = HIDWORD(v14);
            if ( *(_BYTE *)(v5 + 40) )
              v8 = DWORD1(v14);
            *(_DWORD *)(v5 + 92) = v8;
            break;
        }
        v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, __int64))(*(_QWORD *)v13 + 24LL))(
               v13,
               *(_QWORD *)(v5 + 16),
               v7,
               3LL);
        v3 = v2;
        if ( v2 < 0 )
          break;
        v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 16) + 40LL))(
               *((_QWORD *)this + 16),
               *(_QWORD *)(v5 + 16),
               *((_QWORD *)this + 33));
        v3 = v2;
        if ( v2 < 0 )
        {
          v4 = 636LL;
          goto LABEL_30;
        }
        v5 += 96LL;
      }
      v4 = 632LL;
    }
    else
    {
      v4 = 608LL;
    }
  }
  else
  {
    v4 = 606LL;
  }
LABEL_30:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (int)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
    (const char *)(unsigned int)v2);
LABEL_27:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v13);
  return v3;
}
