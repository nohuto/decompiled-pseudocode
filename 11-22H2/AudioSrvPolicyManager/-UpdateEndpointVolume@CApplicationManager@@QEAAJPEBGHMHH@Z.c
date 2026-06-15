/*
 * XREFs of ?UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z @ 0x18002F9CC
 * Callers:
 *     ??1CAastPreStartContext@@UEAA@XZ @ 0x180032C1C (--1CAastPreStartContext@@UEAA@XZ.c)
 *     ?RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x180032E08 (-RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B5D0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??1?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F560 (--1-$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010264 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_Sd @ 0x18002BC84 (WPP_SF_Sd.c)
 *     WPP_SF_Sg @ 0x1800300F4 (WPP_SF_Sg.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180048B60 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::UpdateEndpointVolume(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        int a3,
        float a4,
        int a5,
        int a6)
{
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rdx
  int v12; // r8d
  unsigned int v13; // ebx
  __int64 v14; // rdx
  unsigned int v15; // ebx
  int v17; // [rsp+20h] [rbp-38h]
  double v18; // [rsp+20h] [rbp-38h]
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  CApplicationManager *v21; // [rsp+60h] [rbp+8h] BYREF

  v21 = this;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v19 = v8;
  v21 = 0LL;
  v9 = *(_QWORD *)g_VolumeProvider;
  v21 = 0LL;
  v10 = (*(__int64 (__fastcall **)(struct IVolumeProvider *, const unsigned __int16 *, CApplicationManager **))(v9 + 40))(
          g_VolumeProvider,
          a2,
          &v21);
  v13 = v10;
  if ( v10 >= 0 )
  {
    if ( !a5 )
      goto LABEL_22;
    v15 = a6;
    if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v17 = a6;
      WPP_SF_Sd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x33u, &WPP_7bcb4e64156732b2305239eaa24ad5b8_Traceguids, a2, v17);
    }
    v10 = (*(__int64 (__fastcall **)(CApplicationManager *, _QWORD, __int64 *, _QWORD))(*(_QWORD *)v21 + 144LL))(
            v21,
            v15,
            &PBM_INITIATED_ENDPOINT_VOLUME_CHANGE,
            0LL);
    v13 = v10;
    if ( v10 < 0 )
    {
      v14 = 2949LL;
    }
    else
    {
LABEL_22:
      if ( !a3 )
        goto LABEL_18;
      if ( WPP_GLOBAL_Control != &WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v18 = a4;
        WPP_SF_Sg(*((_QWORD *)WPP_GLOBAL_Control + 2), v11, v12, (_DWORD)a2, SLOBYTE(v18));
      }
      v10 = (*(__int64 (__fastcall **)(CApplicationManager *, __int64, __int64 *, _QWORD))(*(_QWORD *)v21 + 56LL))(
              v21,
              v11,
              &PBM_INITIATED_ENDPOINT_VOLUME_CHANGE,
              0LL);
      v13 = v10;
      if ( v10 >= 0 )
      {
LABEL_18:
        v13 = 0;
        goto LABEL_19;
      }
      v14 = 2957LL;
    }
  }
  else
  {
    v14 = 2942LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\applicationmanager.cpp",
    (const char *)(unsigned int)v10);
LABEL_19:
  wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>((__int64 *)&v21);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v19);
  return v13;
}
