/*
 * XREFs of PopBcdClearPendingResume @ 0x1408041B8
 * Callers:
 *     PoInitHiberServices @ 0x14080406C (PoInitHiberServices.c)
 *     PopFreeHiberContext @ 0x1409886A0 (PopFreeHiberContext.c)
 * Callees:
 *     BiDeleteElement @ 0x140805C00 (BiDeleteElement.c)
 *     BcdCloseObject @ 0x140807480 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x1408074C4 (BcdOpenObject.c)
 *     BcdFlushStore @ 0x140A5C298 (BcdFlushStore.c)
 */

NTSTATUS __fastcall PopBcdClearPendingResume(HANDLE BcdStoreHandle)
{
  NTSTATUS result; // eax
  int v3; // ebx
  HANDLE BcdObjectHandle; // [rsp+38h] [rbp+10h] BYREF

  BcdObjectHandle = 0LL;
  result = BcdOpenObject(BcdStoreHandle, &GUID_WINDOWS_BOOTMGR, &BcdObjectHandle);
  if ( result >= 0 )
  {
    v3 = BiDeleteElement(BcdObjectHandle, 637534213LL);
    if ( v3 >= 0 )
    {
      v3 = BiDeleteElement(BcdObjectHandle, 637534245LL);
      if ( v3 >= 0 )
        BcdFlushStore(BcdStoreHandle);
    }
    BcdCloseObject(BcdObjectHandle);
    return v3;
  }
  return result;
}
