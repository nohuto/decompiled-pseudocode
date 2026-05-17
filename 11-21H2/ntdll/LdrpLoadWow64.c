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

__int64 __fastcall LdrpLoadWow64(const void **a1)
{
  unsigned __int64 v1; // rdx
  int v2; // ebx
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9
  unsigned int v5; // ebx
  const void ***v6; // rdi
  int ProcedureAddressForCaller; // eax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r9
  unsigned int v11; // esi
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r9
  int v16; // [rsp+38h] [rbp-D0h]
  int v17; // [rsp+40h] [rbp-C8h]
  __int64 v18; // [rsp+48h] [rbp-C0h] BYREF
  char *v19; // [rsp+50h] [rbp-B8h]
  __int64 v20; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v21[15]; // [rsp+68h] [rbp-A0h] BYREF
  char v22; // [rsp+E4h] [rbp-24h]
  char v23; // [rsp+E8h] [rbp-20h] BYREF
  unsigned __int64 retaddr; // [rsp+320h] [rbp+218h]

  LODWORD(v18) = 34078720;
  v19 = &v23;
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v18, a1);
  RtlAppendUnicodeToString((unsigned __int16 *)&v18, L"wow64.dll");
  LdrpInitializeDllPath(v19, 16385LL, v21);
  v2 = LdrpLoadDll((unsigned __int16 *)&v18, (int)v21, 0x800u, &v20);
  if ( v22 )
    RtlReleasePath(v21[0], v1, v3, v4);
  if ( v2 < 0 )
  {
    v16 = v2;
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      3822,
      (__int64)"LdrpLoadWow64",
      0,
      "Loading WOW64 image management DLL \"%wZ\" failed with status 0x%08lx\n",
      &v18,
      v16);
    return (unsigned int)v2;
  }
  else
  {
    LdrProtectMrdata(0, v1, v3, v4);
    v5 = 0;
    v6 = (const void ***)&off_18012D170;
    while ( 1 )
    {
      ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(
                                    *(_QWORD *)(v20 + 48),
                                    *v6,
                                    0LL,
                                    (volatile signed __int32 *)v6[1],
                                    0,
                                    retaddr);
      v11 = ProcedureAddressForCaller;
      if ( ProcedureAddressForCaller < 0 )
        break;
      ++v5;
      v6 += 2;
      if ( v5 >= 6 )
        goto LABEL_7;
    }
    v17 = ProcedureAddressForCaller;
    LdrpLogInternal(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      3845,
      (__int64)"LdrpLoadWow64",
      0,
      "Locating procedure \"%Z\" in WOW64 image management DLL \"%wZ\" failed with status 0x%08lx\n",
      *(&off_18012D170 + 2 * v5),
      &v18,
      v17);
LABEL_7:
    LdrProtectMrdata(1, v8, v9, v10);
    LdrpDereferenceModule(v20, v12, v13, v14);
    return v11;
  }
}
