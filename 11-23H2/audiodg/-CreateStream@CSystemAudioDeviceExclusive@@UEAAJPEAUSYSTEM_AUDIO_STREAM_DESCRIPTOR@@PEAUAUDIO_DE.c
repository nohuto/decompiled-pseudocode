/*
 * XREFs of ?CreateStream@CSystemAudioDeviceExclusive@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140057700
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ValidateAudioStreamDirection@@YAJW4SYSTEM_AUDIO_STREAM_TYPE@@@Z @ 0x140005ABC (-ValidateAudioStreamDirection@@YAJW4SYSTEM_AUDIO_STREAM_TYPE@@@Z.c)
 *     ?IsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1400190C0 (-IsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1TraceLoggingThreadActivityIdSetter@@QEAA@XZ @ 0x14004A22C (--1TraceLoggingThreadActivityIdSetter@@QEAA@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x14004B464 (--1-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$com_query_to@UIAudioDeviceEndpoint2@@AEAV?$com_ptr_t@UIAudioDeviceEndpoint@@Uerr_exception_policy@wil@@@wil@@@wil@@YAXAEAV?$com_ptr_t@UIAudioDeviceEndpoint@@Uerr_exception_policy@wil@@@0@PEAPEAUIAudioDeviceEndpoint2@@@Z @ 0x140056DC4 (--$com_query_to@UIAudioDeviceEndpoint2@@AEAV-$com_ptr_t@UIAudioDeviceEndpoint@@Uerr_exception_po.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSystemAudioDeviceExclusive::CreateStream(
        CSystemAudioDeviceExclusive *this,
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a2,
        struct AUDIO_DEVICE_MODE_DESCRIPTOR *a3,
        struct IAudioGraphCallback *a4,
        struct SYSTEM_AUDIO_STREAM *a5)
{
  unsigned int v8; // ebx
  __int64 v9; // rdx
  int v10; // eax
  int v11; // ecx
  unsigned __int64 v12; // r9
  struct _RTL_CRITICAL_SECTION *v13; // rsi
  HRESULT v14; // eax
  __int64 v15; // rdx
  HANDLE v16; // r12
  __int64 v17; // r8
  __int64 v18; // rdx
  unsigned __int64 v19; // r9
  __int64 v20; // rax
  int v21; // eax
  int v22; // eax
  GUID v23; // xmm0
  __int64 *v25; // [rsp+40h] [rbp-40h] BYREF
  void *v26; // [rsp+48h] [rbp-38h] BYREF
  __int64 v27; // [rsp+50h] [rbp-30h] BYREF
  __int128 v28; // [rsp+58h] [rbp-28h] BYREF
  __int128 v29; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v28 = *(_OWORD *)((char *)this + 248);
  v29 = v28;
  EtwEventActivityIdControl(4LL, &v29);
  if ( !a2 )
  {
    v8 = -2147467261;
    v9 = 276LL;
LABEL_48:
    v12 = v8;
    goto LABEL_49;
  }
  if ( a3 )
  {
    v9 = 277LL;
LABEL_47:
    v8 = -2147024809;
    goto LABEL_48;
  }
  if ( !IsEqualGUID((const struct _GUID *)a2 + 4, &GUID_00000000_0000_0000_0000_000000000000) )
  {
    v9 = 281LL;
    goto LABEL_47;
  }
  *((_DWORD *)a5 + 236) = 0;
  v10 = ValidateAudioStreamDirection(*(_DWORD *)a2);
  v8 = v10;
  if ( v10 < 0 )
  {
    v12 = (unsigned int)v10;
    v9 = 286LL;
LABEL_49:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodeviceexclusive.cpp",
      (const char *)v12);
LABEL_50:
    TraceLoggingThreadActivityIdSetter::~TraceLoggingThreadActivityIdSetter((TraceLoggingThreadActivityIdSetter *)&v28);
    return v8;
  }
  if ( v11 == 2 || *((_DWORD *)a2 + 82) )
  {
    v9 = 291LL;
    goto LABEL_47;
  }
  v13 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 184);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  v25 = 0LL;
  v14 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 **))this + 29))(
          *((_QWORD *)this + 29),
          &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
          &v25);
  v8 = v14;
  if ( v14 < 0 )
  {
    v15 = 296LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodeviceexclusive.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_14;
  }
  v14 = CoImpersonateClient();
  v8 = v14;
  if ( v14 < 0 )
  {
    v15 = 298LL;
    goto LABEL_13;
  }
  v16 = OpenProcess(0x40u, 0, *((_DWORD *)a2 + 3));
  v26 = v16;
  CoRevertToSelf();
  v17 = *((_QWORD *)a2 + 4);
  if ( (*((_DWORD *)this + 56) & 0x40000) != 0 )
  {
    if ( !v17 )
    {
      v8 = -2005139379;
      v18 = 315LL;
LABEL_25:
      v19 = v8;
LABEL_26:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodeviceexclusive.cpp",
        (const char *)v19);
LABEL_27:
      wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(&v26);
LABEL_14:
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v25);
      if ( this != (CSystemAudioDeviceExclusive *)-184LL )
        LeaveCriticalSection(v13);
      goto LABEL_50;
    }
    if ( v17 < *((_QWORD *)this + 46) || v17 > 50000000 )
    {
      v8 = -2005139386;
      v18 = 318LL;
      goto LABEL_25;
    }
    if ( v17 != *((_QWORD *)a2 + 3) )
    {
      v8 = -2005139371;
      v18 = 321LL;
      goto LABEL_25;
    }
  }
  else
  {
    if ( v17 && (v17 < *((_QWORD *)this + 46) || v17 > 50000000) )
    {
      v8 = -2005139386;
      v18 = 336LL;
      goto LABEL_25;
    }
    if ( *((_QWORD *)a2 + 3) > 0x2FAF080uLL )
    {
      v8 = -2005139379;
      v18 = 343LL;
      goto LABEL_25;
    }
  }
  v20 = *v25;
  v26 = 0LL;
  v21 = (*(__int64 (__fastcall **)(__int64 *, HANDLE))(v20 + 48))(v25, v16);
  v8 = v21;
  if ( v21 < 0 )
  {
    v19 = (unsigned int)v21;
    v18 = 352LL;
    goto LABEL_26;
  }
  *((_DWORD *)a5 + 236) = 2;
  v27 = 0LL;
  wil::com_query_to<IAudioDeviceEndpoint2,wil::com_ptr_t<IAudioDeviceEndpoint,wil::err_exception_policy> &>(
    &v25,
    (__int64)&v27);
  if ( v27 )
  {
    v22 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v27 + 64LL))(v27, (char *)a5 + 24);
    v8 = v22;
    if ( v22 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x169,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodeviceexclusive.cpp",
        (const char *)(unsigned int)v22);
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v27);
      goto LABEL_27;
    }
  }
  if ( *(_DWORD *)a2 )
    v23 = GUID_1fe45ed3_b842_4cf2_8df6_43e3d6d10e64;
  else
    v23 = GUID_20404060_f24f_4f89_84c6_8af80b0a17cb;
  *(GUID *)a5 = v23;
  *((_DWORD *)a5 + 234) = 1;
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v27);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v25);
  if ( this != (CSystemAudioDeviceExclusive *)-184LL )
    LeaveCriticalSection(v13);
  EtwEventActivityIdControl(4LL, &v29);
  return 0LL;
}
