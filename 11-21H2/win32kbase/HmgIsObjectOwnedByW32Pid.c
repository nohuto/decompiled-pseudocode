/*
 * XREFs of HmgIsObjectOwnedByW32Pid @ 0x1C0093110
 * Callers:
 *     HmgCheckDCForPrivateReferences @ 0x1C016BF28 (HmgCheckDCForPrivateReferences.c)
 * Callees:
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0021CD0 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?bOwnedBy@ENTRYOBJ@@QEBAHK@Z @ 0x1C0093168 (-bOwnedBy@ENTRYOBJ@@QEBAHK@Z.c)
 */

__int64 __fastcall HmgIsObjectOwnedByW32Pid(struct OBJECT *a1, unsigned int a2)
{
  unsigned int v2; // ebx
  ENTRYOBJ *EntryFromObject; // rax

  v2 = 0;
  if ( a1 )
  {
    if ( *(_QWORD *)a1 )
    {
      EntryFromObject = GdiHandleManager::GetEntryFromObject((GdiHandleEntryDirectory **)gpHandleManager, a1);
      if ( EntryFromObject )
        return (unsigned int)ENTRYOBJ::bOwnedBy(EntryFromObject, a2) != 0;
    }
  }
  return v2;
}
