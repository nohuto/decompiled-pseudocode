/*
 * XREFs of ?DisconnectPipesFromRightSubmix@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x140024A00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetNext@?$CAtlList@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@@ATL@@@ATL@@QEAAAEAV?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@AEAPEAU__POSITION@@@Z @ 0x1400099CC (-GetNext@-$CAtlList@V-$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@V-$.c)
 *     ??0?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIStreamInstanceInternal@@@Z @ 0x1400099F4 (--0-$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIStreamInsta.c)
 *     ?GetNext@?$CAtlList@PEAVCChildSubmixInstance@@V?$CElementTraits@PEAVCChildSubmixInstance@@@ATL@@@ATL@@QEAAAEAPEAVCChildSubmixInstance@@AEAPEAU__POSITION@@@Z @ 0x140009E48 (-GetNext@-$CAtlList@PEAVCChildSubmixInstance@@V-$CElementTraits@PEAVCChildSubmixInstance@@@ATL@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSubmixImpl::DisconnectPipesFromRightSubmix(CSubmixImpl *this, struct ISubmixInternal *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  __int64 v5; // rcx
  __int64 (__fastcall **v6)(_QWORD); // rax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  int v10; // ecx
  _BYTE *v11; // rdi
  _QWORD *Next; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 *v16; // rax
  __int64 v17; // rbx
  int v18; // eax
  __int64 (__fastcall **v19)(_QWORD); // rax
  int v20; // eax
  unsigned __int64 v21; // r9
  __int64 v22; // rdx
  int v23; // eax
  int v24; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  _QWORD *v26; // [rsp+40h] [rbp+8h] BYREF
  __int64 v27; // [rsp+50h] [rbp+18h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  v26 = (_QWORD *)*((_QWORD *)this + 15);
  if ( v26 )
  {
    while ( 1 )
    {
      Next = ATL::CAtlList<CChildSubmixInstance *,ATL::CElementTraits<CChildSubmixInstance *>>::GetNext(v5, &v26);
      v14 = (*(__int64 (__fastcall **)(_QWORD, struct ISubmixInternal *))(**(_QWORD **)*Next + 152LL))(
              *(_QWORD *)*Next,
              a2);
      v8 = v14;
      if ( v14 < 0 )
        break;
      if ( !v26 )
        goto LABEL_2;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x345,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v14,
      v24);
    goto LABEL_19;
  }
LABEL_2:
  v26 = (_QWORD *)*((_QWORD *)this + 9);
  if ( v26 )
  {
    while ( 1 )
    {
      v16 = ATL::CAtlList<wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>,ATL::CElementTraits<wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>>>::GetNext(
              v5,
              &v26);
      wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>(
        &v27,
        *v16);
      v17 = v27;
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v27 + 72LL))(v27) )
      {
        v18 = (*(__int64 (__fastcall **)(__int64, struct ISubmixInternal *))(*(_QWORD *)v17 + 64LL))(v17, a2);
        v8 = v18;
        if ( v18 < 0 )
          break;
      }
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v27);
      if ( !v26 )
        goto LABEL_3;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x34F,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v18,
      v24);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v27);
LABEL_19:
    if ( v2 )
      LeaveCriticalSection(v2);
    return v8;
  }
LABEL_3:
  if ( v2 )
    LeaveCriticalSection(v2);
  if ( !*((_QWORD *)this + 3) || !*((_BYTE *)this + 312) )
  {
LABEL_12:
    v9 = *((_QWORD *)this + 34);
    v10 = *((_DWORD *)this + 64);
    v11 = (char *)this + 296;
    if ( v9 && *v11 )
    {
      v19 = *(__int64 (__fastcall ***)(_QWORD))a2;
      if ( g_UseNewStreamManagementCodePath )
      {
        if ( v10 == 2 )
          v20 = ((__int64 (__fastcall **)(struct ISubmixInternal *))v19)[22](a2);
        else
          v20 = ((__int64 (__fastcall **)(struct ISubmixInternal *))v19)[21](a2);
        v8 = v20;
        if ( v20 < 0 )
        {
          v21 = (unsigned int)v20;
          v22 = 116LL;
LABEL_40:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v22,
            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
            (const char *)v21,
            v24);
          v15 = 868LL;
          goto LABEL_22;
        }
      }
      else
      {
        v23 = ((__int64 (__fastcall **)(struct ISubmixInternal *))v19)[6](a2);
        v8 = v23;
        if ( v23 < 0 )
        {
          v21 = (unsigned int)v23;
          v22 = 121LL;
          goto LABEL_40;
        }
      }
    }
    *v11 = 0;
    return 0LL;
  }
  v6 = *(__int64 (__fastcall ***)(_QWORD))a2;
  if ( g_UseNewStreamManagementCodePath )
  {
    if ( *((_DWORD *)this + 64) == 2 )
      v7 = ((__int64 (__fastcall **)(struct ISubmixInternal *))v6)[22](a2);
    else
      v7 = ((__int64 (__fastcall **)(struct ISubmixInternal *))v6)[21](a2);
    v8 = v7;
    if ( v7 >= 0 )
      goto LABEL_11;
    v15 = 858LL;
  }
  else
  {
    v8 = ((__int64 (__fastcall **)(struct ISubmixInternal *))v6)[6](a2);
    if ( (v8 & 0x80000000) == 0 )
    {
LABEL_11:
      *((_BYTE *)this + 312) = 0;
      goto LABEL_12;
    }
    v15 = 862LL;
  }
LABEL_22:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
    (const char *)v8,
    v24);
  return v8;
}
