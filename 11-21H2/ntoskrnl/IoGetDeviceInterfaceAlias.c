/*
 * XREFs of IoGetDeviceInterfaceAlias @ 0x1406DB590
 * Callers:
 *     sub_1406DB388 @ 0x1406DB388 (sub_1406DB388.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_1406DBA7C @ 0x1406DBA7C (sub_1406DBA7C.c)
 *     sub_1406DBB10 @ 0x1406DBB10 (sub_1406DBB10.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     sub_140773030 @ 0x140773030 (sub_140773030.c)
 *     sub_140779CA0 @ 0x140779CA0 (sub_140779CA0.c)
 *     sub_14077BAB8 @ 0x14077BAB8 (sub_14077BAB8.c)
 *     sub_14077D454 @ 0x14077D454 (sub_14077D454.c)
 *     sub_14077DA5C @ 0x14077DA5C (sub_14077DA5C.c)
 *     sub_14077F150 @ 0x14077F150 (sub_14077F150.c)
 *     sub_140784B14 @ 0x140784B14 (sub_140784B14.c)
 *     sub_140789718 @ 0x140789718 (sub_140789718.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall IoGetDeviceInterfaceAlias(
        PUNICODE_STRING SymbolicLinkName,
        const GUID *AliasInterfaceClassGuid,
        PUNICODE_STRING AliasSymbolicLinkName)
{
  void *v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rcx
  int inited; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 Pool2; // rax
  void *v12; // r14
  __int64 v13; // rdi
  int v14; // ecx
  __int64 v15; // rcx
  int v16; // ecx
  WCHAR *v17; // rdi
  char v18; // r12
  int v19; // r9d
  int v21; // ecx
  unsigned int v22; // ebx
  int v23; // ecx
  _WORD v24[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v25; // [rsp+64h] [rbp-9Ch] BYREF
  int v26; // [rsp+68h] [rbp-98h] BYREF
  int v27[2]; // [rsp+70h] [rbp-90h] BYREF
  int v28; // [rsp+78h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-80h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v31[80]; // [rsp+B0h] [rbp-50h] BYREF

  v24[0] = 0;
  Handle = 0LL;
  v26 = 0;
  v6 = 0LL;
  v28 = 0;
  v7 = 0LL;
  *(_QWORD *)v27 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( !SymbolicLinkName || !SymbolicLinkName->Buffer || !SymbolicLinkName->Length )
    goto LABEL_29;
  inited = sub_140779CA0(v27, 0LL, SymbolicLinkName);
  if ( inited < 0 )
  {
LABEL_27:
    v7 = *(_QWORD *)v27;
    goto LABEL_28;
  }
  v7 = *(_QWORD *)v27;
  if ( (int)sub_14077F150(v8, *(_QWORD *)v27) < 0 )
  {
LABEL_29:
    inited = -1073741811;
    goto LABEL_28;
  }
  SeCaptureSubjectContext(&SubjectContext);
  inited = sub_14077D454(qword_140D00AC0, v7, 3, 0, (ULONG)&SubjectContext, (__int64)v24);
  SeReleaseSubjectContext(&SubjectContext);
  if ( inited >= 0 )
  {
    if ( !LOBYTE(v24[0]) )
    {
      inited = -1073741790;
      goto LABEL_28;
    }
    inited = sub_140773030(AliasInterfaceClassGuid, v31);
    if ( inited >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      ExAcquireResourceExclusiveLite(&stru_140C462A0, 1u);
      Pool2 = ExAllocatePool2(256LL, 400LL, 538996816LL);
      v12 = (void *)Pool2;
      if ( Pool2 )
      {
        v13 = *(_QWORD *)v27;
        inited = sub_14077DA5C(
                   qword_140D00AC0,
                   v27[0],
                   3,
                   0,
                   0LL,
                   (__int64)&qword_140010AD8,
                   (__int64)&v26,
                   Pool2,
                   400,
                   (__int64)&v28,
                   0);
        if ( inited < 0 )
          goto LABEL_23;
        if ( v26 != 18 )
        {
          inited = -1073741585;
          goto LABEL_23;
        }
        v25 = 128;
        v6 = (void *)ExAllocatePool2(256LL, 256LL, 538996816LL);
        if ( !v6 )
          goto LABEL_32;
        inited = sub_1406DBB10(v14, v13, (_DWORD)v6, 128, (__int64)&v25);
        if ( inited != -1073741789 )
        {
LABEL_14:
          if ( inited == -1073741772 )
          {
            ExFreePoolWithTag(v6, 0);
            v6 = 0LL;
          }
          else if ( inited < 0 )
          {
            goto LABEL_23;
          }
          inited = sub_1406DBA7C(v15, v13, (char *)v24 + 1);
          if ( inited >= 0 )
          {
            v25 = 512;
            v17 = (WCHAR *)ExAllocatePool2(256LL, 1024LL, 538996816LL);
            if ( v17 )
            {
              v18 = HIBYTE(v24[0]);
              inited = sub_140789718(
                         v16,
                         (unsigned int)v31,
                         (_DWORD)v12,
                         (_DWORD)v6,
                         SHIBYTE(v24[0]),
                         (__int64)v17,
                         512,
                         (__int64)&v25);
              if ( inited != -1073741789 )
              {
LABEL_19:
                if ( inited >= 0 )
                {
                  inited = RtlInitUnicodeStringEx(AliasSymbolicLinkName, v17);
                  if ( inited >= 0 )
                  {
                    inited = sub_140784B14(qword_140D00AC0, (_DWORD)v17, 48, v19, 131097, 0, (__int64)&Handle, 0LL);
                    if ( inited < 0 )
                      RtlFreeUnicodeString(AliasSymbolicLinkName);
                    else
                      ZwClose(Handle);
                  }
                }
                goto LABEL_23;
              }
              ExFreePoolWithTag(v17, 0);
              v22 = v25;
              v17 = (WCHAR *)ExAllocatePool2(256LL, 2LL * v25, 538996816LL);
              if ( v17 )
              {
                inited = sub_140789718(
                           v23,
                           (unsigned int)v31,
                           (_DWORD)v12,
                           (_DWORD)v6,
                           v18,
                           (__int64)v17,
                           v22,
                           (__int64)&v25);
                goto LABEL_19;
              }
            }
            goto LABEL_32;
          }
LABEL_23:
          ExReleaseResourceLite(&stru_140C462A0);
          sub_1402F9540((__int64)KeGetCurrentThread());
          if ( v6 )
            ExFreePoolWithTag(v6, 0);
          if ( v12 )
            ExFreePoolWithTag(v12, 0);
          goto LABEL_27;
        }
        ExFreePoolWithTag(v6, 0);
        v6 = (void *)ExAllocatePool2(256LL, 2LL * v25, 538996816LL);
        if ( v6 )
        {
          inited = sub_1406DBB10(v21, v13, (_DWORD)v6, v25, (__int64)&v25);
          goto LABEL_14;
        }
      }
LABEL_32:
      inited = -1073741670;
      goto LABEL_23;
    }
  }
LABEL_28:
  sub_14077BAB8(v7, SymbolicLinkName);
  return inited;
}
