/*
 * XREFs of sub_140A6CC50 @ 0x140A6CC50
 * Callers:
 *     sub_14042B7A0 @ 0x14042B7A0 (sub_14042B7A0.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1402A07B0 (RtlInitAnsiString.c)
 *     PsGetCurrentServerSilo @ 0x1402F61B0 (PsGetCurrentServerSilo.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     sub_1403BF7F4 @ 0x1403BF7F4 (sub_1403BF7F4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     strcat_s @ 0x1403E7100 (strcat_s.c)
 *     strcpy_s @ 0x1403E71A0 (strcpy_s.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406AD624 @ 0x1406AD624 (sub_1406AD624.c)
 *     MmLockPagableSectionByHandle @ 0x1406BC300 (MmLockPagableSectionByHandle.c)
 *     RtlUnicodeStringToOemString @ 0x1406EAEF0 (RtlUnicodeStringToOemString.c)
 *     RtlFindMessage @ 0x140758920 (RtlFindMessage.c)
 *     RtlxUnicodeStringToOemSize @ 0x140759A50 (RtlxUnicodeStringToOemSize.c)
 *     RtlUnicodeStringToAnsiString @ 0x140759C40 (RtlUnicodeStringToAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14075A5D0 (RtlAnsiStringToUnicodeString.c)
 *     PoShutdownBugCheck @ 0x14098FCB0 (PoShutdownBugCheck.c)
 *     PsTerminateServerSilo @ 0x1409AB9B0 (PsTerminateServerSilo.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

void __fastcall sub_140A6CC50(ULONG MessageId, __int64 a2, int a3, __int64 a4, char a5)
{
  unsigned int v8; // edx
  __int16 v9; // di
  const void *v10; // r9
  unsigned int v11; // eax
  unsigned int v12; // esi
  __int64 i; // rbx
  char *Buffer; // rax
  char *v15; // r14
  char *v16; // rsi
  char *v17; // rbx
  _UNKNOWN **v18; // rax
  void *v19; // r10
  unsigned __int16 v20; // di
  char *PoolWithTag; // rax
  char *v22; // rax
  __int64 v23; // rdi
  BYTE *Text; // r13
  __int64 v25; // rax
  unsigned int v26; // r14d
  char *v27; // rax
  char *v28; // rax
  int j; // edi
  char *v30; // rbx
  __int64 CurrentServerSilo; // rax
  int v32; // [rsp+40h] [rbp-218h]
  NTSTATUS v33; // [rsp+50h] [rbp-208h]
  PMESSAGE_RESOURCE_ENTRY MessageEntry; // [rsp+70h] [rbp-1E8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+78h] [rbp-1E0h] BYREF
  _STRING v36; // [rsp+88h] [rbp-1D0h] BYREF
  _STRING v37; // [rsp+98h] [rbp-1C0h] BYREF
  unsigned int v38; // [rsp+A8h] [rbp-1B0h]
  _DWORD BugCheckParameter1[3]; // [rsp+ACh] [rbp-1ACh]
  _STRING DestinationString; // [rsp+B8h] [rbp-1A0h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+C8h] [rbp-190h] BYREF
  __int128 v42; // [rsp+D8h] [rbp-180h]
  __int64 v43; // [rsp+E8h] [rbp-170h]
  char v44[32]; // [rsp+F0h] [rbp-168h] BYREF
  CHAR SourceString[256]; // [rsp+110h] [rbp-148h] BYREF

  BugCheckParameter1[0] = MessageId;
  *(_QWORD *)&BugCheckParameter1[1] = a4;
  *(_QWORD *)&DestinationString.Length = 0LL;
  MessageEntry = 0LL;
  v36 = 0LL;
  UnicodeString = 0LL;
  v37 = 0LL;
  v9 = *((_WORD *)sub_140347DB0() + 538);
  v11 = 5;
  if ( v8 <= 5 )
    v11 = v8;
  v12 = v11;
  v38 = v11;
  v44[0] = 0;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  memmove(BugCheckParameter2, v10, 8LL * v11);
  DestinationString.Buffer = 0LL;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v32 = i;
    if ( (unsigned int)i >= v12 )
      break;
    if ( _bittest(&a3, i) )
    {
      strcat_s(v44, 0x20uLL, " %s");
      v33 = RtlUnicodeStringToAnsiString(&DestinationString, *(PCUNICODE_STRING *)(a4 + 8 * i), 1u);
      Buffer = (char *)L"???";
      if ( v33 >= 0 )
        Buffer = DestinationString.Buffer;
      BugCheckParameter2[(unsigned int)i] = (ULONG_PTR)Buffer;
    }
    else
    {
      strcat_s(v44, 0x20uLL, " %x");
    }
  }
  strcat_s(v44, 0x20uLL, "\n");
  v15 = v44;
  v16 = "Unknown Hard Error";
  v17 = "Unknown Hard Error";
  v18 = sub_1406AD624(0);
  if ( v18 )
  {
    v19 = v18[3];
    if ( *((PEPROCESS *)KeGetCurrentThread() + 23) == PsInitialSystemProcess )
      v19 = v18[4];
    if ( RtlFindMessage(v19, 0xBu, v9 != 0 ? 0x409 : 0, MessageId, &MessageEntry) < 0 )
    {
      v17 = "Unknown Hard Error";
      v15 = "Unknown Hard Error";
      goto LABEL_42;
    }
    if ( (MessageEntry->Flags & 1) != 0 )
    {
      RtlInitUnicodeString(&UnicodeString, (PCWSTR)MessageEntry->Text);
      v20 = RtlxUnicodeStringToOemSize(&UnicodeString);
      v36.Length = v20;
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v20 + 16LL, 0x20727245u);
      v17 = PoolWithTag;
      if ( !PoolWithTag )
      {
LABEL_20:
        v17 = "Unknown Hard Error";
        v22 = "Unknown Hard Error";
        v23 = -1LL;
        goto LABEL_28;
      }
      v36.MaximumLength = v20 + 16;
      v36.Buffer = PoolWithTag;
      if ( RtlUnicodeStringToAnsiString(&v36, &UnicodeString, 0) < 0 )
      {
        ExFreePoolWithTag(v17, 0);
        goto LABEL_20;
      }
      v23 = -1LL;
    }
    else
    {
      Text = MessageEntry->Text;
      v23 = -1LL;
      v25 = -1LL;
      do
        ++v25;
      while ( Text[v25] );
      v26 = v25 + 16;
      v27 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(v25 + 16), 0x20727245u);
      v17 = v27;
      if ( !v27 )
      {
        v22 = "Unknown Hard Error";
        v17 = "Unknown Hard Error";
LABEL_28:
        if ( v17 == "Unknown Hard Error" )
        {
          j = v32;
        }
        else
        {
          v28 = v17;
          do
            ++v23;
          while ( v17[v23] );
          while ( (_DWORD)v23 && *v28 >= 32 )
          {
            ++v28;
            LODWORD(v23) = v23 - 1;
          }
          *v28 = 0;
          v22 = v28 + 1;
          for ( j = v23 - 1; j && *v22 && *v22 <= 32; --j )
            ++v22;
        }
        v15 = (char *)qword_140A5B910;
        if ( j )
          v15 = v22;
        goto LABEL_42;
      }
      strcpy_s(v27, v26, (const char *)Text);
    }
    v22 = v44;
    goto LABEL_28;
  }
LABEL_42:
  if ( (int)sub_1403BF7F4(SourceString, 256LL, (__int64)"\nSTOP: %lx %s\n", MessageId, v17) < 0 )
    sub_1403BF7F4(SourceString, 256LL, (__int64)"\nHardError %lx\n", MessageId);
  MmLockPagableSectionByHandle(ImageSectionHandle);
  MessageEntry = (PMESSAGE_RESOURCE_ENTRY)"Unknown Hard Error";
  v30 = "Unknown Hard Error";
  *(_QWORD *)&BugCheckParameter1[1] = "Unknown Hard Error";
  RtlInitAnsiString(&v36, SourceString);
  if ( RtlAnsiStringToUnicodeString(&UnicodeString, &v36, 1u) >= 0 )
  {
    v37.Length = RtlxUnicodeStringToOemSize(&UnicodeString);
    v37.MaximumLength = v37.Length;
    v16 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v37.Length, 0x20727245u);
    v37.Buffer = v16;
    MessageEntry = (PMESSAGE_RESOURCE_ENTRY)v16;
    if ( v16 )
      RtlUnicodeStringToOemString(&v37, &UnicodeString, 0);
  }
  if ( (int)sub_1403BF7F4(SourceString, 256LL, (__int64)v15, BugCheckParameter2[0], BugCheckParameter2[1], v42) < 0 )
    sub_1403BF7F4(
      SourceString,
      256LL,
      (__int64)"Exception Processing Message %lx Parameters %Ix %Ix %Ix %Ix",
      MessageId,
      LODWORD(BugCheckParameter2[0]),
      LODWORD(BugCheckParameter2[1]),
      (_DWORD)v42,
      DWORD2(v42));
  RtlInitAnsiString(&v36, SourceString);
  if ( RtlAnsiStringToUnicodeString(&UnicodeString, &v36, 1u) >= 0 )
  {
    v37.Length = RtlxUnicodeStringToOemSize(&UnicodeString);
    v37.MaximumLength = v37.Length;
    v30 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v37.Length, 0x20727245u);
    v37.Buffer = v30;
    if ( v30 )
      RtlUnicodeStringToOemString(&v37, &UnicodeString, 0);
  }
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( !CurrentServerSilo )
  {
    if ( a5 )
      PoShutdownBugCheck(1, 0x4Cu, BugCheckParameter1[0], (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v16, (ULONG_PTR)v30);
    KeBugCheckEx(0x4Cu, BugCheckParameter1[0], (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v16, (ULONG_PTR)v30);
  }
  PsTerminateServerSilo(CurrentServerSilo);
}
