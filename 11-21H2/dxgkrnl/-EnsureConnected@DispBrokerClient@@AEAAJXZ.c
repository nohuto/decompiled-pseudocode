/*
 * XREFs of ?EnsureConnected@DispBrokerClient@@AEAAJXZ @ 0x1C01C8648
 * Callers:
 *     ?ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ @ 0x1C01C88B4 (-ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DXGKCALLONEXIT__lambda_da24f1cfb4b7f8e158997fb0a51b3ded___ @ 0x1C00146E8 (DXGKCALLONEXIT__lambda_da24f1cfb4b7f8e158997fb0a51b3ded___.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0014708 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     _lambda_8317567312832b51b45aaef017a7684b_::operator() @ 0x1C01C8284 (_lambda_8317567312832b51b45aaef017a7684b_--operator().c)
 */

__int64 __fastcall DispBrokerClient::EnsureConnected(DispBrokerClient *this)
{
  unsigned __int64 v2; // rax
  NTSTATUS v3; // eax
  wchar_t *v4; // r8
  NTSTATUS v5; // eax
  int v6; // eax
  __int64 v7; // r9
  __int64 v8; // rax
  HANDLE v9; // rcx
  __int64 v10; // rdi
  unsigned int v11; // ebx
  const wchar_t *v13; // r9
  __int64 v14; // rbx
  __int64 v15; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+70h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v18; // [rsp+80h] [rbp-88h] BYREF
  __int64 v19; // [rsp+88h] [rbp-80h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v21[4]; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v22; // [rsp+C0h] [rbp-48h]
  __int128 v23; // [rsp+D8h] [rbp-30h] BYREF
  __int64 *v24; // [rsp+E8h] [rbp-20h]
  unsigned __int64 *v25; // [rsp+F0h] [rbp-18h]
  unsigned int **v26[4]; // [rsp+F8h] [rbp-10h] BYREF
  char v27; // [rsp+118h] [rbp+10h]
  _QWORD v28[10]; // [rsp+128h] [rbp+20h] BYREF
  unsigned __int16 v29[56]; // [rsp+178h] [rbp+70h] BYREF
  WCHAR SourceString[56]; // [rsp+1E8h] [rbp+E0h] BYREF

  LODWORD(v15) = 0;
  v2 = KeQueryInterruptTimePrecise(&v18);
  v16 = 0LL;
  *(_QWORD *)&v23 = this;
  *((_QWORD *)&v23 + 1) = &v16;
  v24 = &v15;
  v18 = v2 / 0xA;
  v25 = &v18;
  DXGKCALLONEXIT__lambda_da24f1cfb4b7f8e158997fb0a51b3ded_((__int64)v26, &v23);
  memset(v29, 0, 0x6CuLL);
  memset(SourceString, 0, 0x6CuLL);
  if ( **(_DWORD **)this )
  {
    v3 = RtlStringCchPrintfW(v29, 0x36uLL, (size_t *)L"\\Sessions\\%d");
    LODWORD(v15) = v3;
    if ( v3 < 0 )
    {
      WdLogSingleEntry2(2LL, v3, 0LL);
      v13 = L"Failed to build the session directory path (Status = 0x%I64x).";
LABEL_19:
      v14 = 0LL;
LABEL_23:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v13, (int)v15, v14, 0LL, 0LL, 0LL);
LABEL_13:
      v11 = v15;
      goto LABEL_14;
    }
  }
  v4 = L"%s\\BaseNamedObjects\\DispBrokerPort";
  if ( !*((_BYTE *)this + 9) )
    v4 = (wchar_t *)L"%s\\Windows\\DispBrokerPort";
  v5 = RtlStringCchPrintfW(SourceString, 0x36uLL, (size_t *)v4, v29);
  LODWORD(v15) = v5;
  if ( v5 < 0 )
  {
    v14 = 1LL;
    WdLogSingleEntry2(2LL, v5, 1LL);
    v13 = L"Failed to build the display broker ALPC port object path (Status = 0x%I64x).";
    goto LABEL_23;
  }
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  v21[0] = 48LL;
  v21[3] = 512LL;
  v21[1] = 0LL;
  v21[2] = 0LL;
  v22 = 0LL;
  memset(v28, 0, 0x48uLL);
  v28[2] = 65280LL;
  LODWORD(v28[0]) = 0x100000;
  v19 = -150000000LL;
  Handle = 0LL;
  v6 = ZwAlpcConnectPort(&Handle, &DestinationString, v21, v28, 1179648, 0LL, 0LL, 0LL, 0LL, 0LL, &v19);
  LODWORD(v15) = v6;
  if ( v6 == 258 )
  {
    LODWORD(v15) = -1073741505;
    WdLogSingleEntry1(2LL, -1073741505LL);
    v13 = L"Timeout to connect display broker ALPC port, returning 0x%I64x.";
    goto LABEL_19;
  }
  if ( v6 == 192 )
  {
    LODWORD(v15) = -1073741749;
    v14 = 3LL;
    WdLogSingleEntry2(2LL, -1073741749LL, 3LL);
    v13 = L"Failed to connect the display broker ALPC port as current thread is being terminating, returning 0x%I64x.";
    goto LABEL_23;
  }
  if ( v6 < 0 )
  {
    WdLogSingleEntry2(2LL, v6, 2LL);
    v13 = L"Failed to connect the display broker ALPC port (Status = 0x%I64x).";
    v14 = 2LL;
    goto LABEL_23;
  }
  v8 = operator new[](0x10uLL, 0x4B677844u, 256LL, v7);
  v9 = Handle;
  v10 = v8;
  if ( v8 )
  {
    *(_DWORD *)v8 = 0;
    *(_QWORD *)(v8 + 8) = v9;
    if ( !v9 )
    {
      WdLogSingleEntry1(1LL, 34LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"PortHandle != nullptr", 34LL, 0LL, 0LL, 0LL, 0LL);
    }
    v16 = v10;
    goto LABEL_13;
  }
  v16 = 0LL;
  ZwClose(Handle);
  WdLogSingleEntry1(6LL, 281LL);
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Failed to allocate DispBrokerClientHandle for a new ALPC port.",
    281LL,
    0LL,
    0LL,
    0LL,
    0LL);
  v11 = -1073741801;
LABEL_14:
  if ( v27 )
    lambda_8317567312832b51b45aaef017a7684b_::operator()(v26);
  return v11;
}
