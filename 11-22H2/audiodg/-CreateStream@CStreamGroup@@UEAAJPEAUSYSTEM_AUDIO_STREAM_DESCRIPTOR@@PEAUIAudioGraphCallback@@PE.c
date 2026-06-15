/*
 * XREFs of ?CreateStream@CStreamGroup@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140063C70
 * Callers:
 *     ?CreateStream@CStreamGroup@@WBI@EAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14002F730 (-CreateStream@CStreamGroup@@WBI@EAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AddHead@?$CAtlList@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@V?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBV?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x140006830 (-AddHead@-$CAtlList@V-$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@V-$.c)
 *     ??0?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIStreamInstanceInternal@@@Z @ 0x1400099F4 (--0-$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIStreamInsta.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400674B0 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     ?CreateStreamInstance@CStreamInstance@@SAJPEAPEAUIStreamInstanceInternal@@KW4SYSTEM_AUDIO_STREAM_TYPE@@_KPEAVCPipeInstance@@_J4U_GUID@@@Z @ 0x140077824 (-CreateStreamInstance@CStreamInstance@@SAJPEAPEAUIStreamInstanceInternal@@KW4SYSTEM_AUDIO_STREAM.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CStreamGroup::CreateStream(
        CStreamGroup *this,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        struct IAudioGraphCallback *a3,
        struct SYSTEM_AUDIO_STREAM *a4)
{
  struct SYSTEM_AUDIO_STREAM *v4; // r13
  struct _RTL_CRITICAL_SECTION *v8; // r15
  int v9; // eax
  unsigned int v10; // ebx
  struct _RTL_CRITICAL_SECTION *v11; // rcx
  struct _RTL_CRITICAL_SECTION *v12; // r14
  __int64 v13; // rbx
  __int64 v14; // r8
  int Stream; // eax
  ATL::CAtlException *v17; // rbx
  __int64 v18; // [rsp+40h] [rbp-A8h] BYREF
  char *v19; // [rsp+48h] [rbp-A0h] BYREF
  LPCRITICAL_SECTION v20; // [rsp+50h] [rbp-98h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-90h]
  struct SYSTEM_AUDIO_STREAM *v22; // [rsp+60h] [rbp-88h]
  GUID v23; // [rsp+70h] [rbp-78h] BYREF
  char *v24; // [rsp+80h] [rbp-68h]
  ATL::CAtlException *v25; // [rsp+88h] [rbp-60h] BYREF
  __int128 v26; // [rsp+90h] [rbp-58h]
  __int128 v27; // [rsp+A0h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  v4 = a4;
  v22 = a4;
  v26 = *((_OWORD *)a2 + 3);
  v27 = v26;
  EtwEventActivityIdControl(4LL, &v27);
  if ( !*((_BYTE *)this + 337) )
  {
    Stream = CSubmixImpl::CreateStream((CStreamGroup *)((char *)this + 24), a2, a3, v4);
    v10 = Stream;
    if ( Stream < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6C,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
        (const char *)(unsigned int)Stream);
      goto LABEL_17;
    }
    goto LABEL_16;
  }
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 200);
  v20 = (LPCRITICAL_SECTION)((char *)this + 200);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 5);
  v24 = (char *)this + 200;
  v18 = 0LL;
  v23 = GUID_00000000_0000_0000_0000_000000000000;
  v9 = CStreamInstance::CreateStreamInstance(
         &v18,
         *((unsigned int *)a2 + 3),
         *(unsigned int *)a2,
         this,
         0LL,
         0LL,
         0LL,
         &v23);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v12 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 56);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
    *(_QWORD *)&v23.Data1 = (char *)this + 56;
    v13 = v18;
    wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>(
      &v19,
      v18);
    try
    {
      ATL::CAtlList<wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>,ATL::CElementTraits<wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>>>::AddHead(
        (__int64 *)this + 12,
        &v19,
        v14);
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v19);
    }
    catch ( ATL::CAtlException *v25 )
    {
      v17 = v25;
      if ( *(_DWORD *)v25 == -1073741571 )
        _o__resetstkoflw();
      LODWORD(v19) = *(_DWORD *)v17;
      v10 = (unsigned int)v19;
      if ( (int)v19 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x62,
          (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
          (const char *)(unsigned int)v19);
        if ( lpCriticalSection )
          LeaveCriticalSection(lpCriticalSection);
        wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v18);
        v11 = v20;
        if ( v20 )
          goto LABEL_10;
        goto LABEL_17;
      }
      v13 = v18;
      v8 = v20;
      v12 = lpCriticalSection;
      v4 = v22;
    }
    if ( v12 )
      LeaveCriticalSection(v12);
    *((_QWORD *)v4 + 4) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 88LL))(v13);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v18);
    if ( v8 )
      LeaveCriticalSection(v8);
LABEL_16:
    v10 = 0;
    goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5C,
    (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
    (const char *)(unsigned int)v9);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v18);
  if ( this != (CStreamGroup *)-200LL )
  {
    v11 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 200);
LABEL_10:
    LeaveCriticalSection(v11);
  }
LABEL_17:
  EtwEventActivityIdControl(4LL, &v27);
  return v10;
}
