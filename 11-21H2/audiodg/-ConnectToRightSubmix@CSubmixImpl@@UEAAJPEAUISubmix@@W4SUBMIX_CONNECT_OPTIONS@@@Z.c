/*
 * XREFs of ?ConnectToRightSubmix@CSubmixImpl@@UEAAJPEAUISubmix@@W4SUBMIX_CONNECT_OPTIONS@@@Z @ 0x14001D720
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Reset@CFormatConverterPipe@@QEAAXXZ @ 0x14000A068 (-Reset@CFormatConverterPipe@@QEAAXXZ.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000C240 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x14001C5CC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x14001C5D8 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ??4?$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z @ 0x14001DA98 (--4-$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     wil::details::lambda_call__lambda_f8e0dc90e450afbc537cf9c41aa01569___::_lambda_call__lambda_f8e0dc90e450afbc537cf9c41aa01569___ @ 0x140031EB0 (wil--details--lambda_call__lambda_f8e0dc90e450afbc537cf9c41aa01569___--_lambda_call__lambda_f8e0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$unique_ptr@UKSDATAFORMAT_WAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x14004CCC0 (--1-$unique_ptr@UKSDATAFORMAT_WAVEFORMATEX@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0.c)
 *     wil::details::lambda_call__lambda_12db3be491a36a458f9deaf3d8455698___::_lambda_call__lambda_12db3be491a36a458f9deaf3d8455698___ @ 0x14004CCEC (wil--details--lambda_call__lambda_12db3be491a36a458f9deaf3d8455698___--_lambda_call__lambda_12db.c)
 *     ?CreateFormatConverterPipe@CSubmixImpl@@IEAAJPEAUtWAVEFORMATEX@@_J@Z @ 0x140062534 (-CreateFormatConverterPipe@CSubmixImpl@@IEAAJPEAUtWAVEFORMATEX@@_J@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSubmixImpl::ConnectToRightSubmix(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        char a3)
{
  unsigned int v6; // ebx
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  int v8; // eax
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rax
  void *v12; // rcx
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  int FormatConverterPipe; // eax
  int v18; // eax
  int v19; // eax
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+20h] [rbp-40h] BYREF
  __int128 v22; // [rsp+28h] [rbp-38h] BYREF
  char v23; // [rsp+38h] [rbp-28h]
  __int128 v24; // [rsp+40h] [rbp-20h] BYREF
  char v25; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  __int64 *v27; // [rsp+90h] [rbp+30h] BYREF
  struct tWAVEFORMATEX *v28; // [rsp+A8h] [rbp+48h] BYREF

  if ( !*(_BYTE *)(a1 + 313) )
  {
    v7 = (struct _RTL_CRITICAL_SECTION *)(a1 + 176);
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 176));
    v21 = v7;
    v27 = 0LL;
    v8 = (**a2)(a2, &GUID_cc56354c_5984_4beb_b60f_04b87fd5f8ee, (__int64 *)&v27);
    v6 = v8;
    if ( v8 < 0 )
    {
      v9 = (unsigned int)v8;
      v10 = 896LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)v9,
        (int)v21);
LABEL_34:
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v27);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v21);
      return v6;
    }
    if ( *(_QWORD *)(a1 + 304) )
    {
      v6 = -2005139410;
      v10 = 901LL;
LABEL_10:
      v9 = v6;
      goto LABEL_11;
    }
    if ( (a3 & 1) == 0 && *(_QWORD *)(a1 + 232) < (*(__int64 (__fastcall **)(__int64 *))(*v27 + 56))(v27) )
    {
      v6 = -2005139386;
      v10 = 906LL;
      goto LABEL_10;
    }
    v28 = 0LL;
    v11 = *v27;
    v22 = (unsigned __int64)&v28;
    v23 = 1;
    v6 = (*(__int64 (__fastcall **)(__int64 *, char *))(v11 + 72))(v27, (char *)&v22 + 8);
    if ( v23 )
    {
      v12 = *(void **)v22;
      *(_QWORD *)v22 = *((_QWORD *)&v22 + 1);
      if ( v12 )
        CoTaskMemFree(v12);
    }
    if ( (v6 & 0x80000000) != 0 )
    {
      v13 = v6;
      v14 = 910LL;
LABEL_23:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)v13,
        (int)v21);
LABEL_33:
      wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v28);
      goto LABEL_34;
    }
    if ( (unsigned int)CompareWaveFormat(*(const struct tWAVEFORMATEX **)(a1 + 216), v28) )
    {
      CFormatConverterPipe::Reset((CFormatConverterPipe *)(a1 + 272));
    }
    else
    {
      v15 = (*(__int64 (__fastcall **)(__int64 *))(*v27 + 56))(v27);
      if ( !*(_QWORD *)(a1 + 272)
        || *(_QWORD *)(a1 + 288) != v15
        || !(unsigned int)CompareWaveFormat(*(const struct tWAVEFORMATEX **)(a1 + 280), v28) )
      {
        v16 = (*(__int64 (__fastcall **)(__int64 *))(*v27 + 56))(v27);
        FormatConverterPipe = CSubmixImpl::CreateFormatConverterPipe((CSubmixImpl *)a1, v28, v16);
        v6 = FormatConverterPipe;
        if ( FormatConverterPipe < 0 )
        {
          v13 = (unsigned int)FormatConverterPipe;
          v14 = 919LL;
          goto LABEL_23;
        }
      }
    }
    *(_QWORD *)&v22 = a1;
    *((_QWORD *)&v22 + 1) = &v27;
    v24 = v22;
    v25 = 1;
    v18 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)a1 + 144LL))(a1, v27, 0LL);
    v6 = v18;
    if ( v18 >= 0 )
    {
      (*(void (__fastcall **)(__int64 *, __int64))(*v27 + 80))(v27, a1);
      *(_QWORD *)&v22 = &v27;
      *((_QWORD *)&v22 + 1) = a1;
      v23 = 1;
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 136LL))(a1)
        && (v19 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v27 + 96))(v27, a1), v6 = v19, v19 < 0) )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3B6,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
          (const char *)(unsigned int)v19,
          (int)v21);
      }
      else
      {
        wil::com_ptr_t<ISubmix,wil::err_returncode_policy>::operator=(a1 + 304, a2);
        v23 = 0;
        v25 = 0;
        PublishDeviceGraphWnfState();
        v6 = 0;
      }
      wil::details::lambda_call__lambda_12db3be491a36a458f9deaf3d8455698___::_lambda_call__lambda_12db3be491a36a458f9deaf3d8455698___(&v22);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3A7,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)v18,
        (int)v21);
    }
    wil::details::lambda_call__lambda_f8e0dc90e450afbc537cf9c41aa01569___::_lambda_call__lambda_f8e0dc90e450afbc537cf9c41aa01569___(&v24);
    goto LABEL_33;
  }
  v6 = -2147418113;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x37C,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
    (const char *)0x8000FFFFLL,
    (int)v21);
  return v6;
}
