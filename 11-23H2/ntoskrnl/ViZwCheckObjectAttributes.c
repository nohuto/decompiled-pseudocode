/*
 * XREFs of ViZwCheckObjectAttributes @ 0x140AD4F64
 * Callers:
 *     VfZwAlpcAcceptConnectPort_Entry @ 0x140AD4080 (VfZwAlpcAcceptConnectPort_Entry.c)
 *     VfZwAlpcConnectPort_Entry @ 0x140AD40E0 (VfZwAlpcConnectPort_Entry.c)
 *     VfZwAlpcCreatePort_Entry @ 0x140AD4180 (VfZwAlpcCreatePort_Entry.c)
 *     VfZwOpenKey_Entry @ 0x140AD4390 (VfZwOpenKey_Entry.c)
 *     VfZwCreateEnlistment_Entry @ 0x140AD43D0 (VfZwCreateEnlistment_Entry.c)
 *     VfZwCreateTimer_Entry @ 0x140AD4410 (VfZwCreateTimer_Entry.c)
 *     VfZwCreateFile_Entry @ 0x140AD4450 (VfZwCreateFile_Entry.c)
 *     VfZwCreateKey_Entry @ 0x140AD44B0 (VfZwCreateKey_Entry.c)
 *     VfZwCreateSection_Entry @ 0x140AD4500 (VfZwCreateSection_Entry.c)
 *     VfZwCreateSymbolicLinkObject_Entry @ 0x140AD4550 (VfZwCreateSymbolicLinkObject_Entry.c)
 *     VfZwCreateTransactionManager_Entry @ 0x140AD45A0 (VfZwCreateTransactionManager_Entry.c)
 *     VfZwCreateTransaction_Entry @ 0x140AD45F0 (VfZwCreateTransaction_Entry.c)
 *     VfZwDeleteFile_Entry @ 0x140AD4680 (VfZwDeleteFile_Entry.c)
 *     VfZwDuplicateToken_Entry @ 0x140AD4780 (VfZwDuplicateToken_Entry.c)
 *     VfZwLoadKey_Entry @ 0x140AD4850 (VfZwLoadKey_Entry.c)
 *     VfZwOpenEnlistment_Entry @ 0x140AD4960 (VfZwOpenEnlistment_Entry.c)
 *     VfZwOpenFile_Entry @ 0x140AD49A0 (VfZwOpenFile_Entry.c)
 *     VfZwOpenThread_Entry @ 0x140AD49F0 (VfZwOpenThread_Entry.c)
 *     VfZwOpenTransactionManager_Entry @ 0x140AD4A40 (VfZwOpenTransactionManager_Entry.c)
 *     VfZwOpenTransaction_Entry @ 0x140AD4A90 (VfZwOpenTransaction_Entry.c)
 *     VfZwQueryFullAttributesFile_Entry @ 0x140AD4C60 (VfZwQueryFullAttributesFile_Entry.c)
 *     VfZwReplaceKey_Entry @ 0x140AD4E40 (VfZwReplaceKey_Entry.c)
 * Callees:
 *     ViZwCheckUnicodeString @ 0x140AD4FB4 (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x140AD503C (ViZwCheckVirtualAddress.c)
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
