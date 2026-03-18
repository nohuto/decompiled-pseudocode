/*
 * XREFs of PopBcdClearPendingResume @ 0x140801C34
 * Callers:
 *     PoInitHiberServices @ 0x140801AE8 (PoInitHiberServices.c)
 *     PopFreeHiberContext @ 0x1409885F0 (PopFreeHiberContext.c)
 * Callees:
 *     BiDeleteElement @ 0x14080367C (BiDeleteElement.c)
 *     BcdCloseObject @ 0x140804F00 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x140804F44 (BcdOpenObject.c)
 *     BcdFlushStore @ 0x140A5C228 (BcdFlushStore.c)
 */

__int64 __fastcall PopBcdClearPendingResume(__int64 a1)
{
  __int64 result; // rax
  int v3; // ebx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  result = BcdOpenObject(a1, &GUID_WINDOWS_BOOTMGR, &v4);
  if ( (int)result >= 0 )
  {
    v3 = BiDeleteElement(v4, 637534213LL);
    if ( v3 >= 0 )
    {
      v3 = BiDeleteElement(v4, 637534245LL);
      if ( v3 >= 0 )
        BcdFlushStore(a1);
    }
    BcdCloseObject(v4);
    return (unsigned int)v3;
  }
  return result;
}
