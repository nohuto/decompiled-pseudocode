/*
 * XREFs of CmpVEExecuteCreateLogic @ 0x1407BA724
 * Callers:
 *     CmpDoParseKey @ 0x1406E9130 (CmpDoParseKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     KCBNeedsVirtualImage @ 0x140347C1C (KCBNeedsVirtualImage.c)
 *     CmpLockKcbExclusive @ 0x1406D8498 (CmpLockKcbExclusive.c)
 *     CmRealKCBToVirtualPath @ 0x140A188B8 (CmRealKCBToVirtualPath.c)
 *     CmpCheckAdminAccess @ 0x140A190A0 (CmpCheckAdminAccess.c)
 *     CmpDoAccessCheckOnKCB @ 0x140A191DC (CmpDoAccessCheckOnKCB.c)
 *     CmpReparseToVirtualPath @ 0x140A1A1B4 (CmpReparseToVirtualPath.c)
 *     CmpReplicateKeyToVirtual @ 0x140A1A258 (CmpReplicateKeyToVirtual.c)
 *     CmpExamineSaclForAuditEvent @ 0x140A1BB18 (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140A1BCD4 (CmpReportAuditVirtualizationEvent.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     CmpAttachToRegistryProcess @ 0x140AF5250 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockKcb @ 0x140AF55A0 (CmpUnlockKcb.c)
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
  __int64 v12; // r14
  __int64 v13; // rdx
  int v14; // ebx
  __int64 v16; // r9
  __int64 v17; // r9
  wchar_t *Buffer; // rcx
  char v19; // [rsp+20h] [rbp-20h]
  __int64 v20; // [rsp+28h] [rbp-18h]
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF

  v20 = 0LL;
  v19 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( *(_WORD *)(a1 + 66) )
    goto LABEL_4;
  if ( (a8[6] & 0x10) != 0 )
    goto LABEL_4;
  v12 = a4 + 32;
  if ( !KCBNeedsVirtualImage() )
    goto LABEL_4;
  if ( (a8[40] & 1) == 0 )
  {
    CmpAttachToRegistryProcess(a8 + 42);
    a8[40] |= 1u;
  }
  if ( (unsigned __int8)CmpReparseToVirtualPath(a1, v13, v12, &DestinationString) )
  {
    ExFreePoolWithTag(DestinationString.Buffer, 0);
    RtlInitUnicodeString(&DestinationString, 0LL);
    v14 = CmRealKCBToVirtualPath(a1, a3, v12, &DestinationString);
    if ( v14 >= 0 )
    {
      Buffer = a9->Buffer;
      if ( Buffer )
        ExFreePoolWithTag(Buffer, 0);
      *a9 = DestinationString;
      RtlInitUnicodeString(&DestinationString, 0LL);
      *a8 |= 8u;
      v14 = 260;
    }
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 184) & 0x20) != 0
      || (LOBYTE(v16) = a5, (unsigned __int8)CmpDoAccessCheckOnKCB(a1, a7, a6 | 4u, v16)) )
    {
LABEL_4:
      v14 = -1073741199;
      goto LABEL_5;
    }
    LOBYTE(v17) = a5;
    if ( !(unsigned __int8)CmpDoAccessCheckOnKCB(a1, a7, 131097LL, v17)
      || (v14 = CmpCheckAdminAccess(a6 | 4u, (PSECURITY_DESCRIPTOR)(*(_QWORD *)(a1 + 88) + 32LL)), v14 >= 0) )
    {
      v14 = -1073741790;
    }
  }
LABEL_5:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  return (unsigned int)v14;
}
