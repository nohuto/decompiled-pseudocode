/*
 * XREFs of McGenEventWrite_EventWriteTransfer @ 0x18016435C
 * Callers:
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x1801643C4 (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall McGenEventWrite_EventWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  unsigned __int16 *v5; // rdx
  ULONG v6; // eax
  ULONG v7; // edx

  v5 = (unsigned __int16 *)qword_1801C0218;
  v6 = 0;
  if ( qword_1801C0218 )
  {
    UserData->Ptr = qword_1801C0218;
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
  return EventWriteTransfer(AUDIO_EVENT_PROVIDER_Context, &AudioCore_AEMemory, 0LL, 0LL, 0xAu, UserData);
}
