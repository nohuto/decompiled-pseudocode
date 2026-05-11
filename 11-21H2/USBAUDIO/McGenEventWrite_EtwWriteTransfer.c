/*
 * XREFs of McGenEventWrite_EtwWriteTransfer @ 0x1C00016C0
 * Callers:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C0001724 (McTemplateK0_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0001768 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0zq_EtwWriteTransfer @ 0x1C00017CC (McTemplateK0zq_EtwWriteTransfer.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall McGenEventWrite_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  unsigned __int16 *v5; // r8
  int v6; // eax
  ULONG v7; // r8d

  v5 = (unsigned __int16 *)qword_1C0020318;
  v6 = 0;
  if ( qword_1C0020318 )
  {
    UserData->Ptr = qword_1C0020318;
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
  return EtwWriteTransfer(EXBUSAUD_PROVIDER_Context, a2, 0LL, 0LL, UserDataCount, UserData);
}
