/*
 * XREFs of ?TryGetMicBoostPartAndInterfacesFromDevice@@YAJPEAUIMMDevice@@PEAPEAUIPart@@PEAPEAUIAudioVolumeLevel@@PEAPEAUIAudioMute@@@Z @ 0x140078800
 * Callers:
 *     ?QueueInitialMicBoostNotification@@YAJAEAUAUDIO_MICROPHONE_BOOST_APO_NOTIFICATION_DESCRIPTOR@@PEAVCAPOProcessingHostObject@@@Z @ 0x14002D6AC (-QueueInitialMicBoostNotification@@YAJAEAUAUDIO_MICROPHONE_BOOST_APO_NOTIFICATION_DESCRIPTOR@@PE.c)
 *     ?RuntimeClassInitialize@CMicBoostNotificationsHandler@@QEAAJPEAUIMMDevice@@@Z @ 0x140078728 (-RuntimeClassInitialize@CMicBoostNotificationsHandler@@QEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x140006E98 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400381A0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x140050438 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall TryGetMicBoostPartAndInterfacesFromDevice(
        struct IMMDevice *a1,
        struct IPart **a2,
        struct IAudioVolumeLevel **a3,
        struct IAudioMute **a4)
{
  struct IMMDeviceVtbl *lpVtbl; // rax
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  unsigned int v13; // esi
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, LPVOID *); // rdi
  int v18; // eax
  void *v19; // rcx
  __int64 v21; // rbx
  __int64 (__fastcall *v22)(__int64, __int64, GUID *, struct IAudioVolumeLevel **); // rdi
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rbx
  __int64 (__fastcall *v26)(__int64, __int64, GUID *, struct IAudioMute **); // rdi
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rbx
  __int64 v30; // rsi
  struct IPart *v31; // rax
  struct IPart *v32; // rdi
  struct IAudioVolumeLevel *v33; // rax
  struct IAudioMute *v34; // rax
  __int64 v35; // [rsp+38h] [rbp-49h] BYREF
  int v36[2]; // [rsp+40h] [rbp-41h] BYREF
  struct IAudioMute *v37; // [rsp+48h] [rbp-39h] BYREF
  struct IAudioVolumeLevel *v38; // [rsp+50h] [rbp-31h] BYREF
  __int64 v39; // [rsp+58h] [rbp-29h] BYREF
  LPVOID pv; // [rsp+60h] [rbp-21h] BYREF
  int v41[2]; // [rsp+68h] [rbp-19h] BYREF
  int v42; // [rsp+78h] [rbp-9h] BYREF
  _BYTE v43[28]; // [rsp+7Ch] [rbp-5h]
  _OWORD v44[2]; // [rsp+98h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]
  unsigned int v46; // [rsp+E8h] [rbp+67h] BYREF

  lpVtbl = a1->lpVtbl;
  *(_QWORD *)v41 = 0LL;
  v8 = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64, _QWORD, int *))lpVtbl->Activate)(
         a1,
         &GUID_e749ccff_bf18_4e45_9c2b_fbf8ee730029,
         1LL,
         0LL,
         v41);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apomicboostnotificationshandler.cpp",
      (const char *)(unsigned int)v8);
LABEL_41:
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)v41);
    return v9;
  }
  *(_OWORD *)v43 = 0LL;
  v42 = 64;
  *(GUID *)&v43[12] = GUID_73647561_0000_0010_8000_00aa00389b71;
  v44[0] = GUID_00000001_0000_0010_8000_00aa00389b71;
  v44[1] = GUID_05589f81_c356_11ce_bf01_00aa0055595a;
  *(_QWORD *)v36 = 0LL;
  v10 = **(_QWORD **)v41;
  *(_QWORD *)v36 = 0LL;
  v11 = (*(__int64 (__fastcall **)(_QWORD, int *, __int64, _QWORD, int *))(v10 + 24))(
          *(_QWORD *)v41,
          &v42,
          64LL,
          0LL,
          v36);
  v9 = v11;
  if ( v11 < 0 )
  {
    v12 = 22LL;
    goto LABEL_5;
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)v36 + 24LL))(*(_QWORD *)v36, &v46);
  v9 = v11;
  if ( v11 < 0 )
  {
    v12 = 25LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apomicboostnotificationshandler.cpp",
      (const char *)(unsigned int)v11);
LABEL_40:
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)v36);
    goto LABEL_41;
  }
  v39 = 0LL;
  v38 = 0LL;
  v37 = 0LL;
  v13 = 0;
  if ( !v46 )
    goto LABEL_17;
  while ( 1 )
  {
    v35 = 0LL;
    v14 = **(_QWORD **)v36;
    v35 = 0LL;
    v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(v14 + 32))(*(_QWORD *)v36, v13, &v35);
    v9 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x21,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apomicboostnotificationshandler.cpp",
        (const char *)(unsigned int)v15);
      goto LABEL_39;
    }
    pv = 0LL;
    v16 = v35;
    v17 = *(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v35 + 24LL);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &pv,
      0LL);
    v18 = v17(v16, &pv);
    v9 = v18;
    if ( v18 < 0 )
    {
      v24 = 36LL;
LABEL_22:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v24,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apomicboostnotificationshandler.cpp",
        (const char *)(unsigned int)v18);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&pv);
LABEL_39:
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v35);
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v37);
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v38);
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v39);
      goto LABEL_40;
    }
    v19 = pv;
    if ( pv )
      break;
LABEL_14:
    if ( v19 )
      CoTaskMemFree(v19);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v35);
    if ( ++v13 >= v46 )
      goto LABEL_17;
  }
  if ( (unsigned int)_o__wcsicmp(L"Microphone Boost", pv) )
  {
    v19 = pv;
    goto LABEL_14;
  }
  v21 = v35;
  v22 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, struct IAudioVolumeLevel **))(*(_QWORD *)v35 + 104LL);
  v23 = (__int64)v38;
  v38 = 0LL;
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  v18 = v22(v21, 23LL, &GUID_7fb7b48f_531d_44a2_bcb3_5ad5a134b3dc, &v38);
  v9 = v18;
  if ( v18 < 0 )
  {
    v24 = 40LL;
    goto LABEL_22;
  }
  v25 = v35;
  v26 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, struct IAudioMute **))(*(_QWORD *)v35 + 104LL);
  v27 = (__int64)v37;
  v37 = 0LL;
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  v28 = v26(v25, 23LL, &GUID_df45aeea_b74a_4b6b_afad_2366b6aa012e, &v37);
  if ( v28 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2A,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apomicboostnotificationshandler.cpp",
      (const char *)(unsigned int)v28);
  v29 = v35;
  if ( v35 )
  {
    v39 = v35;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 8LL))(v35);
    v30 = v29;
    v31 = (struct IPart *)v29;
    v32 = (struct IPart *)v29;
  }
  else
  {
    v39 = 0LL;
    v29 = 0LL;
    v30 = 0LL;
    v31 = 0LL;
    v32 = 0LL;
  }
  if ( pv )
  {
    CoTaskMemFree(pv);
  }
  else
  {
    v30 = v29;
    v32 = v31;
  }
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v35);
  if ( !v30 )
  {
LABEL_17:
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v37);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v38);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v39);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)v36);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)v41);
    return 2147500033LL;
  }
  if ( a2 )
  {
    v39 = 0LL;
    *a2 = v32;
  }
  v33 = v38;
  v38 = 0LL;
  *a3 = v33;
  v34 = v37;
  v37 = 0LL;
  *a4 = v34;
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v37);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v38);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v39);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)v36);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)v41);
  return 0LL;
}
