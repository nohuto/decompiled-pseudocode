/*
 * XREFs of LdrpLoadWow64 @ 0x180086520
 * Callers:
 *     LdrpInitializeProcess @ 0x1800DDBD0 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x18000B3D0 (RtlAppendUnicodeToString.c)
 *     LdrpLoadDll @ 0x18001906C (LdrpLoadDll.c)
 *     RtlAppendUnicodeStringToString @ 0x1800192F0 (RtlAppendUnicodeStringToString.c)
 *     LdrGetProcedureAddressForCaller @ 0x180021FB0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpDereferenceModule @ 0x18002251C (LdrpDereferenceModule.c)
 *     LdrpLogInternal @ 0x180026C30 (LdrpLogInternal.c)
 *     LdrpInitializeDllPath @ 0x18002B064 (LdrpInitializeDllPath.c)
 *     RtlReleasePath @ 0x180032D60 (RtlReleasePath.c)
 *     LdrProtectMrdata @ 0x180032E40 (LdrProtectMrdata.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpLoadWow64(const void **a1)
{
  int Dll; // ebx
  unsigned int v2; // ebx
  const void ***v3; // rdi
  int ProcedureAddressForCaller; // eax
  unsigned int v5; // esi
  int v7; // [rsp+38h] [rbp-D0h]
  int v8; // [rsp+40h] [rbp-C8h]
  __int64 v9; // [rsp+48h] [rbp-C0h] BYREF
  char *v10; // [rsp+50h] [rbp-B8h]
  __int64 v11; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v12[15]; // [rsp+68h] [rbp-A0h] BYREF
  char v13; // [rsp+E4h] [rbp-24h]
  char v14; // [rsp+E8h] [rbp-20h] BYREF
  unsigned __int64 retaddr; // [rsp+320h] [rbp+218h]

  LODWORD(v9) = 34078720;
  v10 = &v14;
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v9, a1);
  RtlAppendUnicodeToString((unsigned __int16 *)&v9, L"wow64.dll");
  LdrpInitializeDllPath((__int64)v10, 16385LL, v12);
  Dll = LdrpLoadDll((__int64)&v9, (int)v12, 2048, (__int64)&v11);
  if ( v13 )
    RtlReleasePath(v12[0]);
  if ( Dll < 0 )
  {
    v7 = Dll;
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      3930LL,
      (__int64)"LdrpLoadWow64",
      0LL,
      "Loading WOW64 image management DLL \"%wZ\" failed with status 0x%08lx\n",
      &v9,
      v7);
    return (unsigned int)Dll;
  }
  else
  {
    LdrProtectMrdata(0);
    v2 = 0;
    v3 = (const void ***)&off_180134100;
    while ( 1 )
    {
      ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(*(_QWORD *)(v11 + 48), *v3, 0, v3[1], 0, retaddr);
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
      3953LL,
      (__int64)"LdrpLoadWow64",
      0LL,
      "Locating procedure \"%Z\" in WOW64 image management DLL \"%wZ\" failed with status 0x%08lx\n",
      *(&off_180134100 + 2 * v2),
      &v9,
      v8);
LABEL_7:
    LdrProtectMrdata(1);
    LdrpDereferenceModule(v11);
    return v5;
  }
}
