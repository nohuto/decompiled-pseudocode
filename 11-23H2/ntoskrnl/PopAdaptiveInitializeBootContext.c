/*
 * XREFs of PopAdaptiveInitializeBootContext @ 0x140B35F44
 * Callers:
 *     PopInitializeAdpm @ 0x140B35EB4 (PopInitializeAdpm.c)
 * Callees:
 *     ZwUpdateWnfStateData @ 0x14041ECB0 (ZwUpdateWnfStateData.c)
 *     PopBcdOpen @ 0x1408020EC (PopBcdOpen.c)
 *     BcdGetElementData @ 0x14080210C (BcdGetElementData.c)
 *     PopBcdClose @ 0x14080212C (PopBcdClose.c)
 *     BcdCloseObject @ 0x1408051D0 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x140805214 (BcdOpenObject.c)
 *     PopDiagTraceAdaptiveBootOverride @ 0x140B96394 (PopDiagTraceAdaptiveBootOverride.c)
 */

NTSTATUS PopAdaptiveInitializeBootContext()
{
  __int64 v0; // rdx
  int v1; // eax
  ULONG BufferSize; // [rsp+50h] [rbp+8h] BYREF
  int Buffer; // [rsp+58h] [rbp+10h] BYREF
  HANDLE BcdObjectHandle; // [rsp+60h] [rbp+18h] BYREF
  HANDLE BcdStoreHandle; // [rsp+68h] [rbp+20h] BYREF

  BcdStoreHandle = (HANDLE)-1LL;
  BcdObjectHandle = (HANDLE)-1LL;
  if ( PopBcdOpen(&BcdStoreHandle) >= 0 )
  {
    if ( BcdOpenObject(BcdStoreHandle, &GUID_CURRENT_BOOT_ENTRY, &BcdObjectHandle) >= 0 )
    {
      BufferSize = 8;
      if ( BcdGetElementData(BcdObjectHandle, 0x2500015Au, &qword_140D53290, &BufferSize) >= 0 )
      {
        LOBYTE(v0) = (qword_140D53290 & 8) != 0;
        PopDiagTraceAdaptiveBootOverride(qword_140D53290 & 7, v0);
        byte_140D53289 = 1;
        if ( (qword_140D53290 & 7) != 0 )
          PopAdaptiveBootContext = 1;
      }
    }
    if ( BcdObjectHandle != (HANDLE)-1LL )
      BcdCloseObject(BcdObjectHandle);
  }
  if ( BcdStoreHandle != (HANDLE)-1LL )
    PopBcdClose(BcdStoreHandle);
  v1 = 0;
  if ( PopAdaptiveBootContext )
    v1 = 2;
  Buffer = v1;
  return ZwUpdateWnfStateData(&WNF_PO_INITIAL_GLOBAL_USER_PRESENCE, &Buffer, 4u, 0LL, 0LL, 0, 0);
}
