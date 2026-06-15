/*
 * XREFs of SearchForHeadphones @ 0x18001FC40
 * Callers:
 *     ReconsiderSpatialOnComboEndpoints @ 0x18001F818 (ReconsiderSpatialOnComboEndpoints.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     GetContainerId @ 0x18001FDF0 (GetContainerId.c)
 *     GetEndpointFormFactor @ 0x18001FF00 (GetEndpointFormFactor.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall SearchForHeadphones(__int64 a1, char *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int v6; // edi
  int v7; // eax
  int ContainerId; // eax
  wil::details::in1diag3 *v9; // rcx
  int EndpointFormFactor; // ebx
  __int64 v11; // rcx
  char v12; // bl
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned int v16; // [rsp+20h] [rbp-30h] BYREF
  __int64 v17; // [rsp+28h] [rbp-28h] BYREF
  __int64 v18; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v19[2]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  *a2 = 0;
  v16 = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a1 + 24LL))(a1, &v16);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCC,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
      (const char *)(unsigned int)v4,
      v16);
    return v5;
  }
  else
  {
    v6 = 0;
    if ( v16 )
    {
      while ( 1 )
      {
        if ( *a2 )
          return 0LL;
        v18 = 0LL;
        v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a1 + 32LL))(a1, v6, &v18);
        v5 = v7;
        if ( v7 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xD2,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
            (const char *)(unsigned int)v7,
            v16);
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v18);
          return v5;
        }
        v17 = 0LL;
        ContainerId = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v18 + 32LL))(v18, 0LL, &v17);
        v9 = retaddr;
        if ( ContainerId < 0 )
          break;
        EndpointFormFactor = GetEndpointFormFactor(v17);
        ContainerId = GetContainerId(v11, v17, v19);
        v9 = retaddr;
        if ( ContainerId < 0 )
        {
          v15 = 181LL;
          goto LABEL_18;
        }
        if ( EndpointFormFactor != 3 )
          goto LABEL_8;
        v14 = v19[0];
        if ( !v19[0] )
          v14 = v19[1] + 1LL;
        if ( v14 )
LABEL_8:
          v12 = 0;
        else
          v12 = 1;
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v17);
LABEL_10:
        *a2 = v12;
        if ( v18 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        if ( ++v6 >= v16 )
          return 0LL;
      }
      v15 = 176LL;
LABEL_18:
      wil::details::in1diag3::_Log_Hr(
        v9,
        (void *)v15,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\spatialpolicy.cpp",
        (const char *)(unsigned int)ContainerId);
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      v12 = 0;
      goto LABEL_10;
    }
    return 0LL;
  }
}
