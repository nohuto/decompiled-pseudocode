/*
 * XREFs of ExpSystemErrorHandler2 @ 0x140A6CC50
 * Callers:
 *     ExpSystemErrorHandler @ 0x14042B7A0 (ExpSystemErrorHandler.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1402A07B0 (RtlInitAnsiString.c)
 *     PsGetCurrentServerSilo @ 0x1402F61B0 (PsGetCurrentServerSilo.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlStringCbPrintfA @ 0x1403BF7F4 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     strcat_s @ 0x1403E7100 (strcat_s.c)
 *     strcpy_s @ 0x1403E71A0 (strcpy_s.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     PsQuerySystemDllInfo @ 0x1406AD624 (PsQuerySystemDllInfo.c)
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

void __fastcall ExpSystemErrorHandler2(unsigned int a1, __int64 a2, int a3, __int64 a4, char a5)
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
  _UNKNOWN **SystemDllInfo; // rax
  unsigned __int64 v19; // r10
  unsigned __int16 v20; // di
  char *PoolWithTag; // rax
  char *v22; // rax
  __int64 v23; // rdi
  const char *v24; // r13
  __int64 v25; // rax
  unsigned int v26; // r14d
  char *v27; // rax
  char *v28; // rax
  int j; // edi
  char *BugCheckParameter4; // rbx
  __int64 CurrentServerSilo; // rax
  int v32; // [rsp+40h] [rbp-218h]
  NTSTATUS v33; // [rsp+50h] [rbp-208h]
  const char *v34; // [rsp+70h] [rbp-1E8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+78h] [rbp-1E0h] BYREF
  STRING SourceString; // [rsp+88h] [rbp-1D0h] BYREF
  STRING v37; // [rsp+98h] [rbp-1C0h] BYREF
  unsigned int v38; // [rsp+A8h] [rbp-1B0h]
  _DWORD BugCheckParameter1[3]; // [rsp+ACh] [rbp-1ACh]
  STRING DestinationString; // [rsp+B8h] [rbp-1A0h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+C8h] [rbp-190h] BYREF
  __int128 v42; // [rsp+D8h] [rbp-180h]
  __int64 v43; // [rsp+E8h] [rbp-170h]
  char pszFormat[32]; // [rsp+F0h] [rbp-168h] BYREF
  char pszDest[256]; // [rsp+110h] [rbp-148h] BYREF

  BugCheckParameter1[0] = a1;
  *(_QWORD *)&BugCheckParameter1[1] = a4;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v34 = 0LL;
  SourceString = 0LL;
  UnicodeString = 0LL;
  v37 = 0LL;
  v9 = *((_WORD *)PsGetCurrentServerSiloGlobals() + 538);
  v11 = 5;
  if ( v8 <= 5 )
    v11 = v8;
  v12 = v11;
  v38 = v11;
  pszFormat[0] = 0;
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
      strcat_s(pszFormat, 0x20uLL, " %s");
      v33 = RtlUnicodeStringToAnsiString(&DestinationString, *(PCUNICODE_STRING *)(a4 + 8 * i), 1u);
      Buffer = (char *)L"???";
      if ( v33 >= 0 )
        Buffer = DestinationString.Buffer;
      BugCheckParameter2[(unsigned int)i] = (ULONG_PTR)Buffer;
    }
    else
    {
      strcat_s(pszFormat, 0x20uLL, " %x");
    }
  }
  strcat_s(pszFormat, 0x20uLL, "\n");
  v15 = pszFormat;
  v16 = "Unknown Hard Error";
  v17 = "Unknown Hard Error";
  SystemDllInfo = PsQuerySystemDllInfo(0);
  if ( SystemDllInfo )
  {
    v19 = (unsigned __int64)SystemDllInfo[3];
    if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
      v19 = (unsigned __int64)SystemDllInfo[4];
    if ( (int)RtlFindMessage(v19, 0xBu, v9 != 0 ? 0x409 : 0, a1, (unsigned __int16 **)&v34) < 0 )
    {
      v17 = "Unknown Hard Error";
      v15 = "Unknown Hard Error";
      goto LABEL_42;
    }
    if ( (v34[2] & 1) != 0 )
    {
      RtlInitUnicodeString(&UnicodeString, (PCWSTR)v34 + 2);
      v20 = RtlxUnicodeStringToOemSize(&UnicodeString);
      SourceString.Length = v20;
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
      SourceString.MaximumLength = v20 + 16;
      SourceString.Buffer = PoolWithTag;
      if ( RtlUnicodeStringToAnsiString(&SourceString, &UnicodeString, 0) < 0 )
      {
        ExFreePoolWithTag(v17, 0);
        goto LABEL_20;
      }
      v23 = -1LL;
    }
    else
    {
      v24 = v34 + 4;
      v23 = -1LL;
      v25 = -1LL;
      do
        ++v25;
      while ( v24[v25] );
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
      strcpy_s(v27, v26, v24);
    }
    v22 = pszFormat;
    goto LABEL_28;
  }
LABEL_42:
  if ( RtlStringCbPrintfA(pszDest, 0x100uLL, "\nSTOP: %lx %s\n", a1, v17) < 0 )
    RtlStringCbPrintfA(pszDest, 0x100uLL, "\nHardError %lx\n", a1);
  MmLockPagableSectionByHandle(ExPageLockHandle);
  v34 = "Unknown Hard Error";
  BugCheckParameter4 = "Unknown Hard Error";
  *(_QWORD *)&BugCheckParameter1[1] = "Unknown Hard Error";
  RtlInitAnsiString(&SourceString, pszDest);
  if ( RtlAnsiStringToUnicodeString(&UnicodeString, &SourceString, 1u) >= 0 )
  {
    v37.Length = RtlxUnicodeStringToOemSize(&UnicodeString);
    v37.MaximumLength = v37.Length;
    v16 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v37.Length, 0x20727245u);
    v37.Buffer = v16;
    v34 = v16;
    if ( v16 )
      RtlUnicodeStringToOemString(&v37, &UnicodeString, 0);
  }
  if ( RtlStringCbPrintfA(pszDest, 0x100uLL, v15, BugCheckParameter2[0], BugCheckParameter2[1], v42) < 0 )
    RtlStringCbPrintfA(
      pszDest,
      0x100uLL,
      "Exception Processing Message %lx Parameters %Ix %Ix %Ix %Ix",
      a1,
      LODWORD(BugCheckParameter2[0]),
      LODWORD(BugCheckParameter2[1]),
      (_DWORD)v42,
      DWORD2(v42));
  RtlInitAnsiString(&SourceString, pszDest);
  if ( RtlAnsiStringToUnicodeString(&UnicodeString, &SourceString, 1u) >= 0 )
  {
    v37.Length = RtlxUnicodeStringToOemSize(&UnicodeString);
    v37.MaximumLength = v37.Length;
    BugCheckParameter4 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v37.Length, 0x20727245u);
    v37.Buffer = BugCheckParameter4;
    if ( BugCheckParameter4 )
      RtlUnicodeStringToOemString(&v37, &UnicodeString, 0);
  }
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( !CurrentServerSilo )
  {
    if ( a5 )
      PoShutdownBugCheck(
        1,
        0x4Cu,
        BugCheckParameter1[0],
        (ULONG_PTR)BugCheckParameter2,
        (ULONG_PTR)v16,
        (ULONG_PTR)BugCheckParameter4);
    KeBugCheckEx(
      0x4Cu,
      BugCheckParameter1[0],
      (ULONG_PTR)BugCheckParameter2,
      (ULONG_PTR)v16,
      (ULONG_PTR)BugCheckParameter4);
  }
  PsTerminateServerSilo(CurrentServerSilo);
}
