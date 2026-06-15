/*
 * XREFs of ?ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z @ 0x140007820
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?DeleteExistingFormatConverter@CSubmixImpl@@IEAAJXZ @ 0x140007160 (-DeleteExistingFormatConverter@CSubmixImpl@@IEAAJXZ.c)
 *     ??4?$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z @ 0x1400073F0 (--4-$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000AA3C (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x14001990C (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_ptr@UKSDATAFORMAT_WAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x14004A240 (--1-$unique_ptr@UKSDATAFORMAT_WAVEFORMATEX@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::details::lambda_call__lambda_12db3be491a36a458f9deaf3d8455698___::_lambda_call__lambda_12db3be491a36a458f9deaf3d8455698___ @ 0x140067154 (wil--details--lambda_call__lambda_12db3be491a36a458f9deaf3d8455698___--_lambda_call__lambda_12db.c)
 *     wil::details::lambda_call__lambda_f8e0dc90e450afbc537cf9c41aa01569___::_lambda_call__lambda_f8e0dc90e450afbc537cf9c41aa01569___ @ 0x140067194 (wil--details--lambda_call__lambda_f8e0dc90e450afbc537cf9c41aa01569___--_lambda_call__lambda_f8e0.c)
 *     ?CreateFormatConverterPipe@CSubmixImpl@@IEAAJPEAUtWAVEFORMATEX@@_J@Z @ 0x140067458 (-CreateFormatConverterPipe@CSubmixImpl@@IEAAJPEAUtWAVEFORMATEX@@_J@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSubmixImpl::ConnectToRightSubmix(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        char a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  int v7; // eax
  int FormatConverterPipe; // esi
  __int64 *v9; // r14
  __int64 v10; // rax
  void *v11; // rcx
  int v12; // eax
  void *v13; // rcx
  __int64 v15; // rdx
  unsigned int v16; // edi
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // eax
  __int128 p_pv; // [rsp+20h] [rbp-30h] BYREF
  char v22; // [rsp+30h] [rbp-20h]
  __int128 v23; // [rsp+38h] [rbp-18h] BYREF
  char v24; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 *v26; // [rsp+80h] [rbp+30h] BYREF
  LPVOID pv; // [rsp+98h] [rbp+48h] BYREF

  if ( *(_BYTE *)(a1 + 313) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F0,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x8000FFFFLL,
      p_pv);
    return 2147549183LL;
  }
  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 176));
  v26 = 0LL;
  v7 = (**a2)(a2, &GUID_764792a0_18e2_400b_9cb9_2dc44605fce0, (__int64 *)&v26);
  FormatConverterPipe = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F4,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v7,
      p_pv);
LABEL_24:
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v26);
    if ( v6 )
      LeaveCriticalSection(v6);
    return (unsigned int)FormatConverterPipe;
  }
  v9 = (__int64 *)(a1 + 304);
  if ( *(_QWORD *)(a1 + 304) )
  {
    v16 = -2005139410;
    v17 = 761LL;
LABEL_29:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)v16,
      p_pv);
LABEL_30:
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v26);
    if ( v6 )
      LeaveCriticalSection(v6);
    return v16;
  }
  if ( (a3 & 1) == 0 && *(_QWORD *)(a1 + 232) < (*(__int64 (__fastcall **)(__int64 *))(*v26 + 56))(v26) )
  {
    v16 = -2005139386;
    v17 = 766LL;
    goto LABEL_29;
  }
  pv = 0LL;
  v10 = *v26;
  p_pv = (unsigned __int64)&pv;
  v22 = 1;
  FormatConverterPipe = (*(__int64 (__fastcall **)(__int64 *, char *))(v10 + 72))(v26, (char *)&p_pv + 8);
  if ( v22 )
  {
    v11 = *(void **)p_pv;
    *(_QWORD *)p_pv = *((_QWORD *)&p_pv + 1);
    if ( v11 )
      CoTaskMemFree(v11);
  }
  if ( FormatConverterPipe < 0 )
  {
    v15 = 770LL;
    goto LABEL_22;
  }
  if ( (unsigned int)CompareWaveFormat(*(const struct tWAVEFORMATEX **)(a1 + 216), (const struct tWAVEFORMATEX *)pv) )
  {
    FormatConverterPipe = CSubmixImpl::DeleteExistingFormatConverter((CSubmixImpl *)a1);
    if ( FormatConverterPipe >= 0 )
      goto LABEL_12;
    v15 = 785LL;
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)FormatConverterPipe,
      p_pv);
LABEL_23:
    wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&pv);
    goto LABEL_24;
  }
  v18 = (*(__int64 (__fastcall **)(__int64 *))(*v26 + 56))(v26);
  if ( !*(_QWORD *)(a1 + 272)
    || *(_QWORD *)(a1 + 288) != v18
    || !(unsigned int)CompareWaveFormat(*(const struct tWAVEFORMATEX **)(a1 + 280), (const struct tWAVEFORMATEX *)pv) )
  {
    FormatConverterPipe = CSubmixImpl::DeleteExistingFormatConverter((CSubmixImpl *)a1);
    if ( FormatConverterPipe < 0 )
    {
      v15 = 778LL;
      goto LABEL_22;
    }
    v19 = (*(__int64 (__fastcall **)(__int64 *))(*v26 + 56))(v26);
    FormatConverterPipe = CSubmixImpl::CreateFormatConverterPipe((CSubmixImpl *)a1, (struct tWAVEFORMATEX *)pv, v19);
    if ( FormatConverterPipe < 0 )
    {
      v15 = 780LL;
      goto LABEL_22;
    }
  }
LABEL_12:
  *(_QWORD *)&p_pv = a1;
  *((_QWORD *)&p_pv + 1) = &v26;
  v23 = p_pv;
  v24 = 1;
  v12 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v26, 0LL);
  FormatConverterPipe = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x31B,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)v12,
      p_pv);
    wil::details::lambda_call__lambda_f8e0dc90e450afbc537cf9c41aa01569___::_lambda_call__lambda_f8e0dc90e450afbc537cf9c41aa01569___(&v23);
    goto LABEL_23;
  }
  (*(void (__fastcall **)(__int64 *, __int64))(*v26 + 80))(v26, a1);
  *(_QWORD *)&p_pv = &v26;
  *((_QWORD *)&p_pv + 1) = a1;
  v22 = 1;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 136LL))(a1) )
  {
    v20 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v26 + 96))(v26, a1);
    v16 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x32A,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)v20,
        p_pv);
      wil::details::lambda_call__lambda_12db3be491a36a458f9deaf3d8455698___::_lambda_call__lambda_12db3be491a36a458f9deaf3d8455698___(&p_pv);
      wil::details::lambda_call__lambda_f8e0dc90e450afbc537cf9c41aa01569___::_lambda_call__lambda_f8e0dc90e450afbc537cf9c41aa01569___(&v23);
      wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&pv);
      goto LABEL_30;
    }
  }
  wil::com_ptr_t<ISubmix,wil::err_returncode_policy>::operator=(v9, (__int64)a2);
  PublishDeviceGraphWnfState();
  v13 = pv;
  pv = 0LL;
  if ( v13 )
    CoTaskMemFree(v13);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v26);
  if ( v6 )
    LeaveCriticalSection(v6);
  return 0LL;
}
