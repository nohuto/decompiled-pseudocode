/*
 * XREFs of SwitchedRtlGetVersion @ 0x18004A378
 * Callers:
 *     RtlSwitchedVVI @ 0x180049F20 (RtlSwitchedVVI.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x180013F48 (RtlStringCbCopyW.c)
 *     RtlInitUnicodeString @ 0x1800189D0 (RtlInitUnicodeString.c)
 *     SbSelectProcedure @ 0x18002F390 (SbSelectProcedure.c)
 *     RtlGetSuiteMask @ 0x18004A560 (RtlGetSuiteMask.c)
 *     RtlGetNtProductType @ 0x18004A590 (RtlGetNtProductType.c)
 *     ZwQueryLicenseValue @ 0x1800A19A0 (ZwQueryLicenseValue.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall SwitchedRtlGetVersion(int *a1)
{
  struct _PEB *v2; // rdi
  __int64 (*v3)(void); // rax
  int v4; // eax
  wchar_t *Buffer; // r8
  int v6; // esi
  __int64 v7; // rcx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int v10; // [rsp+80h] [rbp+38h] BYREF
  char v11; // [rsp+88h] [rbp+40h] BYREF
  int v12; // [rsp+90h] [rbp+48h] BYREF
  int v13; // [rsp+98h] [rbp+50h] BYREF

  DestinationString = 0LL;
  v10 = 0;
  v2 = NtCurrentPeb();
  a1[1] = v2->OSMajorVersion;
  a1[2] = v2->OSMinorVersion;
  a1[3] = v2->OSBuildNumber;
  a1[4] = v2->OSPlatformId;
  v3 = (__int64 (*)(void))qword_180184CE0;
  if ( qword_180184CE0
    || (v3 = (__int64 (*)(void))SbSelectProcedure(2880154539LL, 0, (__int64)"kLsE", 0),
        (qword_180184CE0 = (__int64)v3) != 0) )
  {
    v4 = v3() - 1;
    if ( v4 )
    {
      if ( v4 != 1 )
        goto LABEL_4;
      a1[2] = 3;
      a1[3] = 9600;
    }
    else
    {
      a1[2] = 2;
      a1[3] = 9200;
    }
    a1[1] = 6;
  }
LABEL_4:
  Buffer = v2->CSDVersion.Buffer;
  if ( !Buffer || !*Buffer || (int)RtlStringCbCopyW((_WORD *)a1 + 10, 0x100uLL, (__int64)Buffer) < 0 )
    *((_WORD *)a1 + 10) = 0;
  v6 = *a1;
  if ( ((*a1 - 284) & 0xFFFFFFF7) == 0 )
  {
    *((_WORD *)a1 + 138) = HIBYTE(v2->OSCSDVersion);
    *((_WORD *)a1 + 139) = (unsigned __int8)v2->OSCSDVersion;
    *((_WORD *)a1 + 140) = RtlGetSuiteMask(255LL);
    if ( v6 == 292 )
      a1[71] = RtlGetSuiteMask(v7) & 0x1FFFF;
    *((_BYTE *)a1 + 282) = 0;
    if ( (unsigned __int8)RtlGetNtProductType(&v11) )
      *((_BYTE *)a1 + 282) = v11;
    RtlInitUnicodeString(&DestinationString, L"TerminalServices-RemoteConnectionManager-AllowAppServerMode");
    if ( (int)ZwQueryLicenseValue(&DestinationString, &v12, &v10, 4LL, &v13) < 0 || v10 != 1 || v12 != 4 || v13 != 4 )
    {
      *((_WORD *)a1 + 140) &= ~0x10u;
      *((_WORD *)a1 + 140) |= 0x100u;
      if ( *a1 == 292 )
      {
        a1[71] &= 0xFFFDFFEF;
        a1[71] |= 0x100u;
      }
    }
  }
  return 0LL;
}
