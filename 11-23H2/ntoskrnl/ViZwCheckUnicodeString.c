/*
 * XREFs of ViZwCheckUnicodeString @ 0x140AD4FB4
 * Callers:
 *     VfZwAccessCheckAndAuditAlarm_Entry @ 0x140AD3F30 (VfZwAccessCheckAndAuditAlarm_Entry.c)
 *     VfZwAlpcConnectPort_Entry @ 0x140AD40E0 (VfZwAlpcConnectPort_Entry.c)
 *     VfZwCloseObjectAuditAlarm_Entry @ 0x140AD42E0 (VfZwCloseObjectAuditAlarm_Entry.c)
 *     VfZwConnectPort_Entry @ 0x140AD4310 (VfZwConnectPort_Entry.c)
 *     VfZwCreateKey_Entry @ 0x140AD44B0 (VfZwCreateKey_Entry.c)
 *     VfZwCreateSymbolicLinkObject_Entry @ 0x140AD4550 (VfZwCreateSymbolicLinkObject_Entry.c)
 *     VfZwCreateTransactionManager_Entry @ 0x140AD45A0 (VfZwCreateTransactionManager_Entry.c)
 *     VfZwCreateTransaction_Entry @ 0x140AD45F0 (VfZwCreateTransaction_Entry.c)
 *     VfZwDeleteValueKey_Entry @ 0x140AD46B0 (VfZwDeleteValueKey_Entry.c)
 *     VfZwOpenTransactionManager_Entry @ 0x140AD4A40 (VfZwOpenTransactionManager_Entry.c)
 *     VfZwQueryDirectoryFileEx_Entry @ 0x140AD4B30 (VfZwQueryDirectoryFileEx_Entry.c)
 *     VfZwQueryDirectoryFile_Entry @ 0x140AD4BA0 (VfZwQueryDirectoryFile_Entry.c)
 *     VfZwQueryLicenseValue_Entry @ 0x140AD4CA0 (VfZwQueryLicenseValue_Entry.c)
 *     VfZwQuerySymbolicLinkObject_Entry @ 0x140AD4CF0 (VfZwQuerySymbolicLinkObject_Entry.c)
 *     VfZwQueryValueKey_Entry @ 0x140AD4D30 (VfZwQueryValueKey_Entry.c)
 *     VfZwSetValueKey_Entry @ 0x140AD4ED0 (VfZwSetValueKey_Entry.c)
 *     ViZwCheckObjectAttributes @ 0x140AD4F64 (ViZwCheckObjectAttributes.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140ACD2B4 (VerifierBugCheckIfAppropriate.c)
 *     ViZwCheckVirtualAddress @ 0x140AD503C (ViZwCheckVirtualAddress.c)
 */

void __fastcall ViZwCheckUnicodeString(unsigned __int16 *BugCheckParameter3, ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v4; // rbx
  __int64 v5; // rcx
  unsigned __int16 v6; // ax

  if ( BugCheckParameter3 )
  {
    ViZwCheckVirtualAddress((ULONG_PTR)BugCheckParameter3, BugCheckParameter2);
    v4 = *((_QWORD *)BugCheckParameter3 + 1);
    ViZwCheckVirtualAddress(v4, BugCheckParameter2);
    v5 = *BugCheckParameter3;
    if ( v4 + v5 < v4
      || (v6 = BugCheckParameter3[1], v6 < (unsigned __int16)v5)
      || (((unsigned __int16)v5 | v6) & 1) != 0 )
    {
      VerifierBugCheckIfAppropriate(0xC4u, 0xE4uLL, BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, 0LL);
    }
  }
}
