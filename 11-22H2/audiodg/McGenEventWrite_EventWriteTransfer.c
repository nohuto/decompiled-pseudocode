/*
 * XREFs of McGenEventWrite_EventWriteTransfer @ 0x1400397BA
 * Callers:
 *     McTemplateU0pq_EventWriteTransfer @ 0x140039D32 (McTemplateU0pq_EventWriteTransfer.c)
 *     McTemplateU0pqp_EventWriteTransfer @ 0x140039F02 (McTemplateU0pqp_EventWriteTransfer.c)
 *     McTemplateU0pqqxxxx_EventWriteTransfer @ 0x140039F88 (McTemplateU0pqqxxxx_EventWriteTransfer.c)
 *     McTemplateU0pqxxx_EventWriteTransfer @ 0x14003A342 (McTemplateU0pqxxx_EventWriteTransfer.c)
 *     McTemplateU0pqqqx_EventWriteTransfer @ 0x14003AFA4 (McTemplateU0pqqqx_EventWriteTransfer.c)
 *     McTemplateU0pqxxxxx_EventWriteTransfer @ 0x14003B050 (McTemplateU0pqxxxxx_EventWriteTransfer.c)
 *     McTemplateU0pqpqqqqqq_EventWriteTransfer @ 0x14007B1B4 (McTemplateU0pqpqqqqqq_EventWriteTransfer.c)
 *     McTemplateU0p_EventWriteTransfer @ 0x14009638C (McTemplateU0p_EventWriteTransfer.c)
 *     McTemplateU0pqx_EventWriteTransfer @ 0x1400963F0 (McTemplateU0pqx_EventWriteTransfer.c)
 *     McTemplateU0pqxxxx_EventWriteTransfer @ 0x14009647C (McTemplateU0pqxxxx_EventWriteTransfer.c)
 *     McTemplateU0pqxxxxffff_EventWriteTransfer @ 0x140096538 (McTemplateU0pqxxxxffff_EventWriteTransfer.c)
 *     McTemplateU0pqqqq_EventWriteTransfer @ 0x1400985B0 (McTemplateU0pqqqq_EventWriteTransfer.c)
 *     McTemplateU0pxxq_EventWriteTransfer @ 0x140098658 (McTemplateU0pxxq_EventWriteTransfer.c)
 *     McTemplateU0pqqq_EventWriteTransfer @ 0x1400989A0 (McTemplateU0pqqq_EventWriteTransfer.c)
 *     McTemplateU0pqqx_EventWriteTransfer @ 0x140098A3C (McTemplateU0pqqx_EventWriteTransfer.c)
 *     McTemplateU0pxqxq_EventWriteTransfer @ 0x140098AD8 (McTemplateU0pxqxq_EventWriteTransfer.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall McGenEventWrite_EventWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  unsigned __int16 *v5; // r8
  int v6; // eax
  ULONG v7; // r8d

  v5 = (unsigned __int16 *)qword_1400CE048;
  v6 = 0;
  if ( qword_1400CE048 )
  {
    UserData->Ptr = qword_1400CE048;
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
  return EventWriteTransfer(AUDIO_EVENT_PROVIDER_Context, a2, 0LL, 0LL, UserDataCount, UserData);
}
