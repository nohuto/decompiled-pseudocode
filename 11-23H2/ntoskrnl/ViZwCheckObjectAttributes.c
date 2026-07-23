/*
 * XREFs of ViZwCheckObjectAttributes @ 0x140AD4F54
 * Callers:
 *     VfZwAlpcAcceptConnectPort_Entry @ 0x140AD4070 (VfZwAlpcAcceptConnectPort_Entry.c)
 *     VfZwAlpcConnectPort_Entry @ 0x140AD40D0 (VfZwAlpcConnectPort_Entry.c)
 *     VfZwAlpcCreatePort_Entry @ 0x140AD4170 (VfZwAlpcCreatePort_Entry.c)
 *     VfZwOpenKey_Entry @ 0x140AD4380 (VfZwOpenKey_Entry.c)
 *     VfZwCreateEnlistment_Entry @ 0x140AD43C0 (VfZwCreateEnlistment_Entry.c)
 *     VfZwCreateTimer_Entry @ 0x140AD4400 (VfZwCreateTimer_Entry.c)
 *     VfZwCreateFile_Entry @ 0x140AD4440 (VfZwCreateFile_Entry.c)
 *     VfZwCreateKey_Entry @ 0x140AD44A0 (VfZwCreateKey_Entry.c)
 *     VfZwCreateSection_Entry @ 0x140AD44F0 (VfZwCreateSection_Entry.c)
 *     VfZwCreateSymbolicLinkObject_Entry @ 0x140AD4540 (VfZwCreateSymbolicLinkObject_Entry.c)
 *     VfZwCreateTransactionManager_Entry @ 0x140AD4590 (VfZwCreateTransactionManager_Entry.c)
 *     VfZwCreateTransaction_Entry @ 0x140AD45E0 (VfZwCreateTransaction_Entry.c)
 *     VfZwDeleteFile_Entry @ 0x140AD4670 (VfZwDeleteFile_Entry.c)
 *     VfZwDuplicateToken_Entry @ 0x140AD4770 (VfZwDuplicateToken_Entry.c)
 *     VfZwLoadKey_Entry @ 0x140AD4840 (VfZwLoadKey_Entry.c)
 *     VfZwOpenEnlistment_Entry @ 0x140AD4950 (VfZwOpenEnlistment_Entry.c)
 *     VfZwOpenFile_Entry @ 0x140AD4990 (VfZwOpenFile_Entry.c)
 *     VfZwOpenThread_Entry @ 0x140AD49E0 (VfZwOpenThread_Entry.c)
 *     VfZwOpenTransactionManager_Entry @ 0x140AD4A30 (VfZwOpenTransactionManager_Entry.c)
 *     VfZwOpenTransaction_Entry @ 0x140AD4A80 (VfZwOpenTransaction_Entry.c)
 *     VfZwQueryFullAttributesFile_Entry @ 0x140AD4C50 (VfZwQueryFullAttributesFile_Entry.c)
 *     VfZwReplaceKey_Entry @ 0x140AD4E30 (VfZwReplaceKey_Entry.c)
 * Callees:
 *     ViZwCheckUnicodeString @ 0x140AD4FA4 (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x140AD502C (ViZwCheckVirtualAddress.c)
 */

__int64 __fastcall ViZwCheckObjectAttributes(ULONG_PTR *a1, ULONG_PTR a2)
{
  __int64 result; // rax

  if ( a1 )
  {
    ViZwCheckVirtualAddress((ULONG_PTR)a1, a2);
    ViZwCheckUnicodeString(a1[2], a2);
    ViZwCheckVirtualAddress(a1[4], a2);
    return ViZwCheckVirtualAddress(a1[5], a2);
  }
  return result;
}
