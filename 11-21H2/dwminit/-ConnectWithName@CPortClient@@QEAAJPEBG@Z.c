/*
 * XREFs of ?ConnectWithName@CPortClient@@QEAAJPEBG@Z @ 0x180008284
 * Callers:
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x180007B44 (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180001C50 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800076CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CPortClient::ConnectWithName(CPortClient *this, const unsigned __int16 *a2)
{
  unsigned int v3; // ebx
  struct _PORT_VIEW *v4; // r9
  _DWORD *v5; // rax
  __int64 v6; // rcx
  NTSTATUS v7; // eax
  __int64 v8; // rcx
  ULONG ConnectionInformationLength; // [rsp+40h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-30h] BYREF
  _SECURITY_QUALITY_OF_SERVICE SecurityQos; // [rsp+58h] [rbp-20h] BYREF

  v3 = 0;
  RtlInitUnicodeString(&DestinationString, a2);
  v4 = (struct _PORT_VIEW *)*((_QWORD *)this + 5);
  SecurityQos.Length = 12;
  SecurityQos.ImpersonationLevel = SecurityIdentification;
  *(_WORD *)&SecurityQos.ContextTrackingMode = 257;
  ConnectionInformationLength = 0;
  if ( !v4 )
  {
    if ( !*((_DWORD *)this + 7) )
      goto LABEL_8;
    v5 = HeapAlloc(*((HANDLE *)this + 6), 8u, 0x30uLL);
    *((_QWORD *)this + 5) = v5;
    if ( !v5 )
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v6, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 9LL, -2147024882, 0xD8u);
      return v3;
    }
    *v5 = 48;
    *(_DWORD *)(*((_QWORD *)this + 5) + 16LL) = 0;
    *(_QWORD *)(*((_QWORD *)this + 5) + 24LL) = *((unsigned int *)this + 7);
    *(_QWORD *)(*((_QWORD *)this + 5) + 8LL) = *((_QWORD *)this + 4);
    v4 = (struct _PORT_VIEW *)*((_QWORD *)this + 5);
    if ( !v4 )
      goto LABEL_8;
  }
  if ( !v4->SectionHandle )
LABEL_8:
    v4 = 0LL;
  v7 = NtConnectPort(
         (PHANDLE)this + 2,
         &DestinationString,
         &SecurityQos,
         v4,
         0LL,
         0LL,
         0LL,
         &ConnectionInformationLength);
  if ( v7 >= 0 )
  {
    *((_BYTE *)this + 24) = 1;
  }
  else
  {
    v3 = v7 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(
      v8,
      &CPortClient::MILINSTRUMENTATIONHRESULTLIST,
      9LL,
      v7 | 0x10000000,
      0xE9u);
  }
  return v3;
}
