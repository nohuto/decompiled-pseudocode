/*
 * XREFs of LdrpResolveProcedureAddress @ 0x18003B748
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x18003AFD0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpResolveDelayloadAddress @ 0x1800DAC98 (LdrpResolveDelayloadAddress.c)
 * Callees:
 *     RtlReleasePath @ 0x18001CC00 (RtlReleasePath.c)
 *     LdrpDereferenceModule @ 0x180038484 (LdrpDereferenceModule.c)
 *     RtlpxLookupFunctionTable @ 0x18003A100 (RtlpxLookupFunctionTable.c)
 *     LdrpShouldModuleImportBeRedirected @ 0x18003B720 (LdrpShouldModuleImportBeRedirected.c)
 *     LdrpGetProcedureAddress @ 0x18003BD10 (LdrpGetProcedureAddress.c)
 *     LdrpLoadForwardedDll @ 0x180043614 (LdrpLoadForwardedDll.c)
 *     RtlGuardCheckImageBase @ 0x180074220 (RtlGuardCheckImageBase.c)
 *     LdrpParseForwarderDescription @ 0x18007A3C8 (LdrpParseForwarderDescription.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     memset @ 0x1800AAE00 (memset.c)
 *     LdrpCheckRedirection @ 0x1800E1248 (LdrpCheckRedirection.c)
 */

__int64 __fastcall LdrpResolveProcedureAddress(__int64 a1, _QWORD *a2, __int64 a3, int a4, char a5, __int64 *a6)
{
  WCHAR *v6; // rbx
  __int64 v7; // rsi
  PVOID *v9; // rdi
  unsigned int v10; // r12d
  char ShouldModuleImportBeRedirected; // al
  int ProcedureAddress; // eax
  int v13; // ebx
  PVOID v14; // rdi
  unsigned int v16; // eax
  __int64 v17; // rax
  char v18; // [rsp+30h] [rbp-D0h]
  int v19; // [rsp+34h] [rbp-CCh] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+48h] [rbp-B8h]
  _QWORD *v23; // [rsp+50h] [rbp-B0h]
  __int128 v24; // [rsp+58h] [rbp-A8h] BYREF
  PWSTR Path[16]; // [rsp+70h] [rbp-90h] BYREF

  v6 = (WCHAR *)a2[10];
  v7 = a3;
  v23 = a2;
  v9 = (PVOID *)a2;
  v22 = a1;
  v21 = a3;
  BaseAddress = a2;
  v19 = a4;
  v10 = 0;
  memset(Path, 0, sizeof(Path));
  Path[4] = v6;
  ShouldModuleImportBeRedirected = LdrpShouldModuleImportBeRedirected(a1);
  v18 = ShouldModuleImportBeRedirected;
  while ( 1 )
  {
    if ( ShouldModuleImportBeRedirected )
    {
      if ( v7 )
      {
        v17 = LdrpCheckRedirection(v22, v9, v7);
        if ( v17 != -4530927 )
        {
          *a6 = v17;
          return 0LL;
        }
      }
    }
    ProcedureAddress = LdrpGetProcedureAddress(v9[6]);
    v13 = ProcedureAddress;
    if ( ProcedureAddress != -1073741267 )
      break;
    v16 = v10++;
    if ( v16 >= 0x20 || (a5 & 2) != 0 )
    {
      v13 = -1073741701;
      goto LABEL_12;
    }
    v13 = LdrpParseForwarderDescription(*a6, &v24, &v21, &v19);
    if ( v13 < 0 )
      goto LABEL_12;
    LODWORD(Path[3]) = *((_DWORD *)v9 + 68);
    v13 = LdrpLoadForwardedDll(&v24, Path, v23, v9, 2, &BaseAddress);
    if ( v13 < 0 )
      goto LABEL_12;
    v9 = (PVOID *)BaseAddress;
    LdrpDereferenceModule((char *)BaseAddress);
    ShouldModuleImportBeRedirected = v18;
    v7 = v21;
  }
  if ( (a5 & 1) != 0 && ProcedureAddress >= 0 )
  {
    if ( (a5 & 2) != 0 )
    {
      RtlGuardCheckImageBase(v9[23]);
    }
    else
    {
      v14 = v9[6];
      if ( LdrSystemDllInitBlock.CfgBitMap && (LdrSystemDllInitBlock.Flags & 1) == 0 )
      {
        if ( (unsigned __int64)v14 < *((_QWORD *)&xmmword_18018F510 + 1)
          || (unsigned __int64)v14 >= *((_QWORD *)&xmmword_18018F510 + 1)
                                    + (unsigned __int64)(unsigned int)qword_18018F520 )
        {
          RtlpxLookupFunctionTable(v14, (__int64 *)&v24);
        }
        else
        {
          v24 = xmmword_18018F510;
        }
        if ( *((PVOID *)&v24 + 1) != v14 )
          __fastfail(0x18u);
      }
    }
  }
LABEL_12:
  if ( BYTE4(Path[15]) )
    RtlReleasePath(Path[0]);
  if ( v13 < 0 )
    *a6 = 0LL;
  return (unsigned int)v13;
}
