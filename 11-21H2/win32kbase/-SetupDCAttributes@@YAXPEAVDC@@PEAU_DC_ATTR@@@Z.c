/*
 * XREFs of ?SetupDCAttributes@@YAXPEAVDC@@PEAU_DC_ATTR@@@Z @ 0x1C0026498
 * Callers:
 *     GreSetDCOwnerEx @ 0x1C002C0D0 (GreSetDCOwnerEx.c)
 *     GreCreateDisplayDC @ 0x1C002F6A0 (GreCreateDisplayDC.c)
 * Callees:
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0021CD0 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     ?RestoreAttributes@DC@@QEAAXPEAU_DC_ATTR@@@Z @ 0x1C00231C0 (-RestoreAttributes@DC@@QEAAXPEAU_DC_ATTR@@@Z.c)
 */

void __fastcall SetupDCAttributes(struct DC *a1, struct _DC_ATTR *a2)
{
  struct _ENTRY *EntryFromObject; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v11; // rdi
  __int64 ProcessWow64Process; // rax
  unsigned int v13; // edx

  EntryFromObject = GdiHandleManager::GetEntryFromObject((GdiHandleEntryDirectory **)gpHandleManager, a1);
  DC::RestoreAttributes(a1, a2);
  v9 = 0LL;
  if ( a2 )
  {
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v6, v5, v7, v8);
    v11 = CurrentProcessWin32Process;
    if ( !CurrentProcessWin32Process )
      KeBugCheckEx(0x164u, 0x29uLL, 0LL, 0LL, 0LL);
    ProcessWow64Process = PsGetProcessWow64Process(*CurrentProcessWin32Process);
    v13 = *((_DWORD *)v11 + 73);
    if ( ProcessWow64Process )
      v9 = (unsigned int)__ROR4__((unsigned int)a2 ^ v13, v13 & 0x1F);
    else
      v9 = __ROR8__((unsigned __int64)a2 ^ v13, v13 & 0x3F);
  }
  *((_QWORD *)EntryFromObject + 2) = v9;
}
