/*
 * XREFs of ?GetConnectorSignalProcessingModes@@YAJPEBGIPEAKPEAPEAU_GUID@@@Z @ 0x18004B44C
 * Callers:
 *     ?GetConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@1PEAKPEAPEAU_GUID@@@Z @ 0x18004A188 (-GetConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@1PEAKPEAPEAU_GUI.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
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
  int ppv; // [rsp+20h] [rbp-30h]
  int v21[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 *v22; // [rsp+38h] [rbp-18h] BYREF
  LPVOID v23[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v25; // [rsp+90h] [rbp+40h] BYREF
  __int64 *v26; // [rsp+98h] [rbp+48h] BYREF

  *a3 = 0;
  *a4 = 0LL;
  v23[0] = 0LL;
  Instance = CoCreateInstance(
               &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
               0LL,
               0x17u,
               &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
               v23);
  v9 = Instance;
  if ( Instance < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x120,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)(unsigned int)Instance,
      ppv);
    goto LABEL_12;
  }
  v22 = 0LL;
  v10 = *(_QWORD *)v23[0];
  v22 = 0LL;
  v11 = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, __int64 **))(v10 + 40))(v23[0], a1, &v22);
  v9 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x123,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)(unsigned int)v11,
      ppv);
    goto LABEL_11;
  }
  *(_QWORD *)v21 = 0LL;
  v12 = *v22;
  *(_QWORD *)v21 = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64))(v12 + 24))(
          v22,
          &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
          23LL);
  v9 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x126,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)(unsigned int)v13,
      (int)v21);
    goto LABEL_10;
  }
  v26 = 0LL;
  v14 = **(_QWORD **)v21;
  v26 = 0LL;
  v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 **))(v14 + 56))(*(_QWORD *)v21, a2, &v26);
  v9 = v15;
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x129,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)(unsigned int)v15,
      (int)v21);
    goto LABEL_9;
  }
  v25 = 0LL;
  v16 = *v26;
  v25 = 0LL;
  v17 = (*(__int64 (__fastcall **)(__int64 *, __int64, GUID *, __int64 *))(v16 + 104))(
          v26,
          23LL,
          &GUID_915aed0f_c782_41d6_b0dc_1ed22d1ee5cb,
          &v25);
  v9 = v17;
  if ( v17 < 0 )
  {
    v19 = 300LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)(unsigned int)v17,
      (int)v21);
    goto LABEL_8;
  }
  v17 = (*(__int64 (__fastcall **)(__int64, struct _GUID **, unsigned int *))(*(_QWORD *)v25 + 24LL))(v25, a4, a3);
  v9 = v17;
  if ( v17 < 0 )
  {
    v19 = 302LL;
    goto LABEL_19;
  }
  v9 = 0;
LABEL_8:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v25);
LABEL_9:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v26);
LABEL_10:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v21);
LABEL_11:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v22);
LABEL_12:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v23);
  return v9;
}
