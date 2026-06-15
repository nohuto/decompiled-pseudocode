/*
 * XREFs of ?Initialize@HandleSendReceiveServer@@QEAAJPEAPEAG@Z @ 0x14002310C
 * Callers:
 *     ?StartALPCHandleServer@CEndpointInstance@@KAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVHandleSendReceiveServer@@@Z @ 0x140023054 (-StartALPCHandleServer@CEndpointInstance@@KAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVHandleSe.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x140014E00 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?SecurityCreateSecurityDescriptor@HandleSendReceiveServer@@AEAAJPEAPEAX@Z @ 0x140023320 (-SecurityCreateSecurityDescriptor@HandleSendReceiveServer@@AEAAJPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     memset_0 @ 0x140029234 (memset_0.c)
 */

__int64 __fastcall HandleSendReceiveServer::Initialize(HandleSendReceiveServer *this, unsigned __int16 **a2)
{
  HandleSendReceiveServer *v2; // r12
  int v3; // r13d
  unsigned __int16 **v4; // r14
  unsigned __int16 *v5; // rax
  unsigned __int16 *v6; // rdi
  ULONG v7; // eax
  ULONG v8; // esi
  int v9; // ebx
  HandleSendReceiveServer *v10; // rcx
  int inited; // r14d
  HLOCAL v12; // r15
  char *v13; // rcx
  int v14; // eax
  int v15; // eax
  char *Thread; // rax
  ULONG v18; // eax
  signed int LastError; // eax
  signed int v20; // eax
  LPDWORD lpThreadId; // [rsp+28h] [rbp-D8h]
  __int64 Seed; // [rsp+30h] [rbp-D0h] BYREF
  int v23; // [rsp+38h] [rbp-C8h]
  unsigned __int16 **v24; // [rsp+40h] [rbp-C0h]
  HLOCAL hMem; // [rsp+48h] [rbp-B8h] BYREF
  HandleSendReceiveServer *v26; // [rsp+50h] [rbp-B0h]
  int v27; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+60h] [rbp-A0h]
  _UNICODE_STRING *p_DestinationString; // [rsp+68h] [rbp-98h]
  int v30; // [rsp+70h] [rbp-90h]
  HLOCAL v31; // [rsp+78h] [rbp-88h]
  __int64 v32; // [rsp+80h] [rbp-80h]
  char *v33; // [rsp+90h] [rbp-70h]
  _UNICODE_STRING DestinationString; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v35[16]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v36; // [rsp+C0h] [rbp-40h]

  v2 = this;
  v26 = this;
  v24 = a2;
  v3 = 0;
  v4 = a2;
  v5 = (unsigned __int16 *)CoTaskMemAlloc(0x80uLL);
  v6 = v5;
  if ( !v5 )
    return (unsigned int)-2147024882;
  *v5 = 0;
  LODWORD(Seed) = MEMORY[0x7FFE0320];
  do
  {
    v7 = RtlRandomEx((PULONG)&Seed);
    v8 = v7;
  }
  while ( !v7 );
  v9 = StringCchPrintfW(
         v6,
         0x40uLL,
         (size_t *)L"%ws%ws%ld",
         L"\\BaseNamedObjects\\",
         L"AudioEngineDuplicateHandleApiPort",
         v7,
         Seed);
  if ( v9 >= 0 )
  {
    inited = RtlInitUnicodeStringEx(&DestinationString, v6);
    if ( inited < 0 )
      goto LABEL_30;
    v9 = HandleSendReceiveServer::SecurityCreateSecurityDescriptor(v10, &hMem);
    if ( v9 >= 0 )
    {
      v32 = 0LL;
      v28 = 0LL;
      v12 = hMem;
      v27 = 48;
      v30 = 64;
      p_DestinationString = &DestinationString;
      v31 = hMem;
      memset_0(v35, 0, 0x48uLL);
      v13 = (char *)v2 + 8;
      v36 = 48LL;
      v33 = (char *)v2 + 8;
      v14 = 3;
      while ( 1 )
      {
        v23 = v14 - 1;
        v15 = NtAlpcCreatePort(v13, &v27, v35);
        inited = v15;
        if ( v15 != -1073741771 && v15 != 0x40000000 )
          break;
        if ( ++v3 )
        {
          if ( !v8 )
          {
            v9 = -2147024809;
            break;
          }
          v18 = v8 + v3;
        }
        else
        {
          HIDWORD(Seed) = MEMORY[0x7FFE0320];
          do
            v18 = RtlRandomEx((PULONG)&Seed + 1);
          while ( !v18 );
          v12 = hMem;
          v8 = v18;
        }
        LODWORD(lpThreadId) = v18;
        v9 = StringCchPrintfW(
               v6,
               0x40uLL,
               (size_t *)L"%ws%ws%ld",
               L"\\BaseNamedObjects\\",
               L"AudioEngineDuplicateHandleApiPort",
               lpThreadId);
        if ( v9 < 0 )
          break;
        if ( RtlInitUnicodeStringEx(&DestinationString, v6) < 0 )
          break;
        v28 = 0LL;
        v32 = 0LL;
        p_DestinationString = &DestinationString;
        v14 = v23;
        v27 = 48;
        v30 = 64;
        v31 = v12;
        if ( v23 <= 0 )
          break;
        v13 = v33;
      }
      LocalFree(v12);
      v2 = v26;
      if ( inited < 0 )
      {
LABEL_30:
        RtlSetLastWin32ErrorAndNtStatusFromNtStatus(inited);
        LastError = GetLastError();
        v9 = LastError;
        if ( LastError > 0 )
          v9 = (unsigned __int16)LastError | 0x80070000;
        CoTaskMemFree(v6);
        v6 = 0LL;
      }
    }
    v4 = v24;
  }
  if ( v9 < 0 )
    goto LABEL_35;
  Thread = (char *)CreateThread(0LL, 0LL, (LPTHREAD_START_ROUTINE)HandleSendReceiveServer::AeServerApiProc, v2, 0, 0LL);
  *((_QWORD *)v2 + 6) = Thread;
  if ( (unsigned __int64)(Thread - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    *v4 = v6;
    return (unsigned int)v9;
  }
  v20 = GetLastError();
  v9 = v20;
  if ( v20 > 0 )
    v9 = (unsigned __int16)v20 | 0x80070000;
  if ( v9 < 0 )
  {
LABEL_35:
    if ( v6 )
      CoTaskMemFree(v6);
  }
  return (unsigned int)v9;
}
