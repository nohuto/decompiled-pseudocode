/*
 * XREFs of ?RuntimeClassInitialize@CAastPreStartContext@@QEAAJPEAUIAudioStreamInfo@@@Z @ 0x180032C18
 * Callers:
 *     ??$MakeAndInitialize@VCAastPreStartContext@@UIAudioStreamPreStartContext@@AEAPEAUIAudioStreamInfo@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioStreamPreStartContext@@AEAPEAUIAudioStreamInfo@@@Z @ 0x1800328FC (--$MakeAndInitialize@VCAastPreStartContext@@UIAudioStreamPreStartContext@@AEAPEAUIAudioStreamInf.c)
 * Callees:
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x180006BD0 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z @ 0x18000BCC0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z.c)
 *     ??1?$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F510 (--1-$com_ptr_t@UIAudioSessionPolicyControl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010214 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800233A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ApplyEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z @ 0x18002C724 (-ApplyEndpointVolumeOverride@CApplicationManager@@QEAAJPEBGKAEA_N1AEAM11@Z.c)
 *     ?UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z @ 0x18002F7DC (-UpdateEndpointVolume@CApplicationManager@@QEAAJPEBGHMHH@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800476D0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAastPreStartContext::RuntimeClassInitialize(
        CAastPreStartContext *this,
        struct IAudioStreamInfo *a2)
{
  __int64 v4; // rax
  __int64 (*v5)(void); // rax
  int v6; // eax
  unsigned int v7; // ebx
  const char *v8; // r9
  __int64 result; // rax
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // ebx
  _WORD *v13; // rax
  const unsigned __int16 *v14; // rbx
  __int64 v15; // r8
  unsigned int v16; // eax
  const unsigned __int16 *v17; // rdx
  int v18; // eax
  unsigned int v19; // edi
  int v20; // eax
  int updated; // eax
  bool v22; // [rsp+40h] [rbp-38h] BYREF
  DWORD dwMilliseconds; // [rsp+44h] [rbp-34h] BYREF
  DWORD pcbData; // [rsp+48h] [rbp-30h] BYREF
  float v25; // [rsp+4Ch] [rbp-2Ch] BYREF
  __int64 v26; // [rsp+50h] [rbp-28h] BYREF
  __int64 v27[4]; // [rsp+58h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  bool v29; // [rsp+88h] [rbp+10h] BYREF
  DWORD v30; // [rsp+90h] [rbp+18h] BYREF
  bool v31; // [rsp+98h] [rbp+20h] BYREF

  v4 = *(_QWORD *)a2;
  v26 = 0LL;
  v5 = *(__int64 (**)(void))(v4 + 24);
  try
  {
    v6 = v5();
    v7 = v6;
    if ( v6 >= 0 )
    {
      v10 = *(_QWORD *)a2;
      v27[0] = 0LL;
      v11 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(v10 + 32))(a2, v27);
      v12 = v11;
      if ( v11 >= 0 )
      {
        v13 = (_WORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27[0] + 72LL))(v27[0]);
        v14 = (const unsigned __int16 *)((char *)this + 24);
        std::wstring::assign((char *)this + 24, v13, v15);
        v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 48LL))(v26);
        *((_DWORD *)this + 5) = v16;
        v17 = (const unsigned __int16 *)((char *)this + 24);
        if ( *((_QWORD *)this + 6) >= 8uLL )
          v17 = *(const unsigned __int16 **)v14;
        v18 = CApplicationManager::ApplyEndpointVolumeOverride(
                (struct _RTL_CRITICAL_SECTION *)&v30,
                v17,
                v16,
                &v31,
                (bool *)&v30,
                &v25,
                &v29,
                &v22);
        v19 = v18;
        if ( v18 >= 0 )
        {
          if ( v31 )
          {
            v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 48LL))(v26);
            CApplicationManager::UpdateVolumeForAllAppsInSession((__int64)g_ApplicationManager, v20, 4u);
          }
          if ( (_BYTE)v30 || v29 )
          {
            dwMilliseconds = 0;
            pcbData = 4;
            RegGetValueW(
              HKEY_LOCAL_MACHINE,
              L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
              L"AastRenderDelayInMs",
              0x18u,
              0LL,
              &dwMilliseconds,
              &pcbData);
            if ( dwMilliseconds )
              Sleep(dwMilliseconds);
            if ( *((_QWORD *)this + 6) >= 8uLL )
              v14 = *(const unsigned __int16 **)v14;
            updated = CApplicationManager::UpdateEndpointVolume(
                        (CApplicationManager *)v29,
                        v14,
                        (unsigned __int8)v30,
                        v25,
                        v29,
                        v22);
            if ( updated < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                104LL,
                (__int64)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamprestartcontext.cpp",
                (const char *)(unsigned int)updated);
          }
          *((_BYTE *)this + 16) = 1;
          wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(v27);
          wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(&v26);
          result = 0LL;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x4D,
            (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamprestartcontext.cpp",
            (const char *)(unsigned int)v18);
          wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(v27);
          wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(&v26);
          result = v19;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3F,
          (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamprestartcontext.cpp",
          (const char *)(unsigned int)v11);
        wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(v27);
        wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(&v26);
        result = v12;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3C,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamprestartcontext.cpp",
        (const char *)(unsigned int)v6);
      wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>(&v26);
      result = v7;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x6F,
                           (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamprestartcontext.cpp",
                           v8);
  }
  return result;
}
