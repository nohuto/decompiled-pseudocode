/*
 * XREFs of SwitchedRtlGetVersion @ 0x180051CD0
 * Callers:
 *     RtlSwitchedVVI @ 0x180051EB0 (RtlSwitchedVVI.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18004C040 (RtlInitUnicodeString.c)
 *     RtlStringCbCopyW @ 0x18004C27C (RtlStringCbCopyW.c)
 *     SbSelectProcedure @ 0x18004E920 (SbSelectProcedure.c)
 *     RtlGetSuiteMask @ 0x1800504F0 (RtlGetSuiteMask.c)
 *     RtlGetNtProductType @ 0x180050520 (RtlGetNtProductType.c)
 *     ZwQueryLicenseValue @ 0x1800A6BC0 (ZwQueryLicenseValue.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall SwitchedRtlGetVersion(int *a1)
{
  struct _PEB *v2; // rdi
  __int64 (*v3)(void); // rax
  int v4; // eax
  wchar_t *Buffer; // r8
  int v6; // esi
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int Data; // [rsp+80h] [rbp+38h] BYREF
  _NT_PRODUCT_TYPE NtProductType; // [rsp+88h] [rbp+40h] BYREF
  ULONG Type; // [rsp+90h] [rbp+48h] BYREF
  ULONG ResultDataSize; // [rsp+98h] [rbp+50h] BYREF

  DestinationString = 0LL;
  Data = 0;
  v2 = NtCurrentPeb();
  a1[1] = v2->OSMajorVersion;
  a1[2] = v2->OSMinorVersion;
  a1[3] = v2->OSBuildNumber;
  a1[4] = v2->OSPlatformId;
  v3 = (__int64 (*)(void))qword_18017AAB8;
  if ( qword_18017AAB8
    || (v3 = (__int64 (*)(void))SbSelectProcedure(2880154539LL, 0, (__int64)"kLsE", 0),
        (qword_18017AAB8 = (__int64)v3) != 0) )
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
    *((_WORD *)a1 + 140) = RtlGetSuiteMask();
    if ( v6 == 292 )
      a1[71] = RtlGetSuiteMask() & 0x1FFFF;
    *((_BYTE *)a1 + 282) = 0;
    if ( RtlGetNtProductType(&NtProductType) )
      *((_BYTE *)a1 + 282) = NtProductType;
    RtlInitUnicodeString(&DestinationString, L"TerminalServices-RemoteConnectionManager-AllowAppServerMode");
    if ( ZwQueryLicenseValue(&DestinationString, &Type, &Data, 4u, &ResultDataSize) < 0
      || Data != 1
      || Type != 4
      || ResultDataSize != 4 )
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
