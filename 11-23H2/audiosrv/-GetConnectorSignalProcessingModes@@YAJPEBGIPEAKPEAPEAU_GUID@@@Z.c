/*
 * XREFs of ?GetConnectorSignalProcessingModes@@YAJPEBGIPEAKPEAPEAU_GUID@@@Z @ 0x18004C584
 * Callers:
 *     ?GetConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@1PEAKPEAPEAU_GUID@@@Z @ 0x18002B3F4 (-GetConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@1PEAKPEAPEAU_GUI.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall GetConnectorSignalProcessingModes(
        const unsigned __int16 *a1,
        unsigned int a2,
        unsigned int *a3,
        struct _GUID **a4)
{
  HRESULT Instance; // eax
  unsigned int v9; // ebx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  __int64 v19; // rdx
  __int64 *v20; // [rsp+30h] [rbp-20h] BYREF
  __int64 v21; // [rsp+38h] [rbp-18h] BYREF
  LPVOID ppv[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 *v24; // [rsp+90h] [rbp+40h] BYREF
  __int64 *v25; // [rsp+98h] [rbp+48h] BYREF

  *a3 = 0;
  *a4 = 0LL;
  ppv[0] = 0LL;
  Instance = CoCreateInstance(
               &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
               0LL,
               0x17u,
               &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
               ppv);
  v9 = Instance;
  if ( Instance < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x120,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)(unsigned int)Instance);
    goto LABEL_8;
  }
  v24 = 0LL;
  v10 = *(_QWORD *)ppv[0];
  v24 = 0LL;
  v11 = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, __int64 **))(v10 + 40))(ppv[0], a1, &v24);
  v9 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x123,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)(unsigned int)v11);
LABEL_13:
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v24);
    goto LABEL_8;
  }
  v25 = 0LL;
  v12 = *v24;
  v25 = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64))(v12 + 24))(
          v24,
          &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
          23LL);
  v9 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x126,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)(unsigned int)v13);
LABEL_12:
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v25);
    goto LABEL_13;
  }
  v20 = 0LL;
  v14 = *v25;
  v20 = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 **))(v14 + 56))(v25, a2, &v20);
  v9 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x129,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)(unsigned int)v15);
LABEL_17:
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v20);
    goto LABEL_12;
  }
  v21 = 0LL;
  v16 = *v20;
  v21 = 0LL;
  v17 = (*(__int64 (__fastcall **)(__int64 *, __int64, GUID *, __int64 *))(v16 + 104))(
          v20,
          23LL,
          &GUID_915aed0f_c782_41d6_b0dc_1ed22d1ee5cb,
          &v21);
  v9 = v17;
  if ( v17 < 0 )
  {
    if ( v17 == -2147467262 )
    {
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v21);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v20);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v25);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v24);
      v9 = -2147467262;
      goto LABEL_8;
    }
    v19 = 300LL;
    goto LABEL_16;
  }
  v17 = (*(__int64 (__fastcall **)(__int64, struct _GUID **, unsigned int *))(*(_QWORD *)v21 + 24LL))(v21, a4, a3);
  v9 = v17;
  if ( v17 < 0 )
  {
    v19 = 302LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)(unsigned int)v17);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v21);
    goto LABEL_17;
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v21);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v20);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v25);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v24);
  v9 = 0;
LABEL_8:
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)ppv);
  return v9;
}
