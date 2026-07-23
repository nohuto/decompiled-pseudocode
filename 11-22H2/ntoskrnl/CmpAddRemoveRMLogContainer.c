/*
 * XREFs of CmpAddRemoveRMLogContainer @ 0x140A1E900
 * Callers:
 *     CmpTransWriteLog @ 0x140708120 (CmpTransWriteLog.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140212E84 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6B24 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     CmpQueryNameString @ 0x140684F94 (CmpQueryNameString.c)
 *     RtlStringFromGUIDEx @ 0x1406852B0 (RtlStringFromGUIDEx.c)
 *     RtlFreeUnicodeString @ 0x14076F8E0 (RtlFreeUnicodeString.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140873814 (CmpAddRemoveContainerToCLFSLog.c)
 */

__int64 __fastcall CmpAddRemoveRMLogContainer(__int64 a1)
{
  ULONG_PTR v2; // rax
  UNICODE_STRING *p_UnicodeString; // r15
  NTSTATUS v4; // ebx
  unsigned int v5; // esi
  int v6; // eax
  UNICODE_STRING GuidString; // [rsp+40h] [rbp-19h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+60h] [rbp+7h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&GuidString.Length = 0LL;
  GuidString.Buffer = 0LL;
  if ( (PVOID)a1 == CmRmSystem )
  {
    v2 = qword_140C028D0;
    p_UnicodeString = (UNICODE_STRING *)&CmpLogPath;
  }
  else
  {
    v4 = CmpQueryNameString(*(void **)(*(_QWORD *)(a1 + 80) + 1544LL), &UnicodeString);
    if ( v4 < 0 )
      goto LABEL_16;
    v2 = *(_QWORD *)(a1 + 80);
    p_UnicodeString = &UnicodeString;
  }
  v4 = RtlStringFromGUIDEx((PGUID)(*(_QWORD *)(v2 + 64) + 112LL), &GuidString, 1u);
  if ( v4 >= 0 )
  {
    v5 = *(_DWORD *)(a1 + 68);
    if ( v5 >= 0x100 )
    {
LABEL_10:
      if ( (unsigned int)dword_140C04390 > 5 && tlgKeywordOn((__int64)&dword_140C04390, 1LL) )
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C04390,
          (unsigned __int8 *)&dword_140037AD4,
          0LL,
          0LL,
          2u,
          &v10);
      v4 = -1073741670;
    }
    else
    {
      while ( 1 )
      {
        v6 = CmpAddRemoveContainerToCLFSLog(
               *(PLOG_FILE_OBJECT *)(a1 + 88),
               p_UnicodeString,
               &GuidString,
               &CmpLogExt,
               &CmpContainerSuffix,
               v5,
               (PULONGLONG)(a1 + 72));
        v4 = v6;
        if ( v6 != -1073741771 && v6 != -1073741635 )
          break;
        if ( ++v5 >= 0x100 )
          goto LABEL_10;
      }
      if ( v6 >= 0 )
        ++*(_DWORD *)(a1 + 68);
    }
  }
  if ( GuidString.Buffer )
    RtlFreeUnicodeString(&GuidString);
LABEL_16:
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)v4;
}
