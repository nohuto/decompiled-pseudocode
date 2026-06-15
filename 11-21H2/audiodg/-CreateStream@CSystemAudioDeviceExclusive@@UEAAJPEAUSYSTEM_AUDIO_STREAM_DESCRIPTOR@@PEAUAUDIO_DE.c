/*
 * XREFs of ?CreateStream@CSystemAudioDeviceExclusive@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140055750
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x140019A00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x14001F710 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$com_query_to@UIAudioDeviceEndpoint2@@AEAV?$com_ptr_t@UIAudioDeviceEndpoint@@Uerr_exception_policy@wil@@@wil@@@wil@@YAXAEAV?$com_ptr_t@UIAudioDeviceEndpoint@@Uerr_exception_policy@wil@@@0@PEAPEAUIAudioDeviceEndpoint2@@@Z @ 0x140054EE0 (--$com_query_to@UIAudioDeviceEndpoint2@@AEAV-$com_ptr_t@UIAudioDeviceEndpoint@@Uerr_exception_po.c)
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
  __int64 v10; // rax
  HRESULT v11; // eax
  __int64 v12; // rdx
  HANDLE v13; // r15
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rax
  int v17; // eax
  unsigned __int64 v18; // r9
  int v19; // eax
  GUID v20; // xmm0
  __int64 *v22; // [rsp+40h] [rbp-21h] BYREF
  __int64 v23; // [rsp+48h] [rbp-19h] BYREF
  void *v24; // [rsp+50h] [rbp-11h] BYREF
  struct _RTL_CRITICAL_SECTION *v25; // [rsp+58h] [rbp-9h] BYREF
  __int128 v26; // [rsp+60h] [rbp-1h]
  __int128 v27; // [rsp+70h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+57h]

  v26 = *(_OWORD *)((char *)this + 248);
  v27 = v26;
  EtwEventActivityIdControl(4LL, &v27);
  if ( !a2 )
  {
    v8 = -2147467261;
    v9 = 276LL;
LABEL_49:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodeviceexclusive.cpp",
      (const char *)v8);
    goto LABEL_50;
  }
  if ( a3 )
  {
    v9 = 277LL;
LABEL_48:
    v8 = -2147024809;
    goto LABEL_49;
  }
  v10 = *((_QWORD *)a2 + 8) - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( !v10 )
    v10 = *((_QWORD *)a2 + 9) - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( v10 )
  {
    v9 = 281LL;
    goto LABEL_48;
  }
  *((_DWORD *)a5 + 236) = 0;
  if ( *(_DWORD *)a2 > 2u )
  {
    v9 = 286LL;
    goto LABEL_48;
  }
  if ( *(_DWORD *)a2 == 2 || *((_DWORD *)a2 + 50) )
  {
    v9 = 291LL;
    goto LABEL_48;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  v25 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 184);
  v22 = 0LL;
  v11 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 **))this + 29))(
          *((_QWORD *)this + 29),
          &GUID_d4952f5a_a0b2_4cc4_8b82_9358488dd8ac,
          &v22);
  v8 = v11;
  if ( v11 >= 0 )
  {
    v11 = CoImpersonateClient();
    v8 = v11;
    if ( v11 < 0 )
    {
      v12 = 298LL;
      goto LABEL_17;
    }
    v13 = OpenProcess(0x40u, 0, *((_DWORD *)a2 + 3));
    v24 = v13;
    CoRevertToSelf();
    v14 = *((_QWORD *)a2 + 4);
    if ( (*((_DWORD *)this + 56) & 0x40000) != 0 )
    {
      if ( !v14 )
      {
        v8 = -2005139379;
        v15 = 315LL;
LABEL_43:
        v18 = v8;
        goto LABEL_44;
      }
      if ( v14 >= *((_QWORD *)this + 46) && v14 <= 50000000 )
      {
        if ( v14 != *((_QWORD *)a2 + 3) )
        {
          v8 = -2005139371;
          v15 = 321LL;
          goto LABEL_43;
        }
LABEL_31:
        v16 = *v22;
        v24 = 0LL;
        v17 = (*(__int64 (__fastcall **)(__int64 *, HANDLE))(v16 + 48))(v22, v13);
        v8 = v17;
        if ( v17 >= 0 )
        {
          *((_DWORD *)a5 + 236) = 2;
          v23 = 0LL;
          wil::com_query_to<IAudioDeviceEndpoint2,wil::com_ptr_t<IAudioDeviceEndpoint,wil::err_exception_policy> &>(
            &v22,
            (__int64)&v23);
          if ( v23
            && (v19 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v23 + 64LL))(v23, (char *)a5 + 24),
                v8 = v19,
                v19 < 0) )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x169,
              (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodeviceexclusive.cpp",
              (const char *)(unsigned int)v19);
          }
          else
          {
            if ( *(_DWORD *)a2 )
              v20 = GUID_1fe45ed3_b842_4cf2_8df6_43e3d6d10e64;
            else
              v20 = GUID_20404060_f24f_4f89_84c6_8af80b0a17cb;
            *(GUID *)a5 = v20;
            *((_DWORD *)a5 + 234) = 1;
            v8 = 0;
          }
          ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v23);
          goto LABEL_45;
        }
        v18 = (unsigned int)v17;
        v15 = 352LL;
LABEL_44:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodeviceexclusive.cpp",
          (const char *)v18);
LABEL_45:
        wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v24);
        goto LABEL_46;
      }
      v15 = 318LL;
    }
    else
    {
      if ( !v14 || v14 >= *((_QWORD *)this + 46) && v14 <= 50000000 )
      {
        if ( *((_QWORD *)a2 + 3) > 0x2FAF080uLL )
        {
          v8 = -2005139379;
          v15 = 343LL;
          goto LABEL_43;
        }
        goto LABEL_31;
      }
      v15 = 336LL;
    }
    v8 = -2005139386;
    goto LABEL_43;
  }
  v12 = 296LL;
LABEL_17:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodeviceexclusive.cpp",
    (const char *)(unsigned int)v11);
LABEL_46:
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v22);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v25);
LABEL_50:
  EtwEventActivityIdControl(4LL, &v27);
  return v8;
}
