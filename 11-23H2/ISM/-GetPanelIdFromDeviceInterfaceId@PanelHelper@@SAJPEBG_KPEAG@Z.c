/*
 * XREFs of ?GetPanelIdFromDeviceInterfaceId@PanelHelper@@SAJPEBG_KPEAG@Z @ 0x180115B10
 * Callers:
 *     ?Initialize@DockDevice@@QEAAJPEAUDockDeviceInfo@@@Z @ 0x1800E6F3C (-Initialize@DockDevice@@QEAAJPEAUDockDeviceInfo@@@Z.c)
 * Callees:
 *     IsEqualGUID @ 0x180021F40 (IsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _Init_thread_footer @ 0x180056BA8 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180056C10 (_Init_thread_header.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800957B0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800E46A0 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     wil::details::lambda_call__lambda_8d17588ca62941c116874c82e38215af___::_lambda_call__lambda_8d17588ca62941c116874c82e38215af___ @ 0x180115AD8 (wil--details--lambda_call__lambda_8d17588ca62941c116874c82e38215af___--_lambda_call__lambda_8d17.c)
 */

__int64 __fastcall PanelHelper::GetPanelIdFromDeviceInterfaceId(
        const unsigned __int16 *a1,
        __int64 a2,
        unsigned __int16 *a3)
{
  __int64 v5; // rdi
  int ObjectProperties; // eax
  unsigned int v7; // ebx
  unsigned int v8; // r10d
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rbx
  int v13; // eax
  unsigned int v14; // r10d
  __int64 v15; // r9
  __int64 v16; // r8
  size_t *v17; // r8
  HRESULT v18; // eax
  __int64 v19; // [rsp+40h] [rbp-40h] BYREF
  __int64 v20; // [rsp+48h] [rbp-38h] BYREF
  __int128 v21; // [rsp+50h] [rbp-30h] BYREF
  char v22; // [rsp+60h] [rbp-20h]
  __int128 v23; // [rsp+68h] [rbp-18h] BYREF
  char v24; // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  __int64 v26; // [rsp+A8h] [rbp+28h] BYREF
  unsigned int v27; // [rsp+B8h] [rbp+38h] BYREF

  v26 = a2;
  v5 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
  if ( dword_180269880 > *(_DWORD *)(v5 + 16) )
  {
    Init_thread_header(&dword_180269880);
    if ( dword_180269880 == -1 )
    {
      dword_180269654 = 0;
      qword_180269658 = 0LL;
      *(DEVPROPKEY *)&byte_180269640 = DEVPKEY_Device_InstanceId;
      Init_thread_footer(&dword_180269880);
    }
  }
  v27 = 0;
  v20 = 0LL;
  *(_QWORD *)&v21 = &v20;
  v24 = 1;
  *((_QWORD *)&v21 + 1) = &v27;
  v23 = v21;
  ObjectProperties = DevGetObjectProperties(1LL, a1, 0LL);
  v7 = ObjectProperties;
  if ( ObjectProperties < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\panelhelper\\panelhelper.cpp",
      (const char *)(unsigned int)ObjectProperties);
LABEL_13:
    wil::details::lambda_call__lambda_8d17588ca62941c116874c82e38215af___::_lambda_call__lambda_8d17588ca62941c116874c82e38215af___((__int64)&v23);
    return v7;
  }
  v8 = v27;
  v9 = 0LL;
  if ( !v27 )
  {
LABEL_12:
    v7 = -2147467259;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x37,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\panelhelper\\panelhelper.cpp",
      (const char *)0x80004005LL,
      (int)"Failed to query device instance ID.",
      (const char *)&v27);
    goto LABEL_13;
  }
  while ( 1 )
  {
    if ( *(_DWORD *)(v20 + 48 * v9 + 16) == 256
      && IsEqualGUID((_QWORD *)(v20 + 48 * v9), &DEVPKEY_Device_InstanceId)
      && *(_DWORD *)(v10 + 32) == 18 )
    {
      v11 = *(_QWORD *)(v10 + 40);
      if ( v11 )
        break;
    }
    v9 = (unsigned int)(v9 + 1);
    if ( (unsigned int)v9 >= v8 )
      goto LABEL_12;
  }
  if ( dword_180269884 > *(_DWORD *)(v5 + 16) )
  {
    Init_thread_header(&dword_180269884);
    if ( dword_180269884 == -1 )
    {
      dword_180269634 = 0;
      qword_180269638 = 0LL;
      *(_OWORD *)&xmmword_180269620 = DEVPKEY_Device_PanelId;
      dword_180269630 = 2;
      Init_thread_footer(&dword_180269884);
    }
  }
  LODWORD(v26) = 0;
  v19 = 0LL;
  *(_QWORD *)&v21 = &v19;
  v22 = 1;
  *((_QWORD *)&v21 + 1) = &v26;
  v13 = DevGetObjectProperties(3LL, v11, 0LL);
  v7 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\panelhelper\\panelhelper.cpp",
      (const char *)(unsigned int)v13);
LABEL_26:
    wil::details::lambda_call__lambda_8d17588ca62941c116874c82e38215af___::_lambda_call__lambda_8d17588ca62941c116874c82e38215af___((__int64)&v21);
    goto LABEL_13;
  }
  v14 = v26;
  v15 = 0LL;
  if ( !(_DWORD)v26 )
  {
LABEL_25:
    v7 = -2147467259;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x61,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\panelhelper\\panelhelper.cpp",
      (const char *)0x80004005LL,
      (int)"Failed to query panel ID.",
      (const char *)&v26);
    goto LABEL_26;
  }
  while ( 1 )
  {
    if ( *(_DWORD *)(v19 + 48 * v15 + 16) == 2
      && IsEqualGUID((_QWORD *)(v19 + 48 * v15), &DEVPKEY_Device_PanelId)
      && *(_DWORD *)(v16 + 32) == 18 )
    {
      v17 = *(size_t **)(v16 + 40);
      if ( v17 )
        break;
    }
    v15 = (unsigned int)(v15 + 1);
    if ( (unsigned int)v15 >= v14 )
      goto LABEL_25;
  }
  v18 = StringCchCopyW(a3, 0x39uLL, v17);
  if ( v18 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x5C,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\panelhelper\\panelhelper.cpp",
      (const char *)(unsigned int)v18,
      (int)&xmmword_180269620);
  if ( v19 )
    DevFreeObjectProperties((unsigned int)v26);
  if ( v20 )
    DevFreeObjectProperties(v27);
  return 0LL;
}
