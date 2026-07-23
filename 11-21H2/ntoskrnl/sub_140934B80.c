/*
 * XREFs of sub_140934B80 @ 0x140934B80
 * Callers:
 *     sub_140933BE0 @ 0x140933BE0 (sub_140933BE0.c)
 * Callees:
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1407103B0 @ 0x1407103B0 (sub_1407103B0.c)
 *     ExRaiseHardError @ 0x140A02230 (ExRaiseHardError.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_140934B80(PIRP Irp, __int64 a2, char *a3)
{
  char v6; // r15
  __int64 Pool2; // rax
  UNICODE_STRING *v8; // r14
  NTSTATUS v9; // esi
  __int64 v10; // r9
  ULONG_PTR v11; // rcx
  NTSTATUS Status; // r10d
  unsigned int v13; // r11d
  UNICODE_STRING *v14; // rax
  int v15; // edi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v17; // [rsp+30h] [rbp-49h] BYREF
  unsigned int v18; // [rsp+34h] [rbp-45h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-41h] BYREF
  _OWORD v20[3]; // [rsp+48h] [rbp-31h] BYREF
  UNICODE_STRING *p_DestinationString; // [rsp+78h] [rbp-1h]
  UNICODE_STRING *v22; // [rsp+80h] [rbp+7h]
  __int64 v23; // [rsp+88h] [rbp+Fh]

  v17 = 0;
  v18 = 0;
  v6 = 0;
  memset(v20, 0, sizeof(v20));
  DestinationString = 0LL;
  sub_1407103B0(a3, 0LL, 0, &v18);
  Pool2 = ExAllocatePool2(256LL, v18, 538996553LL);
  v8 = (UNICODE_STRING *)Pool2;
  if ( !Pool2 )
  {
    v9 = -1073741670;
LABEL_35:
    Irp->IoStatus.Status = v9;
LABEL_36:
    Irp->IoStatus.Information = 0LL;
    goto LABEL_37;
  }
  v9 = sub_1407103B0(a3, Pool2, v18, &v17);
  if ( v9 < 0 )
  {
    ExFreePoolWithTag(v8, 0);
    goto LABEL_35;
  }
  if ( a2 && (*(_BYTE *)(a2 + 4) & 1) != 0 )
  {
    DestinationString.MaximumLength = 64;
    DestinationString.Buffer = (wchar_t *)(a2 + 32);
    DestinationString.Length = *(_WORD *)(a2 + 6);
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
  }
  v11 = *((_QWORD *)Irp->Tail.Overlay.Thread + 68);
  if ( v11 != *((_QWORD *)KeGetCurrentThread() + 23) )
  {
    sub_14030D5C0(v11, 0LL, (__int64)v20, v10);
    v6 = 1;
  }
  Status = Irp->IoStatus.Status;
  if ( Status != -1073741806 )
  {
    if ( Status <= -1073741806 )
    {
LABEL_17:
      v13 = 0;
      goto LABEL_19;
    }
    if ( Status <= -1073741804 )
    {
LABEL_16:
      p_DestinationString = v8;
      v13 = 2;
      v14 = *(UNICODE_STRING **)(*((_QWORD *)KeGetCurrentThread() + 23) + 1088LL);
      v23 = 0LL;
      v22 = v14;
      goto LABEL_19;
    }
    if ( Status != -1073741662 )
    {
      if ( Status == -1073741661 || Status == -1073741643 )
        goto LABEL_16;
      goto LABEL_17;
    }
  }
  v22 = v8;
  p_DestinationString = &DestinationString;
  v13 = 3;
  v23 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1088LL);
LABEL_19:
  if ( byte_140C5B134 )
  {
    v15 = ExRaiseHardError((unsigned int)Status, v13);
  }
  else
  {
    v17 = 0;
    v15 = -1073741823;
  }
  if ( v6 )
    sub_1402D0930((__int64)v20, 0LL);
  ExFreePoolWithTag(v8, 0);
  if ( v15 >= 0 && v17 == 9 )
  {
    sub_14042A5E0(Irp->Tail.Overlay.CurrentStackLocation->DeviceObject, Irp);
    return;
  }
  if ( v17 == 3 )
  {
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    if ( CurrentStackLocation->MajorFunction == 13 && CurrentStackLocation->MinorFunction == 1 )
      Irp->IoStatus.Information = 1LL;
    else
      Irp->IoStatus.Status = -1073741248;
  }
  if ( (Irp->Flags & 0x40) != 0 )
    goto LABEL_36;
LABEL_37:
  IofCompleteRequest(Irp, 1);
}
