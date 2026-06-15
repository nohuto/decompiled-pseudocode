/*
 * XREFs of DisableSpatialOnInternalSpeakers @ 0x180155E80
 * Callers:
 *     ReconsiderSpatialOnComboEndpoints @ 0x18001F818 (ReconsiderSpatialOnComboEndpoints.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     EnableSpatialOnSpeakerEndpoint @ 0x180020000 (EnableSpatialOnSpeakerEndpoint.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     IsInternalFormFactorOf @ 0x180155FC0 (IsInternalFormFactorOf.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DisableSpatialOnInternalSpeakers(_DWORD *a1, __int64 a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int v7; // ebx
  int v8; // eax
  unsigned int v9; // edi
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v12; // [rsp+48h] [rbp+10h] BYREF
  __int64 v13; // [rsp+50h] [rbp+18h] BYREF

  v12 = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 24LL))(a2, &v12);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = 0;
    if ( v12 )
    {
      while ( 1 )
      {
        v13 = 0LL;
        v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a2 + 32LL))(a2, v7, &v13);
        v9 = v8;
        if ( v8 < 0 )
          break;
        if ( (unsigned __int8)IsInternalFormFactorOf(v13, 1LL) )
        {
          v10 = EnableSpatialOnSpeakerEndpoint(a1, v13, L"HP", 0);
          if ( v10 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0xEE,
              (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
              (const char *)(unsigned int)v10);
        }
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v13);
        if ( ++v7 >= v12 )
          return 0LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xEA,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
        (const char *)(unsigned int)v8);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v13);
      return v9;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE5,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
