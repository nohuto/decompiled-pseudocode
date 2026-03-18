/*
 * XREFs of CmpVEExecuteCreateLogic @ 0x1406B656C
 * Callers:
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 * Callees:
 *     KCBNeedsVirtualImage @ 0x14023BD7C (KCBNeedsVirtualImage.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     CmpCheckAdminAccess @ 0x1406B6880 (CmpCheckAdminAccess.c)
 *     CmRealKCBToVirtualPath @ 0x14077CB98 (CmRealKCBToVirtualPath.c)
 *     CmpLockKcbExclusive @ 0x1407C0854 (CmpLockKcbExclusive.c)
 *     CmpDoAccessCheckOnKCB @ 0x140916788 (CmpDoAccessCheckOnKCB.c)
 *     CmpReparseToVirtualPath @ 0x140917400 (CmpReparseToVirtualPath.c)
 *     CmpReplicateKeyToVirtual @ 0x1409174A4 (CmpReplicateKeyToVirtual.c)
 *     CmpExamineSaclForAuditEvent @ 0x140918574 (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1409188E8 (CmpReportAuditVirtualizationEvent.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140AB4300 (CmpUnlockKcb.c)
 *     CmpAttachToRegistryProcess @ 0x140AB4550 (CmpAttachToRegistryProcess.c)
 */

__int64 __fastcall CmpVEExecuteCreateLogic(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        int a6,
        __int64 a7,
        _DWORD *a8,
        UNICODE_STRING *a9)
{
  int v12; // ebx
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // r9
  wchar_t *Buffer; // rcx
  char v19; // [rsp+20h] [rbp-20h]
  __int64 v20; // [rsp+28h] [rbp-18h]
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF

  v20 = 0LL;
  v19 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( *(_WORD *)(a1 + 66) )
    goto LABEL_2;
  if ( (a8[6] & 0x10) != 0 )
    goto LABEL_2;
  v13 = a4 + 32;
  if ( !KCBNeedsVirtualImage() )
    goto LABEL_2;
  if ( (a8[40] & 1) == 0 )
  {
    CmpAttachToRegistryProcess(a8 + 42);
    a8[40] |= 1u;
  }
  if ( (unsigned __int8)CmpReparseToVirtualPath(a1, v14, v13, &DestinationString) )
  {
    ExFreePoolWithTag(DestinationString.Buffer, 0);
    RtlInitUnicodeString(&DestinationString, 0LL);
    v12 = CmRealKCBToVirtualPath(a1, a3, v13, &DestinationString);
    if ( v12 >= 0 )
    {
      Buffer = a9->Buffer;
      if ( Buffer )
        ExFreePoolWithTag(Buffer, 0);
      *a9 = DestinationString;
      RtlInitUnicodeString(&DestinationString, 0LL);
      *a8 |= 8u;
      v12 = 260;
    }
    goto LABEL_19;
  }
  if ( (*(_DWORD *)(a1 + 184) & 0x20) != 0
    || (LOBYTE(v15) = a5, (unsigned __int8)CmpDoAccessCheckOnKCB(a1, a7, a6 | 4u, v15)) )
  {
LABEL_2:
    v12 = -1073741199;
    goto LABEL_19;
  }
  LOBYTE(v16) = a5;
  if ( !(unsigned __int8)CmpDoAccessCheckOnKCB(a1, a7, 131097LL, v16)
    || (v12 = CmpCheckAdminAccess(a6 | 4u, (PSECURITY_DESCRIPTOR)(*(_QWORD *)(a1 + 88) + 32LL)), v12 >= 0) )
  {
    v12 = -1073741790;
  }
LABEL_19:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  return (unsigned int)v12;
}
