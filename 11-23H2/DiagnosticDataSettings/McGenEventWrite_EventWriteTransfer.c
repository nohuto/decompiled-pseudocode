/*
 * XREFs of McGenEventWrite_EventWriteTransfer @ 0x1800037B0
 * Callers:
 *     McTemplateU0zzzzztzzzzdz_EventWriteTransfer @ 0x180003814 (McTemplateU0zzzzztzzzzdz_EventWriteTransfer.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall McGenEventWrite_EventWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        __int64 a4,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  unsigned __int16 *v5; // r8
  ULONG v6; // eax
  ULONG v7; // r8d

  v5 = (unsigned __int16 *)qword_180009048;
  v6 = 0;
  if ( qword_180009048 )
  {
    UserData->Ptr = qword_180009048;
    v6 = 2;
    v7 = *v5;
  }
  else
  {
    UserData->Ptr = 0LL;
    v7 = 0;
  }
  UserData->Size = v7;
  UserData->Reserved = v6;
  return EventWriteTransfer(
           MICROSOFT_WINDOWS_PRIVACY_AUDITING_DIAGNOSTICDATA_PROVIDER_Context,
           a2,
           0LL,
           0LL,
           0xDu,
           UserData);
}
