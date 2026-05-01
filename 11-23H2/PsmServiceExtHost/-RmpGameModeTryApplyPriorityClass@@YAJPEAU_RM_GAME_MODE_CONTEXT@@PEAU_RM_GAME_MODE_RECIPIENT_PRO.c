/*
 * XREFs of ?RmpGameModeTryApplyPriorityClass@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180089CD0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$00@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$00@@4@Z @ 0x180087B54 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$00@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

__int64 __fastcall RmpGameModeTryApplyPriorityClass(
        struct _RM_GAME_MODE_CONTEXT *a1,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS *a2)
{
  char v2; // si
  NTSTATUS v4; // ebx
  void *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v10; // [rsp+40h] [rbp-10h] BYREF
  NTSTATUS v11[3]; // [rsp+44h] [rbp-Ch] BYREF
  char v12; // [rsp+78h] [rbp+28h] BYREF
  char v13; // [rsp+80h] [rbp+30h] BYREF
  __int16 ProcessInformation; // [rsp+88h] [rbp+38h] BYREF

  v2 = *((_BYTE *)a2 + 148);
  if ( v2 )
  {
    v4 = NtQueryInformationProcess(*((HANDLE *)a2 + 5), ProcessPriorityClass, &ProcessInformation, 2u, 0LL);
    if ( v4 >= 0 )
    {
      v5 = (void *)*((_QWORD *)a2 + 5);
      *((_WORD *)a2 + 84) = ProcessInformation;
      HIBYTE(ProcessInformation) = v2;
      v4 = NtSetInformationProcess(v5, ProcessPriorityClass, &ProcessInformation, 2u);
    }
  }
  else
  {
    v4 = 255;
  }
  if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
  {
    v12 = HIBYTE(ProcessInformation);
    v13 = ProcessInformation;
    v10 = *((_DWORD *)a2 + 27);
    v11[0] = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
      v6,
      byte_1800C4B79,
      v7,
      v8,
      (__int64)v11,
      (__int64)&v10,
      (__int64)&v13,
      (__int64)&v12);
  }
  return (unsigned int)v4;
}
