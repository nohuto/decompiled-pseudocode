/*
 * XREFs of LdrpLoadWow64 @ 0x180089F1C
 * Callers:
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 * Callees:
 *     LdrProtectMrdata @ 0x18001C904 (LdrProtectMrdata.c)
 *     RtlReleasePath @ 0x18001CC00 (RtlReleasePath.c)
 *     LdrpDereferenceModule @ 0x180038484 (LdrpDereferenceModule.c)
 *     LdrpInitializeDllPath @ 0x180038594 (LdrpInitializeDllPath.c)
 *     LdrGetProcedureAddressForCaller @ 0x18003AFD0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 *     LdrpLoadDll @ 0x180044E5C (LdrpLoadDll.c)
 *     RtlAppendUnicodeStringToString @ 0x180049410 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x18004F4E0 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpLoadWow64(PCUNICODE_STRING Source)
{
  int v1; // ebx
  unsigned int v2; // ebx
  PANSI_STRING *v3; // rdi
  NTSTATUS ProcedureAddressForCaller; // eax
  unsigned __int32 v5; // esi
  int v7; // [rsp+38h] [rbp-D0h]
  NTSTATUS v8; // [rsp+40h] [rbp-C8h]
  _UNICODE_STRING Destination; // [rsp+48h] [rbp-C0h] BYREF
  PVOID BaseAddress; // [rsp+58h] [rbp-B0h] BYREF
  PWSTR Path[15]; // [rsp+68h] [rbp-A0h] BYREF
  char v12; // [rsp+E4h] [rbp-24h]
  char v13; // [rsp+E8h] [rbp-20h] BYREF
  PVOID *Callback; // [rsp+320h] [rbp+218h]

  *(_DWORD *)&Destination.Length = 34078720;
  Destination.Buffer = (wchar_t *)&v13;
  RtlAppendUnicodeStringToString(&Destination, Source);
  RtlAppendUnicodeToString(&Destination, L"wow64.dll");
  LdrpInitializeDllPath(Destination.Buffer, (const WCHAR *)0x4001, (const WCHAR **)Path);
  v1 = LdrpLoadDll(&Destination.Length, (int)Path, 2048, &BaseAddress);
  if ( v12 )
    RtlReleasePath(Path[0]);
  if ( v1 < 0 )
  {
    v7 = v1;
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      3822,
      (__int64)"LdrpLoadWow64",
      0,
      "Loading WOW64 image management DLL \"%wZ\" failed with status 0x%08lx\n",
      &Destination,
      v7);
    return (unsigned int)v1;
  }
  else
  {
    LdrProtectMrdata(0);
    v2 = 0;
    v3 = (PANSI_STRING *)&off_18012D170;
    while ( 1 )
    {
      ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(
                                    *((PVOID *)BaseAddress + 6),
                                    *v3,
                                    0,
                                    (PVOID *)v3[1],
                                    0,
                                    Callback);
      v5 = ProcedureAddressForCaller;
      if ( ProcedureAddressForCaller < 0 )
        break;
      ++v2;
      v3 += 2;
      if ( v2 >= 6 )
        goto LABEL_7;
    }
    v8 = ProcedureAddressForCaller;
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      3845,
      (__int64)"LdrpLoadWow64",
      0,
      "Locating procedure \"%Z\" in WOW64 image management DLL \"%wZ\" failed with status 0x%08lx\n",
      *(&off_18012D170 + 2 * v2),
      &Destination,
      v8);
LABEL_7:
    LdrProtectMrdata(1);
    LdrpDereferenceModule((char *)BaseAddress);
    return v5;
  }
}
