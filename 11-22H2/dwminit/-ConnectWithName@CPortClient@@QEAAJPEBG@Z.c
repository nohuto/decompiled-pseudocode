/*
 * XREFs of ?ConnectWithName@CPortClient@@QEAAJPEBG@Z @ 0x180009D94
 * Callers:
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x180009644 (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180001C60 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800091CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CPortClient::ConnectWithName(HANDLE *this, const unsigned __int16 *a2)
{
  unsigned int v3; // ebx
  _DWORD *v4; // rax
  __int64 v5; // rcx
  struct _PORT_VIEW *v6; // r9
  NTSTATUS v7; // eax
  __int64 v8; // rcx
  ULONG ConnectionInformationLength; // [rsp+40h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-30h] BYREF
  _SECURITY_QUALITY_OF_SERVICE SecurityQos; // [rsp+58h] [rbp-20h] BYREF

  v3 = 0;
  RtlInitUnicodeString(&DestinationString, a2);
  SecurityQos.Length = 12;
  SecurityQos.ImpersonationLevel = SecurityIdentification;
  *(_WORD *)&SecurityQos.ContextTrackingMode = 257;
  ConnectionInformationLength = 0;
  if ( !this[5] && *((_DWORD *)this + 7) )
  {
    v4 = HeapAlloc(this[6], 8u, 0x30uLL);
    this[5] = v4;
    if ( !v4 )
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v5, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 9LL, -2147024882, 0xD8u);
      return v3;
    }
    *v4 = 48;
    *((_DWORD *)this[5] + 4) = 0;
    *((_QWORD *)this[5] + 3) = *((unsigned int *)this + 7);
    *((_QWORD *)this[5] + 1) = this[4];
  }
  v6 = (struct _PORT_VIEW *)this[5];
  if ( !v6 || !v6->SectionHandle )
    v6 = 0LL;
  v7 = NtConnectPort(this + 2, &DestinationString, &SecurityQos, v6, 0LL, 0LL, 0LL, &ConnectionInformationLength);
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
