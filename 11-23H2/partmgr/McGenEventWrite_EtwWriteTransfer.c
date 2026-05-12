/*
 * XREFs of McGenEventWrite_EtwWriteTransfer @ 0x1C0008518
 * Callers:
 *     McTemplateK0qqqtqqqqxqzzzzzzdddddddddxqjjjjtuqqqqqbr37qqqqtttqqqtttxxqqqqqtxqqqzqtqqqbr69qbr71qbr73qbr75qbr77qbr79_EtwWriteTransfer @ 0x1C0007BB4 (McTemplateK0qqqtqqqqxqzzzzzzdddddddddxqjjjjtuqqqqqbr37qqqqtttqqqtttxxqqqqqtxqqqzqtqqqbr69qbr71qb.c)
 *     McTemplateK0pxxu_EtwWriteTransfer @ 0x1C000CA94 (McTemplateK0pxxu_EtwWriteTransfer.c)
 *     McTemplateK0pxxxquu_EtwWriteTransfer @ 0x1C000CB2E (McTemplateK0pxxxquu_EtwWriteTransfer.c)
 *     McTemplateK0qq_EtwWriteTransfer @ 0x1C000EFC4 (McTemplateK0qq_EtwWriteTransfer.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1C000F038 (McTemplateK0qqq_EtwWriteTransfer.c)
 *     McTemplateK0xxx_EtwWriteTransfer @ 0x1C000FBA4 (McTemplateK0xxx_EtwWriteTransfer.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall McGenEventWrite_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        ULONG a4,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  unsigned __int16 *v5; // r10
  int v6; // eax
  ULONG v8; // r9d

  v5 = (unsigned __int16 *)qword_1C0017008;
  v6 = 0;
  if ( qword_1C0017008 )
  {
    UserData->Ptr = qword_1C0017008;
    v6 = 2;
    v8 = *v5;
  }
  else
  {
    UserData->Ptr = 0LL;
    v8 = 0;
  }
  UserData->Size = v8;
  UserData->Reserved = v6;
  return EtwWriteTransfer(Microsoft_Windows_Partition_Context, a2, a3, 0LL, a4, UserData);
}
