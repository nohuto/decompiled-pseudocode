/*
 * XREFs of LdrpLoadWow64 @ 0x180085D20
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D4658 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x18000B5F0 (RtlAppendUnicodeToString.c)
 *     LdrpLoadDll @ 0x18001927C (LdrpLoadDll.c)
 *     RtlAppendUnicodeStringToString @ 0x180019500 (RtlAppendUnicodeStringToString.c)
 *     LdrGetProcedureAddressForCaller @ 0x180022190 (LdrGetProcedureAddressForCaller.c)
 *     LdrpDereferenceModule @ 0x1800226FC (LdrpDereferenceModule.c)
 *     LdrpLogInternal @ 0x180026D80 (LdrpLogInternal.c)
 *     LdrpInitializeDllPath @ 0x18002B234 (LdrpInitializeDllPath.c)
 *     RtlReleasePath @ 0x180032EC0 (RtlReleasePath.c)
 *     LdrProtectMrdata @ 0x180032FA0 (LdrProtectMrdata.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpLoadWow64(PCUNICODE_STRING Source)
{
  int Dll; // ebx
  unsigned int v2; // ebx
  PANSI_STRING *v3; // rdi
  NTSTATUS ProcedureAddressForCaller; // eax
  unsigned __int32 v5; // esi
  int v7; // [rsp+38h] [rbp-D0h]
  NTSTATUS v8; // [rsp+40h] [rbp-C8h]
  _UNICODE_STRING Destination; // [rsp+48h] [rbp-C0h] BYREF
  PVOID BaseAddress[2]; // [rsp+58h] [rbp-B0h] BYREF
  PWSTR Path[15]; // [rsp+68h] [rbp-A0h] BYREF
  char v12; // [rsp+E4h] [rbp-24h]
  char v13; // [rsp+E8h] [rbp-20h] BYREF
  PVOID *Callback; // [rsp+320h] [rbp+218h]

  *(_DWORD *)&Destination.Length = 34078720;
  Destination.Buffer = (wchar_t *)&v13;
  RtlAppendUnicodeStringToString(&Destination, Source);
  RtlAppendUnicodeToString(&Destination, L"wow64.dll");
  LdrpInitializeDllPath((__int64)Destination.Buffer, 16385LL, (__int64 *)Path);
  Dll = LdrpLoadDll((__int64)&Destination, (int)Path, 2048, (__int64)BaseAddress);
  if ( v12 )
    RtlReleasePath(Path[0]);
  if ( Dll < 0 )
  {
    v7 = Dll;
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      3928,
      (__int64)"LdrpLoadWow64",
      0,
      "Loading WOW64 image management DLL \"%wZ\" failed with status 0x%08lx\n",
      &Destination,
      v7);
    return (unsigned int)Dll;
  }
  else
  {
    LdrProtectMrdata(0);
    v2 = 0;
    v3 = (PANSI_STRING *)&off_1801320B0;
    while ( 1 )
    {
      ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(
                                    *((PVOID *)BaseAddress[0] + 6),
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
      3951,
      (__int64)"LdrpLoadWow64",
      0,
      "Locating procedure \"%Z\" in WOW64 image management DLL \"%wZ\" failed with status 0x%08lx\n",
      *(&off_1801320B0 + 2 * v2),
      &Destination,
      v8);
LABEL_7:
    LdrProtectMrdata(1);
    LdrpDereferenceModule((char *)BaseAddress[0]);
    return v5;
  }
}
